#include "headers/Manga.h"

int main(){

    int n;
    char name[50];

    printf("Combien de manga voulez vous ajouter? : ");  
    scanf("%d", &n);

    Manga *mangas = addManga(n);


    printManga(mangas, n);

    printManga16(mangas, n);

    printf("Quel manga voulez vous chercher ? : ");
    scanf("%s", name);
    float price = searchManga(mangas, n, name);
    if(price != -1){
        printf("\nLe manga %s coute %.2f\n\n", name, price);
    }else{
        printf("\nLe manga %s n'existe pas\n\n", name);
    }

    return 0;
}