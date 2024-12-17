#include <stdio.h>
float hitung_total(int film, int tiket, int member);
	
enum film{Aquaman = 35000, Terrifier = 40000, Boboiboy = 25000, Avatar = 50000, Transformer = 45000 };
 
enum tiket {VVIP = 30000,  VIP = 20000, Reguler = 10000 };
	
int main(){
	
	int pilihanFilm, pilihanTiket, member, uangBayar;
	float totalHarga;
	char *namaFIlm[] = {"Aquaman", "Terrifier", "Boboiboy", "Avatar", "Transformer"};
	
	printf("===== Selamat Datang di Bioskop Alifff ===== \n");
	printf("Silahkan memilih film yang ingin anda tonton \n");
	printf("1. Aquaman (35.000)\n2. Terrifier (40.000)\n3. Boboiboy (25.000)\n4. Avatar(50.000)\n5. Transformer (45.000) \n"); 
	printf("Masukkan pilihan (1-5) : ");
	scanf("%d", &pilihanFilm);
	
	printf("Jenis tiket \n");
	printf("1. VVIP = 30.000\n2. VIP = 20.000\n3. Reguler = 10.000\n");
	printf("Masukkan jenis tiket yang anda pilih : ");
	scanf("%d", &pilihanTiket);
	
	printf("Apakah anda member ? (ketik 1 jika ya, 0 jika tidak ) ");
	scanf("%d", &member);

	int hargaFilm, hargaTiket;
	switch(pilihanFilm){
		case 1 : hargaFilm = Aquaman ; break;
		case 2 : hargaFilm = Terrifier ; break;
		case 3 : hargaFilm = Boboiboy ; break;
		case 4 : hargaFilm = Avatar; break;
		case 5 : hargaFilm = Transformer ; break;
		default : printf("Input film tidak valid \n"); return 1;
	}
	
	switch(pilihanTiket){
		case 1 : hargaTiket = VVIP ; break;
		case 2 : hargaTiket = VIP ; break;
		case 3 : hargaTiket = Reguler ; break;
		default : printf("Input tiket tidak valid \n");
	}
	
	totalHarga = hitung_total(hargaFilm, hargaTiket, member);
	printf("Film yang anda pilih adalah : %s \n", namaFIlm[pilihanFilm - 1]);
	printf("Total harga : %.2f \n", totalHarga);
	printf("Address memory dari total harga adalah %p \n", &totalHarga);
	
	printf("Masukkan jumlah uang yang akan dibayar : ");
	scanf("%d",&uangBayar);
	
	if(uangBayar > totalHarga){
		float kembalian = uangBayar - totalHarga;
		printf("===== Pembayaran berhasil ===== \n");
		printf("Sisa kembalian anda adalah %.2f \n", kembalian);
		printf("===== Terimakasih ===== \n");
	}else if(uangBayar < totalHarga){
		printf("Maaf, uang anda kurang");
	}else{
		printf("===== Pembayaran Berhasil =====");
		printf("===== Terimakasih =====");
	}
	return 0;
	
}

float hitung_total(int film, int tiket, int member){
	
	float total;
	total = film + tiket ;
	if(member){
		total = total * 0.9 ;
	}
	return total;
}