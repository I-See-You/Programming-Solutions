#include<stdio.h>
#include<string.h>
int main()
{
    int n=0,l,i;
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]<97){a[i]=a[i]+32;}
        if(b[i]<97){b[i]=b[i]+32;}
        if(a[i]<b[i]){n=-1;break;}
        else if(a[i]>b[i]){n=1;break;}
    }
    printf("%d\n",n);
    return 0;
}
