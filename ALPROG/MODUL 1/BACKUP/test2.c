/** PROGRAM bangunRuang
 * DESKRIPSI
 * Program menghitung luas permukaan dan volume bangun ruang
 * 
 * (2305551023) I Gede Krisna Pradnya Putra
 * (2305551105) El Roy Situmorang
 **/

// HEADER FILE

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// DEKLARASI

const double PI = 22.0/7.0;
const double UI = 60;
int n;
char string[60], item[5][60] = {"TABUNG", "BOLA", "LIMAS SEGIEMPAT", "PRISMA SEGITIGA", "KERUCUT"};

void input(char pesan[]);
int readBulat(char pesan[]);
double readReal(char pesan[]);
char readKarakter(char pesan[]);
int yesNo(char pesan[]);
double mintaNilai(char key[]);
void ukir(char txt[]);
void ukirBanner(char txt[]);
void invalid();
void cut();
double volumeTabung(double r, double t);
double permukaanTabung(double r, double t);
double volumeBola(double r);
double permukaanBola(double r);
double volumeLimasS4(double s, double t);
double permukaanLimasS4(double s, double t);
double volumePrismaS3(double s, double t);
double permukaanPrismaS3(double s, double t);
double volumeKerucut(double r, double t);
double permukaanKerucut(double r, double t);
void squad();
void hitung(int root, int pilihan);
void operasi(int root);
void validMenu();
void menu();
void main();

// ALAT & PROSEDUR

void input(char pesan[]){
    if(strlen(pesan)) {
        cut();
        ukir(pesan);
    }
    printf("||  >  ");
}

int readBulat(char pesan[]){
    int i;
    input(pesan);
    if(!scanf(" %d", &i)){
        invalid();
        while(getchar() != '\n');
        i = readBulat(pesan);
    }
    return i;
}

double readReal(char pesan[]){
    double d;
    input(pesan);
    if(!scanf(" %lf", &d)){
        invalid();
        while(getchar() != '\n');
        d = readReal(pesan);
    }
    return d;
}

char readKarakter(char pesan[]){
    char c[256];
    input(pesan);
    if(!scanf(" %s", c)){
        invalid();
        while(getchar() != '\n');
        c[0] = readKarakter(pesan);
    }
    return c[0];
}

int yesNo(char pesan[]){
    char res, ans;
    sprintf(string, "%s (Y/N)", pesan);
    if(!strchr("yYnN", res = readKarakter(string))){
        invalid(); ans = yesNo(pesan);
    }else ans = !strchr("nN", res);
    return ans;
}

double mintaNilai(char key[]){
    sprintf(string, "Masukkan nilai %s:", key);
    double d = readReal(string);
    if(d < 0){
        invalid();
        d = mintaNilai(key);
    }
    return d;
}

void ukir(char txt[]){
    printf("|| %s", txt);
    for(n = 0; n < UI-strlen(txt)-1; n++) printf(" ");
    printf("||\n");
}

void ukirBanner(char txt[]){
    cut();
    printf("||");
    for(n = 0; n < ceil((UI-strlen(txt))/2); n++) printf(" ");
    printf("%s", txt);
    for(n = 0; n < floor((UI-strlen(txt))/2); n++) printf(" ");
    printf("||\n");
    cut();
}

void invalid(){
    cut();
    ukir("Input tidak valid!");
}

void cut(){
    printf("[]");
    for(n = 0; n < UI; n++) printf("=");
    printf("[]\n");
}

// RUMUS & FUNGSI

double volumeTabung(double r, double t){
    return PI*r*r*t;
}

double permukaanTabung(double r, double t){
    return PI*r*(r+t)*2;
}

double volumeBola(double r){
    return PI*r*r*r*4/3;
}

double permukaanBola(double r){
    return PI*r*r*4;
}

double volumeLimasS4(double s, double t){
    return s*s*t/3;
}

double permukaanLimasS4(double s, double t){
    return s*(s+2*sqrt(pow(s/2, 2)+t*t));
}

double volumePrismaS3(double s, double t){
    return s*t*sqrt(s*s-pow(s/2, 2))/2;
}

double permukaanPrismaS3(double s, double t){
    return s*(t*3+sqrt(s*s-pow(s/2, 2)));
}

double volumeKerucut(double r, double t){
    return PI*r*r*t/3;
}

double permukaanKerucut(double r, double t){
    return PI*r*(r+sqrt(r*r+t*t));
}

// PROGRAM UTAMA & MENU

void squad(){
    char id[7][60] = {
        "(2305551023) I Gede Krisna Pradnya Putra",
        "(2305551048) Marcellino Elrobson Purba",
        "(2305551058) Made Satria Yudha Negara",
        "(2305551105) El Roy Situmorang",
        "(2305551114) Ria Dwi Ratna",
        "(2305551143) Abdul Gafur",
        "(2305551159) Ketut Adinata Vyarsa"
    };
    ukirBanner("KELOMPOK 10");
    for(int n = 0; n < 7; n++) ukir(id[n]);
}

void hitung(int root, int opt){
    double x, y, z;
    system("cls");
    sprintf(string, "%d. MENCARI %s %s", root, (opt)? "PERMUKAAN": "VOLUME", item[root-1]);
    ukirBanner(string);
    ukir("Mohon menggunakan nilai desimal positif!");
    switch(root){
        case 1:
            x = mintaNilai("jari-jari");
            y = mintaNilai("tinggi");
            z = opt? permukaanTabung(x, y): volumeTabung(x, y);
            break;
        case 2:
            x = mintaNilai("jari-jari");
            z = opt? permukaanBola(x): volumeBola(x);
            break;
        case 3:
            x = mintaNilai("sisi");
            y = mintaNilai("tinggi");
            z = opt? permukaanLimasS4(x, y): volumeLimasS4(x, y);
            break;
        case 4:
            x = mintaNilai("sisi");
            y = mintaNilai("tinggi");
            z = opt? permukaanPrismaS3(x, y): volumePrismaS3(x, y);
            break;
        case 5:
            x = mintaNilai("jari-jari");
            y = mintaNilai("tinggi");
            z = opt? permukaanKerucut(x, y): volumeKerucut(x, y);
            break;
    }
    cut();
    sprintf(string, "HASIL %s %s: %.2lf", opt? "PERMUKAAN": "VOLUME", item[root-1], z);
    ukir(string);
    if(yesNo("Apakah anda ingin mencoba lagi?")) hitung(root, opt);
}

void operasi(int root){
    char pilihan;
    sprintf(string, "%d. UKUR %s", root, item[root-1]);
    ukirBanner(string);
    ukir("[P]ERMUKAAN / [S]URFACE");
    ukir("[V]OLUME");
    ukir("[M]ENU");
    if(!strchr("mM", pilihan = readKarakter(""))){
        if(strchr("pPsSvV", pilihan)){
            hitung(root, !strchr("vV", pilihan));
            system("cls");
        }
        else invalid();
        operasi(root);
    }
}

void validMenu(){
    int pilihan;
    if(pilihan = readBulat("")){ 
        if(pilihan < 0 || pilihan > 5){
            invalid();
            validMenu();
        }
        else{
            system("cls");
            operasi(pilihan);
            system("cls");
            menu();
        }
    }else if(!yesNo("Apakah anda ingin keluar?")){
        system("cls");
        menu();
    }
}

void menu(){
    ukirBanner("MENU");
    for(int n = 0; n < 5; n++){
        sprintf(string, "[%d] %s", n+1, item[n]);
        ukir(string);
    }
    ukir("[0] < KELUAR");
    validMenu();
}

void main(){
    system("cls");
    ukirBanner("BANGUN RUANG");
    ukir("Program menghitung luas permukaan dan volume bangun ruang");
    squad();
    menu();
    system("cls");
    ukirBanner("TERIMA KASIH");
}