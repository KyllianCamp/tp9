// SDA1 TP 9 PILE de TAD (PILE d'ELEMENT)

#include "pile.h"
#include "file.h"


int menu()
{

int choix;
printf("\n\n\n SDA1 TP9");
printf("\n\n\n 1 : tester mon fichier file.c");
printf("\n 2 : tester mon fichier pile.c");
printf("\n 3 : afficher et compter les permutations d'une chaine");
printf("\n 4 : afficher et compter les solutions pour un échiquier ");
printf("\n 0 :  QUITTER  ");
printf("\n votre choix ?  ");
scanf("%d",&choix);
return choix;
}

int main()
{
T_File mafile;
T_Pile mapile;
int chx;
int choix;
int valeur = 5;
T_Elt element;
// int taille;
//char chaine[20];

do
{
chx=menu();
switch (chx)
	{
	case 1 :  
		//testez toutes vos fonctions par un jeu de test de votre choix
		//testPile(&mapile); //TP9 partie 1 : à ecrire 

		initFile(&mafile); //On initalisz la file avec Tete et Queue à -1

		printf("Combien d'élement voulez-vous ajouter a cette file?\n");
		scanf("%d" , &choix);
		for(int compteur=0; compteur<choix; compteur++)
		{
			printf("Quelle élement voulez vous ajouter? (Ceci est votre choix n°%d) \n" , compteur);
			scanf("%d" , &element);
			ajouter(&mafile ,&element);
		}

		afficherFile(&mafile);

		printf("\n");
		printf("Combien d'élement voulez-vous retirer a cette file?\n");
		scanf("%d" , &choix);
		for(int compteur=0; compteur<choix; compteur++)
		{
			retirer(&mafile ,&element);
		}

		afficherFile(&mafile);

		printf("\nMaintenant nous allons tester pour vérifier si la file est vide ou non \nIl retournera 1 si elle est vide et 0 si elle est non vide \n");
		initFile(&mafile);
		int c = fileVide(&mafile);
		printf("%d\n",c);


		printf("Maintenant nous allons tester pour vérifier si la file est pleine ou non \nIl retournera 1 si elle est pleine  et 0 si elle est non pleine \n");
		initFile(&mafile);
		for(int compteur=0; compteur<MAX; compteur++)
		{
			printf("%d",compteur);
			ajouter(&mafile ,&valeur);
		}
		c = filePleine(&mafile);
		afficherFile(&mafile);
		printf("\n\n%d\n",c);

		break;
	case 2 : //testez toutes vos fonctions par un jeu de test de votre choix
		// testFile(&mafile); //TP9 partie 1 : à ecrire 
		
		break; 
	case 3 : 
		//scanf("%s",chaine); //une chaine de longueur <=MAX
		//permut(&mapile,chaine); //TP9 partie 2: ecrire permut
		break;
	case 4 : 
		//scanf("%d",&taille);//taille echiquier <=MAX
		//echiquier(&mapile,taille); //TP9 partie 3: ecrire echiquier
		break;



	}
}while(chx!=0);

printf("\nAu plaisir de vous revoir ...\n");
printf("\nCeci est un travail de qualité fourni par M.Nassiri Achrafe et M.Campagne Kyllian !! \n\n");
return 0;
}
