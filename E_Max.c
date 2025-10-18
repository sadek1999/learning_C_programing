#include <stdio.h>

int main()
{
    int n;
    int temp;
    int big=0;
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
       scanf("%d",&temp);
       if(temp>big){
        big=temp;
       }
    }
    printf("%d",big);
     
    return 0;
}