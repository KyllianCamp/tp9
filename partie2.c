#include "partie2.h" 



void permut(T_Pile *P,char *chaine)
{
    T_Elt E;
    do
    {
        while(pileValide(P))
        {
           if(noeudTerminal(P,(int)strlen(&chaine)))
           {
               afficherSol(P, chaine);
			break;
           }
           else
           {
               passerAuPremierFils(P,0);
           }
        }
        while(!rechercheTerminee(P) && naPlusDeFrere(P,(int)strlen(&chaine)))
        {
            remonterAuPere(P,&E);
        }

        if(!rechercheTerminee(P))
        {
            passerAuFrereSuivant(P,&E);
        }
    } while(!rechercheTerminee(P));
    
}

int pileValide(T_Pile *adrP) 
{
	int compteur;
	for (int i = 0; i < adrP->nbElts; i++)
    {
		compteur = 0;
		for (int j = 0; j < adrP->nbElts; j++) 
        {
			if (adrP->Elts[j] == adrP->Elts[i]) compteur++;
			if (compteur > 1) return 0;
		}
	}
	return 1;
}

void afficherSol(T_Pile *P, char *chaine)
{
	for (int i = 0; i < P->nbElts; i++) printf("%c", chaine[P->Elts[i]]);
	printf(" ");
}

int factorielle(const char *chaine) 
{
    // Fonction factoriel pour connaître le nombre de permutations possibles
    int solution = strlen(chaine);
    for (int i = strlen(chaine) - 1; i > 0; i--)
        solution *= i;
    return solution;
}

// int echiquier(T_Pile *P, int taille, int graphique) {
// 	T_Elt elt;
// 	char tmp[20];
// 	int nb_sol = 0;
// 	do {
// 		while (reineValide(P)) {
// 			if (noeudTerminal(P, taille)) {
// 				if (graphique) {
// 					affichageGraphique(P);
// 					fgets(tmp, 5, stdin);
// 					if (strlen(tmp) > 1) {
// 						graphique = 0;
// 					}
					
// 				} else afficherReine(P);
// 				nb_sol++;
// 				break;
// 			} else {
// 				passerAuPremierFils(P, 0);
// 			}
// 		}
// 		while (!rechercheTerminee(P) && naPlusDeFrere(P, &elt, taille)) {
// 			remonterAuPere(P, &elt);
// 		}
// 		if (!rechercheTerminee(P)) {
// 			passerAuFrereSuivant(P, &elt);
// 		}
// 	} while (!rechercheTerminee(P));
// 	return nb_sol;
// }

// void afficherReine(T_Pile *P) {
// 	for (int i = 0; i < P->nbElts; i++) printf("%d", P->Elts[i]);
// 	printf(" ");
// }

// void affichageGraphique(T_Pile *P) {
// 	printf("\n");
// 	for (int i = 0; i < P->nbElts; i++){
// 		printf("\t+");
// 		for (int k = 0; k < P->nbElts; k++) printf("---+");
// 		printf("\n\t|");
// 		for (int j = 0; j < P->nbElts; j++) {
// 			if (P->Elts[i] == j) printf(" x |");
// 			else printf("   |");
// 		}
// 		printf("\n");
// 	}
// 	printf("\t+");
// 	for (int k = 0; k < P->nbElts; k++) printf("---+");
// 	printf("\n");
// }

// int reineValide(T_Pile *adrP) {
// 	return verifColonne(adrP) && verifDiago(adrP);
// }

// int verifColonne(T_Pile *adrP) {
// 	int compteur;
// 	for (int i = 0; i < adrP->nbElts; i++) {
// 		compteur = 0;
// 		for (int j = 0; j < adrP->nbElts; j++) {
// 			if (adrP->Elts[j] == adrP->Elts[i]) compteur++;
// 			if (compteur > 1) return 0;
// 		}
// 	}
// 	return 1;
// }

// int verifDiago(T_Pile *adrP) {
// 	for (int i = 0; i < adrP->nbElts; i++){
// 		for (int j = 0; j < adrP->nbElts; j++){
// 			if ((adrP->Elts[i] - abs(i-j) ==  adrP->Elts[j] || adrP->Elts[i] + abs(i-j) ==  adrP->Elts[j]) && i!=j) return 0;
// 		}
// 	}
// 	return 1;
// }