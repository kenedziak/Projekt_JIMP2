#include <stdio.h>
#include <stdlib.h>
#include "./load_list/load.h"
#include <string.h>
#include "./load_list/listmkr.h"
#include "./make_text/make_text.h"
#include "./d_compress/data_compress.h"

int main (int argc, char * argv[]){
	int i=0;
	int alg_number=2;
	struct list * head = NULL;
 	FILE * in=NULL;
	head=load_to_list(argc,argv,head);
	if(head == NULL)  return 1;
	if(text_maker(argc,argv,head)==1) return -1;
	
	head=data_compress(head,argv,argc);	
	free_list(head);
	return 0;
}
