/*
 * @Author: zjj 
 * @Date: 2017-10-13 22:10:34 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-13 22:17:42
 * @Description:  /
*/

#include <stdio.h>

int main(void)
{
    int i = 10;
    printf("the address of i is : %p\n", &i);

    for (int i = 1; i < 4; i++)
    {
        printf("the number of i is : %d\n, the adress of i is:  %p\n", i++, &i);
    }

    printf("the number of i is : %d\n, the adress of i is:  %p\n", i, &i);

    return 0;
}