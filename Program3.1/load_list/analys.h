#ifndef _ANALYS_H_
#define _ANALYS_H
#include <stdio.h>


char * part(char part[],FILE *in,int wn);

struct list * add_to_list(char t[],int type, struct list *head,int n );

int  what_is_it(int type1, char * part);
    /*
					1-poczetek zdania
					0-srodek zdania 
					2-koniec zdania
					3-koniec  i poczatek
					5-poczatkowy poczatek zdania
								*/ 

#endif
