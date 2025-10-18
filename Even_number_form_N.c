#include <stdio.h>

int main()
{
    int a;
    int b = 1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2==0){
            printf("%d \n",i);
            b++;
        }
    } 
    if(b==1){
        printf("-1");
    }
    return 0;
}