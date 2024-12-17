#include <stdio.h>

int main(){
	
	int toko[2][3] = {{5,8,6},{3,7,9}};
	int total[3] = {0,0,0};
	int i;
	
	printf("Total penjualan toko : \n");
	for(i = 0; i < 3; i++){
		total[i] =  toko[0][i] + toko[1][i];
	}
	
	printf("total penjualan produk A : %d \n", total[0]);
	printf("total penjualan produk B : %d \n", total[1]);
	printf("total penjualan produk C : %d \n", total[2]);
	
	return 0;
}