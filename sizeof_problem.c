/*
 * @Author: zjj 
 * @Date: 2017-10-07 12:13:47 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-07 15:36:58
 * @Description: /
*/

/**
 * sizeof 作用在数组名上得到的是整个数组的大小
 * 但作用在指针上得到的是单个指针的大小（本机 8 bytes）
 */

#include <stdio.h>

void test_func(int ar[]);

int main(void)
{
    int marble[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("****************\n");
    printf("the size of marble is %zd bytes.\n", sizeof marble);
    printf("the size of the pointer of marble[0] is %zd bytes.\n", sizeof &marble[0]);
    test_func(marble);
    printf("****************\n");
    printf("\033[31m Hello\n\033[0m"); // just a test of colored output -.-
    return 0;
}

void test_func(int ar[])
{
    printf("the size of ar is %zd bytes..\n", sizeof ar);
}