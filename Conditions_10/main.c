#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D, M, Y;
    printf("la date au format : jj/mm/aaaa :\n");
    scanf("%d/%d/%d",&D,&M,&Y);

    switch (M){
    case 1 : printf("%d-January-%d", D, M, Y);
    break;
     case 2 : printf("%d-February-%d", D, M, Y);
    break;
     case 3 : printf("%d-March-%d", D, M, Y);
    break;
     case 4 : printf("%d-April-%d", D, M, Y);
    break;
    }
    return 0;
}
