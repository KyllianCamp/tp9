#include "pile.h"

void initPile( T_Pile * P)
{
    P->nbElts = -1; //Nombre d'élément mis à -1 car permet de l'utiliser comme indice de la case du tableau (1er element en indice 0)
                    //Plus simple de mettre -1 ici plutôt que d'ajouter -1 partout pour obtenir l'indice de la case voulu.
}


int pilepleine(const  T_Pile *P)
{
    if (P->nbElts >= MAX-1)
    {
        return 1;
    }
    return 0;
}



int pilevide(const  T_Pile *P)
{
    if (P->nbElts < 0)
    {
        return 1;
    }
    return 0;
}



int empiler( T_Pile *P, T_Elt e) //renvoie 0 si pile pleine, sinon 1
{
    if (pilepleine(P) != 1)
    {   
        P->nbElts++;
        affecterElt(&P->Elts[P->nbElts], &e);
        return 1;
    }
    return 0;
}



int depiler( T_Pile *P, T_Elt *pelt)  //renvoie 0 si pile vide, sinon 1
{
    if (pilevide(P) != 1)
    {
        affecterElt(pelt, &P->Elts[P->nbElts]);
        P->nbElts--;
        afficherElt(pelt);
        return 1;
    }
return 0;
}



T_Elt sommet(const  T_Pile *P)
{
    return P->Elts[P->nbElts];
}



int hauteur(const  T_Pile *P)
{
    return P->nbElts+1;
}


void afficherPile(  T_Pile *P)
{
    T_Pile PTempo;
    initPile(&PTempo);
    if (pilevide(P)!=1)
    {
        while (pilevide(P) != 1)
        {
            afficherElt(&P->Elts[P->nbElts]);
            PTempo.nbElts++;
            affecterElt(&PTempo.Elts[PTempo.nbElts],&P->Elts[P->nbElts]);
            P->nbElts--;
        }
        while (pilevide(&PTempo) != 1)
        {
            P->nbElts++;
            affecterElt(&P->Elts[P->nbElts], &PTempo.Elts[PTempo.nbElts]);
            PTempo.nbElts--;
            
        }
    }
    else
    {
        printf("pile vide \n");
    }
}
<<<<<<< HEAD


// void permut(T_Pile *P,char chaine)
// {
//     do
//     {
//         /* code */
//     } while ();
    
// }

=======
>>>>>>> 5833f2edbb4d133e10ac21b5775fea0e30e6e3c5
