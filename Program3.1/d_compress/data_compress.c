#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../load_list/listmkr.h"
#include "data_compress.h"
struct list * data_compress(struct list *head, char *  argv []  ,int argc){
	int i;
	int alg_number=2;
	FILE *out=NULL;
	struct list * tmp =head;
	for(i=1;i<argc;i++){
		if(strcmp(argv[i],"-an")== 0 && i < argc-1)
        	 	 alg_number = atoi(argv[i+1]);
        	}
	 for(i=1;i<argc;i++){
         	if(strcmp(argv[i],"-dwc")==0 && i<argc-1)
			out = fopen(argv[i+1],"w");
	          }
	if(out == NULL)
		return  head;
	
	fprintf(out,"%d \n",alg_number);
	
	while (tmp != NULL){
   		 fprintf(out,"%d %d %s\n",tmp->n,tmp->t,tmp->w);
  		 tmp=tmp->next;
  }
fclose(out);	
return head;
}
