#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

static int list_is_valid(p_linked_list_t list)
{
    return list != 0 && list->size >= 0;
}

static p_node_t create_node(int data)
{
    p_node_t node = malloc(sizeof(struct _node_t));

    if(node == 0)
    {
        return 0;
    }

    node->data = data;
    node->next = 0;

    return node;
}

static void delete_node(p_node_t node)
{
    if(node == 0)
    {
        return;
    }

    free(node);
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
    clear_list(list);
    free(list);
}

int get_size(p_linked_list_t list)
{
    if(!list_is_valid(list))
    {
        return 0;
    }
    return list->size;
}

void print_list(p_linked_list_t list)
{
    if(!list_is_valid(list))
    {
        return;
    }

    p_node_t current = list->head;

    printf("\nList (size: %d): ", list->size);
    while(current)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void add_front(p_linked_list_t list, int data)
{
    if(!list_is_valid(list))
    {
        return;
    }

    p_node_t node = create_node(data);

    //node could not be created
    if(node == 0)
    {
        return;
    }

    if(list->tail == 0)
    {
        list->tail = node;
    }

    //if the head exists, copy the head to the node next pointer
    if(list->head != 0)
    {
        node->next = list->head;
    }

    list->head = node;

    list->size++;
}

void add_behind(p_linked_list_t list, int data)
{
    if(!list_is_valid(list))
    {
        return;
    }

    p_node_t node = create_node(data);

    //node could not be created
    if(node == 0)
    {
        return;
    }

    if(list->head == 0)
    {
        list->head = node;
    }

    if(list->tail == 0)
    {
        list->tail = node;
    }
    else
    {
        list->tail->next = node;
        list->tail = node;
    }

    list->size++;
}

void remove_front(p_linked_list_t list)
{
    if(!list_is_valid(list) || list->size == 0)
    {
        return;
    }

    p_node_t node_to_delete = list->head;
    
    //if the element is the last in the list
    if(list->head == list->tail)
    {
        list->tail = 0;
    }
    list->head = list->head->next;

    delete_node(node_to_delete);
    list->size--;
}

void remove_behind(p_linked_list_t list)
{
    if(!list_is_valid(list) || list->size == 0)
    {
        return;
    }

    p_node_t node_to_delete = list->tail;
    
    //if the element is the last in the list
    if(list->head == list->tail)
    {
        list->head = 0;
        list->tail = 0;
    }
    else
    {
        //iterate over the list until the element before the tail
        p_node_t current = list->head;
        while(current->next != list->tail)
        {
            current = current->next;
        }
        //remove the reference to the tail
        current->next = 0;
        //set new tail
        list->tail = current;
    }

    delete_node(node_to_delete);
    list->size--;
}

void clear_list(p_linked_list_t list)
{
    if(!list_is_valid(list) || list->size == 0)
    {
        return;
    }

    p_node_t curr = list->head;
    while(curr)
    {
        p_node_t node_to_delete = curr;
        curr = curr->next;
        delete_node(node_to_delete);
    }

    list->head = 0;
    list->tail = 0;
    list->size = 0;
}

void delete_first_match(p_linked_list_t list, int data)
{
    if(!list_is_valid(list) || list->size == 0)
    {
        return;
    }

    //remove head
    if(list->head->data == data)
    {
        remove_front(list);
        return;
    }

    p_node_t curr = list->head->next;
    p_node_t prev = list->head;

    while (curr)
    {
        if(curr->data == data)
        {
            if(curr == list->tail)
            {
                remove_behind(list);
            }
            else{
                prev->next = curr->next;
                delete_node(curr);
                list->size--;
            }
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void delete_all_matches(p_linked_list_t list, int data)
{
    if(!list_is_valid(list) || list->size == 0)
    {
        return;
    }

    p_node_t curr = list->head->next;
    p_node_t prev = list->head;

    while (curr)
    {
        if(curr->data == data)
        {
            prev->next = curr->next;
            delete_node(curr);
            curr = prev->next;

            //element was tail
            if(curr == 0)
            {
                list->tail = prev;
            }
            list->size--;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
    if(list->head->data == data)
    {
        remove_front(list);
    }
}

int pop_head(p_linked_list_t list)
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