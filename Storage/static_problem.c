/*
 * @Author: zjj 
 * @Date: 2017-10-14 00:00:17 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-14 00:08:46
 * @Description:  /
*/

#include <stdio.h>

static int total; // automatically assigned to 0
void accumulate(int k);

int main(void)
{
    int value;

    while (scanf("%d", &value) == 1 && value > 0)
    {
        for (int i = value; i >= 0; i--)
            accumulate(i);
    }

    return 0;
}

void accumulate(int k)
{
    static int subtotal; // automatically assigned to 0 ?

    subtotal += k;
    total += k;

    printf("the number of total is : %d\n", total);
    printf("the number of subtotal is : %d\n", subtotal);
}