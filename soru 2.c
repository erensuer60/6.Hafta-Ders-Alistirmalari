#include <stdio.h>
#include <stdlib.h>

int *dizileri_topla(int [], int, int[], int);
int main() {
	int i;
	int liste1[5]={6, 7, 8, 9, 10};
	int liste2[7]={13, 7, 12, 9, 7, 1, 14};
	
	int *ptr;
	ptr= dizileri_topla(liste1, 5, liste2, 7);
	
	for(i=0; i<12; i++){
		printf("%d", ptr[i]);
		printf("\n");
	}
	return 0;
}

int* dizileri_topla(int dizi1[], int boyut1, int dizi2[], int boyut2){
	int* sonuc=(int*)calloc(boyut1 + boyut2, sizeof(int));
	int i, k;
	
	for(i=0; i<boyut1; i++)
	   sonuc[i] = dizi1[i];
	   
	for(k=0; k<boyut2; i++ , k++){
	   sonuc[i] = dizi2[k];	   
	
	return sonuc;}
	}

