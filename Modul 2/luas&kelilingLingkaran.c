#include<stdio.h>
#define PHI 3.14159 
float luasLingkaran(float radius);
float kelilingLingkaran(float radius);
float mintaInput();
void tampilkanLuas(float radius,float hasilLuas);
void tampilkanKeliling(float radius,float hasilKeliling);
void tampilkanJudul();
void tampilkanPenutup();

int main(){
	float hasilLuas,hasilKeliling,radius;
	tampilkanJudul();
	radius=mintaInput();
	hasilLuas=luasLingkaran(radius);
	tampilkanLuas(radius,hasilLuas);
	hasilKeliling=kelilingLingkaran(radius);
	tampilkanKeliling(radius,hasilKeliling);
	tampilkanPenutup();
	return 0;
}

float luasLingkaran(float radius){
	float r,L;
	r=radius;
	L=PHI*r*r;
	return L;
}
float kelilingLingkaran(float radius){
	float r,K;
	r=radius;
	K=2*PHI*r;
	return K;
}
float mintaInput(){
	float radius;
	printf("Masukkan jari-jari lingkaran: ");
	scanf("%f",&radius);
	printf("\n");
	return radius;
}
void tampilkanLuas(float radius,float hasilLuas){
	printf("Hasil dari luas lingkaran dengan radius %.2f adalah: %.2f\n",radius,hasilLuas);
}
void tampilkanKeliling(float radius,float hasilKeliling){
	printf("Hasil dari keliling lingkaran dengan radius %.2f adalah: %.2f\n\n",radius,hasilKeliling);
}
void tampilkanJudul(){
	printf("Program Menghitung Luas dan Keliling Lingkaran\n");
	printf("=================================\n");
}
void tampilkanPenutup(){
	printf("==================================\n");
	printf("Semoga hasilnya memuaskan ya\n");
	printf("Terimakasih sudah menggunakan program ini\n");
}
