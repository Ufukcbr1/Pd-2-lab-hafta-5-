
#include <stdio.h>
int main(){
	char *dizi="KALEM";
	char *p;
	
	p = dizi;
	
	int Uzunluk = 0;
	while(*p != '\0'){
		Uzunluk++;
		p++;
	}
    printf("%d", Uzunluk);
}
