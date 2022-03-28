#include "pile.h"



void initPile( T_Pile * P) 
{
    P->nbElts = 0;
}


int pilePleine(const  T_Pile *P) 
{
    if (P->nbElts == MAX) return 1;
    return 0;
}


int pileVide(const  T_Pile *P) 
{
    if (P->nbElts == 0) return 1;
    return 0;
}


int empiler( T_Pile *P, T_Elt e) {//renvoie 0 si pile pleine, sinon 1
    if (!pilePleine(P)) 
    {
        P->Elts[P->nbElts] = e;
        P->nbElts++;
        return 1;
    }
    return 0;
}


int depiler( T_Pile *P, T_Elt *pelt) { //renvoie 0 si pile vide, sinon 1 
    if (!pileVide(P)) 
    {
        P->nbElts--;
        affecterElt(pelt, &(P->Elts[P->nbElts]));
        return 1;
    }
    return 0;
}


T_Elt *sommet(T_Pile *P, T_Elt *pelt) {
    if (!pileVide(P)) 
    {
        affecterElt(pelt, &(P->Elts[P->nbElts-1]));
        return pelt;
    }
    *pelt = -1;
    return pelt;
    
}


int hauteur(const  T_Pile *P) {
    return P->nbElts;
}


void afficherPile(  T_Pile *P){
     for (int i = P->nbElts - 1; i >= 0; i--) 
     {
        afficherElt(&(P->Elts[i]));
     }
}








