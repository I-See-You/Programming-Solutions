#include<stdio.h>0
int main()

{
    int n,i=0,a1=0,a2=0,a3=0,a4=0,sum;
    scanf("%d",&n);
    int ara[n];
    for (;i<n;i++){scanf("%d",&ara[i]);
        if(ara[i]==1) {a1++;}
        else if(ara[i]==2) {a2++;}
        else if(ara[i]==3) {a3++;}
        else {a4++;}
    }
    //printf("%d %d %d %d\n",a1,a2,a3,a4);
    if(a1>a3) {a1=a1-a3;a4=a3+a4;a3=0;}
    else if(a1==a3) {a4=a4+a3;a1=0;a3=0;}
    else if(a1<a3) {a3=a3-a1;a4=a4+a1+a3;a1=0;a3=0;}

    sum=(a1+a2*2+a4*4+3)/4;
    printf("%d\n",sum);
    return 0;
}
