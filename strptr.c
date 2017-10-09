/*
 * @Author: zjj 
 * @Date: 2017-10-09 21:57:34 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-09 22:02:43
 * @Description:  /
*/

#include <stdio.h>

/**
 * %s 输出整个字符串
 * %p 输出字符串地址（第一个字符的地址）
 * %c *"space"输出首个字符  ，，同理，[]索引同样可以使用。。。
 */
int main(void)
{
    printf("%s....%p....%c....%c\n", "We", "are", *"spcce", "spcac"[2]);
}