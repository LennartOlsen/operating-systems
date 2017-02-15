//
//  main.c
//  operatingsystems
//
//  Created by Lennart Olsen on 02/02/2017.
//  Copyright © 2017 Lennart Olsen. All rights reserved.
//

#include <stdio.h>
#include "lists/linked-list.h"
#include "lists/list-elem.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int user_input;
    printf("Hello, World! Enter a number\n");
    
    list_element root;
    root = new_list_element(2);
    
    list_element next;
    next = new_list_element(4);
    
    list_element next1;
    next1 = new_list_element(6);
    
    /*for (int i = 1; i < user_input; i++) {
        list_element node;
        node = new_list_element(i);
        push(&root, &node);
    }*/
    
    append(&root, &next);
    append(&root, &next1);
    
    print(&root);
    
    
    root = *pop(&root);
    
    print(&root);
    
    printf("%d\n",count(&root));
    
    return user_input;
}
