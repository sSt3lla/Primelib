#ifndef INTAL_H
#define INTAL_H

struct intal_node {
    struct node *next;
    int val;
};

struct intal {
    struct node *head;
    int digit_amount;
};

struct node* Intal();

void set(struct intal *intal, int value);

#endif
