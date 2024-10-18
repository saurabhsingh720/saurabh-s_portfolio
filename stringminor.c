#include <stdio.h>
#include <string.h>
int main()
{
    int flag, i, j, n = 0;
    char str1[100], str2[100];
    printf("Enter first string\n");
    scanf("%[^\n]s", str1);
    getchar();
    printf("Enter second string\n");
    scanf("%[^\n]s", str2);
    char str3[100];

    for (i = 0; i < strlen(str1); i++)

    {
        for (j = 0; j < strlen(str2); j++)

        {
            flag = 1;

            if (str1[i] == str2[j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)

        {
            str3[n] = str1[i];
            str3[n+1] = 0;
            n++;
        }
    }

    for (i = 0; i < strlen(str3); i++)
    {
        str1[i] = str3[i];
        str1[i+1] = 0;
    }

    printf("%s", str1);

    return 0;
}