#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,uper=0,lower=0;
    char a[101];
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]<97) uper++;
        else lower++;
    }
    if(uper>lower)
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>=97) a[i]=a[i]-32;
        }
    }
    else
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]<97) a[i]=a[i]+32;
        }
    }
    //printf("%s\n",a);
   for(i=0;i<strlen(a);i++)
   {
       printf("%c",a[i]);
   }
   return 0;
}
