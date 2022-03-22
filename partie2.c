#include "partie2.h" 



void permut(T_Pile *P,char chaine)
{
    T_Elt E;
    do
    {
        while(pileValide(P)==1)
        {
           if(noeudTerminal(P,(int)strlen(&chaine))== 1)
           {
               printf("%c",chaine);
           }
           else
           {
               passerAuPremierFils(P,1);
           }
        }
        while(rechercheTerminee(P)==0 && naPlusDeFrere(P,(int)strlen(&chaine)))
        {
            remonterAuPere(P,&E);
        }

        if(rechercheTerminee(P)==0)
        {
            passerAuFrereSuivant(P,&E);
        }
    } while(rechercheTerminee(P)==0);
    
}

int pileValide(T_Pile *P)
{
    
    return 1;
}