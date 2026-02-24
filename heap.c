
#include "heap.h"


void *alloc(void *data, size_t size, Heap *h)
{
    if(!h || !h->memory) return NULL;

    if (h->ptr + size > h->total_size) return NULL;

    void *adresse = (void *) &h->memory[h->ptr];

    for (size_t i = 0; i < size; i++)
    {
        h->memory[h->ptr++] = ((char *)data)[i];
    }

    return adresse;
}

Heap new_heap(char *memory, size_t size)
{
    Heap h;

    h.memory = memory;
    h.total_size = size;
    h.ptr = 0;

    h.alloc = alloc;

    return h;
}