#include <stdio.h>
#include <stdlib.h>

void cati(){

    printf("   /\\   \n");
    printf("  /  \\  \n");
    printf(" /    \\ \n");
    printf("/      \\\n");

}
void duvar(){

    printf("|       |\n");
    printf("|       |\n");
    printf("|       |\n");


}
void tavan(){

    printf("---------\n");
}


int main()
{
    int kat;

    printf("Ev kac katli olsun: ");
    scanf("%d",&kat);

    cati();
    tavan();

    for(;kat>0;kat--){
        duvar();
        tavan();
    }
    return 31;
}
