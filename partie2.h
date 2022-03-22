#include "es.h" 	 
#include "pile.h"

#define passerAuPremierFils(adrP,E) empiler(adrP,E)
#define remonterAuPere(adrP,adrE) depiler(adrP,adrE) 
#define passerAuFrereSuivant(adrP,adrE) depiler(adrP,adrE),empiler(adrP,1+(*adrE)) 
#define naPlusDeFrere(adrP,TailleChaine) sommet(adrP)==TailleChaine
#define noeudTerminal(adrP,TailleChaine) hauteur(adrP)==TailleChaine
#define rechercheTerminee(adrP) pilevide(adrP)

void permut(T_Pile *P,char chaine);

int pileValide(T_Pile *P);

