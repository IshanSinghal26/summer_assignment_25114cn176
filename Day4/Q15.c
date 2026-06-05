#include<stdio.h>
#include<math.h>
int main()
{
    int r,c=0,n,n1,s=0,n2;
        printf("enter a number:");
    scanf("%d",&n);
    n1=n;
    n2=n1;
    
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    while(n1!=0)
    {
        r=n1%10;
        s=s+pow(r,c);
        n1=n1/10;
    }
    if(n2==s)
    {
        printf("it is a armstrong number.");
    }
    else
    {
        printf("it is not a armstrong number.");
    }
    return 0;
}