#include <stdio.h>
#include "linked_list.h"

int main(int argc, char const *argv[])
{
    p_linked_list_t ll = create_linked_list();
    
    add_behind(ll, 5);

    printf("first %d\n", ll->head->data);

    return 0;
}

//compile with this command:
//gcc -o demo linked_list_demo.c linked_list.c && ./demo