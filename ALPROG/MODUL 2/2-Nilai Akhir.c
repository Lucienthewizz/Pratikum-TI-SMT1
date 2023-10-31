/*Program Menentukan Nilai Akhir (NA) Mata Kuliah*/

#include <stdio.h>
#include <stdlib.h> //agar bisa memakai exit()

//Deklarasi Validasi
//Validasi Isi
int validasi1angkaIsi(){
  
  int range =0;
  char buffer[255], invalid;
  int valid;

  do{
    scanf("%[^\n]", buffer);
    getchar();
    if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid > 100){
      printf("\nNilai Tidak Bisa lebih dari 100");
      printf("\nInput Nilai yang valid: ");
    }
    else if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid > range){
      return valid;
    }
    else{
      printf("\nInputan Salah, Tolong Input Ulang!");
      printf("\nInput Nilai yang valid: ");      
    }
  }while(1);
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

int validasi1angkaAbsensi(){
  int min = 0, maks = 15;
  char buffer[255], invalid;
  int valid;

  do{
    scanf("%[^\n]", buffer);
    getchar();
    if(sscanf(buffer, "%d%c", &valid, &invalid) ==1 && valid >= min && valid <= maks){
      return valid;
    }
    else if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid > 15){
      printf("\n");
      printf("Jumlah Kehadiran Melebihi Maksimal Kehadiran!");
      printf("\n\n[1] Input Nilai Absensi (MAKS 15): ");
    }
    else{
      printf("\nInputan Salah, Tolong Input Ulang!");
      printf("\nInput Nilai yang valid: ");      
    }
  } while(1);
}

//validasi Absensi
// int validasi1angkaAbsensi2(){
  
//   int range =0;
//   char buffer[255], invalid;
//   int valid;

//   do{
//     scanf("%[^\n]", buffer);
//     getchar();
//     if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid > 15){
//       printf("\n");
//       printf("Jumlah Kehadiran Melebihi Maksimal Kehadiran!");
//       printf("\n\n[1] Input Nilai Absensi (MAKS 15): ");
//     }
//     else if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid > range){
//       return valid;
//     }
//     else{
//       printf("\nInputan Salah, Tolong Input Ulang!");
//       printf("\nInput Nilai yang valid: ");      
//     }
//   }while(1);
// }

//Deklarasi Fungsi Untuk Program Nilai Akhir
float menghitungNilaiAkhir(int absensi, float nilaiTugas1, float nilaiTugas2, float nilaiTugas3, float nilaiQuiz, float nilaiUTS, float nilaiUAS);

//Deklarasi Prosedur Untuk Program Nilai Akhir
void hasilNilaiAkhir();
void ukiranProgram();
void ukirBanner();
void ukirbannerBawah();

//Program inti
int main(){
  int pilihanLoop;

  do{
    ukiranProgram();
    hasilNilaiAkhir();

    printf("\nApakah Ingin Mengulang Program ini?"); 
    printf("\n[1] YES");
    printf("\n[0] NO");
    printf("\nPilihan > ");
    pilihanLoop = validasi1angkaLoop();
  } while (pilihanLoop == 1);

  return 0;
}

//Fungsi Menhingtung Nilai Akhir
float menghitungNilaiAkhir(int absensi, float nilaiTugas1, float nilaiTugas2, float nilaiTugas3, float nilaiQuiz, float nilaiUTS, float nilaiUAS){
  float nilaiAkhir;

  nilaiAkhir = (absensi / 15.0 * 5) + (nilaiTugas1 * 0.2) + (nilaiTugas2 * 0.2) + (nilaiTugas3 * 0.2) + (nilaiQuiz * 0.15) + (nilaiUTS * 0.3) + (nilaiUAS * 0.3);

  return nilaiAkhir;
}

//Prosedur Hasil Nilai Akhir
void hasilNilaiAkhir(){
  int absensi; 
  float nilaiTugas1, nilaiTugas2, nilaiTugas3, nilaiQuiz, nilaiUTS, nilaiUAS, hasilAkhir;

  //Absensi
  printf("[1] Input Nilai Absensi (MAKS 15): ");
  absensi = validasi1angkaAbsensi();
  //Tugas1
  printf("[2] Input Nilai Tugas1: ");
  nilaiTugas1 = validasi1angkaIsi();
  //Tugas2
  printf("[3] Input Nilai Tugas2: ");
  nilaiTugas2 = validasi1angkaIsi();
  //Tugas3
  printf("[4] Input Nilai Tugas3: ");
  nilaiTugas3 = validasi1angkaIsi();
  //Quiz
  printf("[5] Input Nilai Quiz: ");
  nilaiQuiz = validasi1angkaIsi();
  //UTS
  printf("[6] Input Nilai Ulangan Tengah Semester(UTS): ");
  nilaiUTS = validasi1angkaIsi();
  //UAS
  printf("[7] Input Nilai Ulangan Akhir Semester(UAS): ");
  nilaiUAS = validasi1angkaIsi();

  //Proses
  hasilAkhir = menghitungNilaiAkhir(absensi, nilaiTugas1, nilaiTugas2, nilaiTugas3, nilaiQuiz, nilaiUTS, nilaiUAS);

  ukirBanner();
  //E
  if (hasilAkhir < 45) {
    printf("[]       %2.f        |         E           []", hasilAkhir);
    ukirbannerBawah();
    // printf("\n");
    // printf("Nilai Huruf: E\n");
  } 
  //D
  else if (hasilAkhir < 50) {
    printf("[]       %2.f        |         D           []", hasilAkhir);
    ukirbannerBawah();
    // printf("\n");
    // printf("Nilai Huruf: D\n");
  } 
  //D+
  else if (hasilAkhir < 55) {
    printf("[]       %2.f        |        D+           []", hasilAkhir);
    ukirbannerBawah();
    // printf("\n");
    // printf("Nilai Huruf: D+\n");
  } 
  //C
  else if (hasilAkhir< 60) {
    printf("[]       %2.f        |         C           []", hasilAkhir);
    ukirbannerBawah();
    // printf("\n");
    // printf("Nilai Huruf: C\n");
  }
  //C+
  else if (hasilAkhir< 65) {
    printf("[]       %2.f        |        C+           []", hasilAkhir);
    ukirbannerBawah();
    // printf("\n");
    // printf("Nilai Huruf: C+\n");
  } 
  //B
  else if (hasilAkhir < 75) {
    printf("[]       %2.f        |         B           []", hasilAkhir);
    ukirbannerBawah();
    // printf("\n");
    // printf("Nilai Huruf: B\n");
  } 
  //B+
  else if (hasilAkhir < 80) {
    printf("[]       %2.f        |        B+           []", hasilAkhir);
    ukirbannerBawah();
    // printf("\n");
    // printf("Nilai Huruf: B+\n");
  }
  //A
  else {
    printf("[]      %2.f        |         A          []", hasilAkhir);
    ukirbannerBawah();
    // printf("\n");
    // printf("Nilai Huruf: A\n");
  }  
}

//Prosedur Header 
void ukiranProgram(){
  printf("[]---------------------------------------------------------------------------------------------------[]\n");
  printf("[]--------------Program Menentukan Nilai Akhir Dari Absen, Tugas, Quiz, Dan Ulangan------------------[]\n");
  printf("[]---------------------------------------------------------------------------------------------------[]\n\n");
}

//Prosedur Ukiran Box
void ukirBanner(){
  printf("\n");
  printf("[]=======================================[]\n");
  printf("[]   Total Nilai   |  Hasil Nilai Akhir  []\n");
  printf("[]=======================================[]\n");
}

//Prosedur Ukiran Box (BAWAH)
void ukirbannerBawah(){
  printf("\n");
  printf("[]=======================================[]\n");
}