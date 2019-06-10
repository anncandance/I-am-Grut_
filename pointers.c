//#include<stdio.h>
//#include<stdlib.h>
//
//int order(int a, int b){
//    int a1 = a%2;
//    int b1= b%2;
//    if (a1<b1) return -1;  // четные меньше нечетных
//    if (a1>b1) return 1;
//    if (a1==0) {           // оба четные ==> по возрастанию
//        if (a<b) return -1;
//        if (a>b) return 1;
//        if (a==b) return 0;
//    }
//    if (a>b) return -1;    // оба нечетные ==> по убыванию
//    if (a<b) return 1;
//    if(a==b) return 0;
//}
//
//void new_quick_sort(int* a, int k, int n, int (*p)(int, int)){               //  k,n - диапазон
//    if (n-k<1) return ;
//    int i=k;
//    int m=n-1, s=a[n-1], t;                          // m =текущий индекс последнего элемента
//    for(; i<m; i++) {if (p(a[i],s)==1) {t = a[i];        //t = значение эл-та, большего s
//            a[i] = a[m-1];   // элемент перед s топим на место t
//            a[m] = t;        //  t  на 1 индекс выше s
//            a[m-1] = s;
//            m--;             //  тк s сместился на 1 вниз
//            i--;} };         //  (!) чтобы проверить элемент, который был перед s
//    new_quick_sort(a, k, m, p);
//    new_quick_sort(a, m+1, n, p);
//}
//
//int main(){
//    int n, b, c, i=0;
//    int * a;
//    int (*p) (int, int);
//    scanf("%d %d", &b, &c);
//    printf("%d\n", order(b, c));
//    //printf("%d", b%c);
//    //a = (int*)malloc(n*(sizeof(int)));
//    //for(; i<n; i++) scanf("%d", &a[i]);
//    //new_quick_sort(a, 0, n, order);
//    //for(i=0; i<n; i++) printf("%d ", a[i]);
//}



