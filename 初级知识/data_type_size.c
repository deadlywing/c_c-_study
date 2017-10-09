/*
 * @Author: zjj 
 * @Date: 2017-10-07 10:08:28 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-07 16:28:02
 * @Description: Show how many bytes in my computer for every data types... /
*/

#include <stdio.h>

/**
 * units: bytes
 * int : 4
 * short : 2
 * char : 1
 * long : 8
 * long long : 8
 * float : 4
 * double : 8
 * unsigned : 4
 * pointer : 8 
 */

int main(void)
{
    int *pti;
    double *ptb;
    printf("the size of pti is %zd..\n", sizeof(pti));
    printf("the size of ptb is %zd..\n", sizeof(ptb));
    printf("\n");
    printf("the size of short is %zd..\n", sizeof(short));
    printf("the size of int is %zd..\n", sizeof(int));
    printf("the size of long is %zd..\n", sizeof(long));
    printf("the size of long long is %zd..\n", sizeof(long long));
    printf("the size of float is %zd..\n", sizeof(float));
    printf("the size of double is %zd..\n", sizeof(double));
    printf("the size of unsigned is %zd..\n", sizeof(unsigned));
    printf("the size of char is %zd..\n", sizeof(char));
}