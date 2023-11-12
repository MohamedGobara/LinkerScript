#include <stdio.h>
#include <stdlib.h>


unsigned char a1 = 10 ; 

unsigned char b1 = 20 ; 


unsigned char c1 = 0  ;


unsigned char d1      ;


extern  unsigned char a2  ;  

__attribute__ ((section (".newsection")))
int sum (unsigned char num1 , unsigned char num2){
	
	int sum  =  num1  + num2 ; 
	
	return sum  ;
	
}


int main (void){
	
	
	int cc = sum(10,100) ; 
	
	//printf("%d\n",cc) ; 
	
	cc   = (a2 , 255) ; 
	//printf("%d\n",cc) ; 
	
	return 0 ; 
	
	
}