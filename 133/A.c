#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,n=0,s=0;
    char a[101];
    gets(a);
    l=strlen(a);
    if(a[0]=='+'){
        for(i=1;i<l;i++)
        {
            if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){n=1;break;}

        }
    }
    else {
        for(i=0;i<l;i++)
        {
            if(a[i]=='H'||a[i]=='Q'||a[i]=='9'){n=1;break;}
            else if(i<l-3&&a[i]=='+'&&a[i+2]=='='){if(a[i-1]+a[i+1]==a[i+3])n=1;break;}
        }
    }

    if(n){printf("YES\n"); }
    else {printf("NO\n"); }
    return 0;
}
