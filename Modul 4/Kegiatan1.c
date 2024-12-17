#include <stdio.h>
#include <stdbool.h>

int main()
{

	int transaksi, sum = 0, lanjut;

	do{
		printf("===== Pencatat Transaksi ===== \n");
		printf("Masukkan transaksi (gunakan 0 untuk menyelesaikan) : \n");
		scanf("%d", &transaksi);

		while(transaksi != 0){
			sum += transaksi;
			scanf("%d", &transaksi);
		}

		printf("Total transaksi : %d \n", sum);
		sum = 0;
		printf("Apakah anda ingin melanjutkan perhitungan ? (1 = Ya 0 = Tidak) : ");
		scanf("%d", &lanjut);


	} while(lanjut == 1);
	
	return 0;
}
