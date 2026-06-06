#include<stdio.h>
int main()
{
    int n,r,res=0,c=1;
    printf("enter a decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        if(r==1)
        res=res+c;
        
        n=n/2;
        c=c*10;
    }
    printf("%d",res);
    return 0;
}