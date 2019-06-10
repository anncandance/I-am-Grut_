//#include<stdio.h>
//#include<stdlib.h>
//
//
//
//int int_pow(int n, int k){
//    if (k==1) return n;
//    if (k%2==0) return int_pow(n, k/2)*(int_pow(n, k/2));
//    return int_pow(n, (k-1)/2)*int_pow(n, (k+1)/2);
//
//}
//
//int f(int n, int k){
//    int s=0;
//    int i;
//    if ((k==1)||(n==0)) return 1;   // только единицы или 1 число(которое было на предыдущем шаге)
//    if (k>n) k=n;
//    for(i=k; (i>=1&&n>0); i--) s+=f(n-i, i);  // f(n,3) = f(n-3,3) (c тройкой) + f(n-2, 2) (без троек, с двойкой) + все единицы
//    return s;
//}
//
//int main(){
//    int n, k;
//    scanf("%d %d", &n, &k);
//    //printf("%d\n", int_pow(n, k));
//    printf("%d\n", f(n,k));
//};

