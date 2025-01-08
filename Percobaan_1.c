#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk meminta input deret bilangan dari pengguna
void input(int nilai[], int *n);

// Fungsi untuk mencari nilai terbesar dalam deret bilangan
int findMax(int nilai[], int n);

int main()
{
    // Menampilkan header untuk percobaan
    printf("Percobaan 1\n---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel
    int nilai[100], n, big;

    // Memanggil fungsi input untuk menerima nilai dari pengguna
    input(nilai, &n);

    // Memanggil fungsi findMax untuk mencari nilai terbesar
    big = findMax(nilai, n);

    // Menampilkan hasil nilai terbesar
    printf("Nilai terbesar dalam deret bilangan yang anda inputkan adalah %d", big);

    return 0;
}

// Fungsi untuk menerima input deret bilangan dari pengguna
void input(int nilai[], int *n)
{
    // Meminta jumlah bilangan yang ingin dimasukkan
    printf("Seberapa banyak bilangan yang anda inginkan? ");
    scanf("%d", &(*n));

    // Mengambil input bilangan dan menyimpannya dalam array
    for (int i = 0; i < *n; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);  // Menyimpan nilai yang dimasukkan ke dalam array
    }
}

// Fungsi untuk mencari nilai terbesar dalam array
int findMax(int nilai[], int n)
{
    int besar = nilai[0];  // Inisialisasi nilai terbesar dengan elemen pertama array

    // Membandingkan setiap elemen array untuk menemukan yang terbesar
    for (int i = 1; i < n; i++) {
        if (besar < nilai[i]) {
            besar = nilai[i];  // Jika elemen lebih besar dari nilai terbesar, update nilai terbesar
        }
    }

    // Mengembalikan nilai terbesar
    return besar;
}
