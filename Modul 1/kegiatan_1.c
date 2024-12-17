#include <stdio.h>

int main()
{
	char nama[10];
	long long int nim;
	float nilai_tugas;
	float nilai_uts;
	float nilai_uas;
	float nilai_akhir;


	printf("---Program Menghitung Nilai Akhir Mahasiswa---\n");
	printf("Masukkan nama kamu :  ");
	gets(nama);
	printf("Masukkan nim kamu :  ");
	scanf("%lld", &nim);
	printf("Masukkan nilai tugas kamu (1-100) :  ");
	scanf("%f", &nilai_tugas);
	printf("Masukkan nilai uts kamu (1-100) :  ");
	scanf("%f", &nilai_uts);
	printf("Masukkan nilai uas kamu (1-100) :  ");
	scanf("%f", &nilai_uas);
	
	
	
	if((nilai_tugas >=1 && nilai_tugas<=100)&&(nilai_uts >=1 && nilai_uts<=100)&&(nilai_uas >=1 && nilai_uas<=100)){
		nilai_akhir = (0.20 * nilai_tugas)+(0.35 * nilai_uts) + (0.45 * nilai_uas);
		printf("================================== \n \n");	
		printf("Nama Mahasiswa             :%s \n" , nama);
		printf("Nim Mahasiswa              :%lld\n" , nim);
		printf("nilai tugas kamu adalah    :%.2f\n" , nilai_tugas);
		printf("nilai uts kamu adalah      :%.2f\n" , nilai_uts);
		printf("nilai uas kamu adalah      :%.2f\n" , nilai_uas);
		printf("nilai akhir kamu adalah    :%.2f\n \n" , nilai_akhir);
		if(nilai_akhir >= 65 ){
			printf("Status : LULUS \n");
			
		}else{
			printf("Status : Tidak LULUS \n");
		}
		printf("==================================\n");
		printf("==================================\n");
	}else{
		printf("Nilai tidak valid");
	}
	return 0;
}