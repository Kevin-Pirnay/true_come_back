#include "heap.h"
#include "linked_list.h"

#define MEMORY_ALLOCATED 10000 //allocate in bytes

int main()
{
    char MEMORY[MEMORY_ALLOCATED];

    Heap h = new_heap(MEMORY, MEMORY_ALLOCATED);

    Linked_list l = new_linked_list();

    int a,b,c,d,e;

    a = 1; b = 19; c = 36; d = 42;

    char str1[] = "Hello world"; char str2[] = "this is a test";
    char str3[] = "world hello"; char str4[] = "test it is";


    l.append(str1, sizeof(str1), STRING, &h, &l);
    l.append(&a, sizeof(int), INT, &h, &l);
    l.append(&b, sizeof(int), INT, &h, &l);
    l.append(str2, sizeof(str2), STRING, &h, &l);

    l.print_list(&l);

    l.append_at(str3, sizeof(str3), STRING, &h, 2, &l);
    l.append_at(&c, sizeof(int), INT, &h, 1,&l);
    l.append_at(&d, sizeof(int), INT, &h, 5, &l);
    l.append_at(str4, sizeof(str4), STRING, &h, 0, &l);

    l.print_list(&l);

    l.remove_at(5,&l);

    l.print_list(&l);

    return 0;
}