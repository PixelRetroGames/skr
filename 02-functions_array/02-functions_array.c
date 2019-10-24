// Copyright 2019 Tulba-Lecu Gabriel (gabi_tulba_lecu@yahoo.com)
#include "../../lib/array.h"

int main() {
    int n;
    scanf("%d", &n);

    int *v = (int *) malloc(sizeof(int) * n);
    read_array(n, v);

    int sum = get_sum_array(n, v);
    printf("sum: %d\n", sum);

    int min = get_min_array(n, v);
    printf("min: %d\n", min);

    int posmax = get_posmax_array(n, v);
    printf("posmax: %d\n", posmax);

    double avg = get_avg_array(n, v);
    printf("avg: %.1f\n", avg);

    int pos1 = find_array(n, v, 30);
    int pos2 = find_array(n, v, 4);
    int pos3 = find_array(n, v, 13);

    printf("pos1: %d\npos2: %d\npos3: %d\n", pos1, pos2, pos3);
    free(v);

    return 0;
}
