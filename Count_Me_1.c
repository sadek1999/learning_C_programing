#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int A[n];
   for (int i = 0; i <n ; i++)
   {
    scanf("%d",&A[i]);
   }
   
   int d2=0;
   int d3=0;
   for (int i = 0; i <n ; i++)
   {
    if(A[i]%2==0){
        d2++;
    }
    else if(A[i]%3==0){
        d3++;
    }
   }
   printf("%d %d",d2,d3);

    
    return 0;
}