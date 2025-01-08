#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Menampilkan header untuk percobaan
    printf("Percobaan 2\n---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel
    int murid, matkul;

    // Meminta input jumlah mahasiswa dan mata kuliah
    printf("Berapa jumlah mahasiswa dan mata kuliahnya(pisahkan dengan spasi)? ");
    scanf("%d %d", &murid, &matkul);

    // Deklarasi array untuk menyimpan nilai dan array untuk rata-rata per mahasiswa
    int nilai[murid][matkul];
    double rata[murid];

    // Input nilai untuk setiap mahasiswa
    for (int i = 0; i < murid; i++) {
        for (int j = 0; j < matkul; j++) {
            // Meminta input nilai untuk setiap mata kuliah dari mahasiswa ke-i
            printf("Berapa nilai mahasiswa ke-%d, untuk mata kuliah ke-%d: ", i + 1, j + 1);
            scanf("%d", &nilai[i][j]);
        }

        // Menghitung total nilai dan rata-rata per mahasiswa
        float total = 0;
        for (int j = 0; j < matkul; j++) {
            total += nilai[i][j];  // Menjumlahkan nilai untuk setiap mata kuliah
        }
        rata[i] = total / matkul;  // Menghitung rata-rata untuk mahasiswa ke-i
        printf("\n");
    }

    // Menampilkan hasil rata-rata untuk setiap mahasiswa
    printf("No. Mhs\tRata-rata\n----------------------\n");
    for (int i = 0; i < murid; i++) {
        printf("%d\t%.2f\n", i + 1, rata[i]);  // Menampilkan nomor mahasiswa dan rata-rata
    }

    return 0;
}
