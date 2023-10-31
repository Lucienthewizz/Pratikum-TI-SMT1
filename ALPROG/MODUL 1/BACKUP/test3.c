#include <stdio.h>
#include <math.h>

int main(){
    
    int pilihan;
    int cont;

    do{
    printf("\n+++++++-------Program Lucien-------+++++++");
    printf("\n");
    printf("\n1. Mencari akar-akar persamaan kuadrat");
    printf("\n2. Mencari umur sekarang");
    printf("\n3. Menentukan sifat suhu dari celcius");
    printf("\npilih program yang ingin digunakan (1-3): ");
    scanf("%d", &pilihan);

    
        switch(pilihan){
        case 1: 
            int a, b, c, d;
            int x1, x2;

            printf("\nProgram mencari akar-akar persamaan kuadrat");
            printf("\ninput a, b, dan c: ");
            printf("\n");
            scanf("%d %d %d", &a, &b, &c);

            d = b*b - 4 * a * c;

            if(d < 0){
                printf("akar imajiner");
            }
            else if(d == 0){
                d = -b /(2*a);
                x1 = d;
                x2 = x1;
                printf("x1 adalah %d\n", x1);
                printf("x2 adalah %d", x2);
            }
            else{
                x1 = -b + sqrt(d/2 * a);
                x2 = -b - sqrt(d/2 * a);
                printf("x1 adalah %d\n", x1);
                printf("x2 adalah %d", x2);
            }

            break;
        
        case 2:
            int tl, ts, umur;
            
            printf("\nProgram mencari umur saat ini");
            printf("\nInput tahun lahir: ");
            scanf("%d", &tl);

            printf("Input tahun sekarang: ");
            scanf("%d", &ts);

            umur = ts - tl;

            printf("\nUmur anda adalah %d", umur);

            break;
        
        case 3:
            int celcius; 

            printf("\nProgram menentukan sifat suhu dalam celcius");
            printf("\nInput suhu dalam celcius: ");
            scanf("%d", &celcius);

            if(celcius < 0){
                printf("beku");
            }else if(0 <= celcius && celcius <= 100){
                printf("cair");
            }else{
                printf("gas");
            }
            break;

        default:
            printf("Piihan tidak valid!");
            break;
        }

        printf("\n\napakah ingin lanjut? (1 = yes, 0 = no): ");
        scanf("%d", &cont);
    }while(cont == 1);
    
    return 0;
}


















// #include <stdio.h>
// #include <math.h>

// int main(){

//     int a, b, c, d;
//     int x1, x2;

//     printf("input a, b, dan c: ");
//     printf("\n");
//     scanf("%d %d %d", &a, &b, &c);

//     d = b*b - 4 * a * c;

//     if(d < 0){
//         printf("akar imajiner");
//     }
//     else if(d == 0){
//         d = -b /(2*a);
//         x1 = d;
//         x2 = x1;
//         printf("x1 adalah %d\n", x1);
//         printf("x2 adalah %d", x2);
//     }
//     else{
//         x1 = -b + sqrt(d/2 * a);
//         x2 = -b - sqrt(d/2 * a);
//         printf("x1 adalah %d\n", x1);
//         printf("x2 adalah %d", x2);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int tl, ts, umur;
    
//     printf("Input tahun lahir: ");
//     scanf("%d", &tl);

//     printf("Input tahun sekarang: ");
//     scanf("%d", &ts);

//     umur = ts - tl;

//     printf("\nUmur anda adalah %d", umur);

//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int celcius; 

//     printf("Input suhu dalam celcius: ");
//     scanf("%d", &celcius);

//     if(celcius < 0){
//         printf("beku");
//     }else if(0 <= celcius && celcius <= 100){
//         printf("cair");
//     }else{
//         printf("gas");
//     }
//     return 0;
// }