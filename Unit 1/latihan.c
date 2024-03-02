#include <stdio.h>

int main() {
    int s1,t1;
    int v1,t2;
    int s2,v2;

    printf ("Masukkan nilai jarak dan waktu = ");
    scanf ("%d %d", &s1, &t1);
    printf ("Masukkan nilai kecepatan dan waktu = ");
    scanf ("%d %d", &v1, &t2);
    printf ("Masukkan nilai jarak dan kecepatan = ");
    scanf ("%d %d", &s2, &v2);
   

    float V= (float) s1/t2;
    float S= (float) v1*t2;
    float T= (float) s2/v2;

    printf ("%f\n", V);
    printf ("%f\n", S);
    printf ("%f\n", T);

    return 0;

}