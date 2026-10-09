#include <stdio.h>

int main() {
    int a[10][10], n, s, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &s);

    printf("E-closure: q%d ", s);

    for (i = 0; i < n; i++)
        if (a[s][i])
            printf("q%d ", i);

    return 0;
}
