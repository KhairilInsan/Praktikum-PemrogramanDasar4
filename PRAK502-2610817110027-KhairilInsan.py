def hitung(nilai1, nilai2):
    selisih = nilai1 - nilai2
    if selisih < 0:
        selisih = -selisih
    return selisih


def mutlak(angka):
    if angka < 0:
        angka = -angka
    return angka


a, c, b, d = map(int, input().split())
hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))
