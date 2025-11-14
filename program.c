#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include<stdlib.h>// rand
#define MAX_CARTES 150
#define LIGNES 3
#define COLONNES 4

int main() 
{
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
            plateau[i][j] = pioche [nbr_cartes-1];
            nbr_cartes=nbr_cartes-1;
        }
    


    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            printf("%3d ", plateau[i][j]); 
        }
        printf("\n");
    }



   
return 0;
}

