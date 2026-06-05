#include<stdio.h>
#include<math.h>

int main()
{
    int n,start,end,n1,n2,r,s,i,c;

    printf("Enter range (start end): ");
    scanf("%d %d",&start,&end);

    printf("\nArmstrong numbers in this range:\n");

    for(i=start;i<=end;i++)
    {
        n=i;
        n1=n;
        n2=n;
        s=0;
        c=0;

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
            printf("%d ",n2);
        }
    }

    return 0;
}