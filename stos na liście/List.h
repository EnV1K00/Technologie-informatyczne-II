#ifndef LISTAWP_LIST_H
#define LISTAWP_LIST_H

/* --------- ERROR CODES ---------- */
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/* ---------- STACK INTERFACE ---------- */

int push(int element);
int pop(int* out);
int top(int* out);
int isEmpty();

/* ---------- INSERTING ---------- */

int insertFront(int element);
int insertBack(int element);
int insertAfterNode(int index, int element);

/* ---------- DELETING ---------- */

int deleteFront();
int deleteBack();
int deleteNode(int index);

/* ---------- OTHER ---------- */

int searchList(int key);
void printList(void);
int getNodesCount();

#endif //LISTAWP_LIST_H
