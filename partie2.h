#include "es.h" 	 
#include "pile.h"

void permut(T_Pile *P,char *chaine);

int pileValide(T_Pile *adrP);
void afficherSol(T_Pile *P, char *chaine);
int factorielle(const char *chaine);

#define passerAuPremierFils(adrP,E) empiler(adrP, E)
#define remonterAuPere(adrP, elt) depiler(adrP, elt)
#define passerAuFrereSuivant(adrP, adrE) depiler(adrP, adrE),empiler(adrP, 1+(*adrE))
#define naPlusDeFrere(adrP, adrE, TailleChaine) *sommet(adrP, adrE)==TailleChaine-1
#define noeudTerminal(adrP, TailleChaine) hauteur(adrP)==TailleChaine
#define rechercheTerminee(adrP) pileVide(adrP)

