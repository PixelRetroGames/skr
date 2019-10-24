// Copyright 2019 Tulba-Lecu Gabriel (gabi_tulba_lecu@yahoo.com)
#include "../../lib/array.h"

int main() {
    int n, m;
    scanf("%d", &n);

    int *v = (int *) malloc(sizeof(int) * n);
    read_array(n, v);

    scanf("%d", &m);

    int *w = (int *) malloc(sizeof(int) * m);
    read_array(m, w);

    int d;
    int *diff = (int *) malloc(1 * sizeof(int));

    d = diff_array(n, v, m, w, diff);
    print_array(d, diff);

    d = diff_array(m, w, n, v, diff);
    print_array(d, diff);

    free(v);
    free(w);
    free(diff);

    return 0;
}
