#include "es.h" 	 
#include "pile.h"

#define passerAuPremierFils(adrP,E) empiler(adrP,E)
#define remonterAuPere(adrP,adrE) depiler(adrP,adrE) 
#define passerAuFrereSuivant(adrP,adrE) depiler(adrP,adrE),empiler(adrP,1+(*adrE)) 
#define naPlusDeFrere(adrP,elt,TailleChaine) sommet(adrP)==TailleChaine
#define noeudTerminal(adrP,TailleChaine) hauteur(adrP)==TailleChaine
#define rechercheTerminee(adrP) pilevide(adrP)

void permut(T_Pile *P,char *chaine);

int pileValide(T_Pile *adrP);
void afficherSol(T_Pile *P, char *chaine);
int factorielle(const char *chaine);
<<<<<<< HEAD

// int echiquier(T_Pile *P, int taille);
// int ReineValide(*P, taille);
=======
// void affichageGraphique(T_Pile *P);
// void afficherReine(T_Pile *P);
// int reineValide(T_Pile *adrP);
// int verifColonne(T_Pile *adrP);
// int verifDiago(T_Pile *adrP);
>>>>>>> e0550233704f08a72c9699f2f0401db09f98320d
