#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
    int x, i = 0, y, j = 0, c;
    scanf("%d", &x);
    y=x&(int)(pow(2, i));
    while(y != 0) {i++; y=x&(int)(pow(2, i));};
    while (pow(2, j)<x) j++;
    printf("%d", (int)((pow(2, j) - 1)-pow(2,i)));
    return 0;
}