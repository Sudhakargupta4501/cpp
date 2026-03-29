#include<stdio.h>
int main()
{  
    int n =435  ,p,s,r;
   // printf("enter three digit no");
    //scanf("%d",&n);
   for(p=0;p<3;p++)
   {  
    int res=n%10;
    s=res+s;
    printf("%d",s);
   }
    return 0;
}