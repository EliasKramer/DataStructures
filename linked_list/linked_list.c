#include "linked_list.h"
#include <stdlib.h>

static int list_is_valid(p_linked_list_t list)
{
    return list != 0 && list->size >= 0;
}

static int node_is_valid(p_node_t node)
{
    return node != 0;
}

static p_node_t create_node(int data)
{
    p_node_t node = malloc(sizeof(struct _node_t));

    if(!node_is_valid(node))
    {
        return 0;
    }

    node->data = data;
    node->next = 0;

    return node;
}

p_linked_list_t create_linked_list()
{
    p_linked_list_t return_value = malloc(sizeof(struct _linked_list_t));
    
    if(return_value == 0)
    {
        return 0;
    }

    return_value->head = 0;
    return_value->tail = 0;
    return_value->size = 0;

    return return_value;
}
void delete_linked_list(p_linked_list_t list)
{
    //TODO
}

void add_front(p_linked_list_t list, int data)
{
    //TODO
}

void add_behind(p_linked_list_t list, int data)
{
    if(!list_is_valid(list))
    {
        return;
    }

    p_node_t added_node = create_node(data);

    if(!node_is_valid(added_node))
    {
        return;
    }

    if(list->head == 0)
    {
        list->head = added_node;
    }

    if(list->tail == 0)
    {
        list->tail = added_node;
    }
    else
    {
        list->tail->next = added_node;
    }
}

void delete_front(p_linked_list_t list)
{
    //TODO
}

void delete_behind(p_linked_list_t list)
{
    //TODO
}

void clear(p_linked_list_t list)
{
    //TODO
}

void delete_first_match(p_linked_list_t list, int data)
{
    //TODO
}

void delete_all_matches(p_linked_list_t list, int data)
{
    //TODO
}

int pop_head(p_linked_list_t list)
{
    //TODO
    return 0;
}
int peek_head(p_linked_list_t list)
{
    //TODO
    return 0;
}

int get_first(p_linked_list_t list)
{
    //TODO
    return 0;
}
int get_last(p_linked_list_t list)
{
    //TODO
    return 0;
}

int get_at_idx(p_linked_list_t list, int idx)
{
    //TODO
    return 0;
}

void reverse(p_linked_list_t list)
{
    //TODO
}