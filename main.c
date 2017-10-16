#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include "struct.h"

int main(){

    struct node a = *(struct node *)malloc(sizeof(struct node));
    a.i = 5;
    struct node * tmp = &a;
    print_list(tmp);

    insert_front(tmp, 12);

    print_list(tmp);
    return 0;
}