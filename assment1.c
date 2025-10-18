#include <stdio.h>

int main()
{

    // int a,b; 
    // long long int r;
    // scanf("%d",&a);
    // scanf("%d",&b);
    // r=a*b; 
    // printf("%lld ",r);
    // long long int a, b, r;
    // scanf("%lld %lld", &a, &b);
    // r = a * b;
    // printf("%lld\n", r);

    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            printf("%d \n",i);
        }
    }
    return 0;
}