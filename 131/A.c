#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,s=0;
    char a[101];
        scanf("%s",&a);
        l=strlen(a);
        for(i=1;i<l;i++)
        {
            if(a[i]<97){s++;}
        }
        if(l==s+1)
        {
            if(a[0]>=97){a[0]=a[0]-32;}
            else {a[0]=a[0]+32;}
            printf("%c",a[0]);
            for(i=1;i<l;i++)
            {
                printf("%c",a[i]+32);
            }
        }
        else {printf("%s",&a);}
    return 0;
}
