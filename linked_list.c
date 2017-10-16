#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void print_list(struct node * x){ // this is an address
  
  while(x){
      printf("%d", x->i); // this dereferences the pointer and gets the int
      x = x -> next; // this sets the address to the address of the current node
  }
  printf("\n");
}

struct node * insert_front(struct node * addr, int x){
    struct node i = *(struct node *)malloc(sizeof(struct node)); // the node needs to be created dynamically 
    i.i = x;
    i.next = addr;
    struct node * ret = &i;
    return ret;
}

struct node * free_list(struct node * addr){
    struct node * p = addr;
    while(addr){
        addr = addr -> next;
        free(addr);
    }
    return p;
}
  
