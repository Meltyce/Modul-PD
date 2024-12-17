#include <stdio.h>
int main(){
	int a,b ; 
	printf("Masukkan dua angka: ");
	scanf("%d %d,",&a,&b);
	
	int sum = a + b ; //kurang semicolon
	printf("Penjumlahan : %d\n", sum);
	
	int diffrerence = a-b ; 
	printf("Penguragan : %d\n", diffrerence);
	
	int product = a * b ; 
	printf("Perkalian : %d\n", product);
	
	if ( b !=0){
		
		float division = a / b ;
		printf("Pembagian: %.2f\n", division);
		
	}else{
		
		printf("error pembagian nol \n");
	}
	
	return 0;
	
}