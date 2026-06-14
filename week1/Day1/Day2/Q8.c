#include<stdio.h>
int main()
{
    int n,n1,rev=0,r;
    printf("enter a number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(n1==rev)
    {
        printf("palindrome number");

    }
    else
    {
        printf("not a palindrome number");
    }
    return 0;
}