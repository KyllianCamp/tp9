// SDA1 TP 9 PILE de TAD (PILE d'ELEMENT)

#include "file.h"
#include "partie2.h"

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
int chx, c;
int choix;
char chaine[20];
T_Elt valeur = 5;
T_Elt element;
int taille;
char aff;
int graphique;

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

		printf("Le premier élement de la file est ");
		premier(&mafile);
		printf("\n");

		afficherFile(&mafile);

		printf("\nCombien d'élement voulez-vous retirer a cette file?\n");
		scanf("%d" , &choix);
		for(int compteur=0; compteur<choix; compteur++)
		{
			retirer(&mafile ,&element);
		}

		printf("\n\n");
		afficherFile(&mafile);
		printf("\n\n");

		printf("Combien d'élement voulez-vous ajouter a cette file?\n");
		scanf("%d" , &choix);
		for(int compteur=0; compteur<choix; compteur++)
		{
			printf("Quelle élement voulez vous ajouter? (Ceci est votre choix n°%d) \n" , compteur);
			scanf("%d" , &element);
			ajouter(&mafile ,&element);
		}

		afficherFile(&mafile);

		printf("\nMaintenant nous allons tester pour vérifier si la file est vide ou non \nIl retournera 1 si elle est vide et 0 si elle est non vide \n");
		initFile(&mafile);
		c = fileVide(&mafile);
		printf("%d\n",c);


		printf("Maintenant nous allons tester pour vérifier si la file est pleine ou non \nIl retournera 1 si elle est pleine  et 0 si elle est non pleine \n");
		initFile(&mafile);
		for(int compteur=0; compteur<MAX; compteur++)
		{
			printf("%d",compteur);
			ajouter(&mafile ,&valeur);
		}
		printf("\n");
		c = filePleine(&mafile);
		afficherFile(&mafile);
		printf("\n\n Le resultat de la fonction file pleine est : %d\n",c);

		break;
	case 2 : //testez toutes vos fonctions par un jeu de test de votre choix
		// testFile(&mafile); //TP9 partie 1 : à ecrire 
		initPile(&mapile);
		printf("Le nombre d'élément dans la pile est : \n");
		printf("%d \n ", mapile.nbElts);
		afficherPile(&mapile);

		printf("Combien d'élement voulez-vous ajouter a cette pile?\n");
		scanf("%d" , &choix);
		for(int compteur=0; compteur<choix; compteur++)
		{
			printf("Quelle élement voulez vous ajouter? (Ceci est votre choix n°%d) \n" , compteur);
			scanf("%d" , &element);
			empiler(&mapile, element);
		}

		printf("ma pile vaut donc : \n");
		afficherPile(&mapile);
		printf("\n");

		printf("la hauteur de la pile vaut : %d \n", hauteur(&mapile));
		// printf("La valeur au top vaut : %d \n", *sommet(&mapile,0));

		printf("Combien d'élement voulez-vous dépiler a cette pile?\n");
		scanf("%d" , &choix);
		for(int compteur=0; compteur<choix; compteur++)
		{
			depiler(&mapile, &element);
		}

		printf("\n ma pile vaut donc : \n");
		afficherPile(&mapile);
		printf("\n\n");

		printf("Maintenant nous allons tester pour vérifier si la pile est pleine ou non \nIl retournera 1 si elle est pleine  et 0 si elle est non pleine \n");
		initPile(&mapile);
		for(int compteur=0; compteur<MAX; compteur++)
		{
			printf("%d",compteur);
			empiler(&mapile, valeur);
		}
		printf("\n");
		afficherPile(&mapile);
		printf("\n\n");
		printf("Le retour de la fonction pileplein est donc : %d \n", pilePleine(&mapile));

		break; 
	case 3 : 
		initPile(&mapile);
		printf("Choisissez la chaine de caractère\n");
		scanf("%s",&chaine); //une chaine de longueur <=MAX
		printf("\n Il y a %d permutation : \n\t", factorielle(chaine));
		permut(&mapile,chaine); //TP9 partie 2: ecrire permut
		break;
	case 4 : 
		// printf("\n\n\nVeuillez saisir la taille de l'echiquier : ");
		// scanf("%d", &taille); //taille echiquier <=MAX
		// viderBuffer();
		// printf("\nVoulez vous utiliser l'affichage graphique (Y/n) : ");
		// scanf("%c", &aff);
		// viderBuffer();
		// if (aff == 'Y') {
		// 	graphique = 1;
		// 	printf("\nEntrer quelque chose lors de l'affichage pour arreter l'affichage graphique ou faites entree pour continuer");
		// }
		// else graphique = 0;
		// printf("\n\nVoici les solution : \n\t");
		// printf("\n\n Il y a %d permutation", echiquier(&mapile, taille, graphique)); //TP9 partie 3: ecrire echiquier
		break;
	}
}while(chx!=0);

printf("\nAu plaisir de vous revoir ...\n");
printf("\nCeci est un travail de qualité fourni par M.Nassiri Achrafe et M.Campagne Kyllian !! \n\n");
return 0;
}
