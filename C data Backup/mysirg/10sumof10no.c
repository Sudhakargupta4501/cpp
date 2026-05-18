#include<stdio.h>
int main()
{

    int i,s=0,n;
    printf("please enter a no:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
         s=s+i;

    }
        printf("%d\n",s );
    return 0;
}