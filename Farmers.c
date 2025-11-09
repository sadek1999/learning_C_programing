#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][3];
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        int m1 = a[i][0];
        int m2 = a[i][1];
        int d = a[i][2];
        float x = d * m1;
        float workingDays = x / (m1 + m2);
        int Dx=d-(int)workingDays ;
        int tamp=(int)Dx;
        
        
        printf("%d \n",Dx);
        
        
    }

    
    return 0;
}