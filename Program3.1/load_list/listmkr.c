#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include "./listmkr.h"
#include "./analys.h"



struct list *  listmkr(FILE *in, int alg_number,struct list *head){
	char phrase[200];
	int type=5;
	while(fscanf(in,"%s",phrase)!=EOF){
	     
	 
	    memcpy(phrase,part(phrase,in,alg_number),sizeof(part(phrase,in,alg_number)));
	    type=what_is_it(type,phrase);
	    head=add_to_list(phrase,type,head,0);
	  
		
	       
	} 
	
	return head;
}

struct list *  add_dc_to_list(FILE *in, struct list *head){

	int type=-1;
	int n=0;
	int alg_number=-1;
	char phrase[200];
	fscanf(in,"%d",&alg_number);
	if(alg_number < 1) return NULL;
	while(fscanf(in,"%d %d %s",&n,&type,phrase) != EOF ){
		memcpy(phrase,part(phrase,in,alg_number),sizeof(part,in,alg_number));
		head=add_to_list(phrase,type,head,n);				
	
	}
	return head;	
	}
