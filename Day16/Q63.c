#include <stdio.h>

int main()
{
    int arr[100], n, sum;
    int i, j, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0)
        printf("No pair found.");

    return 0;
}