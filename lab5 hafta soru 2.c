#include <stdio.h>







int main(){
	
	int a,b,toplam=0;
	int *aptr;
	int *bptr;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	aptr=&a;
	bptr=&b;
	
toplam=	*(aptr)+*(bptr);
	
	
	printf("%d",toplam);
	

	
	
	
	
	
	
	
	
	
	return 0;
}
