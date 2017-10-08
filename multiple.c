/*
 * @Author: zjj 
 * @Date: 2017-10-06 19:59:37 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-06 20:37:02
 */

#include <stdio.h>
#include "hotel.h"

int main(void)
{
    int nights;
    double hotel_rate;
    int code;

    while ((code = menu()) != QUIT)
    {
        switch (code)
        {
        case 1:
            hotel_rate = HOTEL1;
            break;
        case 2:
            hotel_rate = HOTEL2;
            break;
        case 3:
            hotel_rate = HOTEL3;
            break;
        case 4:
            hotel_rate = HOTEL4;
            break;
        default:
            hotel_rate = 0.0;
            printf("OOOPS!\n");
            break;
        }

        nights = getnights();
        showprice(hotel_rate, nights);
    }

    printf("Thank you and Goodbye!\n");

    return 0;
}
