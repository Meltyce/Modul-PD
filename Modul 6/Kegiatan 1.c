#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan informasi produk
typedef struct {
    char id[20];
    char nama[50];
    char kategori[30];
    float harga;
    int stok;
} Produk;

// Fungsi untuk menambahkan produk baru
void tambahProduk() {
    FILE *file = fopen("produk_toko.txt", "a");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return;
    }

    Produk produk;

    // Input data produk
    printf("Masukkan ID Produk: ");
    scanf(" %s", produk.id);

    // Periksa apakah ID sudah terdaftar
    FILE *fileCheck = fopen("produk_toko.txt", "r");
    char buffer[200];
    while (fgets(buffer, sizeof(buffer), fileCheck)) {
        Produk temp;
        sscanf(buffer, "%[^;];%[^;];%[^;];%f;%d", temp.id, temp.nama, temp.kategori, &temp.harga, &temp.stok);
        if (strcmp(temp.id, produk.id) == 0) {
            printf("ID SUDAH TERDAFTAR! Masukkan ID yang berbeda.\n");
            fclose(fileCheck);
            fclose(file);
            return;
        }
    }
    fclose(fileCheck);

    printf("Masukkan Nama Produk: ");
    getchar(); // Clear newline buffer
    fgets(produk.nama, sizeof(produk.nama), stdin);
    strtok(produk.nama, "\n"); // Hapus newline

    printf("Masukkan Kategori Produk: ");
    fgets(produk.kategori, sizeof(produk.kategori), stdin);
    strtok(produk.kategori, "\n");

    printf("Masukkan Harga Produk: ");
    scanf("%f", &produk.harga);
    printf("Masukkan Stok Produk: ");
    scanf("%d", &produk.stok);

    // Tulis data ke file
    fprintf(file, "%s;%s;%s;%.2f;%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
    fclose(file);

    printf("Produk berhasil ditambahkan!\n");
}

// Fungsi untuk menampilkan daftar produk
void tampilkanProduk() {
    FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("Tidak ada produk yang terdaftar!\n");
        return;
    }

    printf("\nDaftar Produk:\n");
    printf("==========================================================\n");
    printf("ID\tNama\t\tKategori\tHarga\tStok\n");
    printf("==========================================================\n");

    char buffer[200];
    while (fgets(buffer, sizeof(buffer), file)) {
        Produk produk;
        sscanf(buffer, "%[^;];%[^;];%[^;];%f;%d", produk.id, produk.nama, produk.kategori, &produk.harga, &produk.stok);
        printf("%s\t%s\t\t%s\t%.2f\t%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
    }

    fclose(file);
}

// Fungsi untuk memperbarui informasi produk
void updateProduk() {
    FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("Tidak ada produk yang terdaftar!\n");
        return;
    }

    char idCari[20];
    printf("Masukkan ID Produk yang ingin diperbarui: ");
    scanf(" %s", idCari);

    FILE *tempFile = fopen("temp.txt", "w");
    char buffer[200];
    int found = 0;

    while (fgets(buffer, sizeof(buffer), file)) {
        Produk produk;
        sscanf(buffer, "%[^;];%[^;];%[^;];%f;%d", produk.id, produk.nama, produk.kategori, &produk.harga, &produk.stok);

        if (strcmp(produk.id, idCari) == 0) {
            found = 1;
            printf("Masukkan Nama Baru: ");
            getchar();
            fgets(produk.nama, sizeof(produk.nama), stdin);
            strtok(produk.nama, "\n");

            printf("Masukkan Kategori Baru: ");
            fgets(produk.kategori, sizeof(produk.kategori), stdin);
            strtok(produk.kategori, "\n");

            printf("Masukkan Harga Baru: ");
            scanf("%f", &produk.harga);
            printf("Masukkan Stok Baru: ");
            scanf("%d", &produk.stok);
        }

        fprintf(tempFile, "%s;%s;%s;%.2f;%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
    }

    fclose(file);
    fclose(tempFile);

    remove("produk_toko.txt");
    rename("temp.txt", "produk_toko.txt");

    if (found)
        printf("Produk berhasil diperbarui!\n");
    else
        printf("Produk dengan ID %s tidak ditemukan!\n", idCari);
}

// Fungsi untuk menghapus produk
void hapusProduk() {
    FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("Tidak ada produk yang terdaftar!\n");
        return;
    }

    char idCari[20];
    printf("Masukkan ID Produk yang ingin dihapus: ");
    scanf(" %s", idCari);

    FILE *tempFile = fopen("temp.txt", "w");
    char buffer[200];
    int found = 0;

    while (fgets(buffer, sizeof(buffer), file)) {
        Produk produk;
        sscanf(buffer, "%[^;];%[^;];%[^;];%f;%d", produk.id, produk.nama, produk.kategori, &produk.harga, &produk.stok);

        if (strcmp(produk.id, idCari) == 0) {
            found = 1;
            continue; // Skip menulis produk yang dihapus
        }

        fprintf(tempFile, "%s;%s;%s;%.2f;%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
    }

    fclose(file);
    fclose(tempFile);

    remove("produk_toko.txt");
    rename("temp.txt", "produk_toko.txt");

    if (found)
        printf("Produk berhasil dihapus!\n");
    else
        printf("Produk dengan ID %s tidak ditemukan!\n", idCari);
}

int main() {
    int pilihan;

    printf("=======================================\n");
    printf("  Selamat Datang di Manajemen Toko Elektronik\n");
    printf("=======================================\n");

    while (1) {
        printf("\nPilih aksi:\n");
        printf("1. Tambah Produk Baru\n");
        printf("2. Tampilkan Daftar Produk\n");
        printf("3. Update Informasi Produk\n");
        printf("4. Hapus Produk\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahProduk();
                break;
            case 2:
                tampilkanProduk();
                break;
            case 3:
                updateProduk();
                break;
            case 4:
                hapusProduk();
                break;
            case 5:
                printf("Keluar dari program.\n");
                return 0;
            default:
                printf("Pilihan tidak valid. Coba lagi.\n");
        }
    }
}
