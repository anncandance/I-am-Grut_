//#include<stdio.h>
//#include<stdlib.h>
//
//
//void change(const char *s, int m, int n){
//    FILE *f = fopen(s, "rb+");
//    fseek(f, m, SEEK_SET);
//    fwrite(&n, sizeof(int), 1, f);
//    fclose(f);
//}
//
//void add(const char *s, int m, int n){
//    int c;
//    FILE *f= fopen(s, "rb+");
//    fseek(f, m, SEEK_SET);
//    fread(&c, sizeof(int), 1, f);
//    fseek(f, m, SEEK_SET);
//    //printf("%d ", c);
//    int k = c+n;
//    fwrite(&k, sizeof(int), 1, f);
//    fclose(f);
//}
//
//void third(const char *s, int m){
//    int c;
//    FILE *f = fopen(s, "rb+");
//    fseek(f, m, SEEK_SET);
//    fread(&c, sizeof(int), 1, f);
//    if (c%2==0) c/=2; else c*=3;
//    fseek(f, m, SEEK_SET);
//    fwrite(&c, sizeof(int), 1, f);
//    fclose(f);
//}
//
//void create(const char *s){
//    FILE *f = fopen(s, "wb");
//    int i=0;
//    for(; i<15; i++) fwrite(&i, sizeof(int), 1, f);
//    fclose(f);
//}
//
//void in(const char *s){
//    int c;
//    FILE *f = fopen(s, "rb");
//    while (fread(&c, sizeof(int), 1, f)) printf("%d ", c);
//    printf("\n");
//    fclose(f);
//}
//
//void double_in(const char *s){
//        double c;
//        FILE *f = fopen(s, "rb");
//        while (fread(&c, sizeof(double), 1, f)) printf("%f ", c);
//        printf("\n");
//        fclose(f);
//
//}
//
//
//void fourth(const char *s){
//    int c, m=0;
//    FILE *f=fopen(s, "rb+");
//    fseek(f, m, SEEK_SET);
//    while (fread(&c, sizeof(int), 1, f)) {
//        if (c%2==0) c/=2; else c*=3;
//        fseek(f, m, SEEK_SET);
//        fwrite(&c, sizeof(int), 1, f);
//        m+=4;
//        fseek(f, m, SEEK_SET);
//    }
//}
//
//void save(const char *s, double *a){
//    FILE *f = fopen(s, "rb+");
//    fwrite(a, sizeof(double), 15, f);
//    fclose(f);
//
//}
//double* load(const char *s, double **a){
//    FILE *f = fopen(s, "rb");
//    fread(*a, sizeof(double), 15, f);
//    double* k = *a;
//    return k;
//}
//
//int main(){
//    int m=4, n=8, i=0;
//    const char *s = "C:\\Users\\belyn\\Documents\\test.bin";
//    double* a = NULL;
//    a = (double*)(malloc(15*sizeof(double)));
//    for(; i<15; i++) *(a+i) = (double)i*i;
//    create(s);
//    in(s);
////    change(s, m+4, n);
////    add(s, m, n);
////    third(s, m+8);
////    fourth(s);
//    save(s, a);
//    double *k = load(s, &a);
//    printf("%f \n", k[4]);
//    double_in(s);
//    return 0;
//
//
//}
