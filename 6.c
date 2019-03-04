#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
    int x, i=0, y, j=0, c;
    scanf("%d", &x);
#define d(x, j, c) for(; pow(2, j) < x; j++) {c = (x>>j)&1; printf("%d", c);}; // вывод числа в двоичном виде
    d(x,j,c);
    j=0;
    y=x&(int)(pow(2, i));
    while(y != 0) {i++; y=x&(int)(pow(2, i));};
    printf("\n%d", i);
    x += (int)pow(2,i);
    printf("\n");
    d(x, j, c);
    return 0;
}