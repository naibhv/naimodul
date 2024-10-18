#include <stdio.h>

int main() {

    int pilihan;
    int angka1, angka2, hasilInt;
    float hasilFloat;

    printf("|| ================================================== ||\n");
    printf("||             SELAMAT DATANG DI MODUL 1              ||\n");
    printf("||   PILIH OPERASI KALKULATOR YANG MAU ANDA GUNAKAN   ||\n");
    printf("|| ================================================== ||\n");
    printf("||                   1. Pertambahan                   ||\n");
    printf("||                   2. Pengurangan                   ||\n");
    printf("||                   3. Perkalian                     ||\n");
    printf("||                   4. Pembagian                     ||\n");
    printf("||                   5. Modulus                       ||\n");
    printf("|| ================================================== ||\n");
    printf("                 MASUKKAN PILIHAN ANDA :");
    scanf("%d", &pilihan);

    if (pilihan >= 1 && pilihan <= 5) {
        printf("|| ================================================== ||\n");
        printf("|| MASUKKAN ANGKA PERTAMA: ");
        scanf("%d", &angka1);  
        printf("|| MASUKKAN ANGKA KEDUA : ");
        scanf("%d", &angka2);  
        printf("|| ================================================== ||\n");

        
        switch (pilihan) {
            case 1:  
                hasilInt = angka1 + angka2;
                printf("Hasil Pertambahan: %d                              ||\n", hasilInt);
                break;
            case 2:  
                hasilInt = angka1 - angka2;
                printf("Hasil Pengurangan: %d                              ||\n", hasilInt);
                break;
            case 3:  
                hasilInt = angka1 * angka2;
                printf("Hasil Perkalian: %d                                ||\n", hasilInt);
                break;
            case 4:  
                if (angka2 != 0) {
                    hasilFloat = (float)angka1 / angka2;  
                    printf("Hasil Pembagian: %.2f                             ||\n", hasilFloat);
                } else {
                    printf("||     PEMBAGIAN DENGAN NOL TIDAK DAPAT DILAKUKAN     ||\n");
                }
                break;
            case 5:  
                if (angka2 != 0) {
                    hasilInt = angka1 % angka2;
                    printf("Hasil Modulus: %d                                  ||\n", hasilInt);
                } else {
                    printf("||      MODULUS DENGAN NOL TIDAK DAPAT DILAKUKAN      ||\n");
                }
                break;
        }
                
    } else {
        printf("|| ================================================== ||\n");
        printf("||        PILIHAN YANG ANDA MASUKKAN TIDAK ADA        ||\n");
        printf("|| ================================================== ||\n");
    }

    printf("|| ================================================== ||\n");
    return 0;

}