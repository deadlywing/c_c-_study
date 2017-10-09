/*
 * @Author: zjj 
 * @Date: 2017-10-09 22:33:51 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-09 23:21:16
 * @Description:  /
*/

#include <stdio.h>

#define MSG "hhahahah"

/**
 * 1.  共性：pt和MSG的地址一定是一样的，，，由于pt只是copy了字符串的地址.，，，（都是静态存储类）
 *     然而ar的地址和所有的都不同，因为ar表示法copy了一份字符串到动态内存，并指向了一个新的位置
 * 2.   String literals 的地址与pt和MSG相同，，，（可能是gcc的特性，，换个编译器就不一定了）
 * 3.   动态存储类和静态存储类的地址位数不一样！！！
 */

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