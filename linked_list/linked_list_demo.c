#include <stdio.h>
#include "linked_list.h"

int main(int argc, char const *argv[])
{
    p_linked_list_t ll = create_linked_list();
    
    printf("\n");
    printf("adding front and back");
    add_front(ll, 4);
    add_front(ll, 3);
    add_behind(ll, 5);
    add_front(ll, 2);
    add_front(ll, 1);
    print_list(ll);

    printf("\n");
    printf("remove front");
    remove_front(ll);
    print_list(ll);

    printf("\n");
    printf("remove behind");
    remove_behind(ll);
    print_list(ll);

    printf("\n");
    printf("clear list");
    clear_list(ll);
    print_list(ll);

    printf("\n");
    printf("add new elements");
    add_behind(ll, 11);
    add_behind(ll, 12);
    add_behind(ll, 13);
    add_behind(ll, 14);
    add_behind(ll, 15);
    print_list(ll);

    printf("\n");
    printf("remove first 11");
    delete_first_match(ll, 11);
    print_list(ll);

    printf("\n");
    printf("remove first 13");
    delete_first_match(ll, 13);
    print_list(ll);
    
    printf("\n");
    printf("remove first 15");
    delete_first_match(ll, 15);
    print_list(ll);

    printf("\n");
    printf("add new data");
    add_behind(ll, 13);
    add_behind(ll, 11);
    add_behind(ll, 13);
    add_front(ll, 13);
    print_list(ll);
    
    printf("\n");
    printf("delete all 13");
    delete_all_matches(ll, 13);
    print_list(ll);

    printf("\n");
    printf("pop head");
    int value = pop_head(ll);
    printf("\n");
    printf("ret val: %d", value);
    print_list(ll);

    printf("\n");
    printf("get first");
    value = get_first(ll);
    printf("\n");
    printf("ret val: %d", value);
    print_list(ll);

    printf("\n");
    printf("get last");
    value = get_last(ll);
    printf("\n");
    printf("ret val: %d", value);
    print_list(ll);

    printf("\n");
    printf("add new data");
    add_behind(ll, 13);
    add_behind(ll, 11);

    printf("\n");
    printf("get at idx 2");
    value = get_at_idx(ll, 2);
    printf("\n");
    printf("ret val: %d", value);
    print_list(ll);

    printf("\n");
    printf("reverse");
    reverse(ll);
    print_list(ll);

    return 0;
}

//compile with this command:
//gcc -o demo linked_list_demo.c linked_list.c && ./demo