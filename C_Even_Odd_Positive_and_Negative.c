#include <stdio.h>

int main()
{
     int n;
     int x;
     scanf("%d",&n);
     int even=0,odd=0,positive=0,negative=0;

     for (int i=1; i<=n;i++){
        scanf("%d",&x);
        // printf("%d",x);
        if(x%2==0){
          even++;
        }
        else{
           odd++;
        }
        if(x>0){
          positive++;

        }
        if(x<0){
           negative++;
        }
     }
     printf("Even: %d\n",even);
     printf("Odd: %d\n",odd);
     printf("Positive: %d\n",positive);
     printf("Negative: %d\n",negative);
    return 0;
}