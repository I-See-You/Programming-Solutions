#include<stdio.h>
#include<string.h>
int main()
{
    char a[201];
    scanf("%s",a);
    int n,l,i,j,k=0,s=1;
    l=strlen(a);
    char b[l];
    for(i=0;i<l;i++)
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){i+=2;if(b[k-1]!=32&&k>0)b[k++]=32;}
        else {
                if( !(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B') )
                {
                    b[k++]=a[i];
                }
        }
    }

    for(i=0;i<k;i++)
    {
        if(b[i]>=65&&b[i]<=90||b[i]==32) printf("%c",b[i]);
    }
    //getchar();
    return 0;
}
