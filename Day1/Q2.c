#include<stdio.h>
int main()
{
    int n,i,m;

    printf("enter the number:");
    scanf("%d",&n);
    printf("multiplication table:\n");
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%d*%d=%d\n",n,i,m);
    }
    return 0;

}