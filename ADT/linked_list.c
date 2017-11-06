/*
 * @Author: zjj 
 * @Date: 2017-11-06 16:16:29 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-11-06 18:01:32
 * @Description: use linked list of structures /
*/

#include <stdio.h>
#include <stdlib.h> // have the malloc prototype
#include <string.h> // have the strcpy prototype
#define TSIZE 45    // size of array to hold title

struct film
{
    char title[TSIZE];
    int rating;
    struct film *next; // points to next struct in list
};

char *s_gets(char *st, int n);

int main(void)
{
    struct film *head = NULL; // head pointer
    struct film *prev, *current;
    char input[TSIZE];

    /* Gather and store information */
    puts("enter first movie title:");
    while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
    {
        current = (struct film *)malloc(sizeof(struct film));
        if (head == NULL)
            head = current;
        else
            prev->next = current;

        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>:");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }

    /* show list of movies */
    if (head == NULL)
        printf("NO data entered.\n");
    else
        printf("Here is the movie list:\n");

    current = head;
    while (current != NULL)
    {
        printf("Movie: %s  Rating: %d\n", current->title, current->rating);
        current = current->next;
    }

    /* program done, so free allocated memory..VERY IMPORTANT PROCEDURE!!! */
    current = head;
    while (current != NULL)
    {
        free(current);
        current = current->next;
    }

    printf("Bye\n");
    return 0;
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
