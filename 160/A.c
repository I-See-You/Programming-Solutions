#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,s=0,k=0,m=0,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j]) {   x=a[i]; a[i]=a[j]; a[j]=x;  }
        }
    }
        k=0;
        for(i=n-1;i>=0;i--)
        {
            m+=a[i];
            k++;
            if(2*m>s){break;}
        }
        printf("%d\n",n-i);
        return 0;
}
