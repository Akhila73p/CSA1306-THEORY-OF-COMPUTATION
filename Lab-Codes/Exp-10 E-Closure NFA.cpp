#include <stdio.h>
int main() {
    int e[10][10] = {0}, n, i, j, k;

    scanf("%d", &n);

    for (i = 0; i < n-1; i++)
        e[i][i+1] = 1;

    for (i = 0; i < n; i++) {
        printf("E-closure(q%d): q%d", i, i);
        for (j = i+1; j < n; j++)
            if (e[i][j])
                printf(" q%d", j);
        printf("\n");
    }

    return 0;
}
