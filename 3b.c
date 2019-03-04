#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Russian");
    unsigned int x, m=0;
    scanf("%d", &x);
    for(; x!=0; m++) x &= (x-1);
    printf("%d", m);
    return 0;
};

