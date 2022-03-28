#include "partie2.h" 

void permut(T_Pile *P,char *chaine)
{
    T_Elt E;
    do
    {
        while(pileValide(P)==1)
        {
            // printf(" \nla hauteur de la pile : %d \n", hauteur(P));
           if(noeudTerminal(P,(int)strlen(chaine)))
           {
               printf("la hauteur de la pile : %d \n", sommet(P));
               afficherSol(P, chaine);
               break;
           }
           else
           {
            //    printf("\nje passe au premier fils    \t");
               passerAuPremierFils(P,0);
           }
        }
        while(rechercheTerminee(P)!=1 && naPlusDeFrere(P,(int)strlen(chaine)==1))
        {
            remonterAuPere(P,&E);
        }
        if(rechercheTerminee(P)!=1)
        {
            passerAuFrereSuivant(P,&E);
        }
    } while(rechercheTerminee(P)!=1);
}

int pileValide(T_Pile *adrP) 
{
	int compteur;
	for (int i = 0; i <= adrP->nbElts; i++)
    {
		compteur = 0;
		for (int j = 0; j <= adrP->nbElts; j++) 
        {
			if (adrP->Elts[j] == adrP->Elts[i]) compteur++;
			if (compteur > 1) return 0;
		}
	}
	return 1;
}

void afficherSol(T_Pile *P, char *chaine)
{
    int i = 0;
    if (i==0)
    {
        for (int i = 0; i < P->nbElts; i++) printf("%c", chaine[P->Elts[i]]);
        printf("\tla hauteur de la chaine vaut %d \n" , hauteur(P));
        printf(" ");
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

// int echiquier(T_Pile *P, int taille)
// {
//     for (int i = 1; i <= taille; i++)
//     {
//         T_Elt element = i;
//         empiler(P, element);

//     }
//     afficherPile(P);
// }

// int ReineValide(T_Pile *P, int taille)
// {
//     if()
//     {
        
//     }
// }