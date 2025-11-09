#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    char S[T][100001];
 
    for (int i = 0; i < T; i++)

    {
        scanf("%s", S[i]);
    }

    for (int i = 0; i < T; i++)
    {    int d =0, s =0, c = 0;
        for (int j = 0; S[i][j] != '\0'; j++)
        {
            if (S[i][j] >= 'A' && S[i][j] <= 'Z')
            {
                c++;
            }
            else if (S[i][j] >= 'a' && S[i][j] <= 'z')
            {
                s++;
            }
            else if (S[i][j] >= '0' && S[i][j] <= '9')
            {
                d++;
            }
        }
        printf("%d %d %d \n", c, s, d);
        
        
    }

    return 0;
}