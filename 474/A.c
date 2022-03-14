#include<stdio.h>
#include<string.h>
int main()
{
    char a1[]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
//    printf("%c",a1[29]);
    char c,a[101];
    scanf("%c",&c);
//    getchar();
    scanf("%s",&a);
    int i,j;
    for(i=0;i<strlen(a);i++)
    {
            for(j=0;j<30;j++)
            {
                if(a1[j]==a[i])
                {
                    if(c=='R') printf("%c",a1[j-1]);
                    else printf("%c",a1[j+1]);
                }
            }
    }
    return 0;

}
