#include<stdio.h>
 int main () 
{ int n;
printf("plz enter a year those you want to find the leap year or not:");
scanf("%d",&n);
if(n%400==0  || n%4==0)
printf("yes It is a leap year:");
else
printf("it is not a leap year:");
printf("\n");
return 0;
}
