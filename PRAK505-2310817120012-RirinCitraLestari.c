#include <stdio.h>

void Biodata(int tahun_lahir, char nama[], char asal[]){
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahun_lahir;
    int tahun_angkatan = tahun_sekarang;

    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_angkatan);
    printf("Asal Saya dari : %s\n", asal);
}

int main() {
    int tahunLahir;
    char nama[20], asal[15];
    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", nama);
    scanf(" %[^\n]%*c", asal);
    Biodata(tahunLahir, nama, asal);
    return 0;
}
