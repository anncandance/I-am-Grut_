//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//int* ascii_codes(const char *s){
//    int *a = (int*)(malloc(sizeof(int)*128));
//    int i=0;
//    for(; i<128; i++) a[i] = 0;
//    FILE *f = fopen(s, "r");
//    int c;
//    while((c=fgetc(f))!=EOF) { a[(c)]+=1;}
//    fclose(f);
//    return a;
//}
//
//int sum(const char *s){
//    int sm=0, a;
//    FILE *f = fopen(s, "r");
//    while (!feof(f)) {fscanf(f, "%d", &a); sm += a;}
//    return sm;
//}
//
//void str_sum(const char *s, const char *out){
//    int sm=0, a;
//    FILE *f = fopen(s, "r");
//    FILE *o = fopen(out, "w");
//    while (fgetc(f)!=EOF) {
//        fseek(f, -1, SEEK_CUR);
//        unsigned int N = 10, delta=10, i = 0;
//        char* buf = (char*) malloc (sizeof(char)*N);
//        while ((buf [i] = (char)fgetc(f))!= '\n')  {             // считываем строку
//            if (++i >= N) {
//                N += delta;
//                buf = (char*)realloc(buf, sizeof(char)*N);      //увеличиваем размер строки
//            }
//        }
//        char *pch = strtok( buf, " ");
//        while (pch!=NULL) {sscanf(pch, "%d", &a); sm+=a; pch = strtok(NULL, " "); }
//        fprintf(o, "%d\n", sm);
//        sm=0;
//
//    }
//    fclose(o);
//    fclose(f);
//
//}
//
//int main(){
//    const char* s = "C:\\Users\\belyn\\hw2\\cmake-build-debug\\files\\test.txt";
//    const char* s2 = "C:\\Users\\belyn\\hw2\\cmake-build-debug\\files\\test2.txt";
//    const char* out = "C:\\Users\\belyn\\hw2\\cmake-build-debug\\files\\out.txt";
////    int* a = ascii_codes(s);
////    int i=0;
////    for(; i!=128; i++) printf("%c - %d \n", i, a[i]);
//    //printf("%d\n", sum(s2));
//    str_sum(s2, out);
//
//
//}