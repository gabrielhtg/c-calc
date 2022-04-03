#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double penjumlahan (double ang1, double ang2) {
    double result = ang1 + ang2;
    return result;
}

double pengurangan (double ang1, double ang2) {
    double result = ang1 - ang2;
    return result;
}

double perkalian (double ang1, double ang2) {
    double result = ang1 * ang2;
    return result;
}

double pembagian (double ang1, double ang2) {
    double result = ang1 / ang2;
    return result;
}

int main () {
    char username [100];
    char yesORno[1];
    int sama = 0;

    printf("Masukkan nama anda: ");
    scanf("%[^\n]s", username);
    printf("Halo %s!!!. Selamat datang di kalkulator penjumlahan ini. :) \n\n", username);
    
    pertanyaan();
    
   while (sama == 0) {
        printf("Apakah masih ingin melakukan kalkukasi? (y/n)");
        scanf("%s", &yesORno);
        sama = strcmp("y", yesORno);
        

        if (sama == 0) {
            pertanyaan();
        }
    }
 
    printf("\nTerima kasih telah menggunakan %s :)\n\n", username);         
    return 0;
}

void exit(int status);


int pertanyaan () {
    int operator;
    double first;
    double second;

    printf("\nMasukkan angka pertama: ");
    scanf("%lf", &first);
    printf("Masukkan angka kedua: ");
    scanf("%lf", &second);

    printf("\n    1 = penjumlahan\n");
    printf("    2 = pengurangan\n");
    printf("    3 = perkalian\n");
    printf("    4 = pembagian\n");
    printf("Pilih operator yang akan kamu gunakan: ");
    scanf("%d", &operator);
    

    if (operator == 1) {
        printf("-----------------------------\n");
        printf("Hasilnya adalah: %lf\n", penjumlahan(first, second));
        printf("-----------------------------\n\n");
    }
    
    else if (operator == 2) {
        printf("-----------------------------\n");
        printf("Hasilnya adalah: %lf\n", pengurangan(first, second));
        printf("-----------------------------\n\n");
    }

    else if (operator == 3) {
        printf("-----------------------------\n");
        printf("Hasilnya adalah: %lf\n", perkalian(first, second));
        printf("-----------------------------\n\n");
    }

    else if (operator == 4) {
        printf("-----------------------------\n");
        printf("Hasilnya adalah: %lf\n", pembagian(first, second));
        printf("-----------------------------\n\n");
    } 

    else {
        printf("Invalid operator. Masukkan operator yang tepat!\n\n");
    }
    return 0;
}