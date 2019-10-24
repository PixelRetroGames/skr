// Copyright 2019 Tulba-Lecu Gabriel (gabi_tulba_lecu@yahoo.com)
#include "../../lib/matrix.h"

int main() {
    matrix a, b, c;
    int m, n, p;
    scanf("%d %d %d", &n, &m, &p);

    clear(&a);
    clear(&b);
    clear(&c);

    read_matrix(n, m, &a);
    read_matrix(m, p, &b);

    multiply_matrix(n, m, p, a, b, &c);

    print_matrix(n, p, c);

    return 0;
}
