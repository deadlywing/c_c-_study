/*
 * @Author: zjj 
 * @Date: 2017-10-06 20:03:06 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-06 20:06:06
 */

// define some important parameters
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "****************************"

// function prototype

// show list of choices
int menu(void);

// returns number of nights desired
int getnights(void);

//show the total price
void showprice(double rate, int nights);
