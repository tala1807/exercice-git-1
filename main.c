#include <stdio.h>

int main() {
    float a, b, resultat;
    
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);
    
    if (b == 0) {
        printf("Erreur : Division par zéro non permise.\n");
    } else {
        resultat = a + b;
        printf("Le résultat de %.2f / %.2f est : %.2f\n", a, b, resultat);
    }
    
    return 0;
}
