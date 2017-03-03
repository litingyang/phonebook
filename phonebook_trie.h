#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16

/* TODO: After modifying the original version, uncomment the following
 * line to set OPT properly */
#define TRIE 1
typedef struct __PHONE_BOOK_ENTRY {
//    char lastName[MAX_LAST_NAME_SIZE];
    int isword;
    struct more_info *more;
    struct __PHONE_BOOK_ENTRY *pNext[26];
} entry;

typedef struct more_info {
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];

} detail;

entry *findName(char lastName[], entry *pHead);
entry *append(char lastName[], entry *e);

#endif
