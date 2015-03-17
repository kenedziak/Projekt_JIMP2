#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./listmkr.h"
#include "./analys.h"



int check_repet(struct list *head,char *t,int type){
	struct list *tmp = head;
 	while(tmp != NULL){
         if(tmp->t==type && strcmp(tmp->w,t)==0){
		tmp->n++;
		return 0;
		}
		       
	 tmp=tmp->next;
	}

	return 1;
}

struct list * add_to_list(char t[] ,int type,struct list *head,int n ){
    
    struct list * tmp = head;
if(n==0){
    if(tmp == NULL){
	  tmp=malloc(sizeof(struct list));
	  memcpy(tmp->w,t,strlen(t));
	  tmp->t=type;
	  tmp->next=NULL;
	  tmp->n=1;
	  head=tmp;
	  
	
	 return head;    
  }
  else{
	if(check_repet(head,t,type)==0) 
		return head;
	
	
	while(tmp->next != NULL){
		tmp=tmp->next;
	
	}		
	tmp->next=malloc(sizeof(struct list));
	tmp=tmp->next;
	memcpy(tmp->w,t,strlen(t));
	tmp->t=type;
	tmp->n=1;
	tmp->next=NULL;
	
    return head;
  }
  return head;
}
if(n!=0){

struct list * tmp = head;
    if(tmp == NULL){
          tmp=malloc(sizeof(struct list));
          memcpy(tmp->w,t,strlen(t));
          tmp->t=type;
          tmp->next=NULL;
          tmp->n=n;
          head=tmp;


         return head;
  }
  else{
        if(check_repet(head,t,type)==0)
                return head;


        while(tmp->next != NULL){
                tmp=tmp->next;

        }
        tmp->next=malloc(sizeof(struct list));
        tmp=tmp->next;
        memcpy(tmp->w,t,strlen(t));
        tmp->t=type;
        tmp->n=n;
        tmp->next=NULL;

    return head;
  }
  return head;
}

}

void show_list(struct list * head){
  struct list * tmp=head;
  while (tmp != NULL){ 
   printf("%d ",tmp->n);		
   printf(" %s  ",tmp->w);
   printf("TYP %d \n",tmp->t);
   tmp=tmp->next; 
  }
}








int what_is_it(int type1, char * part){
	int  r=strlen(part);
 	char e=part[r-1];
	char s=part[0];

	if((type1==5 && e=='.') || (type1==2 && e=='.') || (type1==3 && e=='.'))
		return 3;
		
	if((type1==5) || (type1==2) || (type1==3)) 
		return 1;

	if(e=='.' &&( type1==1 || type1==0 || type1==3 || type1==5 ))
		return 2;

	if(e !='.' &&(type1==1 || type1==0));
		return 0;
	
	return 10;
	type1=what_is_it1(type1,part,r);
		if(type1==10) return 10;
}


char * part(char part[],FILE *in,int wn){
		int r=0;
		int i;
		r=strlen(part);
		for(i=0;i<wn-1 && fscanf(in,"%s",part+r+1)!=EOF;i++){
		        part[r]=' ';
			r=strlen(part); 
			
		}	
		return part;
}
