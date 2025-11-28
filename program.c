#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include<stdlib.h>// rand
#include<time.h>
#define MAX_CARTES 150
#define LIGNES 3
#define COLONNES 4


void repeter(char motif[], int nb)
{
    for(int i = 0; i<nb; i++)
        printf("%s", motif);
    printf("\n");    
}

void retourner_carte (int plateau[][COLONNES], int choix){

     int ligne= (choix-1)/4;
        int colonne= (choix-1)%4;

    plateau [ligne][colonne]= plateau [ligne][colonne]-20;
}

void afficher_plateau(int plateau[][COLONNES])
{   
    for (int i=0; i<LIGNES; i++){
        printf ( "      %d       .      %d      .      %d      .      %d      \n", 1+ 4*i,2+4*i,3+4*i,4+4*i);
        repeter(" _____________ ", COLONNES);
        repeter("|             |", COLONNES);
        repeter("|             |", COLONNES);
        repeter("|             |", COLONNES);
        repeter("|             |", COLONNES);

        for (int j = 0; j < COLONNES; j++) {
           if (plateau[i][j]>=18 ){
            printf("|    skyjo    |");
           }
           else {
            printf("|    %3d      |", plateau[i][j]);
           }
            
        }
        printf("\n");
        repeter("|             |", COLONNES);
        repeter("|             |", COLONNES);
        repeter("|             |", COLONNES);
        repeter("|_____________|", COLONNES);
            
    }}

int main() 
{
   srand(time(NULL));
   printf(" _____________      _____________      _____________      _____________ \n");
   printf("|             |    |             |    |             |    |             |\n");
   printf("| S           |    | S           |    | S           |    | S           |\n");
   printf("|  K          |    |  K          |    |  K          |    |  K          |\n");
   printf("|   Y         |    |   Y         |    |   Y         |    |   Y         |\n");
   printf("|    J        |    |    J        |    |    J        |    |    J        |\n");
   printf("|     O       |    |     O       |    |     O       |    |     O       |\n");
   printf("|             |    |             |    |             |    |             |\n");
   printf("|_____________|    |_____________|    |_____________|    |_____________|\n");
   printf(" _____________      _____________      _____________      _____________ \n");
   printf("|             |    |             |    |             |    |             |\n");
   printf("| S           |    | S           |    | S           |    | S           |\n");
   printf("|  K          |    |  K          |    |  K          |    |  K          |\n");
   printf("|   Y         |    |   Y         |    |   Y         |    |   Y         |\n");
   printf("|    J        |    |    J        |    |    J        |    |    J        |\n");
   printf("|     O       |    |     O       |    |     O       |    |     O       |\n");
   printf("|             |    |             |    |             |    |             |\n");
   printf("|_____________|    |_____________|    |_____________|    |_____________|\n");
   printf(" _____________      _____________      _____________      _____________ \n");
   printf("|             |    |             |    |             |    |             |\n");
   printf("| S           |    | S           |    | S           |    | S           |\n");
   printf("|  K          |    |  K          |    |  K          |    |  K          |\n");
   printf("|   Y         |    |   Y         |    |   Y         |    |   Y         |\n");
   printf("|    J        |    |    J        |    |    J        |    |    J        |\n");
   printf("|     O       |    |     O       |    |     O       |    |     O       |\n");
   printf("|             |    |             |    |             |    |             |\n");
   printf("|_____________|    |_____________|    |_____________|    |_____________|\n");
   
int nbr_cartes=MAX_CARTES;

   int pioche [MAX_CARTES]={
      -2,-2,-2,-2,-2,
      0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
      -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
      1,1,1,1,1,1,1,1,1,1,
      2,2,2,2,2,2,2,2,2,2,
      3,3,3,3,3,3,3,3,3,3,
      4,4,4,4,4,4,4,4,4,4,
      5,5,5,5,5,5,5,5,5,5,
      6,6,6,6,6,6,6,6,6,6,
      7,7,7,7,7,7,7,7,7,7,
      8,8,8,8,8,8,8,8,8,8,
      9,9,9,9,9,9,9,9,9,9,
      10,10,10,10,10,10,10,10,10,10,
      11,11,11,11,11,11,11,11,11,11,
      12,12,12,12,12,12,12,12,12,12

   };
  
   for (int i=0; i<200; i++){
      int indice1= rand() %150;
      int indice2= rand () %150;
      int tmp = pioche [ indice2 ];
      pioche [ indice2]= pioche [ indice1];
      pioche [ indice1]=tmp;
   };


    int plateau[LIGNES][COLONNES]; 

    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            plateau[i][j] = pioche [nbr_cartes-1]+20;
            nbr_cartes=nbr_cartes-1;
        }
    }


    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            printf("%3d ", plateau[i][j]); 
        }
        printf("\n");
    }

    afficher_plateau(plateau);
    
   int choix1; 
   int choix2;  //début jeux 

        printf("choisir deux carte:");
        scanf("%d %d", &choix1,&choix2);  //bien mettre un espace entre les deux chiffres 

    retourner_carte ( plateau,choix1);
    retourner_carte(plateau,choix2);
    
    afficher_plateau(plateau);

    return 0;
}

