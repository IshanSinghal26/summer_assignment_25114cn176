#include<stdio.h>
int main()
{
    int i,j,start,end,c;
    printf("enter first number and second number:");
    scanf("%d %d",&start,&end);
    printf("prime numbers in this range are:\n");
    for(i=start;i<=end;i++)
    { if(i<2)
        continue;
        for(j=2;j<i;j++)
        { 
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d\n",i);
        }
        }
        return 0;
    }
