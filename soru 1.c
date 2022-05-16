#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, i;
	int *ptr;
	int sum = 0;
	
	printf("eleman sayisini giriniz:");
	scanf("%d", &x);
	
	ptr=(int *)malloc(x*sizeof(int));
	if(ptr == NULL){
		printf("yeterli alan yok.");
	}
	printf("dizi elemani giriniz:");
	for(i=0; i<x; i++){
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}
	
	printf("toplam:%d", sum);
	return 0;
}
