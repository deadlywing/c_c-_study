/*
 * @Author: zjj 
 * @Date: 2017-09-26 13:55:28 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-09-26 13:55:48
 */

#include <stdio.h>

int main(void)
{
    int sum = 0;
    int num;
    int status;

    printf("please enter the integer to be summed ");
    printf("(q to quit):");
    // status = scanf("%d", &num);
    while (scanf("%d", &num) == 1)
    {
        sum += num;
        printf("please enter the integer to be summed ");
        // status = scanf("%d", &num);
    }
    printf("THose numbers add up to %d.\n", sum);

    return 0;
}
