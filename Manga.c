#include "headers/Manga.h"

Manga *createManga(){
    Manga *manga = malloc(sizeof(Manga));
    printf("Titre du manga: ");
    scanf("%s", manga->name);
    printf("Age min: ");
    scanf("%d", &manga->age_min);
    printf("Prix: ");
    scanf("%f", &manga->price);
    return manga;
}

Manga *addManga(int n){
    Manga *manga = malloc(n * sizeof(Manga));
    for(int i = 0; i < n; i++){
        manga[i] = *createManga();
    }
    return manga;
}

void printManga(Manga *mangas, int n){
    printf("\n Liste des mangas:\n \n");
    for(int i = 0; i < n; i++){
        printf("Manga %d\n", i+1);
        printf("Titre: %s\n", mangas[i].name);
        printf("Age min: %d\n", mangas[i].age_min);
        printf("Prix: %.2f\n", mangas[i].price);
        printf("\n");
    }
}

void printManga16(Manga *mangas, int n){
    printf("\n Liste des mangas 16+:\n \n");
    for(int i = 0; i < n; i++){
        if(mangas[i].age_min >= 16){
            printf("Manga %d\n", i+1);
            printf("Titre: %s\n", mangas[i].name);
            printf("Age min: %d\n", mangas[i].age_min);
            printf("Prix: %.2f\n", mangas[i].price);
            printf("\n");
        }
    }
}

float searchManga(Manga *mangas, int n, char *name){
    for(int i = 0; i < n; i++){
        if(strcmp(mangas[i].name, name) == 0){
            return mangas[i].price;
        }
    }
    return -1;
}

