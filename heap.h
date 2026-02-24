#pragma once

#include <stdlib.h>

typedef struct Heap
{
    char *memory;

    size_t ptr;

    size_t total_size;

    void *(*alloc) (void *data, size_t size, struct Heap *h);
}
Heap;

Heap new_heap(char *memory, size_t size);
