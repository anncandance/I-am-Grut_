//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//#include<ctype.h>
//
//#define Stack(TYPE) \
//struct Stack_##TYPE \
//{ \
//TYPE data; \
//struct Stack_##TYPE *next; \
//};
//
//Stack(int);
//
//struct Stack_int* push(int data, struct Stack_int *head){
//    struct Stack_int* tmp;
//    tmp = (struct Stack_int*)(malloc(sizeof(struct Stack_int)));
//    tmp->data = data;
//    tmp->next=head;
//    head=tmp;
//    return head;
//}
//
//int pop(struct Stack_int **head) {
//    struct Stack_int *p = *head;
//    if (*head==NULL) exit(1);
//
//    *head = (*head)->next;
//    int t = p->data;
//    free(p);
//    return t;
//}
//
//int empty(struct Stack_int *head){
//    if (head==NULL) return 1;
//    return 0;
//}
//int length(struct Stack_int *head){
//    int i=0;
//     struct Stack_int *p = head;
//    while(p!=NULL) {p=p->next; i++;};
//    return i;
//}
//
//void print_stack(struct Stack_int *head, int l) {
//    int i;
//    printf("stack: ");
//    for (i = 0; i < l; i++) {
//        printf("%d ", head->data);
//        head = head->next;
//    };
//}
//
//int solve_polish(struct Stack_int *head, FILE *tmp) {
//    char a;
//    int p, i = 0, j = 0;
//    while (!(feof(tmp))) {
//        int t;
//        if ((t = getc(tmp))==-1) return  pop(&head);         // !!!
//        switch (t) {
//            case '+':
//                p = pop(&head) + pop(&head);
//                head = push(p, head);
//                break;
//            case '-':
//                i = -(pop(&head));
//                j = (pop(&head));
//                p = i+j;
//                head = push(p, head);
//                break;
//            case '*':
//                p = pop(&head) * pop(&head);
//                head = push(p, head);
//                break;
//            case '/':
//                i = pop(&head);
//                j = pop(&head);
//                p = j/i;
//                head = push(p, head);
//                break;
//            case '%':
//                i = pop(&head);
//                j = pop(&head);
//                p = j%i;
//                head = push(p, head);
//                break;
//            case ' ':
//                break;
//            default:
//                ungetc(t, tmp);
//                fscanf(tmp, "%d", &t);
//                head = push(t, head);
//                break;
//        }
//        if(feof(tmp)) return  pop(&head);
//    };
//    return pop(&head);
//
//}
//
//int polish_stack(char **s){
//    int i=0, j;                                 // i - счетчик длины стека
//    char before='?';                            // предыдущий считанный символ
//    struct Stack_int *head = NULL;              //стек операций
//    while(!feof(stdin)) {
//        int p = getchar();
//        if (p==10) {while(head) {j = pop(&head); *(*s + i)=(char)j; i++;};
//                    return i;};
//        switch(p){
//            case ' ':
//                break;
//            case '+':                                       // если предыдущий знак имеет приоритет ниже +(только "(" )
//                if(!head || (head&&((head->data)=='(')))                       // или стек пуст, то + отправляется в стек
//                    {head = push(p, head);
//                    before=(char)p;
//                    break;}
//                else
//                {j = pop(&head); *(*s + i)=(char)j; i++;    // иначе придыдущий знак отправляется в строку выхода,
//                    head = push(p, head);                       // + идет в стек
//                    before=(char)p;
//                    break;}
//
//            case '-':
//                if(!(head) ||(head&&(head->data=='(')))
//                    {head = push(p, head);
//                        before=(char)p;
//                    break;}
//                else{j = pop(&head); *(*s + i)=(char)j; i++;
//                    head = push(p, head);
//                    before=(char)p;
//                    break;}
//            case '*':                                            // приоритета выше * нет, равные * и /
//                if(!(head)||(head->data=='('||((head->data=='+')||(head->data=='-'))))
//                    {head = push(p, head);
//                        before=(char)p;
//                    break;}
//                else{j = pop(&head); *(*s + i)=(char)j; i++;
//                    head = push(p, head);
//                    before=(char)p;
//                    break;}
//            case '/':
//                if(!(head)||(head->data=='(')||(head->data=='+')||(head->data=='-'))
//                    {head = push(p, head);
//                        before=(char)p;
//                    break;}
//                else{j = pop(&head); *(*s + i)=(char)j; i++;
//                    head = push(p, head);
//                    before=(char)p;
//                    break;}
//            case '(':
//                head = push(p, head);
//                before=(char)p;
//                break;
//            case ')':
//                while((j=pop(&head))!='(') {*(*s+i) = (char)j; i++;};before=(char)p;break;
//            default:
//                // если перед считанным числом было число, то это составное число
//                if((isdigit(before))||(before=='?')||before=='('||before==')'){
//                    *(*s + i) = (char)p;
//                    before=(char)p;
//                    i++;break;}
//                else if (isdigit(*(*s+i-1))) {*(*s + i) = ' ';  // stack!=before
//                i++;}
//                before=(char)p;
//                *(*s + i) = (char)p;
//                i++;
//                break;
//                }
//        }
//
//    }
//
//int solve(char **s){
//    int d = polish_stack(s);
//    int i=0;
//    struct Stack_int *head = NULL;
//    *s = (char*)(realloc(*s, (sizeof(int))*d+1));
//    FILE *tmp =  tmpfile();
//    for(; i<d; i++)  {fprintf(tmp, "%c", *(*s+i));};
//    fseek(tmp, -d, SEEK_CUR);
//    int t = solve_polish(head, tmp);
//    return t;
//
//
//}

//int main() {
//    struct Stack_int *head = NULL;
//    int i = 0, l = 10;
////    for (; i < l; i++) head = push(i, head);
////    print_stack(head, length(head));
////    int t = pop(&head);
////    printf("\n%d\n", t);
////    t = pop(&head);
////    printf("\n%d\n", t);
////    print_stack(head, length(head));
////    if(empty(head)) printf("\nempty");
//
////    int t = solve_polish(head);
////    printf("\n%d\n", t);
//    char *s = (char*)(malloc(sizeof(char)*32));
////    int d = polish_stack(&s);
////    for(; i<d; i++) {printf("%c", s[i]);}
//    printf("%d", solve(&s));
//}





