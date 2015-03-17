#ifndef _LISTMKR_H_
#define _LISTMKR_H_
#include <stdio.h>
#include <stdlib.h>

struct list {
	int n;
	int t;
	char w[200];
	struct list *next;
};


struct list *  listmkr(FILE *in, int wn,struct list *head);

struct list *  add_dc_to_list(FILE *in, struct list *head);

#endif
