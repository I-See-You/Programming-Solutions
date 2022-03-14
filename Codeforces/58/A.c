#include<stdio.h>
#include<string.h>
int main()
{
    int l,n,i=0,j,s=0,k=0;
    char a[5],b[101];
    scanf("%s",&b);
    l=strlen(b);
    a[0]='h';a[1]='e';a[2]='l';a[3]='l';a[4]='o';
    for(j=0;j<5;j++)
    {
        for(;i<l;i++)
        {
            if(a[j]==b[i]){k++;i++; break;}
        }
    }
    if(k==5){printf("YES\n"); }
    else {printf("NO\n"); }
    return 0;
}
