#include<stdio.h>
 int main () {
    int q, s=0;

    do 
    {  
        printf("\nPlz enter any no ");
        scanf(" %d",&q);
        s=s+q;     /// dono round ke condition braber ho jayenge isliye terminate ho jayenge
    
    }
     while(q);{
        printf("\nsum is %d",s);
     }
     printf("\n");
     return 0;
 }