#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Fungsi untuk mengonversi derajat ke radian
double rad_math(float x);

int main() {
    // Menampilkan header untuk percobaan
    printf("Percobaan 3\n---------------------------------------------------------------------------------\n\n");

    // Inisialisasi array derajat x dan array untuk menyimpan hasil sin, cos, dan tan
    float x[13] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};
    double data[13][3], rad;

    // Menghitung nilai sin, cos, dan tan untuk setiap x
    for(int i = 0; i < 13; i++) {
        rad = rad_math(x[i]); // Mengonversi derajat ke radian
        data[i][0] = sin(rad); // Menghitung nilai sin(x)
        data[i][1] = cos(rad); // Menghitung nilai cos(x)
        data[i][2] = tan(rad); // Menghitung nilai tan(x)
    }

    // Menampilkan header tabel hasil perhitungan
    printf("   x\t Sin(x)\t Cos(x)\t Tan(x)\n");

    // Menampilkan hasil perhitungan sin, cos, dan tan untuk setiap nilai x
    for(int i = 0; i < 13; i++) {
        printf("%6.2f\t%6.2f\t%6.2f\t%6.2f\n", x[i], data[i][0], data[i][1], data[i][2]);
    }

    return 0;
}

// Fungsi untuk mengonversi derajat ke radian
double rad_math(float x) {
    return x * PI / 180.0; // Mengonversi derajat ke radian
}
