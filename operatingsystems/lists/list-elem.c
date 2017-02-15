//
//  proper-linked-list.c
//  operatingsystems
//
//  Created by Lennart Olsen on 06/02/2017.
//  Copyright © 2017 Lennart Olsen. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "list-elem.h"

list_element new_list_element(int data) {
    struct list_element elmnt;
    elmnt.data = data;
    elmnt.next = NULL;
    elmnt.prev = NULL;
    
    return elmnt;
}

void append(list_element *root, list_element *new){
    list_element * current = root;
    
    /** Go through current to there is no next, find the tail **/
    while (current->next != NULL){
        current = current->next;
    }
    
    new->prev = malloc(sizeof(list_element));
    new->prev = current;
    current->next = malloc(sizeof(list_element));
    current->next = new;
}

int count(list_element *root){
    int c = 0;
    for (list_element *i = root; i != NULL; i = i->next) {
        c++;
    }
    return c;
}
/** As we want to set a new root we actually need to modify the pointer to the pointer we receive **/
list_element *pop(list_element *root){
    list_element *new_root = NULL;
    
    /** Guard to make people not fuck up **/
    if(root != NULL){
        new_root = root->next;
        
        root = new_root;
        
        new_root->prev = NULL;
        
        return new_root;
    }
    
    //Bad thing
    ///<php die(); ?>
    return root;
}

void print(list_element *root){
    int c = 0;
    for (list_element *i = root; i != NULL; i = i->next) {
        if(i->prev != NULL){
            printf("Pos %i : Has value : %i. Prev has value %i.\n",c , i->data, i->prev->data);
        } else {
            printf("Pos %i : Has value : %i.\n",c , i->data);
        }
        c++;
    }
}
