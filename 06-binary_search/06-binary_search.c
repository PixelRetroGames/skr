// Copyright 2019 Tulba-Lecu Gabriel (gabi_tulba_lecu@yahoo.com)
#include "../../lib/array.h"

int main() {
    int n;
    scanf("%d", &n);

    int *v = (int *) malloc(sizeof(int) * n);

    read_array(n, v);

    int pos1 = binary_search(n, v, 10);
    printf("%d\n", pos1);

    int pos2 = binary_search(n, v, 2);
    printf("%d\n", pos2);
    free(v);

    return 0;
}
