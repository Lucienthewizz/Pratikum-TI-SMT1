/*Program Menentukan Zodiac Dari Tanggal Dan Bulan Lahir*/

#include <stdio.h>
#include <stdlib.h> //agar bisa memakai exit()

//Deklarasi Fungsi Validasi dan isinya
//Validasi Tanggal
int validasi2angkaTanggal(int min, int maks){
  char buffer[255], invalid;
  int valid;

  do{
    scanf("%[^\n]", buffer);
    getchar();
    if(sscanf(buffer, "%d%c", &valid, &invalid) ==1 && valid >= min && valid <= maks){
      return valid;
    }
    else{
      printf("\nInput invalid, tolong input ulang!");
      printf("\n\n[1] Input Tanggal Lahir: ");
    }
  } while(1);
}

//Validasi Bulan
int validasi2angkaBulan(int min, int maks){
  char buffer[255], invalid;
  int valid;

  do{
    scanf("%[^\n]", buffer);
    getchar();
    if(sscanf(buffer, "%d%c", &valid, &invalid) ==1 && valid >= min && valid <= maks){
      return valid;
    }
    else{
      printf("\nInput invalid, tolong input ulang!");
      printf("\n\n[2] Input Bulan Lahir: ");
    }
  } while(1);
}

//Validasi Jika Program Lopp
int validasi1angkaLoop(){

  int range =0;
  char buffer[255], invalid;
  int valid;

  do{
    scanf("%[^\n]", buffer);
    getchar();
    if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid == range){
      system("cls");
      printf("[]------------------------------------------------------------------------------------------[]");
      printf("\n[]-------------------------Terimakasih telah membuka program ini!---------------------------[]");
      printf("\n[]------------------------------------------------------------------------------------------[]");
      printf("\n");
      exit(0);
    }
    else if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid == 1){
      system("cls");
      return valid; 
    }
    else{
      printf("\nTolong Input angka 1 atau 0!"); 
      printf("\nApakah Ingin Mengulang Program ini?"); 
      printf("\n[1] YES");
      printf("\n[0] NO");
      printf("\nPilihan > ");
    }
  }while(1);
}

//Deklarasi Prosedur Untuk Program Zodiak
void pilihTanggaldanBulan();
void ukiranProgram();
void ukirBanner();
void ukirbannerBawah();

//Program Inti
int main(){
  int pilihanLoop;
  
  do{
    ukiranProgram();
    pilihTanggaldanBulan();

    printf("\nApakah Ingin Mengulang Program ini?"); 
    printf("\n[1] YES");
    printf("\n[0] NO");
    printf("\nPilihan > ");
    pilihanLoop = validasi1angkaLoop();
  } while(pilihanLoop == 1);

  return 0;
}

//Prosedur Program Zodiak
void pilihTanggaldanBulan(){
  int tanggal, bulan;

    printf("[1] Input Tanggal Lahir(1-31): ");
    tanggal = validasi2angkaTanggal(1, 31);
    printf("[2] Input Bulan Lahir(1-12): ");
    bulan = validasi2angkaBulan(1, 12);

    //Aries
    if ((bulan == 3 && tanggal >= 21) || (bulan == 4 && tanggal <= 19)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |    Aries     []\n", tanggal, bulan);
      ukirbannerBawah();
    //Taurus
    } else if ((bulan == 4 && tanggal >= 20) || (bulan == 5 && tanggal <= 20)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |    Taurus    []\n", tanggal, bulan);
      ukirbannerBawah();
    //Gemini
    } else if ((bulan == 5 && tanggal >= 21) || (bulan == 6 && tanggal <= 20)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |    Gemini    []\n", tanggal, bulan);
      ukirbannerBawah();
    //Cancer
    } else if ((bulan == 6 && tanggal >= 21) || (bulan == 7 && tanggal <= 22)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |    Cancer    []\n", tanggal, bulan);
      ukirbannerBawah();
    //Leo
    } else if ((bulan == 7 && tanggal >= 23) || (bulan == 8 && tanggal <= 22)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |     Leo      []\n", tanggal, bulan);
      ukirbannerBawah();
    //Virgo
    } else if ((bulan == 8 && tanggal >= 23) || (bulan == 9 && tanggal <= 22)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |    Virgo     []\n", tanggal, bulan);
      ukirbannerBawah();
    //Libra
    } else if ((bulan == 9 && tanggal >= 23) || (bulan == 10 && tanggal <= 22)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |    Libra     []\n", tanggal, bulan);
      ukirbannerBawah();
    //Scorpio
    } else if ((bulan == 10 && tanggal >= 23) || (bulan == 11 && tanggal <= 21)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |    Scorpio   []\n", tanggal, bulan);
      ukirbannerBawah();
    //Saggitarius
    } else if ((bulan == 11 && tanggal >= 22) || (bulan == 12 && tanggal <= 21)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |  Saggitarius []\n", tanggal, bulan);
      ukirbannerBawah();
    //Capricorn
    } else if ((bulan == 12 && tanggal >= 22) || (bulan == 1 && tanggal <= 19)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |   Capricorn  []\n", tanggal, bulan);
      ukirbannerBawah();
    //Aquarius
    } else if ((bulan == 1 && tanggal >= 20) || (bulan == 2 && tanggal <= 18)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |   Aquarius   []\n", tanggal, bulan);
      ukirbannerBawah();
    //Validasi Februari
    } else if(bulan == 2 && tanggal >29) {
      printf("\nTanggal Dalam Februari Melebihi Maksimum\n");
    //Pisces
    } else if ((bulan == 2 && tanggal >= 19) || (bulan == 3 && tanggal <= 20)) {
      ukirBanner();
      printf("[]      %02d         |      %02d       |    Pisces    []\n", tanggal, bulan);
      ukirbannerBawah();
    }
    else{
      printf("\nTanggal atau bulan yang dimasukkan tidak valid.\n");
    }
}

//Prosedur Header 
void ukiranProgram(){
  printf("[]--------------------------------------------------------------------------------------[]\n");
  printf("[]--------------Program Menentukan Zodiak Dari Tanggal Dan Bulan Lahir------------------[]\n");
  printf("[]--------------------------------------------------------------------------------------[]\n\n");
}

//Prosedur Ukiran Box
void ukirBanner(){
  printf("\n");
  printf("[]================================================[]\n");
  printf("[]  Tanggal Lahir  |  Bulan Lahir  |    Zodiak    []\n");
  printf("[]================================================[]\n");
}

//Prosedur Ukiran Box (BAWAH)
void ukirbannerBawah(){
  printf("[]================================================[]\n");
}