#ifndef LISTAWP_LIST_H
#define LISTAWP_LIST_H

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/* ---------- QUEUE INTERFACE ---------- */

int enqueue(int element);     // add to back
int dequeue(int* out);        // remove from front
int front(int* out);          // get front element
int isEmptyQueue();           // check if queue is empty

/* ---------- LIST BASIC ---------- */

int insertFront(int element);
int insertBack(int element);
int deleteFront();
int deleteBack();
void printList(void);
int getNodesCount();

#endif //LISTAWP_LIST_H
