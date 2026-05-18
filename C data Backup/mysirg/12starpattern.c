/*#include<stdio.h>
int main()
{
  //  int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<6;j++)
        {
           if(j>=i) // (i<=j)  (j<=6-i)
             printf("*");
           else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/*

#include<stdio.h>
int main()
{
  //  int i,j;
    for(int i=1;i<=5;i++)
    {   int k=1;
        for(int j=1;j<6;j++)
        {
           if(j>=i) // (i<=j)  (j<=6-i)
             printf("%d",k++);
           else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
  //  int i,j;
    for(int i=1;i<=5;i++)
    {   char k='A';
        for(int j=1;j<6;j++)
        {
           if(j>=i) // (i<=j)  (j<=6-i)
             //printf("%d",k++);  it can print the valueof the particular character of the following 
            printf("%c",k++);
           else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}