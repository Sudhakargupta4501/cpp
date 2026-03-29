#include<stdio.h>
 int main ()
  {
          int x;
       for(int i;i<=3;i++)
       {
        printf("plz enter an even no");
        scanf("%d",&x);
        if(x%2==0)
         break;
        }

        if(x==4)
            printf("gadaha ho tum, fir se paise de ke khealo");
        
        else
            printf("sababas accha tume he ho schooler");
            
       printf("\n");
       return 0;
 }