#include <stdio.h>
int rev = 0;
void reverse(int n) 
{
    if (n == 0)
        return;

    rev = rev * 10 + n % 10;
    reverse(n / 10);
}
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse(n);
    printf("Reversed number = %d", rev);
    return 0;
}