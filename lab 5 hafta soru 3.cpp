#include <stdio.h>








int main(){


int dizi[5]={5,7,2,9,8};
int i;
int *ptr;

ptr=dizi;

for(i=0;i<=4;i++){
	
	
	
	
	printf("%d\n",*(ptr+i));
}











return 0;
}
