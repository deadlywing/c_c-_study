/*
 * @Author: zjj 
 * @Date: 2017-10-08 10:38:37 
 * @Last Modified by:   zjj 
 * @Last Modified time: 2017-10-08 10:38:37 
 * @Description:  /
*/

#include <stdio.h>
#define SIZE 5

void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult); // no const

int main(void)
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

    printf("The original dip array : \n");
    show_array(dip, SIZE);
    mult_array(dip, SIZE, 2.5);
    printf("The dip array now is : \n");
    show_array(dip, SIZE);

    return 0;
}

/* displays array contents , use const to inforce read-only*/
void show_array(const double ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%8.3f ", ar[i]);
    }
    putchar('\n');
}

/* multiply each array element with same multipler */
void mult_array(double ar[], int n, double mult)
{
    int i;
    for (i = 0; i < n; i++)
        ar[i] *= mult;
}