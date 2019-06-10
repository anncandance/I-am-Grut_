//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<string.h>
//
//int  folder(char *a, char *p) {
//    char *i, *j;
//    unsigned int c, d, e, m;
//    if (strchr(a, '/')) {
//        i = strrchr(a, '/');
//        c = i - a;                                  //индекс последнего "/"
//        //printf("%p, %p, %d", i, a, c);
//        char b[c + 1];
//        strncpy(b, a, c);
//        b[c+1] = 0;
//        //printf("\n");
//        //for(e=0; e<=c; e++) printf("%c", b[e]);
//        if (strchr(b, '/')) {
//            j = strrchr(b, '/');
//            d = j - b;                              //индекс предпоследнего "/"
//            char folder[c-d];                       // 0 уже есть
//            strncpy(folder, b+d+1, c+1-d);
////            printf("\n");
//            for(e=0; e<c-d; e++) p[e]=folder[e];
//            return c-d-1;                          // длина названия
//        }
//    }
//    return 0;
//}
//
//int expansion(char *a, char *p){
//    int c, e;
//    char *i;
//    if (strchr(a, '.')) {
//        i = strrchr(a, '.');
//        c = i-a;
//        strncpy(p, a, c+1);
//        p[c+1] = 'h'; p[c+2] = 't'; p[c+3] = 'm'; p[c+4] = 'l';
//        return c+5;
//    }
//    return 0;
//}
//
//int sum(char *b, char *c, char *d, int k, int t, int j){       // упорядочены по убыванию
//    int i,x1, x2, s=0;
//    //printf("%d", j);
//    //printf("%d %d", k, t);
//    for(i=t-1; i>=0; i--) {x1 = c[i]-'0'; x2 = b[i+k-t]-'0';
//                            d[i+k-t+1] = (x1+x2+s)%10 + '0';
//                            //printf("%d ", d[i]);
//                            s = (x1+x2+s)/10;}
//    //printf("%d ", j);
//    if (k-t>0) {
//        for(i=k-t; i>0; i--) {
//        d[i] = (s + (b[i-1] - '0'))%10 + '0';
//        s = (s + (b[i-1] - '0'))/10;}}
//    //printf("%d ", i);
//    if (s != 0) {d[0] = s+'0'; i=0;} else d[0]=0 + '0';
//    d[j-1] = 0 +'0';
//    for(i=0; i<j; i++) printf("%c ", d[i]);
//
//}
//
//
//int main()
//{
//    int n=100, e, m, t, k, i;
////    char p[n+4];                                             // чтобы влезло расширение
////    char a[n+1];
////    scanf("%99s", a);
//    //*p = *a;
//    //m = folder(a, p);
////    m = expansion(a, p);
////    if (m >0) for (e = 0; e < m; e++) printf("%c", *(p + e));
//    scanf("%d %d ", &k, &t);
//    char c[t+1];
//    char b[k+1];
//    scanf("%s %s", b, c);
//    if (k<=t) {i=t+2;} else i=k+2;
//    char d[i];
//    sum(b, c, d, k, t, i);
//    //for(e=0; e<t+1; e++) printf("%c ", c[e]);
//
//}
