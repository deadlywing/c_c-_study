/*
 * @Author: zjj 
 * @Date: 2017-10-07 15:37:23 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-07 16:03:34
 * @Description:  /
*/

#include <stdio.h>

int main(void)
{
    int a = 10;
    int *pti = &a;
    int b[5] = {1, 2, 3, 4, 5};
    int *ptarri = b;
    int *c = ptarri + 1;

    printf("***************************************************\n");
    printf("the address of a is %p ...\n", pti);
    printf("the address of pointer of a is %p ...\n", &pti);
    printf("the address of b is %p ...\n", ptarri);
    printf("the address of pointer of b is %p ...\n", &ptarri);
    printf("\n");
    printf("the address of pointer to b[1] is %p ...\n", &c);
    printf("\n");
    printf("the size of pointer to pointer is %zd ..\n", sizeof &ptarri);
    printf("***************************************************\n");
    printf("\n");

    printf("***************************************************\n");

    // after some dispose of variable ;;;
    a = 20;
    pti = &a;
    ptarri++;

    printf("the address of a is %p ...\n", pti);
    printf("the address of pointer of a is %p ...\n", &pti);
    printf("the address of b is %p ...\n", ptarri);
    printf("the address of pointer of b is %p ...\n", &ptarri);
    printf("***************************************************\n");
    return 0;
}