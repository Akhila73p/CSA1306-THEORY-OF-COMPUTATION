#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i = 0, n, z1 = 0, z2 = 0;

    printf("Enter string: ");
    scanf("%s", s);
    n = strlen(s);

    while (s[i] == '0') z1++, i++;
    while (s[i] == '1') i++;
    while (s[i] == '0') z2++, i++;

    if (i == n && z1 == z2)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
