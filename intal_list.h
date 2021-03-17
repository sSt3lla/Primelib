#ifndef INTAL_LIST_H
#define INTAL_LIST_H
#include "intal.h"

struct intal_list_node {
    struct intal_list_node *next;
    struct intal intal;
    

};

struct intal_list {
    struct intal_list_node *head;
    int digit_count;
};

void push(struct intal_list *intal_list, int value);
#endif
