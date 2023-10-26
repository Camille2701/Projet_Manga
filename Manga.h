// Created by Camille VEILLARD on 19/10/2023

#ifndef Manga_H
#define Manga_H

//Insérer les bibliothèques nécessaires
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Insérer les nouveaux types
typedef struct{
    char name[50];
    int age_min;
    float price;
} Manga;

//Insérer les autres prototypes ici
Manga *createManga();
Manga *addManga(int n);
void printManga(Manga *mangas, int n);
void printManga16(Manga *mangas, int n);
float searchManga(Manga *mangas, int n, char *name);


#endif