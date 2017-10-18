/*
 * @Author: zjj 
 * @Date: 2017-10-18 15:47:40 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-18 16:33:17
 * @Description: use array of structures! /
*/

#include <stdio.h>
#include <string.h>
#include "s_gets.h"
#define MAXTITL 40 //the max bytes of title
#define MAXAUTL 40 // the max bytes of author
#define MAXBKS 100 // the max numbers of books

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS]; //array of book structures
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("please [Enter] at the start of a line to stop.\n");

    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("Please enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);

        while (getchar() != '\n')
            continue;

        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }

    if (count > 0)
    {
        printf("Here is the list of books:\n");
        for (index = 0; index < count; index++)
        {
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        }
    }

    else
        printf("No books? Too bad!!\n");

    return 0;
}
