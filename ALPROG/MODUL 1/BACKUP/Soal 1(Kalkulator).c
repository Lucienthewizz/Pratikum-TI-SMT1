/*Program Kalkulator Sederhana*/

#include <stdio.h>

//Deklarasi Fungsi
float tambah (float a, float b) {
  return a + b;
}

float kurang (float a, float b) {
  return a - b;
}

float kali (float a, float b) {
  return a * b;
}

float bagi (float a, float b) {
  if (b != 0) {
    return a / b;
  }
  else{
    printf("Pembagian dengan 0 tidak dibolehkan!");
    return 0;
  }
}

int mod (int a, int b) {
  if (b != 0) {
    return a % b;
  }
  else{
    printf("Modulasi dengan 0 tidak dibolehkan!");
    return 0;
  }
}

int main() {
  //Deklarasi Variabel

  int operator; //"Int" untuk memilih operator dengan bilangan bulat
  float num1, num2, result; //"Float" untuk menghasilkan bilangan pecahan
  char pilihan; //"Char" untuk memberhentikan pilihan

  //Perulangan "Do while" untuk memberhentikan jika program tidak dilanjuti
  do { 
    //Input Angka Pertama yang diinginkan
    printf("Input Angka Pertama: ");
    scanf("%f", &num1);

    //Input Angka Kedua yang diinginkan
    printf("Input Angka Kedua: ");
    scanf("%f", &num2);

    //Input Operator yang diinginkan
    printf("\nPilih Operator (1-5): \n\n");
    printf("Pilih:\n 1. Pertambahan(+)\n 2. Perkurangan(-)\n 3. Perkalian(x)\n 4. Pembagian(/)\n 5. Modulasi\n");
    printf("\nPilihan mu: ");
    scanf("%d", &operator);

    //"Switch" untuk memilih operator yang ada dalam list
    switch (operator) {
      case 1: //Pertambahan
        result = tambah(num1, num2);
        printf("Hasil Pertambahan adalah %.1f + %.1f = %.2f", num1, num2, result);
        break;
      case 2: //Perkurangan
        result = kurang(num1, num2);
        printf("Hasil Perkurangan adalah %.1f - %.1f = %.2f", num1, num2, result);
        break;
      case 3: //Perkalian
        result = kali(num1, num2);
        printf("Hasil Perkalian adalah %.1f x %.1f = %.2f", num1, num2, result);
        break;
      case 4: //Pembagian
        result = bagi(num1, num2);
        if (num2 !=0) {
          printf("Hasil Pembagian adalah %.1f / %.1f = %.2f", num1, num2, result);
        }
        else {
          printf("\nPilih pembagi dengan angka lain!");
        }
        break;
      case 5: //Modulasi
        result = mod(num1, num2);
        if (num2 !=0) {
          printf("Hasil Modulasi adalah %d mod %d = %d", (int)num1, (int)num2, (int)result);
        }
        else { 
          printf("\nPilih Angka selain 0!");
        }
        break;
      default: //Validasi Terjadi jika tidak memilih dari operator yang ada dalam list
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