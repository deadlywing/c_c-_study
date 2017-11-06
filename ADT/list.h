/*
 * @Author: zjj 
 * @Date: 2017-11-06 19:03:55 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-11-06 19:29:16
 * @Description: header file for a simple list type /
*/

#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

#define TSIZE 45 // size of array to hold title
struct film
{
    char title[TSIZE];
    int rating;
};
/**general type definition */
typedef struct film Item;

typedef struct node
{
    Item item;
    struct node *next;
} Node;

typedef Node *List;

/**function prototypes */

void InitializeList(List *plist);

bool ListIsEmpty(const List *plist);

bool ListIsFULL(const List *plist);

unsigned int ListItemCount(const List *plist);

/**
 * operation:       add item to end of list
 * preconditons:    item is an item to be added to list
 *                  plist points to an initialized list
 * postconditions:  if possible, function adds item to end
 *                  of list and return True; otherwise the 
 *                  function returns False
 */
bool AddItem(Item item, List *plist);

/**
 * operations:       apply a function to each item in list
 *                   plist points to an initialized list
 *                   pfun points to a function that takes
 *                   an Item argument and has no return value
 * postconditons:    the function pointed to by pfun is executed
 *                   once for each item in the list
 */
void Traverse(const List *plist, void (*pfun)(Item item));

void EmptyTheList(List *plist);

#endif