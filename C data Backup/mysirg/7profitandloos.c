#include<stdio.h>
 int main () 
{   int cp,sp,s;
    printf("plz enter the Cost Prize:");
    scanf("%d",&cp);
    printf("plz enter the Selling Prize:");
    scanf("%d",&sp);
    double p = (sp-cp);
      if(s=p*100/cp)
        printf("it is the profit percantage:%d",s);
      else
      printf("you get loss ");
    printf("\n");
    return 0;
      
   }