#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2)
{
    int selisih = nilai1 - nilai2;
    if (selisih < 0)
    {
        selisih = -selisih;
    }
    return selisih;
}

int mutlak(int angka)
{
    if (angka < 0)
    {
        angka = -angka;
    }
    return angka;
}

int main()
{
    int a, b, c, d;
    int Hasil;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);
    Hasil = hitung(a, b) + hitung(c, d);
    printf("%d", mutlak(Hasil));
    return 0;
}
