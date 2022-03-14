#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n=1,al,bl;
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    al=strlen(a);
    bl=strlen(b);
    if(al!=bl) {printf("NO\n");}
    else
    {
        for(i=0,j=0;i<al; i++,j++)
        {
            if(a[i]!=b[al-1-j]){n=0;printf("NO\n");break; }
        }
        if(n) printf("YES\n");
    }
    return 0;
}
