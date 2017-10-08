/*
 * @Author: zjj 
 * @Date: 2017-10-06 21:22:33 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-06 21:32:30
 * @Description: Use designated initializers 
 * */

#include <stdio.h>
#define MONTH 12

int main(void)
{
    /**
     *  若是一个位置被多次赋值，，赋值的结果是最后一次的值！
     */
    int day[MONTH] = {31, 28, [4] = 31, 30, 31, [1] = 29}; // 28被29覆盖了！！
    int i;

    for (i = 0; i < MONTH; i++)
    {
        printf("%2d   %d\n", i + 1, day[i]);
    }

    return 0;
}