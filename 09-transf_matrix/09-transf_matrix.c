// Copyright 2019 Tulba-Lecu Gabriel (gabi_tulba_lecu@yahoo.com)
#include "../../lib/matrix.h"

void transformation(int n, int m, int col, matrix *a) {
    for (int i = 0; (i < n) && (i + col < m); i++) {
        printf("%d ", (*a)[i][i + col]);
        if (i > 0) {
            (*a)[i][i + col] = 0;
        }
    }
    printf("\n");

    for (int i = 0; i <= col; i++) {
        printf("%d ", (*a)[i][col - i]);
        (*a)[i][col - i] = 0;
    }
    printf("\n");
}

int main() {
    matrix a;
    clear(&a);

    int n, m, col;
    scanf("%d %d %d", &n, &m, &col);

    read_matrix(n, m, &a);
    transformation(n, m, col, &a);

    print_matrix(n, m, a);

    return 0;
}
