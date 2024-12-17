#include <stdio.h>

int main() {
    int jumlahMahasiswa, i, j;
    float nilai[100][3], rataKuliah[3] = {0}, rataKeseluruhan = 0;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    if (jumlahMahasiswa <= 0 || jumlahMahasiswa > 100) {
        printf("Jumlah mahasiswa harus antara 1 hingga 100.\n");
        return 1;
    }

    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("\nMahasiswa ke-%d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Nilai mata kuliah %d: ", j + 1);
            scanf("%f", &nilai[i][j]);
            rataKuliah[j] += nilai[i][j];
        }
    }

    printf("\nData Nilai Mahasiswa:\n");
    printf("===============================\n");
    printf("| No | Mat  | Fis  | Kim  |\n");
    printf("===============================\n");
    
	for (i = 0; i < jumlahMahasiswa; i++) {
        printf("| mhs %2d |", i + 1);
        for (j = 0; j < 3; j++) {
            printf(" %.2f |", nilai[i][j]);
        }
        printf("\n");
    }
    printf("===============================\n");

    for (j = 0; j < 3; j++) {
        rataKuliah[j] /= jumlahMahasiswa;
        rataKeseluruhan += rataKuliah[j];
        printf("Rata-rata mata kuliah %d: %.2f\n", j + 1, rataKuliah[j]);
    }
    printf("Rata-rata keseluruhan: %.2f\n", rataKeseluruhan / 3);

    return 0;
}
