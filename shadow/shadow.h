#pragma once

typedef struct Shadow Shadow;

typedef struct Shadow_user
{
    Shadow *s;

    int (*get_x)(Shadow *s);
    int (*get_y)(Shadow *s);
    void (*set_x)(Shadow *s, int x);
    void (*set_y)(Shadow *s, int y);
    void (*print)(Shadow *s);
    void (*free_shadow)(struct Shadow_user *u);
}   
Shadow_user;

Shadow_user shadow_user_new(int x, int y);

