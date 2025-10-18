#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
       long long  int n;
        scanf("%lld", &n);
        if(n==0){
            printf("0");
        }
        while (n != 0)
        {
            printf("%lld ", n % 10);
            n /= 10;
        }
        printf("\n");
    }

    return 0;
}