#include <stdio.h>

//Alif Zaky Nasywa Muhammad - Codelab1 - Modul3 - Informatika - H - Smstr 1
//kesalahan pada codelab satu hanya terdapat pada penulisan % didalam fungsi printf
//untuk menampilkan % dalam printf maka dibutuhkan 2%%. dengan itu jumlah persen (%) dalam bentuk string akan tampil
int main(){
	
	int umur;
	int hargaNormal = 50000;
	int hargaAnak, hargaLanjut, hargaDiskonlanjut;
	
	hargaAnak = hargaNormal * 0.5;
	hargaDiskonlanjut = hargaNormal * 0.75;
	hargaLanjut = hargaNormal - hargaDiskonlanjut;
	
	printf("Masukkan umur penumpang : ");
	scanf("%d",&umur);

	if(umur >= 0 && umur <=120){
		if(umur < 2){
			printf("Penumpang mendapatkan tiket gratis \n");
		}else if(umur >=2 && umur <= 12){
			printf("Harga tiket untuk anak anak adalah 50%% dari harga normal yaitu %d \n", hargaAnak);
		}else if(umur > 12 && umur <=60){
			printf("Harga tiket untuk penumpang dewasa adalah harga normsl yaitu %d\n", hargaNormal);
		}else{
			printf("harga tiket untuk penumpang lanjut usia adalah 75%% dari harga normal yaitu %d \n", hargaLanjut);
		}
	}else{
		printf("Input umur tidak valid. Umur harus berada di rentan 0 hingga 120");
	}
	
	return 0;
}