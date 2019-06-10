//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//struct BNode{
//    int data;
//    struct BNode *r, *l;
//
//};
//
//struct BNode* add(int d, struct BNode *l, struct BNode *r){
//    struct BNode *node = (struct BNode*)(malloc(sizeof(struct BNode)));
//    node -> data = d;
//    node->l = l;
//    node->r = r;
//    return node;
//}
//
//void print(struct BNode *r, int offset)
//{
//    if(r==NULL) return;
//    print(r->r, offset+3);
//    for(int i = 0; i<offset; i++)
//        printf(" ");
//    printf("%d\n", r->data);
//    print(r->l, offset+3);
//}
//
//void eval(struct BNode *node, FILE *tmp)            // польская запись!
//{   int a;
//    if(node==0) {fprintf(tmp, "%d ",0); return;}
//    if((!(node->r))&&(!(node->l))) {fprintf(tmp, "%d ",node->data); return;}
//    a = node->data;
//    eval(node->l, tmp);
//    eval(node->r, tmp);
//    switch(a){
//        case 1: fprintf(tmp, "+"); return;
//        case 2: fprintf(tmp, "-"); return;
//        case 3: fprintf(tmp, "*"); return;
//        case 4: fprintf(tmp, "/"); return;
//        default: exit(1);
//    }
//}
//
//struct Stack_int {int data; struct Stack_int *next;};
//int solve_polish(struct Stack_int *head, FILE *tmp);
//
//struct BNode* destroy(struct BNode **node){
//    if(*node!=NULL) {
//        destroy(&(*(node))->l);
//        destroy(&(*(node))->r);
//        free(*node);
//        *node = NULL;
//    }
//    return *node;
//}
//
//
//struct BNode *left_rotation(struct BNode *root){
//    struct BNode *y = root->r->l;
//    struct BNode *A = root;
//    root = root->r;  //корень B[y, z]
//    root->l=A;
//    A->r = y;
//    return root;
//}
//
//int main(){
//    int i;
//    int c;
//    struct BNode *root = add(1, add(2, add(4,0,0), add(5,0,0)), add(3, add(6,0,0), 0));
//    FILE *tmp = tmpfile();
//    struct Stack_int *head = NULL;
//    print (root, 0);                                 //печать дерева
//    printf("\n");
//    eval(root, tmp);                                 // печать польской записи во временный файл
//    rewind(tmp);
//    while((c = getc(tmp))!=EOF) {printf("%c", c);}   // смотрим на польскую запись
//    printf("\n");
//    rewind(tmp);
//    i = solve_polish(head, tmp);                     // считаем
//    printf("%d\n\n", i);
//
//    FILE *tmp1 = tmpfile();
//    root = left_rotation(root);                      // поворачиваем дерево и делаем то же самое
//    print(root,0);
//    eval(root, tmp1);
//    rewind(tmp1);
//    while((c = getc(tmp1))!=EOF) {printf("%c", c);}
//    printf("\n");
//    rewind(tmp1);
//    i = solve_polish(head, tmp1);
//    printf("%d", i);
//
//    root = destroy(&root);
//    print(root, 0);
//
//}