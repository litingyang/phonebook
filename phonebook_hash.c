#include <stdlib.h>
#include "phonebook_hash.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastName[], entry *pHead)
{
    /* TODO: implement */
    while(pHead != NULL) {
        if (strcasecmp(lastName, pHead->lastName) == 0)
            return pHead;
        pHead = pHead->pNext;
    }
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    /* allocate memory for the new entry and put lastName */
    e->pNext = (entry *) malloc(sizeof(entry));
    e = e->pNext;
    strcpy(e->lastName, lastName);
//    e->more = (detail *) malloc(sizeof(detail));
    e->pNext = NULL;

    return e;
}

unsigned int hash(char lastName[])
{
    unsigned int sum = 1;
    while(*lastName) {
        sum = ( sum + (sum << 2 + sum) * (*(lastName)) ) % MOD;

        lastName++;
    }
    return sum;
}