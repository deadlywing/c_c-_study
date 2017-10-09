/*
 * @Author: zjj 
 * @Date: 2017-10-09 23:44:32 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-09 23:57:09
 * @Description: Array of pointers and array of strings /
*/

#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
    // an array of pointers
    const char *mytalents[LIM] = {
        "adding number swiftly",
        "multiplying  swiftly", "statein data",
        "FOllong sdfl", "lsjcnvds ds"};

    char yourtalents[LIM][SLEN] = {
        "sdlfjds", "sdlfjksdc df",
        "coklq", "lcowqnm,fnvod",
        "jl dlsin, d"};
    int i;

    printf("%-36s %-25s\n", "Mytalents", "yourtalents");
    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", mytalents[i], yourtalents[i]); // printf 中需要的就是char的指针，，所以不需要加* !!

    return 0;
}
