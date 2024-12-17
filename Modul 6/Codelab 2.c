#include <stdio.h>
#include <stdlib.h>


void tulisData() {
    FILE *file;
    char nama[50], nim[20], programStudi[50];

    file = fopen("data_mahasiswa.txt", "a");
    if (file == NULL) {
        printf("File tidak dapat dibuka!\n");
        return;
    }

    
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", nama);
    printf("Masukkan NIM: ");
    scanf(" %s", nim);
    printf("Masukkan Program Studi: ");
    scanf(" %[^\n]", programStudi);

    
    fprintf(file, "%s;%s;%s\n", nama, nim, programStudi);
    printf("Data mahasiswa berhasil ditulis ke file.\n");

   
    fclose(file);
}


void bacaData() {
    FILE *file;
    char buffer[150];

  
    file = fopen("data_mahasiswa.txt", "r");
    if (file == NULL) {
        printf("File tidak ditemukan atau belum ada data!\n");
        return;
    }

    printf("Data Mahasiswa:\n");
   
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        char nama[50], nim[20], programStudi[50];
       
        sscanf(buffer, "%[^;];%[^;];%[^\n]", nama, nim, programStudi);
        printf("Nama: %s\n", nama);
        printf("NIM: %s\n", nim);
        printf("Program Studi: %s\n\n", programStudi);
    }

   
    fclose(file);
}

int main() {
    int pilihan;

    while (1) {
        
        printf("Pilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tulisData();
                break;
            case 2:
                bacaData();
                break;
            case 3:
                printf("Keluar dari program.\n");
                return 0;
            default:
                printf("Pilihan tidak valid. Coba lagi.\n");
        }
    }

    return 0;
}
