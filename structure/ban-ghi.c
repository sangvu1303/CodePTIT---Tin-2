#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
    int a, b, c;
} tamgiac;

void nhap(tamgiac *tg) {
    scanf("%d%d%d", &(tg->a), &(tg->b), &(tg->c));
}

float dien_tich(tamgiac tg) {
    float p = (tg.a + tg.b + tg.c) / 2.0;
    return sqrt(p * (p - tg.a) * (p - tg.b) * (p - tg.c));
}

void in_thong_tin(tamgiac tg) {
    printf("%d %d %d", tg.a, tg.b, tg.c); // phần này %d phải để cách nhau 1 khoảng trống thì ptit code mới AC , vcl thật
}

int so_sanh(const void *p1, const void *p2) {
    tamgiac *tg1 = (tamgiac *) p1;
    tamgiac *tg2 = (tamgiac *) p2;
    float dt1 = dien_tich(*tg1);
    float dt2 = dien_tich(*tg2);

    if (dt1 > dt2) return 1;
    else if (dt1 < dt2) return -1;
    else return 0;
}
// char *filename ="FPLSP22GxxmsvTG.fpl";
void ghiFileTamGiac(const char *filename,const tamgiac *dstg, int n) {
    FILE *f = fopen(filename, "wb");
    fwrite(&n, sizeof(int), 1, f);
    fwrite(dstg, sizeof(tamgiac), n, f);
    fclose(f);
}

void docFileTamGiac(const char *filename, tamgiac **dstg, int *n) {
    FILE *f = fopen(filename, "rb");
    fread(n, sizeof(int), 1, f);
    *dstg = (tamgiac *) malloc((*n) * sizeof(tamgiac));
    fread(*dstg, sizeof(tamgiac), *n, f);
    fclose(f);
}

int main() {
    int n;
    scanf("%d",&n);
    tamgiac *dstg = (tamgiac *)malloc(n * sizeof(tamgiac));
    for (int i = 0; i < n; i++) {
        nhap(&(dstg[i]));
    }
    qsort(dstg, n, sizeof(tamgiac), so_sanh);
    for (int i = 0; i < n; i++) {
        in_thong_tin(dstg[i]);
        printf("\n");
    }
    free(dstg);
    return 0;
}