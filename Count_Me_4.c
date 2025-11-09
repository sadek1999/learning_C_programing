#include <stdio.h>

int main()
{
    char l[100001];
    scanf("%s", l);
    int al[26] = {0};
  
    for (int i = 0;  l[i] != '\0'; i++)
    {
        al[l[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(al[i]!=0){
            printf("%c - %d \n",i+'a' ,al[i] );
        }
    }
    

    return 0;
}