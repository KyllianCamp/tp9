#include "partie2.h" 

void permut(T_Pile *P,char *chaine)
{
    T_Elt elt;
    do
    {
        while(pileValide(P)==1)
        {
            // printf(" \nla hauteur de la pile : %d \n", hauteur(P));
           if(noeudTerminal(P,(int)strlen(chaine)))
           {
               printf("la hauteur de la pile : %d \n", sommet(P));
               afficherSol(P, chaine);
<<<<<<< HEAD
               break;
=======
			   break;
>>>>>>> e0550233704f08a72c9699f2f0401db09f98320d
           }
           else
           {
            //    printf("\nje passe au premier fils    \t");
               passerAuPremierFils(P,0);
           }
        }
<<<<<<< HEAD
        while(rechercheTerminee(P)!=1 && naPlusDeFrere(P,(int)strlen(chaine)==1))
=======
        while(!rechercheTerminee(P) && naPlusDeFrere(P,&elt,(int)strlen(chaine)))
>>>>>>> e0550233704f08a72c9699f2f0401db09f98320d
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
	for (int i = 0; i <= P->nbElts; i++) printf("%c", chaine[P->Elts[i]]);
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