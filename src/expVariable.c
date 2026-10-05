#include<stdio.h>

int main(){

    //Type nom; -- le langage C est sensible à la casse
    int nombreEntier;
    float nombreDecimal = 9.98;
    char caractere;
    
    nombreEntier = 42; // Affectation de 42 à nombreEntier
    caractere = 'a';

    // Après déclaration et affectation; recompiler rien ne se passe 
    // Il faut les utiliser; les afficher

     printf(" Bienvenue     , Seance Variable \n");

     //Affichage des variables
      printf (" Un entier  => %c ", nombreEntier);
       printf (" un caractère => %d ", caractere);
    return 0;
}