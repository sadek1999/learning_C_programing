#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int na = 0;
    int po = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            na += a[i];
        }
        else
        {
            po += a[i];
        }
    }

    printf("%d %d\n", po, na);
    return 0;
}
