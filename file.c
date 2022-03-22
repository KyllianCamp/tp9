#include "file.h" 


void initFile(T_File *ptrF) //mettre Tete et Queue à 0
{
    ptrF->Tete = 0;
    ptrF->Queue = 0; 
}

int  retirer(T_File *ptrF,T_Elt *ptrE) //si pas vide, en tete de file
{
    if(fileVide(ptrF))
    {
        printf("Attention la file sélectionné est vide \n");
        return 0;
    }
    else
    {
        ptrE = &ptrF->Elts[ptrF->Tete];
        if(ptrF->Tete == MAX)
        {
            ptrF->Tete = 0;
            return 1;
        }
        else
        {
            ptrF->Tete++;
            return 1;
        }
    }
}

int ajouter(T_File *ptrF,T_Elt *ptrE) // si espace libre, ajout en queue
{  
    if(filePleine(ptrF))
    {
        printf("Attention la file sélectionné est pleine \n");
        return 0;
    }
    else
    {   
        if(ptrF->Queue == MAX)
        {
            ptrF->Queue = 1;
            affecterElt(&ptrF->Elts[0],ptrE);
            return 1;
        }
        else
        {
            affecterElt(&ptrF->Elts[ptrF->Queue],ptrE);
            ptrF->Queue++;
            return 1;
        }

    }
} 

int fileVide(const  T_File *ptrF) // qd Tete == 0 et Queue == 0
{
    if(ptrF->Tete == ptrF->Queue)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int filePleine(const  T_File *ptrF) // qd MAX elts dans la file 
{
    if(ptrF->Tete < ptrF->Queue)
    {
        if (ptrF->Tete == 0 && ptrF->Queue == MAX)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if (ptrF->Tete  == ptrF->Queue + 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}

T_Elt  premier(T_File *ptrF) //valeur en tete de file
{
    if(fileVide(ptrF)==1)
    {
        printf("Attention la file sélectionné est vide \n");
        return 0;
    }
    else
    {
        if(ptrF->Tete == 0)
        {
           afficherElt(&ptrF->Elts[0]);
           return 1; 
        }
        else
        {
           afficherElt(&ptrF->Elts[ptrF->Tete]);
           return 1;
        }

    }
}

void afficherFile(T_File *ptrF)
{
    if(fileVide(ptrF)==1)
    {
        printf("Attention la file sélectionné est vide \n");
    }
    else
    {
        printf("Voici votre file :\n");
        if(ptrF->Tete<ptrF->Queue)
        {
            for (int i=ptrF->Tete;i<ptrF->Queue;i++)
            {
                afficherElt(&ptrF->Elts[i]);
            }
        }
        else
        {
            for(int i=ptrF->Tete;i<MAX;i++)
            {
                afficherElt(&ptrF->Elts[i]);
            }
            for(int j=0;j<ptrF->Queue;j++)
            {
                afficherElt(&ptrF->Elts[j]);
            }

        }
    }
}
