#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i, found = 0;
    printf("Enter string: ");
    scanf("%s", s);
    for(i = 0; i < strlen(s) - 2; i++)
    {
        if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
        {
            found = 1;
            break;
        }
    }
    if(found)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
