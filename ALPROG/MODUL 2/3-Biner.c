/*Program Konversi Decimal Ke Biner Dan Sebaliknya*/

#include <stdio.h>
#include <stdlib.h> //agar bisa memakai exit()
#include <string.h> //agar bisa memakai strlen()

//Deklarasi Validasi
//Deklarasi Fungsi Validasi dan isinya
int validasi2angkaPilihan(int min, int maks){
    char buffer[255], invalid;
    int valid;

    do{
    scanf("%[^\n]", buffer);
    getchar();
        if(sscanf(buffer, "%d%c", &valid, &invalid) ==1 && valid >= min && valid <= maks){
            return valid;
        }
        else if(sscanf(buffer, "%d%c", &valid, &invalid) ==1 && valid == 0){
            system("cls");
            printf("[]------------------------------------------------------------------------------------------[]");
            printf("\n[]-------------------------Terimakasih telah membuka program ini!---------------------------[]");
            printf("\n[]------------------------------------------------------------------------------------------[]");
            printf("\n");
            exit(0);
        }
        else{
            printf("\nInputan Invalid, Tolong Input Ulang! (1-2)");
            printf("\nPilihan mu: ");
        }
    } while(1);
}

//Validasi Isi Decimal Ke Biner
int validasi1angkaBiner(){

    int range =0;
    char buffer[255], invalid;
    int valid;

    do{
    scanf("%[^\n]", buffer);
    getchar();
        if(sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid > range){
            return valid;
        }
        else{
            printf("\nInputan Salah, Tolong Input Ulang!\n");
            printf("\nInput bilangan desimal: ");  
        }
    }while(1);
}

//Validasi Isi Biner ke Decimal
int validasi2angkaDecimal(){

    int range =0;
    char buffer[255], invalid;
    int valid;

    do {
        scanf("%[^\n]", buffer);
        getchar();

        int length = strlen(buffer);
        int isBinary = 1;

        // Memeriksa apakah setiap karakter adalah 0 atau 1
        for (int i = 0; i < length; i++) {
            if (buffer[i] != '0' && buffer[i] != '1') {
                isBinary = 0;
                break;
            }
        }
        if (isBinary && sscanf(buffer, "%d%c", &valid, &invalid) == 1 && valid >= range) {
            return valid;
        } else {
            printf("Inputan Biner Hanya Menirerima Angka 1 dan 0");
            printf("Input bilangan biner: ");
        }
    } while (1);    
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
//Deklarasi Prosedur Untuk Program Biner
void ukiranProgram();

// Prosedur untuk mengkonversi bilangan desimal ke biner
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Biner: 0\n");
        return;
    }

    int binary[32];
    int i = 0;

    while (decimal > 0) { //101
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++; 
    }

    printf("Biner: "); //
    for (int j = i-1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Prosedur untuk mengkonversi bilangan biner ke desimal
void binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Desimal: %d\n", decimal);
}

//Program Inti
int main() {
    int pilihanJenis, pilihanLoop;
        
    do{   
        ukiranProgram();
        
        printf("Pilih jenis konversi:\n");
        printf("[1] Desimal ke Biner\n");
        printf("[2] Biner ke Desimal\n");
        printf("[0] Exit\n");
        printf("Pilihan > ");
        pilihanJenis = validasi2angkaPilihan(1,2);

        //D -> B
        if (pilihanJenis == 1) {
            int decimal;
            printf("\nInput bilangan desimal: ");
            decimal = validasi1angkaBiner();
            decimalToBinary(decimal);
        }
        //B -> D
        else if (pilihanJenis == 2) {
            int binary;
            printf("\nInput bilangan biner: ");
            binary = validasi2angkaDecimal();
            binaryToDecimal(binary);
        } 
        else {
            printf("Pilihan tidak valid\n");
        }
        
        printf("\nApakah Ingin Mengulang Program ini?"); 
        printf("\n[1] YES");
        printf("\n[0] NO");
        printf("\nPilihan > ");
        pilihanLoop = validasi1angkaLoop();
    } while (pilihanLoop == 1);

    return 0;
}

//Prosedur Header 
void ukiranProgram(){
    printf("[]---------------------------------------------------------------------------------------------------[]\n");
    printf("[]--------------Program Menentukan Nilai Akhir Dari Absen, Tugas, Quiz, Dan Ulangan------------------[]\n");
    printf("[]---------------------------------------------------------------------------------------------------[]\n\n");
}