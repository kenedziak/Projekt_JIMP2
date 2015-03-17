#include <stdio.h>
#include <stdlib.h>
#include "../load_list/listmkr.h"
#include <time.h>
#include <string.h>

int roll_else(FILE *in,struct list * head,int n){
	struct list *tmp=head;
	int myrand=(int)rand()%(n+1);
	int i=1;
	while(i<myrand){	
		if(tmp->t==2) i=i+tmp->n;
		 if(tmp->t==0) i=i+tmp->n;
		tmp=tmp->next;	
		}
	fprintf(in,"%s ",tmp->w);
	return tmp->t;

}



int roll_beg(FILE *in,struct list *head,int n){
	struct list * tmp  = head; 
	int i=1;
	int myrand=(int)rand()%(n+1);
	while(i<myrand){
		if(tmp->t==1) i=i+tmp->n;
		if(tmp->t==3) i=i+tmp->n;
		tmp=tmp->next;	
	}
	fprintf(in,"%s ",tmp->w);
return tmp->t;

}





int  how_many_beg(struct list *head){		
	struct list * tmp = head;
	int b=0;	
	while(tmp!=NULL){
	if(tmp->t==1 || tmp->t==3)
		b=b+tmp->n;
		tmp=tmp->next;
	}

	return b;
}
int how_many_ins(struct list * head){
	struct list *tmp=head;
	int ins=0;
	while(tmp!=NULL){
	if(tmp->t==0){
		ins=ins+tmp->n;
		}
	tmp=tmp->next;
		}

	return ins;
}

int how_many_end(struct list *head){
	int end=0;
	struct list *tmp = head;
	while(tmp !=NULL){
		if( tmp->t==2){
			end=end+tmp->n;
	
		}
		tmp=tmp->next;
	}


return end;
}
int how_many_beginend(struct list *head){

        int end=0;
        struct list *tmp = head;
        while(tmp !=NULL){
                if(tmp->t==3){
                        end=end+tmp->n;

                }
                tmp=tmp->next;
        }


return end;
}






