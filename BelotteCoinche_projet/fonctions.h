#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

typedef struct
{
    char nom[100];
    int win;
} Score;

void menu1();
/***
* Affiche le menu avec la fl�che pointant sur la case "JOUER"
*/

void menu2();
/***
* Affiche le menu avec la fl�che pointant sur la case "REGLE"
***/

void menu3();
/***
* Affiche le menu avec la fl�che pointant sur la case "TABLEAUX DES SCORES"
***/

void menu4();
/***
* Affiche le menu avec la fl�che pointant sur la case "QUITTER"
***/

void regles();
/***
* Affiche les r�gles du jeux
***/

void stats();
/***
 * Affiche les stats des joueurs provenant d'un fichier stats.txt externe
 ***/

void A_pli(int jeux[4][8], char pseudo[100], int tab_pli[4], int nb_pli,char atout_contrat[3], int somme_points_manche[4]);
/***
 * Cette fonction permet d'afficher l'interface de jeux
 * @param pseudo, chaine de caract�re contenant le nom du joueur
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param nb_pli, num�ro du pli en cour
 * @param atout_contrat , l'atout qui a �t� selectionn� durant la phase d'ench�re pendant la manche
 ***/

void gestion_menu();
/***
* Permet la gestion des fonctions d'affichage des menus
***/

void gestion_enchere(int jeux[4][8],int *pre_contrat,int *num_contrat,char atout_contrat[3]);
/***
 * Cette fonction permet de g�rer les intefaces d'encheres
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 ***/

void initialisation_paquet(int paquet[32]);
/***
 * permet d'initialiser le paquet de carte tel que le :
 *      - chiffre des dizaines et des unit�s permettent de coder le num�ro d'une carte
 *      - chiffre des centaines permet de coder la couleur de la carte (exemple : 108 = 8P ; 212 = DK)
 * @param paquet, le paquet de carte
 ***/

void melange_paquet(int paquet[32]);
/***
 * Cette fonction permet de m�langer les nombres d'un tableau initialement tri� de 0 � 31
 * @param paquet, le paquet de carte
 ***/

void distribution(int paquet[32], int jeux[4][8]);
/***
 * permet de distribuer chaque nombres du tableau
 * @param paquet, le paquet de carte
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 ***/


void nom_carte(int carte);
/***
 * permet d'assigner � chaque nombre num�rot� de 0 � 31 une carte
 * @param carte, code d'une carte � traduire en carte
 ***/

void nom_du_joueur(char pseudo[100]);
/***
 * permet d'assigner � chaque nombre num�rot� de 0 � 31 une carte
 * @param pseudo, chaine de caract�re contenant le nom du joueur
 ***/

void affiche_annonce_1(int jeux[4][8], char pseudo[100], int *max_annonce,int *jr_annonce);
/***
 * permet d'organiser toute la phase d'annonce allant de l'interface � la valeur finale de l'annonce
 * @param jeux, permet d'afficher le jeux du joueur durant la phase d'annonce
 * @param pseudo, nom du joueur (moi)
 * @param max_annonce, derniere annonce effectu�e par un joueur
 * @param jr_annonce, valeur qui correspond au dernier joueur ayant effectu� une annonce
 ***/

void affiche_annonce_2(int val_annonce[4], int type_annonce[4][2],int joueur,int *max_annonce,int *jr_annonce);
/***
 * permet d'afficher l'annonce de chaque joueur
 * @param val_annonce, valeur de l'annonce de chaque joueur
 * @param type_annonce, permet de definir quel type d'annonce chaque joueur a et avec quelle carte cette annonce fonctionne
 * @param joueur, joueur qui effectue l'annonce
 * @param max_annonce, derniere annonce effectu�e par un joueur
 * @param jr_annonce, dernier joueur qui aura effectu� une annonce
 ***/

void enchere();
/***
 * permet de proposer au joueur s'il veut encherir ou passer
 ***/

void Enchere_Base(int jeux[4][8]);
/***
 * permet d'afficher l'interface d'ench�re durant cette phase
 * @param jeux, permet d'afficher le jeux du joueur durant la phase d'ench�re
 ***/

void enchere_IA(int num_IA, int couleur_IA[5], int contrat_IA[5]);
/***
 * permet d'afficher l'ench�re des ordis en fonction de la valeur de leur contrat et de la couleur dominante dans son jeu
 * @param num_IA, valeur qui correspond � l'ordi qui fait l'ench�re
 * @param couleur_IA, couleur dominante dans le jeu de l'ordi
 * @param contrat_IA, valeur du contrat de l'ordi
 ***/

void affiche_joueurs(int num_joueur, char pseudo[100]);
/***
 * permet d'afficher le nom d'un joueur en fonction de la valeur qui lui correspond (au lieu de l'enregister dans une chaine de caractere)
 * @param num_joueur, valeur du joueur qui correspond au futur affichage
 * @param pseudo, nom du 'vrai' joueur qui va �tre affich� si num_joueur = 0
 ***/

void gestion_pli(int jeux[4][8],char pseudo[100],int tab_pli[4],int nb_pli,int num_atout, int tableau_points[4][8], int gagnant_manche[4], int somme_points_manche[4],char atout_contrat[3]);
/***
 * fonction qui permet de g�rer les 8 plis de la manche  et de comptabiliser les points des 4 joueurs � la fin des 8 plis
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param pseudo, chaine de caract�re contenant le nom du joueur
 * @param tab_pli , tableau des cartes selectionn�es par le joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) pendant un pli
 * @param nb_pli, num�ro du pli en cour
 * @param num_atout , repr�sente le numeros de la couleur selectionne comme atout ( par exemple 0 pour coeur , 3 pour tr�fle , 5 pour non-atout)
 * @param tableau_points , tableau des points de chaque cartes  pour la main  du joueur( colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST))
 * @param gagnant_manche , tableau du nombre de plis gagn�s pour le joueur (colonne 0) et les IA (colonne 1(EST), 2(NORD), 3(OUEST))
 * @param somme_points_manche , tableau de la  somme de tous les points d'une manche r�cup�rer par le joueur (colonne 0) et les IA (colonne 1(EST), 2(NORD), 3(OUEST))
 * @param atout_contrat , les deux premi�res lettres de l'atout qui a �t� selectionn� durant la phase d'ench�re pendant la manche

 ***/
void point_total_manche(int somme_points_manche [4], int gagnant_manche[4], int tableau_equipe[2], int max_annonce, int jr_annonce,char pseudo[100],int pre_contrat,int num_contrat,int score_final[2]);
/***
 * fonction qui permet de comptabiliser les points des �quipes � la fin d'une manche avec les points des contrats et des annonces
 * @param somme_points_manche , tableau de la  somme de tous les points d'une manche r�cup�rer par le joueur (colonne 0) et les IA (colonne 1(EST), 2(NORD), 3(OUEST))
 * @param gagnant_manche , tableau du nombre de plis gagn�s pour le joueur (colonne 0) et les IA (colonne 1(EST), 2(NORD), 3(OUEST))
 * @param tableau_equipe , tableau de points pour chaque equipe ( equipe 1 : utilisateurs/NORD , equipe 2 : EST/OUEST) pour chaque manche
 * @param max_annonce , valeur de la plus grande annonce
 * @param jr_annonce , joueur qui a propos� la plus grande annonce
 * @param pseudo, chaine de caract�re contenant le nom du joueur
 * @param pre_contrat , la valeur du contrat qui a �t� propos�
 * @param num_contrat , numero de joueur qui a propos� le contrat ( utilisateurs : 0 ; ordi : 1(EST), 2(NORD), 3(OUEST))
 * @param score_final , tableau final des points des 2 equipes ( toute les manches confondues )
 ***/

void gestion_tour(int *tour_enchere, int *num_IA);
/***
 * permet d'attribuer � quel joueur correspond quel tour (par exemple au tour 2 cela sera au joueur 0 (donc moi) d'encherir)
 * @param tour_enchere, valeur du tour en cours
 * @param num_IA, valeur qui correspond au joueur qui devra encherir
 ***/

void tri_paquet(int jeux[4][8]);
/***
 * permet de trier le jeu de chaque joueur par couleur
 * @param jeux, jeu de chaque joueur
 ***/

void annonce(int jeux[4][8], int val_annonce[4],int type_annonce[4][2],int i);
/***
 * permet de savoir quelle annonce a chaque joueur automatiquement
 * @param jeux, jeu de chaque joueur
 * @param val_annonce, valeur de l'annonce de chaque joueur
 * @param type_annonce, permet de definir quel type d'annonce chaque joueur a et avec quelle carte cette annonce fonctionne
 ***/

void Encherir(int *pre_contrat, char Atout_Enchere[3], char atout_contrat[3]);
/***
 * permet de r�aliser une enchere avec la possibilit� d'augmenter ou de diminuer son enchere et de choisir son atout
 * @param pre_contrat, valeur du dernier contrat annonc�
 * @param Atout_Enchere, atout qui va �tre saisi par l'utilisateur
 * @param atout_contrat, atout qui sera enregister pour l'enchere finale
 ***/

void tableau_point_carte( int jeux[4][8], char atout_contrat[3],int tableau_points[4][8], int num_atout );
/***
 * permet d'attribuer les points des cartes des joueurs selon s'ils poss�dent des atouts ou non
 * @param jeux, jeu de chaque joueur
 * @param atout_contrat, atout du contrat (CO = coeur, NA = Non atout, CA = carreau,etc...)
 * @param tableau_points, points de chaque joueur selon son jeu (par exemple la 3eme carte du joueur 2 (jeux[2][3]) correspondera � tableau_points[2][3] points)
 * @param num_atout, valeur de l'atout qui correspond � celui de l'enchere
 ***/

void joueur_pli(int jeux[4][8], char pseudo[100], int tab_pli[4],int *carte,int nb_pli,char atout_contrat[3], int somme_points_manche[4]);
/***
 * fonction qui permet d'afficher l'affichage de la s�l�ction des cartes pour l'utilisateur lors des plis
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param pseudo, chaine de caract�re contenant le nom du joueur
 * @param tab_pli , tableau des cartes selectionn�es par le joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) pendant un pli
 * @param carte , la valeur de la carte selectionn� pour �tre jou� durant le pli
 * @param nb_pli, num�ro du pli en cour
 * @param atout_contrat , les deux premi�res lettres de l'atout qui a �t� selectionn� durant la phase d'ench�re pendant la manche
 ***/
void joueur_pli_debut(int jeux[4][8],char pseudo[100],int *carte, int tab_pli[4],int nb_pli, int *premiere_couleur_jouer,int joueur_joue,char atout_contrat[3],int somme_points_manche [4]);
/***
 * permet d'afficher la carte selectionn� de l'utilisateur lorsque ce dernier commence le plis o� la couleur de la carte sera la couleur dominante
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param pseudo, chaine de caract�re contenant le nom du joueur
 * @param tab_pli , tableau des cartes selectionn�es par le joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) pendant un pli
 * @param carte , la valeur de la carte selectionn� pour �tre jou� durant le pli
 * @param nb_pli, num�ro du pli en cour
 * @param premiere_couleur_jouer , numero de la couleur de la premi�re couleur jou� pendant un pli
 * @param joueur_joue , numero du joueur qui va joue durant le pli ( utilisateurs : 0 et ordi :1(EST), 2(NORD), 3(OUEST)
 * @param atout_contrat , les deux premi�res lettres de l'atout qui a �t� selectionn� durant la phase d'ench�re pendant la manche
 ***/
void joueur_pli_suite(int jeux[4][8],char pseudo[100],int *carte, int tab_pli[4],int nb_pli, int premiere_couleur_jouer,int *carte_valide,int joueur_joue,int num_atout, int *atout_jouer,char atout_contrat[3],int somme_points_manche[4]);
/***
 * permet d'afficher la carte selectionn� de l'utilisateur lorsque ce dernier ne  commence  pas le plis o� cette derni�re doit repect� les r�gles de la belotte
 *@param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param pseudo, chaine de caract�re contenant le nom du joueur
 * @param tab_pli , tableau des cartes selectionn�es par le joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) pendant un pli
 * @param carte , la valeur de la carte selectionn� pour �tre jou� durant le pli
 * @param nb_pli, num�ro du pli en cour
 * @param premiere_couleur_jouer , numero de la couleur de la premi�re couleur jou� pendant un pli
 * @param carte_valide , permet de savoir si la carte selectionn� est conforme aux r�gles ( 1 si oui , 0 si non )
 * @param joueur_joue , numero du joueur qui va joue durant le pli ( utilisateurs : 0 et ordi :1(EST), 2(NORD), 3(OUEST)
 * @param num_atout , repr�sente le numeros de la couleur selectionne comme atout ( par exemple 0 pour coeur , 3 pour tr�fle , 5 pour non-atout)
 * @param atout_contrat , les deux premi�res lettres de l'atout qui a �t� selectionn� durant la phase d'ench�re pendant la manche
***/

void IA_enchere(int jeux[4][8], int num_IA, int *pre_contrat, int couleur_IA[5], int contrat_IA[5],int *num_contrat,int *num_atout);
/***
 * permet de tester pour les trois joueurs ordis quelle couleur est majoritaire et combien de carte de cette couleur l'ordi � dans son jeu
 * @param jeux, jeu de chaque joueurs?
 * @param num_IA, valeur qui correspond � chaque joueur (par exemple 3 correspond � EST)
 * @param pre_contrat, derniere valeur du contrat donn� par les ordi
 * @param couleur_IA, couleur majoritaire dans le jeu de chaque joueur ordi
 * @param contrat_IA, valeur du contrat des ordis en fonction du nombre de cartes de couleur majoritaire qu'il y a dans le jeu
 * @param num_contrat, valeur du contrat qui correspond au dernier ordi qui a r�alis� un contrat
 * @param num_atout, valeur de l'atout qui correspond au dernier ordi qui a r�alis� un contrat (par exemple 1 correspond � pique)
 ***/

void IA_pli_debut(int jeux[4][8],int *carte, int *premiere_couleur_jouer,int joueur_joue, int tableau_points[4][8]);
/***
 * permet d'afficher la carte selectionn� de l'ordi lorsque ce dernier commence le plis o� la couleur de la carte sera la couleur dominante et la valeur de la carte sera la plus faible
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param carte , la valeur de la carte selectionn� pour �tre jou� durant le pli
 * @param premiere_couleur_jouer , numero de la couleur de la premi�re couleur jou� pendant un pli
 * @param joueur_joue , numero du joueur qui va joue durant le pli ( utilisateurs : 0 et ordi :1(EST), 2(NORD), 3(OUEST)
 * @param tableau_points , tableau des points de chaque cartes pour la main  du joueur( colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST))
 ***/

void IA_pli_suite(int jeux[4][8],int *carte,  int premiere_couleur_jouer,int *carte_valide,int joueur_joue,int num_atout, int point_carte_gagnante, int tableau_points[4][8], int *atout_jouer);
/***
 * permet d'afficher la carte selectionn� de l'ordi lorsque ce dernier ne commence pas le plis o� la carte doit respecter les r�gles
 * si il peut jouer une carte de la m�me couleur que celle jou� en premier , l'ordi doit jouer la plus faibles de ces cartes qui sont meilleurs que la plus forte d�j� jou�
 * si non elle utilise la fonction qui permet de tester si la carte selectionn� est de la couleur de l'atout
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param carte , la valeur de la carte selectionn� pour �tre jou� durant le pli
 * @param premiere_couleur_jouer , numero de la couleur de la premi�re couleur jou� pendant un pli
 * @param joueur_joue , numero du joueur qui va joue durant le pli ( utilisateurs : 0 et ordi :1(EST), 2(NORD), 3(OUEST)
 * @param carte_valide , permet de savoir si la carte selectionn� est conforme aux r�gles ( 1 si oui , 0 si non )
 * @param joueur_joue , numero du joueur qui va joue durant le pli ( utilisateurs : 0 et ordi :1(EST), 2(NORD), 3(OUEST)
 * @param num_atout , repr�sente le numeros de la couleur selectionne comme atout ( par exemple 0 pour coeur , 3 pour tr�fle , 5 pour non-atout)
 * @param point_carte_gagnante , point de la carte qui remporte le pli
 * @param tableau_points , tableau des points de chaques carte  pour la main  du joueur( colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST))
 * @param atout_jouer , permet de conna�tre le nombre d'atout qui ont �t� jou� durant le pli
 ***/

void save_stats(char pseudo[100], int score);
/***
 * permet enregister les statistiques dans une ficher .txt
 * @param pseudo, nom du joueur (moi)
 * @param score, nombre de victoire effectu� par le joueur
 ***/

void Correspondance_Joueurs(int num_contrat,char nom_contrat[20],char pseudo[10]);
/***
 * permet d'entrer le nom d'un joueur dans une variable 'char' selon une valeur
 * @param num_contrat , repr�sente la valeur du joueur (par exemple 1 correspond � OUEST,2 � NORD,etc...)
 * @param nom_contrat , chaine de caractere dans laquelle le nom du joueurs va s'enregister
 * @param pseudo, nom du joueur
 ***/

void Correspondance_Atout(int num_atout,char atout_contrat[3]);
/***
 * permet de r�cup�rer les deux premi�res lettres de la couleur atout en fonction du num�ro de la couleur atout s�l�ctionn�e
 * @param num_atout , repr�sente le numeros de la couleur selectionne comme atout ( par exemple 0 pour coeur , 3 pour tr�fle , 5 pour non-atout)
 * @param atout_contrat ,les deux premi�res lettres de l'atout qui a �t� selectionn� durant la phase d'ench�re pendant la manche
 ***/

void numero_atout(char atout_contrat[3], int *num_atout);
/***
 * permet de r�cup�rer le num�ro de la couleur atout s�lectionn�e en fonction des deux premi�res lettres de la couleur atout
 * @param atout_contrat ,les deux premi�res lettres de l'atout qui a �t� selectionn� durant la phase d'ench�re pendant la manche
 * @param num_atout , repr�sente le numeros de la couleur selectionne comme atout ( par exemple 0 pour coeur , 3 pour tr�fle , 5 pour non-atout)
 ***/

void validation_carte( int jeux[4][8],int num_atout,int premiere_couleur_jouer,int *carte_valide, int *carte, int joueur_joue,int *atout_jouer);
/***
 * fonction qui permet de savoir si la carte respecte les r�gles de la belotte , soit si elle ne correspond  pas � la couleur de la premi�re carte jouer alors on doit jouer un atout , sinon on peut jouer n'importe qu'elle carte
 * elle v�rifie si le joueur a des cartes de la m�me couleur que celle jou� en premier
 * si oui , elle test si celle selectionn� est de la bonne couleur
 * si non elle utilise la fonction qui permet de tester si la carte selectionn� est de la couleur de l'atout
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param num_atout , repr�sente le numeros de la couleur selectionne comme atout ( par exemple 0 pour coeur , 3 pour tr�fle , 5 pour non-atout)
 * @param premiere_couleur_jouer , numero de la couleur de la premi�re couleur jou� pendant un pli
 * @param carte_valide , permet de savoir si la carte selectionn� est conforme aux r�gles ( 1 si oui , 0 si non )
 * @param carte , la valeur de la carte selectionn� pour �tre jou� durant le pli
 * @param joueur_joue , numero du joueur qui va joue durant le pli ( utilisateurs : 0 et ordi :1(EST), 2(NORD), 3(OUEST)
 * @param atout_jouer , permet de conna�tre le nombre d'atout qui ont �t� jou� durant le pli
 */

void carte_validite_atout (int jeux[4][8],int num_atout,int premiere_couleur_jouer,int *carte_valide, int *carte, int joueur_joue,  int *atout_jouer);
/***
 * fonction qui permet de v�rifer si le joueur de la m�me couleur que l'atout
 * si oui , elle test si celle selectionn� est de la couleur de l'atout
 * si non , la carte peut-�tre pos�
 * @param jeux, la main du joueur (colonne 0) et des IA (colonne 1(EST), 2(NORD), 3(OUEST)) en un tableau � double entr�
 * @param num_atout , repr�sente le numeros de la couleur selectionne comme atout ( par exemple 0 pour coeur , 3 pour tr�fle , 5 pour non-atout)
 * @param premiere_couleur_jouer , numero de la couleur de la premi�re couleur jou� pendant un pli
 * @param carte_valide , permet de savoir si la carte selectionn� est conforme aux r�gles ( 1 si oui , 0 si non )
 * @param carte , la valeur de la carte selectionn� pour �tre jou� durant le pli
 * @param joueur_joue , numero du joueur qui va joue durant le pli ( utilisateurs : 0 et ordi :1(EST), 2(NORD), 3(OUEST)
 * @param atout_jouer , permet de conna�tre le nombre d'atout qui ont �t� jou� durant le pli
 */
void jeux();
/***
 * permet d'appeler toutes les fonctions qui permettent de creer une partie
 ***/

#endif // FONCTIONS_H_INCLUDED
