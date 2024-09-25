#include <stdio.h>
#include <stdlib.h>

int main()
{
    float revenu;
    float score;
    float pret;

    printf("entrez votre revenu :");
    scanf("%f", &revenu);
    printf("entrez votre credit");
    scanf("%f", &score);
    printf("entrez votre pret");
    scanf("%f", &pret);

    if(revenu >= 30000 && score >= 700 && pret <= 10){
        printf("elligible");
    }
    else if(revenu >= 30000 && score >= 650 && pret <= 15){

     printf("elligible with conditions");
    }
    else {printf("you're not");}

    return 0;
}
