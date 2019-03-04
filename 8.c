#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int x, i = 0, y, j = 0, c;
    scanf("%d", &x);
#define check(x, i) x&(int)(pow(2, i))
    for(; pow(2, i) <= x; i++) {if (check(x,i)) {if (! (check(x,i+1))) break;};}; //ищем 01(с конца), меняем на 10
    x += (int)pow(2,(i+1));
    x -= (int)pow(2, i);
    printf("%d", x);
    return 0;
}

