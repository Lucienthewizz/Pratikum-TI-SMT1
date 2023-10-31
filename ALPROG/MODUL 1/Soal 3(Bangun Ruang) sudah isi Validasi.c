/*Program Menentukan Volume dan Luas Permukaan dari bangun ruang*/

#include <stdio.h>
#include <stdlib.h> //agar bisa memakai exit()

//Deklarasi Fungsi
float vlTabung(float r, float t);
float lpTabung(float r, float t);
float vlBola(float r);
float lpBola(float r);
float vlLimas_segiempat(float luasAlas, float t);
float lpLimas_segiempat(float luasAlas, float sisiMiring);
float vlPrisma_segitiga(float luasAlas, float t);
float lpPrisma_segitiga(float luasAlas, float sisiTegak);
float vlKerucut(float r, float t);
float lpKerucut(float r, float sisiMiring);

//Deklarasi Prosedur
void vl_lp_Tabung();
void vl_lP_Bola();
void vl_lp_Limas_segiempat();
void vl_lp_Prisma_segitiga();
void vl_lp_Kerucut();

//Deklarasi Prosedur Validasi dan isinya
void teksErorr(){
  printf("Inputan salah, tolong input ulang!\n");
}

//Deklarasi Fungsi Validasi dan isinya
int validasi2angka_Pilihan(int min, int maks){
  char buffer[255], invalid;
  int valid;

  do{
    scanf("%[^\n]", buffer);
    getchar();
    if(sscanf(buffer, "%d%c", &valid, &invalid) ==1 && valid >= min && valid <= maks){
      return valid;
    }
    else if(sscanf(buffer, "%d%c", &valid, &invalid) ==1 && valid == 0){
      exit(0);
    }
    else{
      teksErorr();
      printf("\nPilihan mu: ");
    }
  } while(1);
}

int validasi1angka_Isi(){
  
  int range =0;
  char buffer[255], invalid;
  int valid;

  do{
    scanf("%[^\n]", buffer);
    getchar();
    if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid > range){
      return valid;
    }
    else if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid == range){
      printf("\nInputan tidak boleh 0!");
      printf("\nInput angka yang valid: ");  
    }
    else{
      teksErorr();
      printf("\nInput angka yang valid: ");      
    }
  }while(1);
}

int validasi1angka_Loop(){

  int range =0;
  char buffer[255], invalid;
  int valid;

  do{
    scanf("%[^\n]", buffer);
    getchar();
    if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid == range){
      system("cls");
      printf("\n---------------------------Terimakasih telah membuka program ini!-------------------------");
      printf("\n");
      exit(0);
    }
    else if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid == 1){
      system("cls");
      return valid; 
    }
    else{
      printf("\nTolong Input angka 1 atau 0!"); 
      printf("\nApakah Ingin Lanjut (1 untuk iya, 0 untuk tidak):"); 
    }
  }while(1);
}

int main() {
    /*Deklarasi Variabel*/

    int bangunRuang; //"Int" untuk memilih operator dengan bilangan bulat
    int pilihan; //"Char" untuk memberhentikan pilihan

    //Perulangan "Do while" untuk memberhentikan jika program tidak dilanjuti
    do { 
    //Input Operator yang diinginkan
    printf("------------------------------------------------------------------------------------------\n");
    printf("++++----------Program Menentukan Volume dan Luas Permukaan dari bangun ruang----------++++\n");
    printf("------------------------------------------------------------------------------------------\n\n");
    printf("Pilih Bangun Ruang (1-5): \n\n");
    printf("Pilih:");
    printf("\n 1. Tabung");
    printf("\n 2. Bola");
    printf("\n 3. Limas Segi Empat");
    printf("\n 4. Prisma Segitiga");
    printf("\n 5. Kerucut");
    printf("\n 0. Exit");
    printf("\n\nPilihan mu: ");
    bangunRuang = validasi2angka_Pilihan(1, 5);

    //"Switch" untuk memilih operator yang ada dalam list
    switch (bangunRuang) {
        case 1: //Tabung
            vl_lp_Tabung();
            break;
        case 2: //Bola
            vl_lP_Bola();
            break;
        case 3: //Limas Segi Empat
            vl_lp_Limas_segiempat();
            break;
        case 4: //Prisma Segitiga
            vl_lp_Prisma_segitiga();
            break;
        case 5: //Kerucut
            vl_lp_Kerucut();
            break;
        default: //Validasi Terjadi jika tidak memilih dari bangun Ruang yang ada dalam list
            teksErorr();
            break;
        }
    
    //Inputan agar program bisa berhenti
    printf("\nApakah Ingin Lanjut (1 untuk iya, 0 untuk tidak): ");
    pilihan = validasi1angka_Loop();
    }
    while(pilihan == 1);

    return 0;
}

//Fungsi Volume Tabung
float vlTabung(float r, float t) {
  float volume;

  volume = 3.14 * r * r * t;
  return volume;
}

//Fungsi Luas Permukaan Tabung
float lpTabung(float r, float t) {
  float luasPermukaan;

  luasPermukaan = 2 * 3.14 * r * (r + t);
  return luasPermukaan;
}

//Fungsi Volume Bola
float vlBola(float r) {
  float volume;

  volume = 1.33 * 3.14 * r * r * r;
  return volume;
}

//Fungsi Luas Permukaan Bola
float lpBola(float r) {
  float luasPermukaan;

  luasPermukaan = 4 * 3.14 * r * r;
  return luasPermukaan;
}

//Fungsi Volume Limas Segi Empat
float vlLimas_segiempat(float luasAlas, float t) {
  float volume;

  volume = 0.3 * luasAlas * t;
  return volume;
}

//Fungsi Luas Permukaan Limas Segi Empat
float lpLimas_segiempat(float luasAlas, float sisiMiring) {
  float luasPermukaan;

  luasPermukaan = luasAlas + 4 * (0.5 * sisiMiring);
  return luasPermukaan;
}

//Fungsi Volume Prisma Segitiga
float vlPrisma_segitiga(float luasAlas, float t) {
  float volume;

  volume = luasAlas * t;
  return volume;
}

//Fungsi Luas Permukaan Segitiga
float lpPrisma_segitiga(float luasAlas, float sisiTegak) {
  float luasPermukaan;

  luasPermukaan = 2 * luasAlas + 3 * sisiTegak;
  return luasPermukaan;
}

//Fungsi Volume Kerucut
float vlKerucut(float r, float t) {
  float volume;

  volume = 0.3 * 3.14 * r * r * t;
  return volume;
}

//Fungsi Luas Permukaan Kerucut
float lpKerucut(float r, float sisiMiring) {
  float luasPermukaan;

  luasPermukaan = 3.14 * r * (r + sisiMiring);
  return luasPermukaan;
}

/*r = Jari-Jari, t = tinggi*/
//Prosedur Tabung
void vl_lp_Tabung(){
  float r, t; 

  printf("Masukkan jari-jari tabung: ");
  r = validasi1angka_Isi();
  printf("Masukkan tinggi tabung: ");
  t = validasi1angka_Isi();

  printf("\nVolume tabung: %.2f\n", vlTabung(r, t));
  printf("Luas permukaan tabung: %.2f\n", lpTabung(r, t));  
}

//Prosedur Bola
void vl_lP_Bola(){
  float r; 

  printf("Masukkan jari-jari Bola: ");
  r = validasi1angka_Isi();

  printf("\nVolume Bola: %.2f\n", vlBola(r));
  printf("Luas permukaan Bola: %.2f\n", lpBola(r));
}

//Prosedur Limas Segiempat
void vl_lp_Limas_segiempat(){
  float luasAlas, t ,sisiMiring;

  printf("Masukkan Luas Alas Limas Segi Empat: ");
  luasAlas = validasi1angka_Isi();
  printf("Masukkan tinggi Limas Segi Empat: ");
  t = validasi1angka_Isi();
  printf("Masukkan sising miring Limas Segi Empat: ");
  sisiMiring = validasi1angka_Isi();

  printf("\nVolume Limas Segi Empat: %.2f\n", vlLimas_segiempat(luasAlas, t));
  printf("Luas permukaan Limas Segi Empat: %.2f\n", lpLimas_segiempat(luasAlas, sisiMiring));
}

//Prosedur Prisma Segitiga
void vl_lp_Prisma_segitiga(){
  float luasAlas, t, sisiTegak;

  printf("Masukkan Luas Alas Prisma Segitiga: ");
  luasAlas = validasi1angka_Isi();
  printf("Masukkan tinggi Prisma Segitiga: ");
  t = validasi1angka_Isi();
  printf("Masukkan Sisi Tegak Prisma Segitiga: ");
  sisiTegak = validasi1angka_Isi();

  printf("\nVolume Prisma Segitiga: %.2f\n", vlPrisma_segitiga(luasAlas, t));
  printf("Luas permukaan Prisma Segitiga: %.2f\n", lpPrisma_segitiga(luasAlas, sisiTegak));
}

//Prosedur Kerucut
void vl_lp_Kerucut(){
  float r, t, sisiMiring;

  printf("Masukkan jari-jari Kerucut: ");
  r = validasi1angka_Isi();
  printf("Masukkan tinggi Kerucut: ");
  t = validasi1angka_Isi();
  printf("Masukkan Sisi Miring Kerucut: ");
  sisiMiring = validasi1angka_Isi();

  printf("\nVolume Kerucut: %.2f\n", vlKerucut(r, t));
  printf("Luas permukaan Kerucut: %.2f\n", lpKerucut(r, sisiMiring));
}
