// Copyright 2019 Tulba-Lecu Gabriel (gabi_tulba_lecu@yahoo.com)
#include "../../lib/array.h"

int main() {
    int n;
    scanf("%d", &n);

    int *v = (int *)malloc(sizeof(int) * n);

    read_array(n, v);
    sort_array(n, v);
    print_array(n, v);

    free(v);

    return 0;
}
