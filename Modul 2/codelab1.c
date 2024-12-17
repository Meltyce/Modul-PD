#include <stdio.h>
#define batas_pria 2000
#define batas_wanita 1500

//Alif Zaky Nasywa Muhammad - Informatika - 202410370110345 - Kelas H
//disini saya tambahkan input gender untuk menambah kondisi di dalam if
//bentuk pesan atas kelebihan kalori tergantung dari pemilihan gender saat memasukkan data
//batas kalori saya pisahkan antara pria dan wanita
//kondisi didalam if akan membaca apakah nilai dari variabel gender huruf pertama apakah P (pria) atau W (wanita)
//terimakasihh
int main(){
	
	char gender[1];
	float makananPertama, makananKedua, makananKetiga, total;
	
	printf("====== Selamat Datang di Program Penghitung Kalori Harian ====== \n"); 
	printf("Masukkan jumlah kalori makanan pertama : ");
	scanf("%f", &makananPertama);
	printf("Masukkan jumlah kalori makanan kedua : ");
	scanf("%f", &makananKedua);
	printf("Masukkan jumlah kalori makanan ketiga :");
	scanf("%f", &makananKetiga);
	printf("Masukkan jenis kelamin (P/W) :");
	scanf("%s", &gender);
	printf("\n========================================================= \n\n");
	
	total = makananPertama + makananKedua + makananKetiga;
	int wajar_pria = total - batas_pria; //variabel untuk menampung jumlah kalori yang harus dikurangi pria yang kelebihan kalori
	int wajar_wanita = total - batas_wanita;  //variabel untuk menampung jumlah kalori yang harus dikurangi oleh wanita yang kelebihan kalori
	printf("Total kalori harian mu : %.2f \n", total);
	
	if((gender[0]=='P') && (total <= batas_pria)){
		printf("Kamu masih di kondisi kalori aman sebagai pria \n");
	}else if(gender[0]=='P' && (total > batas_pria)){
		printf("Kalori harianmu melewati batas sebagai pria \n");
		printf("Seharusnya batas kalori pria tidak melebihi dari %d \n", batas_pria );
		printf("Kamu harus mengurangi kalori sebanyak %d \n", wajar_pria);
	}else if((gender[0]=='W') && (total <= batas_wanita)){
		printf("Kamu masih di kondisi kalori aman sebagai wanita \n");
	}else if ((gender[0]=='W') && (total > batas_wanita)){
		printf("Kalori harian mu melewati batas sebagai wanita \n");
		printf("Seharusnya batas kalori pria tidak melebihi dari %d \n", batas_wanita );
		printf("Kamu harus mengurangi kalori sebanyak %d \n", wajar_wanita);
	}else{
		printf("nilai tidak valid");
	}
	
	return 0;
}