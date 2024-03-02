#include <stdio.h>

int sisi,liling,luas,vol;

void hitungliling(int sisi) {
    liling = sisi*4;
    printf ("Keliling persegi = %d \n", liling);
}
void hitungluas(int sisi) {
    luas = sisi*sisi;
    printf ("Luas persegi = %d \n", luas);
}
void hitungvol(int sisi) {
    vol = sisi*sisi*sisi;
    printf ("Volume kubus = %d\n", vol );
}

int main () {
    printf ("Masukkan nilai sisi= ");
    scanf ("%d", &sisi);

    hitungliling(sisi);
    hitungluas(sisi);
    hitungvol(sisi);

    return 0;
}