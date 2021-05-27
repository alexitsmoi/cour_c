#include <stdio.h>
#include <stdlib.h>


int main (){
    float Enomb,resultat;
    int tour;
    tour = 1;
    Enomb = 0;
    printf("veuillez saisir une note entre 0 et 20 pour quitter taper -1 \n");
    while(Enomb >= 0){
        scanf("%f",&Enomb);
        if(Enomb >= 0){
        printf("note %d : %f\n",tour,Enomb);
        resultat += Enomb;
        tour ++;
        }
    }
    resultat /= tour;
    printf("Moyenne de ces notes : %f\n", resultat);
}

