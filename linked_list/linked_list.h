#pragma once

typedef struct _node_t {
    int data;
    struct _node_t *next;
} node_t, * p_node_t;

typedef struct _linked_list_t {
    p_node_t head;
    p_node_t tail;
    int size;
} linked_list_t, * p_linked_list_t;


p_linked_list_t create_linked_list();
void delete_linked_list(p_linked_list_t list);

void add_front(p_linked_list_t list, int data);
void add_behind(p_linked_list_t list, int data);

void delete_front(p_linked_list_t list);
void delete_behind(p_linked_list_t list);

void clear(p_linked_list_t list);

void delete_first_match(p_linked_list_t list, int data);
void delete_all_matches(p_linked_list_t list, int data);

int pop_head(p_linked_list_t list);
int peek_head(p_linked_list_t list);

int get_first(p_linked_list_t list);
int get_last(p_linked_list_t list);

int get_at_idx(p_linked_list_t list, int idx);

void reverse(p_linked_list_t list);