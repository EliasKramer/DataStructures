#include <stdio.h>
#include "linked_list.h"

int main(int argc, char const *argv[])
{
    p_linked_list_t ll = create_linked_list();
    
    add_front(ll, 4);
    add_front(ll, 3);
    add_behind(ll, 5);
    add_front(ll, 2);
    add_front(ll, 1);
    print_list(ll);

    remove_front(ll);
    print_list(ll);

    remove_behind(ll);
    print_list(ll);

    return 0;
}

//compile with this command:
//gcc -o demo linked_list_demo.c linked_list.c && ./demo