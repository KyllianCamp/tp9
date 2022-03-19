#include "file.h" 


void initFile(T_File *ptrF) //mettre Tete et Queue à -1
{
    ptrF->Tete = -1;
    ptrF->Queue = -1;
}

int  retirer(T_File *ptrF,T_Elt *ptrE) //si pas vide, en tete de file
{
    if(fileVide(ptrF)==1)
    {
        printf("Attention la file sélectionné est vide \n");
        return 0;
    }
    else
    {
        if(ptrF->Tete == MAX)
        {
            ptrF->Tete = -1;
        }
        else
        {
            ptrF->Tete = ptrF->Tete+1;
            return 1;
        }
    }
}

int ajouter(T_File *ptrF,T_Elt *ptrE) // si espace libre, ajout en queue
{  
    if(filePleine(ptrF)==1)
    {
        printf("Attention la file sélectionné est pleine \n");
        return 0;
    }
    else
    {
        if(ptrF->Queue == MAX)
        {
            ptrF->Queue = 0;  
            ptrF->Elts[ptrF->Queue] = *ptrE;
            return 1;
        }
        else
        {
            ptrF->Queue = ptrF->Queue+1;    
            ptrF->Elts[ptrF->Queue] = *ptrE;
            return 1;
        }

    }
} 

int fileVide(const  T_File *prtF) // qd Tete == 0 et Queue == 0
{
    if(prtF->Tete== 0 && prtF->Queue == 0)
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
    // if(ptrF->Tete == ptrF->Queue)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }
    return 0;
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
        return ptrF->Elts[ptrF->Tete];
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
        if(ptrF->Tete<ptrF->Queue)
        {
            for (int i=ptrF->Tete+1;i<=ptrF->Queue;i++)
            {
                afficherElt(&ptrF->Elts[i]);
            }
        }
        else
        {
            for (int i=ptrF->Tete;i<=MAX;i++)
            {
                afficherElt(&ptrF->Elts[i]);
            }
            for(int j=0;j<=ptrF->Queue;j++)
            {
                afficherElt(&ptrF->Elts[j]);
            }

        }
    }
}
