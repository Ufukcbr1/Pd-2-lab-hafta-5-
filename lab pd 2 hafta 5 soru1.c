#include  <stdio.h>

int main(){
	
	int var=10;
	int  *p;
	p=&var;
	
	
	
	
	printf("Adress of var is :%p ",&var);
	
	printf("\nAdress of var is :%p",p);
	
	
	printf("\nValue of var is :%d",var);
	
	printf("\nValue of var is :%d",*p);
	
   printf("\nValue of var is :%d",*(&var));
   
   
   printf("\nValue of pointer p is:%p",p);
   printf("\nAdressof pointer p is:%p",&p);
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
}
