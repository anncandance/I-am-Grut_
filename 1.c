#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
     int x, i = 7, y, j = 0, c;
    scanf("%d", &x);
#define check(x, i) x&(int)(pow(2, i))
    for(; i >= 0; i--) if (check(x,i)) printf("1"); else printf("0");
    return 0;
}
