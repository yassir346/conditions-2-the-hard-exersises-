#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, car, accidents;
    double primebase = 1000;
    double primefinale;

    printf("entrez l'age du conducteur : ");
    scanf("%d", &age);
    printf("entrez le type de voiture :\n 1.sportif\n2.utilitaire\n3.familiale\n");
    scanf("%d", &car);
    printf("entrez le nmbre d'accidents :");
    scanf(" %d", &accidents);

    if (age < 25){
        primefinale = primebase * 1000;
    }
    else if (age <= 65){
        primefinale = primebase;
    }
    else {primefinale = primebase * 1.2;}

    if (car == 1){
        primefinale *= 2;
    }
    else if (car == 2);{
        primefinale *= 1.2;
    }
    if (car == 3){
        primefinale *= 1.1;
    }

    if (accidents > 1){
        primefinale *= 1.3;
    }
    printf("la prime d'assurance est : %.2f\n", primefinale);
    return 0;
}
