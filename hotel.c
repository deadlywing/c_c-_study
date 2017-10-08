/*
 * @Author: zjj 
 * @Date: 2017-10-06 20:50:47 
 * @Last Modified by:   zjj 
 * @Last Modified time: 2017-10-06 20:50:47 
 */

#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code;
    int status;

    /**
     * use the comment plgin ,just input /**
     * show the menu table
     */
    printf("\n%s%s\n", STARS, STARS);
    printf("ENter the number of your desired hotel:\n");
    printf("1) Fairfield Arms        2) Hotel Olympic\n");
    printf("3) Chertworthy Plazy     4) The Stockton\n");
    printf("5) Quit");
    printf("\n%s%s\n", STARS, STARS);

    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
            scanf("%*s");
        printf("Please enter an integer from 1 to 5!!\n");
    }

    return code;
}

int getnights(void)
{
    int nights;

    printf("how many nights do you need? ");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s");
        printf("please enter an integer, such as 2\n");
    }

    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
        total += rate * factor;

    printf("The total cost will be $%0.2f.\n", total);
}