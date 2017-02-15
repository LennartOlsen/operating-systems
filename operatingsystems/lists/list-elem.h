//
//  list-elem.h
//  operatingsystems
//
//  Created by Lennart Olsen on 06/02/2017.
//  Copyright © 2017 Lennart Olsen. All rights reserved.
//

#ifndef list_elem_h
#define list_elem_h

#include <stdio.h>

typedef struct list_element {
        int data;
        struct list_element *next;
        struct list_element *prev;
} list_element;

list_element new_list_element(int data);

void append(list_element *root, list_element *next);

int count(list_element *root);

void print(list_element *root);

list_element *pop(list_element *root);

#endif /* list_elem_h */
