#include <stdio.h>
#include <stdlib.h>
#include "../load_list/listmkr.h"
#include "./roll.h"
#include <string.h>
#include <time.h>

struct list *  text_maker (int argc, char * argv[],struct list * head){
	srand(time(NULL));
	int i;
	int alg_numb=2;
	int t = 0;
	int beginend=0;
	int begin=0;
	int inside=0;
	int end=0;
	int wn=100;
	FILE * in=stdout;
	

		for(i=1;i<argc;i++){
			if(strcmp(argv[i],"-dw")==0 && i<argc-1){
				in = fopen(argv[i+1],"w");
				}				
	
			if(strcmp(argv[i],"-wn")==0 && i<argc-1){
				wn=atoi(argv[i+1]);
				}
   			 if(strcmp(argv[i],"-an")==0 && i<argc-1){
                                alg_numb=atoi(argv[i+1]);
                                }

			}
		begin=how_many_beg(head);
		inside=how_many_ins(head);
		end=how_many_end(head);
		for(i=0; i<wn/alg_numb;i++){
			if( i==0 ||  t==2 || t==3)
				t=roll_beg(in,head,begin+beginend);
			
			else 
				t=roll_else(in,head,inside+end,t);
			}
		if(t!=3 ||t !=2) fprintf(in,".");
		fclose(in);
		return head;
}
