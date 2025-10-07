#include <stdio.h>
int main()
{
    int num, digit = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        num /= 10;
        digit++;
    }

    printf("Total number of digits: %d", digit);
    return 0;
}
