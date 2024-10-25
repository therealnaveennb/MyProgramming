#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    int sum = 1, prev = 0;

    while (n--)
    {
        int temp = sum;
        sum = (sum * sum) + (prev * prev);
        prev = temp;
    }
    printf("%d | %d", sum, sum % 47);
}