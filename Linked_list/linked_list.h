#pragma once

#include <stdlib.h>
#include "heap.h"

typedef enum
{
    INT,
    STRING,
}
Data_type;


typedef struct
{
    Data_type type;
    size_t size;
    void *data;
}
Data_struct;


typedef struct Node
{
    struct Node *prev;
    struct Node *next;
    Data_struct *data_struct;
}
Node;


typedef struct Linked_list
{

    Node *head;
    Node *tail;
    Node *ptr;
    int count;

    int (*append)(void *d, size_t s, Data_type t, Heap *h, struct Linked_list *l);
    int (*append_at)(void *d, size_t s, Data_type t, Heap *h, int index, struct Linked_list *l);
    int (*remove_at)(int index, struct Linked_list *l);
    int (*print_list)(struct Linked_list *l);
    Node *(*create_new_node)(void *data, size_t size, Data_type t, Heap *h);
} 
Linked_list;


Linked_list new_linked_list();