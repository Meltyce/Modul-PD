#include <stdio.h>

int main(){
	
	float inputNumber = 0;
	float average = 0 ;
	float sum = 0 ;
	float count = 0 ;
	
	printf("Masukkan angka positif (angka negatif untuk stop) : ");
	scanf("%f", &inputNumber);
	 
	while(inputNumber >= 0){
		sum += inputNumber;
		count++;
		printf("Masukkan bilangan selanjutnya : ");
		scanf("%f", &inputNumber);
	}
	
	if(count > 0){
		average = sum / count;
	}
	printf("Total penjumlahan : %.2f \n", sum);
	printf("Rata-rata : %.2f \n", average);
	
	return 0;
}