#include "shadow.h"
#include "stdio.h"

int main()
{
    Shadow_user u1 = shadow_user_new(3,9);

    Shadow_user u2 = shadow_user_new(1,5);

    u1.print(u1.s);
    u2.print(u2.s);

    u1.set_y(u1.s,7);
    u2.set_x(u2.s,42);

    u1.print(u1.s);
    u2.print(u2.s);

    u1.free_shadow(&u1);
    u2.free_shadow(&u2);

    return 0;
}