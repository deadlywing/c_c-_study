/*
 * @Author: zjj 
 * @Date: 2017-11-06 20:04:18 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-11-06 20:39:30
 * @Description: functions supporting list operations /
*/

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* local function prototype */
static void CopyToNode(Item item, Node *pnode);

/* interface functions */

/* set the list to empty */
void InitializeList(List *plist)
{
    *plist = NULL;
}

bool ListIsEmpty(const List *plist)
{
    if (*plist == NULL)
        return true;
    else
        return false;
}

bool ListIsFULL(const List *plist)
{
    Node *pt;
    bool full;

    pt = (Node *)malloc(sizeof(Node));
    if (pt == NULL)
        full = true;
    else
        full = false;
    free(pt);

    return full;
}

unsigned int ListItemCount(const List *plist)
{
    unsigned int count = 0;
    Node *pnode = *plist; // set to start of list

    while (pnode != NULL)
    {
        ++count;
        pnode = pnode->next;
    }

    return count;
}

/*
creates node to hold item and adds it to the end of the
list pointed to by plist(slow implementation)
*/
bool AddItem(Item item, List *plist)
{
    Node *pnew;
    Node *scan = *plist;

    pnew = (Node *)malloc(sizeof(Node));
    if (pnew == NULL)
        return false;

    CopyToNode(item, pnew);
    pnew->next = NULL;
    /* empty list, so put pnew at head of list */
    if (scan == NULL)
        *plist = pnew;
    else
    {
        while (scan->next != NULL)
            scan = scan->next; //find end of list
        scan->next = pnew;     // add pnew to end
    }

    return true;
}

void Traverse(const List *plist, void (*pfun)(Item item))
{
    Node *pnode = *plist; // set to start of list

    while (pnode != NULL)
    {
        (*pfun)(pnode->item);
        pnode = pnode->next;
    }
}

void EmptyTheList(List *plist)
{
    Node *psave;

    while (*plist != NULL)
    {
        psave = (*plist)->next; //save address of next node
        free(*plist);
        *plist = psave; // advance to next node
    }
}

/*  copy an item into a node */
static void CopyToNode(Item item, Node *pnode)
{
    pnode->item = item;
}