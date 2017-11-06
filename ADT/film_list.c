/*
 * @Author: zjj 
 * @Date: 2017-11-06 19:34:10 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-11-06 20:02:52
 * @Description: using an ADT-style linked list /
*/

/* This program should compile with list.c */
#include <stdio.h>
#include <stdlib.h> // prototype for exit()
#include "list.h"   // define List, Item

void showmovies(Item item);
char *s_gets(char *st, int n);

int main(void)
{
    List movies;
    Item temp;

    /* initialize */
    InitializeList(&movies);
    if (ListIsFULL(&movies))
    {
        fprintf(stderr, "No memory available! BYE!\n");
        exit(1);
    }

    /* gather and store */
    puts("enter first movie title:");
    while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
    {
        puts("Enter your rating <0-10>:");
        scanf("%d", &temp.rating);
        while (getchar() != '\n')
            continue;
        if (AddItem(temp, &movies) == false)
        {
            fprintf(stderr, "Problem allocating memory\n");
            break;
        }
        if (ListIsFULL(&movies))
        {
            puts("The list is now full.");
            break;
        }
        puts("Enter next movie title (empty line to stop):");
    }

    /* display */
    if (ListIsEmpty(&movies))
        printf("No data entered. \n");
    else
    {
        printf("Here is the movie list:\n");
        Traverse(&movies, showmovies);
    }
    printf("You entered %d movies.\n", ListItemCount(&movies));

    /* clean up */
    EmptyTheList(&movies);
    printf("BYE.\n");

    return 0;
}

void showmovies(Item item)
{
    printf("Movies: %s  Rating: %d\n", item.title, item.rating);
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
