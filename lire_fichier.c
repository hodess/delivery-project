//
// Created by romai on 11/10/2022.
//

#include "lire_fichier.h"

//fonction principal
void Lire_mdp()
{
    //Lire le fichier matrice
    //char** mat=Lirefichier();

    //demander quel mot de passe il veut
    printf("quelle mot de passe voulez vous ? (taper 0 pour afficher tous les mots clef)\nTaper le mot clefs relié au mot de passe");
    char mot_clef_demander[SIZE] ;
    gets(mot_clef_demander);
    if (mot_clef_demander[0] == '0' && mot_clef_demander[1]=='\0')
    {
        //afficher tous les mots clef
        //affichier_tous_motsClef(mat);
    }



}


//cette fonction sert a lire le fichier texte et ressortir une matrice des mots de passe
char** LireFichier()
{
    printf("a");
    char** mat;
    return mat;
}



