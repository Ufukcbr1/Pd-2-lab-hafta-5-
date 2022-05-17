#include <stdio.h>
int main(){
	char kelime[4]= {'k', 'e', 'd', 'i'};
	char *P;
	int i;
	P=kelime;
	
	for(i=3; P[i]!='\0' && i>=0; i--){
		printf("%c", P[i]);
	}
	 
	return 0;
}
