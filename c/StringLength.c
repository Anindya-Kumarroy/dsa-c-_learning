#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]="Anindya Roy";
    int Length =strlen(s);
    printf("Length =%d\n",Length);
    

    char s2[100]="Anindya Kumar Roy";
    int i=0,count =0;
    while (s2[i]!=0)
    {
        ++count;
        i++;
    }
    printf("Length =%d\n",count);
    return 0;
    
}