#include <stdio.h>
void main()
{
    int number;
    int number1;
    int result;
    for (number = 2; number <= 9; number++)
    {
        for (number1 = 1; number1 <= 10; number1++)
        {
            result = number*number1;
            printf("%d x %d = %d\n",number,number1,result);
        }
        printf("\n\n");
    }
}
