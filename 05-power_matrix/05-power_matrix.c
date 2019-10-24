// Copyright 2019 Tulba-Lecu Gabriel (gabi_tulba_lecu@yahoo.com)
#include "../../lib/matrix.h"

int main() {
    matrix a, b;
    int n, k;
    scanf("%d %d", &n, &k);

    clear(&a);
    clear(&b);

    read_matrix(n, n, &a);

    log_pow_matrix(n, &a, k);

    print_matrix(n, n, a);

    return 0;
}
