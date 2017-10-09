/*
 * @Author: zjj 
 * @Date: 2017-10-09 22:33:51 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-09 22:40:37
 * @Description:  /
*/

#include <stdio.h>

#define MSG "hhahahah"

int main(void)
{
    char ar[] = MSG;
    const char *pt = MSG;
    printf("the address of MSG : %p  \n", "hhahahah");
    printf("        address ar : %p  \n", ar);
    printf("        address pt : %p  \n", pt);
    printf("        address MSG : %p  \n", MSG);
    printf("the address of MSG : %p  \n", "hhahahah");

    return 0;
}