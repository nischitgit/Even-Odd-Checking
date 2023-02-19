// Even, Odd Checking
// Author - @nischit_ig (Instagram)
#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Zero");
    }
    else if (num % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}
