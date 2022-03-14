#include<stdio.h>
#include<string.h>
int main()
{
    int l,i;
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    l=strlen(a);
    char c[l];
    for(i=0;i<l;i++)
        c[i]=(a[i]^b[i])+48;
    for(i=0;i<l;i++)
        printf("%c",c[i]);
    return 0;
}
