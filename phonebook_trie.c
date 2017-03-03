#include <stdlib.h>
#include "phonebook_trie.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastName[], entry *pHead)
{
    /* TODO: implement */
    while(pHead != NULL) {
        if((!(*lastName)))
            if (pHead->isword)
                return pHead;
            else
                return NULL;

        pHead = pHead->pNext[(*lastName)-'a'];
        lastName++;
    }

    return NULL;
}

entry *append(char lastName[], entry *e)
{
    /* allocate memory for the new entry and put lastName */
//    e = (entry *) malloc(sizeof(entry));
    entry *p;
    p = e;
    char *tmp = lastName ;
    while((*tmp)) {
        if(p->pNext[(*tmp)-'a'] == NULL) {
            p->pNext[(*tmp)-'a'] = (entry *) malloc(sizeof(entry));
            p->pNext[(*tmp)-'a']->isword = 0;
        }
        p = p->pNext[(*tmp)-'a'];
        tmp++;
    }
    p->isword = 1;
//    strcpy(p->lastName, lastName);
//    e->more = (detail *) malloc(sizeof(detail));
    return e;
}
