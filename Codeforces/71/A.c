#include<stdio.h>
#include<string.h>
int main()
{
    int t,l,i;
    char a[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        if(l<=10) {printf("%s\n",a); }
        else
        {
            printf("%c%d%c\n",a[0],l-2,a[l-1]);
        }
    }
    return 0;
}
