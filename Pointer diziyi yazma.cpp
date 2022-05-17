#include <stdio.h>
int main(){
	int a, i;
	int dizi[100];
	int *dizipoin;
	dizipoin=dizi;
	
	printf("Lütfen eleman sayisi girin:");
	scanf("%d", &a);
	
	for(i=0; i<a; i++){
		printf("dizi[%d]:", i);
		scanf("%d", & dizi[i]);
	}
	for(i=0; i<a; i++){
		printf("\n %d ", *dizipoin);
		dizipoin++;}
			
	return 0;
}
