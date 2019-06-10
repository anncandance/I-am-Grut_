//#include<stdio.h>
//#include<stdlib.h>
//#include <math.h>
//
//
//void quick_sort(int* a, int k, int n){               //  k,n - диапазон
//    if (n-k<1) return ;
//    int i=k;
//    int m=n-1, s=a[n-1], t;                          // m =текущий индекс последнего элемента
//    for(; i<m; i++) {if (a[i] > s) {t = a[i];        //t = значение эл-та, большего s
//            a[i] = a[m-1];   // элемент перед s топим на место t
//            a[m] = t;        //  t  на 1 индекс выше s
//            a[m-1] = s;
//            m--;             //  тк s сместился на 1 вниз
//            i--;} };         //  (!) чтобы проверить элемент, который был перед s
//     quick_sort(a, k, m);
//     quick_sort(a, m+1, n);
//}
//
//int main() {
//    int n, i=0, s, t, m;                             // n = размер массива, s- последний элемент,
//    scanf("%d", &n);
//    int a[n];
//    for(; i<n; i++) scanf("%d", &a[i]);              //ввод массива
//    quick_sort(a, 0, n);
//    for(i=0; i<n; i++) printf("%d ", a[i]);
//}