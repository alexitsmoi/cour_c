#include <stdio.h>
#include <stdlib.h>


int main (){
    float Enomb,resultat,tour;
    Enomb = 0;
    tour = 0;
    while(Enomb >= 0){
        scanf("%f\n",&Enomb);
        printf("La note est %f\n",Enomb);
        resultat += Enomb;
    }
    resultat /= tour;
    printf("Moyenne de ces notes : %f\n", resultat);
}

