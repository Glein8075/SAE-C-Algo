#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "en_tete.h"

/**
:entree tab:tableau de CLIENT
:entre/sortie indice:tableau d'int
:entre taille: int
:Pr�condition
:tab est un tableau de "taille" element
:et indice a la m�me taille que tab
:Postcondition
: indice est trier dans l'ordre des �l�ments de tab qu'ils repr�sentent
:Declaration
:i,j:int
:ipetit:int
**/

void tri_indirect_nom(int taille, CLIENT tab[taille], int indice[taille]);
