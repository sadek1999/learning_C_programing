#include <stdio.h>

int main()
{
    char a[1000001];
    scanf("%s", a);
    int v = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] =='a')
        {
            continue;
        }
        else if (a[i] == 'e')
        {
            continue;
        }
        else if (a[i] == 'i')
        {
            continue;
        }
        else if (a[i] == 'o')
        {
            continue;
        }
        else if (a[i] == 'u')
        {
            continue;
        }
        else
        {
            v++;
        }
    }
    printf("%d", v);

    return 0;
}