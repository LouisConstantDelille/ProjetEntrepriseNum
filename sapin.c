#include <stdio.h>

void main(void) {
    
    int hauteur;
    int i;
    int j;
    int k;

    printf("Entrez la hauteur du sapin : ");
    scanf("%d", &hauteur);

    // Dessiner le sapin
    for(i = 1; i <= hauteur; i++) {
        // Espace avant les étoiles
        for(j = i; j < hauteur; j++) {
            printf(" ");
        }

    // Afficher les étoiles 
    for(k = 0; k < (2 * i - 1); k++) {
        printf("*");
    }

    printf("\n");       
}

     // Dessiner le tronc
    for(i = 0; i < hauteur - 1; i++) {
        printf(" ");
    }
    printf("||\n");

    return 0;
}