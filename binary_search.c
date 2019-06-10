//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//int binary(int* a, int n, int x){
//    int i=n-1, j=0; //j = предыдущее i
//    for(; i>0&&a[i]!=x&&i<n; i/=2) {if (abs(j-i)<=1) return -1;
//                                       j=i;
//                                       if (a[i] < x) i=(n+i);};  // если a[i] < x, то i=i+(n-i)/2
//                                       //if (a[i] >x) i/=2;};
//    if (a[i]==x) return i;
//    return -1;
//}
//
//void strange_func(int* a, int n, int x, int *pi, int *pj){
//    int i=n-1, j=0;                 //j = предыдущее i
//    for(; i>0&&a[i]!=x&&i<n; i/=2) {if (abs(j-i)<=1) return;
//                                    j=i;
//                                    if (a[i] < x) i=(n+i);};  // если a[i] < x, то i=i+(n-i)/2
//                                    //if (a[i] >x) i/=2;};
//    if (a[i]==x) {*pj=1; *pi=1; return;}
//}
//
//int binary_first(int* a, int n, int x) {
//    int i=n-1, j=0; //j = предыдущее i
//    for(; i>0&&a[i]!=x&&i<n; i/=2) {if (abs(j-i)<=1) return -1;
//                                    j=i;
//                                    if (a[i] < x) i=(n+i);};  // если a[i] < x, то i=i+(n-i)/2
//                                    //if (a[i] >x) i/=2;};
//    if (a[i] == x) {
//        if ((i > 0 && a[i - 1] != x) || i == 0) return i;
//        return binary_first(a, i+1, x);
//    }
//}
//
//int inter_search(int* a, int n, int x){
//    int i=0, j, k=n-1;                   // нижний край, возможный индекс х, верхний край
//    for(j=i+(k-i)*(x-a[i])/(a[k]-a[i]); x>a[i]&&a[j]!=x&&x<a[k]; j=i+(k-i)*(x-a[i])/(a[k]-a[i]))
//        {if (a[j] < x)  i=j+1;           // за нижний конец отрезка принимаем a[j+1]
//         if (a[j] > x) k=j-1;            // за верхний - a[j-1]
//        }
//    if (j>=0&&j<=(n-1)&&a[j]==x) return j;
//    return -1;
//
//}
//int main(){
//    int n, i, c=1, d=-1;
//    int* a;
//    int *pi, *pj;
//    pi = &c;
//    pj=&d;
//    //scanf("%d", &n);
//    n = 5;
//    a = (int*)(malloc(n*sizeof(int)));
//    for(i=0; i<n; i++) a[i] = 2*i;
//    for(i=0; i<n; i++) printf("%d ", a[i]);
//    printf("\n");
//    for (i=0; i<= 2*(n+1); i++) printf("%d %d\n", i, binary(a, n, i));
//    //strange_func(a, n, 2, pi, pj);
//    //printf("%d\n", binary_first(a, n, 2));
//    //printf("%d %d\n", *pi, *pj);
//    //printf("%d\n", inter_search(a, n, 5));
//
//}