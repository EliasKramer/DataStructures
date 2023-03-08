#include <stdio.h>
#include "linked_list.h"

int main(int argc, char const *argv[])
{
    p_linked_list_t ll = create_linked_list();
    
    printf("\nadding front and back");
    add_front(ll, 4);
    add_front(ll, 3);
    add_behind(ll, 5);
    add_front(ll, 2);
    add_front(ll, 1);
    print_list(ll);

    printf("\nremove front");
    remove_front(ll);
    print_list(ll);

    printf("\nremove behind");
    remove_behind(ll);
    print_list(ll);

    printf("\nclear list");
    clear_list(ll);
    print_list(ll);

    printf("\nadd new elements");
    add_behind(ll, 11);
    add_behind(ll, 12);
    add_behind(ll, 13);
    add_behind(ll, 14);
    add_behind(ll, 15);
    print_list(ll);

    printf("\nremove first 11");
    delete_first_match(ll, 11);
    print_list(ll);

    printf("\nremove first 13");
    delete_first_match(ll, 13);
    print_list(ll);
    
    printf("\nremove first 15");
    delete_first_match(ll, 15);
    print_list(ll);

    printf("\nadd new data");
    add_behind(ll, 13);
    add_behind(ll, 11);
    add_behind(ll, 13);
    add_front(ll, 13);
    print_list(ll);
    
    printf("\ndelete all 13");
    delete_all_matches(ll, 13);
    print_list(ll);

    

    return 0;
}

//compile with this command:
//gcc -o demo linked_list_demo.c linked_list.c && ./demo