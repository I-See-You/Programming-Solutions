#include<stdio.h>
int main()
{  int i;
   char c[100];
   scanf("%s",&c);
   for (i=0;;i++)
   {
       if(c[i]<65) {break;}
       if(!(c[i]=='a'||c[i]=='A'||c[i]=='e'||c[i]=='E'||c[i]=='i'||c[i]=='I'||c[i]=='o'||c[i]=='O'||c[i]=='u'||c[i]=='U'||c[i]=='y'||c[i]=='Y'))
       {
           if(c[i]>=97) printf(".%c",c[i]);
           else {c[i]=c[i]+32; printf(".%c",c[i]);}
       }
   }
    return 0;
}
