#include <stdio.h>
#include <string.h>

int main()
{
    
    int n;
    scanf("%d",&n); 
    int s[n];
    int s1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&s[i]);
    }

    
   for (int i = n-1; i>=0; i--)
   {
    printf("%d ",s[i]);
   }
   
    
    
    return 0;
}