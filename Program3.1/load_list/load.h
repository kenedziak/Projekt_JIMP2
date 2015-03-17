#ifndef _LOAD_H_
#define _LOAD_H_
#include <stdio.h>
#include <stdlib.h>

struct list * load_to_list(int argc, char * argv[],struct list *head);

void list_free(struct list * head);
#endif
