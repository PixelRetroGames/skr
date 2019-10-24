// Copyright 2019 Tulba-Lecu Gabriel (gabi_tulba_lecu@yahoo.com)
#include "../../lib/array.h"

int main() {
    int n, x, y;
    scanf("%d", &n);

    int *v = (int *) malloc(sizeof(int) * n);
    read_array(n, v);

    scanf("%d %d", &x, &y);

    if (x > y) {
        swap(&x, &y);
    }

    printf("numere intre %d si %d:\n", x, y);
    printf("%d\n", lower_bound(n, v, y + 1) - lower_bound(n, v, x));

    return 0;
}
