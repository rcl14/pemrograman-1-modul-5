#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mutlak(int angka) {
    return (angka < 0) ? -angka : angka;
}
int hitung(int nilai1, int nilai2){
    return abs (nilai1 - nilai2);
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    int hasil = hitung(a, b) + hitung(c, d);
    printf("%d", mutlak(hasil));

    return 0;
}