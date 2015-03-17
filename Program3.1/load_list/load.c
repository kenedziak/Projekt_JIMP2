#include <stdio.h>
#include <stdlib.h>
#include "./listmkr.h"

#include <string.h>


void free_list(struct list *head){
	struct list * tmp=head;
	while( head !=NULL){
	head=head->next;
	free(tmp);
	tmp=head;
	
	}
}


struct list *  load_to_list (int argc, char * argv[],struct list * head){
	int i=0;
	int wn=100;
	int alg_number=2;
 	FILE * in=NULL;
	FILE * in_b=NULL;
	
	//USTALENIE JAK DLUGIE SA SLOWA DOMYSLNIE 2 // 
		for(i=1;i<argc;i++){
                        if(strcmp(argv[i],"-an")==0 && i < argc-1)

                                alg_number = atoi(argv[i+1]);	
                        }        

 	//WCZYTYWANIE DANYCH Z PLIKOW  DO LISTY TAKZE SKOMPRESOWANYCH//
		for(i=1;i<argc;i++){
			if(strcmp(argv[i],"-d")==0 && i<argc-1){
				in = fopen(argv[i+1],"r");
        			if(in==NULL){
        	        		printf("Blad: Nie moge otworzyc pliku wejsciowego: %s. \n",argv[i+1]);
					return NULL;
					}
				else{
					head=listmkr(in,alg_number,head);
					fclose(in);					
					in=NULL;
				   }}
	
			if(strcmp(argv[i],"-dc")==0 && i<argc-1){
				 in = fopen(argv[i+1],"r");
                                if(in==NULL){
                                        printf("Blad: Nie moge otworzyc pliku wejsciowego z kompresowana baza: %s. \n",argv[i+1]);
					return NULL;
					}
                                else{
                                      head= add_dc_to_list(in,head);
                                      	fclose(in);
					in=NULL;
				   }}
			  if(strcmp(argv[i],"-wn")==0 && i<argc-1){
					     wn=atoi(argv[i+1]);
			}

			}
			if(head==NULL){
					printf("Blad: Nie podano zadnych danych poczatkowych \n");
			fclose(in);
			fclose(in_b);	
				return NULL;
			         	}
	



return head;
}
