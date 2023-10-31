#include <stdio.h>

int main (){
  printf("TUlIS NAMA DAN NIM");

  char nim[50];
  char nama[50];
	
	printf("\nMasukkan Nama: ");
	gets(nama);

  printf("Masukkan NIM: ");
  gets(nim);

	printf("\nWelcome %s dengan NIM %s di Program Ini!" ,nama, nim);

  while ( )
  printf("\n\n-----------------------------------------------------\n");
  printf("-------------Menghitung-luas-&-Keliling--------------\n");
  printf("-----------------------------------------------------\n");

  printf("Pilih Bangun datar yang tertera dibawah:\n\n");
  printf("choose:\n 1. Segitga sembarang\n 2. Belah ketupat\n 3. Jajar genjang\n 4. Trapesium\n 5. Lingkaran\n");
  printf("\n");

  int bd/*bangun datar*/, luas, keliling;
  int a/*alas 1*/, a2/*alas 2*/, t/*tinggi*/, s/*sisi saja*/, sA/*sisi 1*/, sB/*sisi 2*/, sC/*sisi 3*/, sD/*sisi 4*/, d1/*diagonal 1*/, d2/*diagonal 2*/;
  int r/*jari-jari*/;

  printf("your choice: ");
  scanf("%d", &bd);
  
  if (bd > 6) {
    printf("You choose that's not on the list operator!");
  }
  else if(bd < 1){
    printf("You choose that's not on the list operator!");
  }
  else {

    switch (bd) {
      case 1: //Segitiga Sembarang
        printf("Input alas: ");
        scanf("%d", &a);
        printf("Input tinggi: ");
        scanf("%d", &t);
        printf("Input sisi A: ");
        scanf("%d", &sA);
        printf("Input sisi B: ");
        scanf("%d", &sB);
        printf("Input sisi C: ");
        scanf("%d", &sC);

        luas = 1/2 * a * t;
        keliling = sA + sB + sC;

        printf("\nLuas dan Keliling dari Segitiga Sembarang adalah");
        printf("\n\nHasil Luas: %d", luas);
        printf("\nHasil Keliling: %d", keliling);
        break;

      case 2: //Belah Ketupat
        printf("Input diagonal pertama: ");
        scanf("%d", &d1);
        printf("Input diagonal kedua: ");
        scanf("%d", &d2);
        printf("Input sisi: ");
        scanf("%d", &s);

        luas = 1/2 * d1 * d2;
        keliling = s + s + s + s;

        printf("\nLuas dan Keliling dari Belah ketupat adalah");
        printf("\n\nHasil Luas: %d", luas);
        printf("\nHasil Keliling: %d", keliling);
        break;

      case 3: //Jajar genjang
        printf("Input alas: ");
        scanf("%d", &a);
        printf("Input tinggi: ");
        scanf("%d", &t);
        printf("Input sisi A: ");
        scanf("%d", &sA);
        printf("Input sisi B: ");
        scanf("%d", &sB);

        luas = a * t;
        keliling = (2 * sA) + (2 * sB);

        printf("\nLuas dan Keliling dari Jajar Genjang");
        printf("\n\nHasil Luas: %d", luas);
        printf("\nHasil Keliling: %d", keliling);
        break;

      case 4: //Trapesium
        printf("Input alas pertama: ");
        scanf("%d", &a);
        printf("Input alas kedua: ");
        scanf("%d", &a2);
        printf("Input tinggi: ");
        scanf("%d", &t);
        printf("Input sisi A: ");
        scanf("%d", &sA);
        printf("Input sisi B: ");
        scanf("%d", &sB);
        printf("Input sisi C: ");
        scanf("%d", &sC);
        printf("Input sisi D: ");
        scanf("%d", &sD);

        luas = 1/2 * (a + a2) * t;
        keliling = sA + sB + sC + sD;

        printf("\nLuas dan Keliling dari Trapesium adalah");
        printf("\n\nHasil Luas: %d", luas);
        printf("\nHasil Keliling: %d", keliling);
        break;
        
      case 5: //Lingkaran
        printf("Input jari-jari: ");
        scanf("%d", &r);
        
        luas = 3.14 * r * r;
        keliling = 2 * 3.14 * r;

        printf("\nLuas dan Keliling dari Lingkaran adalah");
        printf("\n\nHasil Luas: %d", luas);
        printf("\nHasil Keliling: %d", keliling);
        break;
        
      default:
        printf("\nPlease restart!");
        break;
    }
  }

  return 0;
}