//
//  linked-list.h
//  operatingsystems
//
//  Created by Lennart Olsen on 06/02/2017.
//  Copyright © 2017 Lennart Olsen. All rights reserved.
//

#ifndef linked_list_h
#define linked_list_h

// Data structure for the linked list
typedef struct  linked_list{
    void *data;
    struct linked_list *next;
    struct linked_list *previous;
} linked_list;

/*
 * Initializes an empty linked list, and returns a pointer to the new list.
 */
linked_list *init_linked_list();

/*
 * Adds the supplied element to the end of the list
 */
void add_element( linked_list *list, void *element);

/*
 * Returns the number of elements in the list
 */
int linked_list_size(linked_list *list);

/*
 * Removes and returnes the first element from the list
 */
void *remove_first(linked_list *list);

/*
 * Remove the first element from the list that has the same value as supplied in element.
 * If the element is not found, -1 is returned, if found and removed 0 is returned.
 */
int remove_element(linked_list *list, void *element);

#endif /* linked_list_h */
