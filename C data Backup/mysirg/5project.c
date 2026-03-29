                // tis is for the comparrion of the triangle
#include<stdio.h>
 int main () 
 {
    int a,b,c;
    printf("plz enter any no: ");
    scanf("%d",&a);
    
    printf("plz enter any no: ");
    scanf("%d",&b);
    
    printf("plz enter any no: ");
    scanf("%d",&c);
    if(a+b>c && c+b>a && a+c>b)
    printf("\n print yes you can make a triangle og the given side of length:");
    else
    printf("!!Sorry it is not possible to make a triangle of the given length of side;");
   printf("\n");
   return 0;

 }