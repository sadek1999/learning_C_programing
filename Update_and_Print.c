#include <stdio.h>

int main()
{
    int n;
    int indx;
    int value;
    scanf("%d",&n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&a[i]);
    }
   
    scanf("%d %d",&indx,&value);
  
    a[indx]= value;

    for (int i =1; i <= n; i++)
    {
        printf("%d ",a[n-i]);
    }
    
     
    return 0;
}