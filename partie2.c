#include "partie2.h" 

void permut(T_Pile *P,char *chaine)
{
    T_Elt elt;
    do
    {
        while(pileValide(P))
        {
            // printf(" \nla hauteur de la pile : %d \n", hauteur(P));
           if(noeudTerminal(P,(int)strlen(chaine)))
           {
               printf("-- ");
               afficherSol(P, chaine);
               printf(" --\n");
			   break;
           }
           else
           {
            //    printf("\nje passe au premier fils    \t");
               passerAuPremierFils(P,0);
           }
        }
        while(!rechercheTerminee(P) && naPlusDeFrere(P,&elt,(int)strlen(chaine)))
        {
            remonterAuPere(P,&elt);
        }
        if(rechercheTerminee(P)!=1)
        {
            passerAuFrereSuivant(P,&elt);
        }
    } while(rechercheTerminee(P)!=1);
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
	for (int i = 0; i < P->nbElts; i++)
    {
        printf("%c", chaine[P->Elts[i]]);
    }
}

int factorielle(const char *chaine) 
{
    // Fonction factoriel pour connaître le nombre de permutations possibles
    int solution = strlen(chaine);
    for (int i = strlen(chaine) - 1; i > 0; i--)
        solution *= i;
    return solution;
}
