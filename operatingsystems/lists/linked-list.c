//
//  linked-list.c
//  operatingsystems
//
//  Created by Lennart Olsen on 06/02/2017.
//  Copyright © 2017 Lennart Olsen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"




/*
 * Initializes an empty linked list, and returns a pointer to the new list.
 */
linked_list *init_linked_list(){
    linked_list *ll;
    
    ll = ( linked_list * ) malloc(sizeof(linked_list));
    
    ll->next = ll;
    ll->previous = ll;
    
    return ll;
}

void add_element( linked_list *list, void *element){
    linked_list *ll;
    
    ll = malloc(sizeof(linked_list));
    ll->data = element;
    
    list->next = element;
    
    /*ll.previous = NULL;
    ll.next = list;
    list->previous(ll);*/
}

int linked_list_size( linked_list *list ){
    int counter = 0;
    for(linked_list *i = list; i != NULL; i = i->next){
        printf("%d", counter);
        counter = counter + 1;
    }
    return counter;
}
