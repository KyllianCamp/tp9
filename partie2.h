#include "es.h" 	 
#include "pile.h"

#define passerAuPremierFils(adrP,E) empiler(adrP,E)
#define remonterAuPere(adrP) depiler(adrP) 
#define passerAuFrereSuivant(adrP,adrE)
#define depiler(adrP,adrE),empiler(adrP,1+(*adrE)) 
#define naPlusDeFrere(adrP,TailleChaine) sommet(adrP)==TailleChaine 
#define noeudTerminal(adrP,TailleChaine) hauteurPile(adrP)==TailleChaine
#define rechercheTerminee(adrP) pileVide(adrP)

void permut(T_Pile *P,char chaine);

