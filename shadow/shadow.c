#include "shadow.h"
#include "stdlib.h"
#include "stdio.h"

struct Shadow
{
    int x;
    int y;
};

int get_x(Shadow *s)
{
    if (!s) return -1;

    return s->x;
}

int get_y(Shadow *s)
{
    if (!s) return -1;

    return s->y;
}

void set_x(Shadow *s, int x)
{
    if (!s) return;

    s->x = x;
}

void set_y(Shadow *s, int y)
{
    if (!s) return;

    s->y = y;
}

void print(Shadow *s)
{
    if (!s) return;

    printf("x: %d, y: %d\n", s->x, s->y);

    printf("\n");
}

void free_shadow(Shadow_user *u)
{
    if(!u || !u->s) return;

    free(u->s);
}

Shadow_user shadow_user_new(int x, int y)
{
    Shadow_user u;

    u.s = malloc(sizeof(Shadow));

    u.s->x = x;
    u.s->y = y;

    u.get_x = get_x;
    u.get_y = get_y;
    u.set_x = set_x;
    u.set_y = set_y;
    u.print = print;
    u.free_shadow = free_shadow;

    return u;
}