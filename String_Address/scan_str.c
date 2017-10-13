/*
 * @Author: zjj 
 * @Date: 2017-10-11 14:45:09 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-11 15:10:57
 * @Description:  /
*/

#include <stdio.h>

int main(void)
{
    char name1[11];
    char name2[11];
    int count;

    printf("Please enter 2 names. \n");
    // scanf 和 gets 一样有overflow的危险，但是scanf可以通过%ns来指定最大读入字符数。
    count = scanf("%5s %10s", name1, name2); // 达到最大数目或遇到第一个空白符为止
    printf("I read the %d names %s and %s.\n", count, name1, name2);

    return 0;
}