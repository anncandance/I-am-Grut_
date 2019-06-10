#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct AVLNode{
    int key;
    int data;
    int height;
    struct AVLNode *r, *l;
    struct AVLNode *parent;
};

void correct_h(struct AVLNode *q){ // max(a, b) = (a>=b)*a + (a<b)*b
    int a, b;
    if(!q->l) a=0; else a=q->l->height;
    if(!q->r) b=0; else b=q->r->height;
    int h = (a>=b)*a + (a<b)*b;
    q->height = h+1;
}
int defect_h(struct AVLNode *q){
    if(!q) exit(1);
    int a, b;
    if(!q->l) a=0; else a=q->l->height;
    if(!q->r) b=0; else b=q->r->height;
    return a-b;
}

void print(struct AVLNode *q){
    printf("key %d height %d\n", q->key,q->height);
}

void print_all(struct AVLNode *r, int offset){
    if(r==NULL) return;
    print_all(r->r, offset+5);
    for(int i = 0; i<offset; i++)
        printf(" ");
    print(r);
    print_all(r->l, offset+5);
}
//вращалки рабочие

void rotate_right(struct AVLNode **root, struct AVLNode **q){ //  если a левый, то и b будет левый, правый аналогично
    struct AVLNode *a = *q;
    struct AVLNode *b = (*q)->l;
    if (a->parent)  {if (a->key<a->parent->key) a->parent->l = b;
                     else a->parent->r = b;
                     b->parent=a->parent;}        // меняем родителя b
    a->parent = b;                                   // опускаем a
    struct AVLNode *c = b->r;                        // правый сын b
    b->r=a;                                          // в-> правый = а
    a->l=c;                                          // a->левый = с
    a->height--;
    correct_h(b);
    if(!(b->parent)) *root = b;

}

void rotate_left(struct AVLNode **root, struct AVLNode **q){
    struct AVLNode *a = *q;
    struct AVLNode *b = (*q)->r;
    if (a->parent)  {if (a->key<a->parent->key) a->parent->l = b;
                     else a->parent->r = b;
                     }
    b->parent=a->parent;
    a->parent = b;
    struct AVLNode *c = b->l;
    b->l = a;
    a->r = c;
    a->height--;
    correct_h(b);
    if(!(b->parent)) *root = b;
}

void correctm2(struct AVLNode **root, struct AVLNode **q) {      //левый короче правого
    struct AVLNode *a = *q;
    struct AVLNode *b = (*q)->r;
    if (defect_h(b) == -1) rotate_right(root, q);                 // перевес в самом правом
    else {
        rotate_right(root, &b);
        rotate_left(root, &a);
    }
}

void correct2(struct AVLNode **root, struct AVLNode **q){
    struct AVLNode *a = *q;
    struct AVLNode *b = (*q)->l;
    if (defect_h(b) == 1) rotate_right(root, q);
    else {
        rotate_left(root, &b);
        rotate_right(root, &a);
    }
}

//всиавляет,но не балансирует, rebalance должна вызываться после каждой вставки элемента из insert
//и приводить в порядок все дерево

struct AVLNode* insert(int k, int d, struct AVLNode *q) {
    struct AVLNode *node = (struct AVLNode *) (malloc(sizeof(struct AVLNode)));
    int old = -10;
    node->data = d;
    node->key = k;
    node->l = NULL;
    node->r = NULL;
    node->height = 1;
    if (!q) return node;
    struct AVLNode *root = q;
    if (k == q->key) { return root; }
    if (k > q->key) {
        while (q->r) { q = q->r; }
        node->parent = q;
        q->r = node;
        while(q->parent) {correct_h(q); q=q->parent;}
        correct_h(root);

    } else {
        while (q->l) q = q->l;
        node->parent = q;
        q->l = node;
        while(q->parent) {correct_h(q); q=q->parent;}
        correct_h(root);

    }

    return root;
}

int main(){
    struct AVLNode *root=insert(5, 1, NULL);
    root->parent=NULL;
    int i, j=0, k=2;
    for(i=0; i<10; i++) {insert(k, j, root), j=10*rand()/RAND_MAX; k=100*rand()/RAND_MAX;}

    printf("\n\n");
    print_all(root, 0);
}