#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "fonctions.h"

int main()
{
    printf("\n\n\n\n\n\n\t\t\t\t\t\tAvant de commencer assurez vous bien d'etre en plein ecran !\n");
    printf("\t\t\t\t\t\t\t");
    system("PAUSE");
    gestion_menu();
}

void jeux()
{
    int nb_pli, pre_contrat,  num_IA, num_contrat, num_atout,max_annonce,jr_annonce,win = 0;
    int paquet[32], tableau_points[4][8], couleur_IA[5] = {-2};
    char pseudo[100], nom_contrat[20], atout_contrat[3], rejouer = 'o';


    /// demande du nom de joueur ///
    nom_du_joueur(pseudo);

    while(rejouer == 'o')
    {
        system("cls");
        printf("\n\n\n\tLa partie commence dans :\n\n");
        Sleep(1000);
        for(int i=5; i>0; i--)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t%d\n",i);
            Sleep(1000);
        }
        int score_final[2]= {0},  tour_enchere = 0 ;
        while (score_final[0] < 701 && score_final[1] < 701)
        {

            int gagnant_manche[4]= {0}, somme_points_manche[4] = {0},tableau_equipe[2]= {0};
            /// initialisation + melange du paquet ///
            initialisation_paquet(paquet);
            melange_paquet(paquet);

            /// initialisation des mains des joueurs + distributions ///
            int jeux[4][8];
            distribution(paquet, jeux);

            int contrat_IA[5] = {-2};
            pre_contrat = 0;
            Enchere_Base(jeux);

            printf("\n\n");

            for(int i=0; i<4; i++)
            {
                if(tour_enchere==2)
                {
                    gestion_enchere(jeux,&pre_contrat,&num_contrat,atout_contrat);
                }
                else
                {
                    gestion_tour(&tour_enchere,&num_IA);
                    IA_enchere(jeux,num_IA,&pre_contrat,couleur_IA,contrat_IA,&num_contrat,&num_atout);
                    Correspondance_Atout(num_atout,atout_contrat);
                }
                tour_enchere += 1;
            }
            gestion_tour(&tour_enchere,&num_IA);
            tour_enchere+=1;

            Correspondance_Joueurs(num_contrat,nom_contrat,pseudo);
            getch();
            system("cls");
            printf("\n\n\n\n\n\n\t\t\tLe contrat sera donc %d %s par %s \n\n",pre_contrat,atout_contrat,nom_contrat);
            getch();
            max_annonce = 0;
            jr_annonce = 5;
            affiche_annonce_1(jeux,pseudo,&max_annonce,&jr_annonce);

            /// note : on a "pre_contrat" avec la valeur du contrat et "atout_contrat" avec l'atout choisis ///
            nb_pli = 1;
            int tab_pli[4] = {0};
            numero_atout(atout_contrat,&num_atout);
            tableau_point_carte(jeux, atout_contrat,tableau_points,num_atout);
            A_pli(jeux, pseudo,tab_pli,nb_pli,atout_contrat, somme_points_manche);

            //si le premier joueur joue un atout , incrementer 1 pour atout jouer -> le faire pour ordi et joueur
            gestion_pli(jeux,pseudo,tab_pli,nb_pli,num_atout,tableau_points,gagnant_manche,somme_points_manche,atout_contrat);
            point_total_manche(somme_points_manche, gagnant_manche, tableau_equipe,max_annonce,jr_annonce,pseudo,pre_contrat,num_contrat,score_final);
            system("cls");
            printf("\n\n\tLe score generale est de : ");
            printf("\n\n\n\tL'equipe %s / NORD a %d points ",pseudo,score_final[0]);
            printf("\n\n\tL'equipe EST / OUEST a %d points ",score_final[1]);
            getch();
        }
        system("cls");
        if (score_final[0] > score_final[1] )
        {
            printf("\n\n\tLes gagnants de la partie sont %s / NORD ", pseudo);
            win +=1;
        }
        else
        {
            printf("\n\n\tLes gagnants de la partie sont EST / OUEST ");
        }

        do{
            printf("\n\n\tVoulez vous rejouer? (o | n)");
            rejouer = getch();
        }while(rejouer != 'o' && rejouer != 'n');
    }
    save_stats(pseudo,win);
}
