#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i = 0, zero = 0, one = 0, valid = 1;
    printf("Enter string: ");
    scanf("%s", s);
    while(s[i] == '0')
    {
        zero++;
        i++;
    }
    while(s[i] == '1')
    {
        one++;
        i++;
    }
    if(s[i] != '\0' || zero != one)
        valid = 0;

    if(valid)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
