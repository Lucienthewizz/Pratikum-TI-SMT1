/*Program Menentukan Luas dan Keliling dari bangun datar*/

#include <stdio.h>

//Deklarasi Prosedur
void l_kll_Segitiga_sembarang(float sA, float sB, float sC, float a, float t){
    float luas, keliling;

    luas = 0.5 * a * t;
    keliling = sA + sB + sC;

    printf("\n");
    printf("Luas segitiga sembarang: %.2f\n", luas);
    printf("Keliling segitiga sembarang: %.2f\n", keliling);
}

void l_kll_Belahketupat(float d1, float d2, float s){
    float luas, keliling;

    luas = 0.5 * d1 * d2;
    keliling = s + s + s + s;

    printf("\n");
    printf("Luas belahketupat: %.2f\n", luas);
    printf("Keliling belahketupat: %.2f\n", keliling);
}

void l_kll_Jajargenjang(float sA, float sB, float a, float t){
    float luas, keliling;

    luas = a * t;
    keliling = (2 * sA) + (2 * sB);

    printf("\n");
    printf("Luas jajargenjang: %.2f\n", luas);
    printf("Keliling jajargenjang: %.2f\n", keliling);
}

void l_kll_Trapesium(float sA, float sB, float sC, float sD, float a, float a2, float t){
    float luas, keliling;

    luas = 0.5 * (a + a2) * t;
    keliling = sA + sB + sC + sD;

    printf("\n");
    printf("Luas Trapesium: %.2f\n", luas);
    printf("Keliling Trapesium: %.2f\n", keliling);
}

void l_kll_Lingkaran(float r){
    float luas, keliling;

    luas = 3.14 * r * r;
    keliling = 2 * 3.14 * r;

    printf("\n");
    printf("Luas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n", keliling);
}

int main() {
    /*Deklarasi Variabel*/

    int bangunDatar; //"Int" untuk memilih operator dengan bilangan bulat
    char pilihan; //"Char" untuk memberhentikan pilihan

    /*"Float" untuk menghasilkan bilangan pecahan*/
    float a/*alas 1*/, a2/*alas 2*/, t/*tinggi*/, s/*sisi saja*/, sA/*sisi 1*/, sB/*sisi 2*/, sC/*sisi 3*/, sD/*sisi 4*/, d1/*diagonal 1*/, d2/*diagonal 2*/, r/*jari-jari*/;

    //Perulangan "Do while" untuk memberhentikan jika program tidak dilanjuti
    do { 
    //Input Operator yang diinginkan
    printf("Pilih Bangun Datar (1-5): \n\n");
    printf("Pilih:\n 1. Segitiga Sembarang\n 2. Belah Ketupat\n 3. Jajar Genjang\n 4. Trapesium\n 5. Lingkaran\n");
    printf("\nPilihan mu: ");
    scanf("%d", &bangunDatar);

    //"Switch" untuk memilih operator yang ada dalam list
    switch (bangunDatar) {
        case 1: //Segitiga Sembarang
            printf("Input sisi A: ");
            scanf("%f", &sA);
            printf("Input sisi B: ");
            scanf("%f", &sB);
            printf("Input sisi C: ");
            scanf("%f", &sC);
            printf("Input alas: ");
            scanf("%f", &a);
            printf("Input tinggi: ");
            scanf("%f", &t);

            l_kll_Segitiga_sembarang(sA, sB, sC, a, t); //memanggil prosedur segitiga sembarang
            break;
        case 2: //Belah Ketupat
            printf("Input diagonal pertama: ");
            scanf("%f", &d1);
            printf("Input diagonal kedua: ");
            scanf("%f", &d2);
            printf("Input sisi: ");
            scanf("%f", &s);

            l_kll_Belahketupat(d1, d2, s); //memanggil prosedur belah ketupat
            break;
        case 3: //Jajar Genjang
            printf("Input sisi A: ");
            scanf("%f", &sA);
            printf("Input sisi B: ");
            scanf("%f", &sB);
            printf("Input alas: ");
            scanf("%f", &a);
            printf("Input tinggi: ");
            scanf("%f", &t);

            l_kll_Jajargenjang(sA, sB, a, t); //memanggil prosedur Jajar genjang
            break;
        case 4: //Trapesium
            printf("Input sisi A: ");
            scanf("%f", &sA);
            printf("Input sisi B: ");
            scanf("%f", &sB);
            printf("Input sisi C: ");
            scanf("%f", &sC);
            printf("Input sisi D: ");
            scanf("%f", &sD);
            printf("Input alas pertama: ");
            scanf("%f", &a);
            printf("Input alas kedua: ");
            scanf("%f", &a2);
            printf("Input tinggi: ");
            scanf("%f", &t);

            l_kll_Trapesium(sA, sB, sC, sD, a, a2, t); //memanggil prosedur Trapesium
            break;
        case 5: //Lingkaran
            printf("Input jari-jari: ");
            scanf("%f", &r);

            l_kll_Lingkaran(r); //memanggil prosedur Lingkaran
            break;
        default: //Validasi Terjadi jika tidak memilih dari bangun datar yang ada dalam list
            printf("Pilihan tidak ada dalam list, Tolong Restart!");
            break;
        }
    //Inputan agar program bisa berhenti
    printf("\n\nApakah Ingin Lanjut (Y/N): ");
    scanf(" %c", &pilihan);
    printf("\n");
    }
    while (pilihan == 'y' || pilihan == 'Y'); 

    return 0;
}
