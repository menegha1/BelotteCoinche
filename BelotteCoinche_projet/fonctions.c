#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"


/// Fonctions d'affichage ///

// Menu //
void menu1()
{
    system("cls");
    printf("\n                                     **************************                           Cree par :\n ");
    printf("                                    ***** BIENVENUE DANS *****                           Matheo BERNARD\n ");
    printf("                                    ******* LA COINCHE *******                           Doryan MENEGHELLI\n ");
    printf("                                    **************************                           Jeremy KIEFFER\n\n\n ");
    printf("        1     -    JOUER                     [<--]\n");
    printf("         2     -    REGLES\n");
    printf("         3     -    TABLEAUX DES SCORES\n");
    printf("         4     -    QUITTER\n\n\n");
    printf("                        Choisir 1 - 2 - 3 - 4 avec votre clavier (maj activee) puis valider avec entree");

}

void menu2()
{
    system("cls");
    printf("\n                                     **************************                           Cree par :\n ");
    printf("                                    ***** BIENVENUE DANS *****                           Matheo BERNARD\n ");
    printf("                                    ******* LA COINCHE *******                           Doryan MENEGHELLI\n ");
    printf("                                    **************************                           Jeremy KIEFFER\n\n\n ");
    printf("        1     -    JOUER\n");
    printf("         2     -    REGLES                    [<--]\n");
    printf("         3     -    TABLEAUX DES SCORES\n");
    printf("         4     -    QUITTER\n\n\n");
    printf("                        Choisir 1 - 2 - 3 - 4 avec votre clavier (maj activee) puis valider avec entree");
}

void menu3()
{
    system("cls");
    printf("\n                                     **************************                           Cree par :\n ");
    printf("                                    ***** BIENVENUE DANS *****                           Matheo BERNARD\n ");
    printf("                                    ******* LA COINCHE *******                           Doryan MENEGHELLI\n ");
    printf("                                    **************************                           Jeremy KIEFFER\n\n\n ");
    printf("        1     -    JOUER\n");
    printf("         2     -    REGLES\n");
    printf("         3     -    TABLEAUX DES SCORES       [<--]\n");
    printf("         4     -    QUITTER\n\n\n");
    printf("                        Choisir 1 - 2 - 3 - 4 avec votre clavier (maj activee) puis valider avec entree");
}

void menu4()
{
    system("cls");
    printf("\n                                     **************************                           Cree par :\n ");
    printf("                                    ***** BIENVENUE DANS *****                           Matheo BERNARD\n ");
    printf("                                    ******* LA COINCHE *******                           Doryan MENEGHELLI\n ");
    printf("                                    **************************                           Jeremy KIEFFER\n\n\n ");
    printf("        1     -    JOUER\n");
    printf("         2     -    REGLES\n");
    printf("         3     -    TABLEAUX DES SCORES\n");
    printf("         4     -    QUITTER                   [<--]\n\n\n");
    printf("                        Choisir 1 - 2 - 3 - 4 avec votre clavier (maj activee) puis valider avec entree");
}

void regles()
{
    system("cls");
    printf("\n\n");
    printf("                                                                            Voici les regles de la Belote !\n");
    printf("\n\n\n\n");
    printf("\t2 equipes de 2 | Manches : 8 plis chacune | Pour gagner : 701 points\n");
    printf("\tDistribution de 8 cartes a chacun des joueurs (par 3, par 2 puis par 3)\n");
    printf("\tPuis la phase d'enchere commence. Le joueur a gauche du donneur parle : Il annonce la couleur et la valeur du contrat qu'il pense realiser ou il passe\n");
    printf("\tLe joueur a sa gauche annonce un contrat superieur ou il passe\n");
    printf("\tSi tous les joueurs passent, il y a re-distribution des cartes\n");
    printf("\tLes couleurs d'atout peuvent etre choisis entre : Une des 4 couleurs, Tout Atout ou Sans Atout.\n");
    printf("\tLes cartes d'atout l'emporte toujours sur les autres signes\n");
    printf("\tIl est possible de faire des annonces et celui qui a la meilleure annonce gagnent les points de cette annonce\n");
    printf("\n\t\tValeurs des annonces :\n");
    printf("\t4 Valets : 200 points | 4 Neufs : 150 points | 4 Dix/Dame/Roi : 100 points\n");
    printf("\tSuite de 10 a As : 100 points | Suite de Valet a As : 5 points | Suite de Dame a As : 20 points\n");
    printf("\n\t\tValeurs des Cartes :\n");
    printf("\tHORS ATOUT \n");
    printf("\tAs : 11 pts | Dix : 10 points | Roi : 4 pts | Dame : 3 pts | Valet : 2 pts | 7/8/9 : 0 pts\n");
    printf("\n\tATOUT\n");
    printf("\tValet : 20 pts | Neuf : 14 pts | As : 11 pts | Dix : 10 points | Roi : 4 pts | Dame : 3 pts \n");
    printf("\n\tL'equipe qui prend pendant la manche doit remporter au moins 82 points et au moins la valeur de son contrat (en indiquant la couleur qu'il choisit comme atout)\n");
    printf("\tDeroulement d'une manche : Chacun pose une carte : \n");
    printf("\tLe premier pose ce qu'il veut mais les suivants doivent respecter des regles \n");
    printf("\tIl faut suivre la couleur de la premiere carte posee\n");
    printf("\tSi on a pas cete couleur : on coupe en jouant un atout (oblige) mais si pas d'atout alors on pose n'importe quelle carte\n");
    printf("\tMais si votre partenaire a pose la carte la plus forte : il est 'maitre' donc pas obligatoire de couper (meme si on a un atout)\n");
    printf("\tSi on joue un atout apres un atout deja pose : il faut jouer une carte d'une valeur superieure (nombre de points)\n");
    printf("\tLa personne qui a pose la carte la plus forte remporte le pli et devient le premier joueur a pose au pli suivant\n");
    printf("\tEnsuite on calcule les points (l'equipe qui remporte le dernier pli remporte 10 points supplementaires)\n");
    printf("\tSi l'equipe preneuse a 82 pts ou plus, alors chaque equipe remporte les points qui correspond au pli remporte\n");
    printf("\tMais si pas de contrat alors l'equipe adverse : 162 pts\n");
    printf("\tSi un joueur possede roi et dame d'atout, il a belote et rebelote = 20 pts\n");
    printf("\tSi une equipe remporte tous les plis, alors elle a 'capot' et elle a un bonus de 252 points\n");
    printf("\n                                                                                                                   Appuyez sur une touche pour revenir au menu");
}

void stats()
{
    int i, nb_lettre = 0;
    Score tabs[10]= {0};

    system("cls");

    printf("\n\n");
    printf("\t\t\t   *************************\n");
    printf("\t\t\t   *  TABLEAUX DES SCORES  *\n");
    printf("\t\t\t   *************************\n\n\n");
    printf("\t  ----------------------------------------------------------\n");
    printf("\t  - \t   PSEUDO\t       -\t  VICTOIRE\t   -\n");
    printf("\t  ----------------------------------------------------------");

    FILE *stats = fopen("stats.txt", "r+");

    if(stats == NULL)
    {
        printf("ERREUR, le fichier ne c'est pas ouvert...");
    }
    else
    {
        for(i = 0; i < 10; i++)
        {
            fscanf(stats,"%s %d\n", tabs[i].nom, &tabs[i].win);

            nb_lettre = strlen(tabs[i].nom);
            while(nb_lettre < 20)
            {
                tabs[i].nom[nb_lettre] = ' ';
                nb_lettre += 1;
            }
            tabs[i].nom[nb_lettre] = '\0';

            if(tabs[i].win != 0)
            {
                printf("\n\t  -\t   %s-\t     %d\t\t   -",tabs[i].nom,tabs[i].win);
            }
            else
            {
                printf("\n\t  -\t\t\t       -\t      \t\t   -",tabs[i].nom);
            }
        }
    }

    fclose(stats);

    printf("\n\t  ----------------------------------------------------------\n");
    printf("\n\n\n\n  ");
}

// Annonce //
void affiche_annonce_1(int jeux[4][8], char pseudo[100], int *max_annonce, int *jr_annonce)
{
    int rep = 0, rien = 0;
    int val_annonce[4] = {0}, type_annonce[4][2];

    for(int i=1; i<4; i++)
    {
        annonce(jeux,val_annonce,type_annonce,i);
    }
    annonce(jeux,val_annonce,type_annonce,0);
    while(rep<1 || rep>2)
    {
        system("cls");
        printf("\n\n                                     *************************\n ");
        printf("                                    ******* PARTIE DE *******\n ");
        printf("                                    ******** COINCHE ********\n ");
        printf("                                    *************************\n\n ");
        printf("                                      -- PHASE D'ANNONCE --\n\n\n");
        printf("\n\n\tVos cartes : ");

        for(int i = 0; i < 8; i++)
        {
            printf("[");
            nom_carte(jeux[0][i]);
            printf("] ");
        }
        printf("\n\n");
        printf("\n\n\tOUEST ");
        affiche_annonce_2(val_annonce,type_annonce,1,&*max_annonce,&*jr_annonce);
        printf("\n\n\tNORD  ");
        affiche_annonce_2(val_annonce,type_annonce,2,&*max_annonce,&*jr_annonce);
        printf("\n\n\tEST   ");
        affiche_annonce_2(val_annonce,type_annonce,3,&*max_annonce,&*jr_annonce);
        printf("\n\n\tVotre annonce est : ");
        affiche_annonce_2(val_annonce,type_annonce,0,&rien,&rien);
        if(val_annonce[0]>0)
        {
            printf("\n\n\tMontrer votre annonce ? (1:Oui / 2:Non) : ");
            scanf("%d",&rep);
            if(rep==1)
            {
                printf("\n\tVous annoncez : ");
                affiche_annonce_2(val_annonce,type_annonce,0,&*max_annonce,&*jr_annonce);
            }
            else
            {
                printf("\n\tAucune annonce pour %s ",pseudo);
            }
        }
        else
        {
            rep=1;
        }
    }
    printf("\n\n\tLa valeur de l'annonce sera donc %d par ",*max_annonce);
    affiche_joueurs(*jr_annonce,pseudo);
    printf("\n\n\n\n\t");
    system("PAUSE");
}

void affiche_annonce_2(int val_annonce[4], int type_annonce[4][2],int joueur,int *max_annonce,int *jr_annonce)
{
    if(val_annonce[joueur]==0)
    {
        printf("passe");
        return;
    }
    if(*max_annonce<val_annonce[joueur])
    {
        if(type_annonce[joueur][1] == 2)
        {
            printf("annonce carre de ");
            nom_carte(type_annonce[joueur][2]);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+100);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+200);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+300);
            *max_annonce = val_annonce[joueur];
            *jr_annonce = joueur;
        }

        if(type_annonce[joueur][1] == 3)
        {
            printf("annonce tierce de ");
            nom_carte(type_annonce[joueur][2]);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+1);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+2);
            *max_annonce = val_annonce[joueur];
            *jr_annonce = joueur;
        }

        if(type_annonce[joueur][1] == 4)
        {
            printf("annonce suite de 4 de ");
            nom_carte(type_annonce[joueur][2]);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+1);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+2);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+3);
            *max_annonce = val_annonce[joueur];
            *jr_annonce = joueur;
        }

        if(type_annonce[joueur][1] == 5)
        {
            printf("annonce suite de 5 de ");
            nom_carte(type_annonce[joueur][2]);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+1);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+2);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+3);
            printf(" ");
            nom_carte(type_annonce[joueur][2]+4);
            *max_annonce = val_annonce[joueur];
            *jr_annonce = joueur;
        }
    }
    else
    {
        printf("passe");
    }
}

// Enchères //
void enchere()
{
    printf("\n\n\n\n\tQue voulez-vous proposer ?\n");
    printf("\n\t  1- Passer \n");
    printf("\t  2- Encherir\n");
}

void Enchere_Base(int jeux[4][8])
{
    system("cls");
    printf("\n\n                                     *************************\n ");
    printf("                                    ******* PARTIE DE *******\n ");
    printf("                                    ******** COINCHE ********\n ");
    printf("                                    *************************\n\n ");
    printf("                                      -- PHASE D'ENCHERE --\n\n");

    printf("\n\n\tVos cartes : ");
    for(int i = 0; i < 8; i++)
    {
        printf("[");
        nom_carte(jeux[0][i]);
        printf("] ");
    }
}

void enchere_IA(int num_IA, int couleur_IA[5], int contrat_IA[5])
{
    char nom_IA[6];

    switch(num_IA)
    {
    case 1:
        strcpy(nom_IA,"OUEST");
        break;
    case 2:
        strcpy(nom_IA,"NORD ");
        break;
    case 3:
        strcpy(nom_IA,"EST  ");
        break;
    }

    switch(couleur_IA[num_IA])
    {
    case -1:
        printf("\n\n\t%s passe", nom_IA);
        break;
    case 0:
        printf("\n\n\t%s propose : COEUR %d", nom_IA, contrat_IA[num_IA]);
        break;
    case 1:
        printf("\n\n\t%s propose : PIQUE %d", nom_IA, contrat_IA[num_IA]);
        break;
    case 2:
        printf("\n\n\t%s propose : CARREAU %d", nom_IA, contrat_IA[num_IA]);
        break;
    case 3:
        printf("\n\n\t%s propose : TREFLE %d", nom_IA, contrat_IA[num_IA]);
        break;
    }

}

// Pli //
void A_pli(int jeux[4][8], char pseudo[100], int tab_pli[4], int nb_pli, char atout_contrat[3],int somme_points_manche[4])
{
    system("cls");
    printf("\n\n                                            *************************\n ");
    printf("                                           ******* PARTIE DE *******\n ");
    printf("                                           ******** COINCHE ********\n ");
    printf("                                           *************************\n\n\n\n");
    printf("\tPseudo : %s\n\n", pseudo);
    printf("\tPli en cour : %d / 8\n\n", nb_pli);
    printf("\tL'atout de la manche est : %s \n\n",atout_contrat);
    printf("                                                        %d\n\n",somme_points_manche[2]);
    printf("                                                       NORD\n\n                                                        [");
    nom_carte(tab_pli[2]);
    printf("]\n                                   %d   OUEST   [",somme_points_manche[1]);
    nom_carte(tab_pli[1]);
    printf("]               [");
    nom_carte(tab_pli[3]);
    printf("]    EST   %d\n\n                                                        [",somme_points_manche[3]);
    nom_carte(tab_pli[0]);
    printf("]\n\n                                                       VOUS\n\n");
    printf("                                                        %d\n\n\n\n\tVos cartes :",somme_points_manche[0]);

    // on écrit la main de l'utilisateur sans les cartes déjà joué
    for(int i = 0; i < 8; i++)
    {
        if(jeux[0][i] != 600)
        {
            printf(" %d-[", i+1);
            nom_carte(jeux[0][i]);
            printf("]");
        }
    }

}


// Le nom des cartes //
void nom_carte(int carte)
{
    switch(carte)
    {
    case -1 :
        printf(" ");
        break;
    case 7 :
        printf("7C");
        break;
    case 8 :
        printf("8C");
        break;
    case 9 :
        printf("9C");
        break;
    case 10 :
        printf("10C");
        break;
    case 11 :
        printf("VC");
        break;
    case 12 :
        printf("DC");
        break;
    case 13 :
        printf("RC");
        break;
    case 14 :
        printf("AC");
        break;
    case 107 :
        printf("7P");
        break;
    case 108 :
        printf("8P");
        break;
    case 109 :
        printf("9P");
        break;
    case 110 :
        printf("10P");
        break;
    case 111 :
        printf("VP");
        break;
    case 112 :
        printf("DP");
        break;
    case 113 :
        printf("RP");
        break;
    case 114 :
        printf("AP");
        break;
    case 207 :
        printf("7K");
        break;
    case 208 :
        printf("8K");
        break;
    case 209 :
        printf("9K");
        break;
    case 210 :
        printf("10K");
        break;
    case 211 :
        printf("VK");
        break;
    case 212 :
        printf("DK");
        break;
    case 213 :
        printf("RK");
        break;
    case 214 :
        printf("AK");
        break;
    case 307 :
        printf("7T");
        break;
    case 308 :
        printf("8T");
        break;
    case 309 :
        printf("9T");
        break;
    case 310 :
        printf("10T");
        break;
    case 311 :
        printf("VT");
        break;
    case 312 :
        printf("DT");
        break;
    case 313 :
        printf("RT");
        break;
    case 314 :
        printf("AT");
        break;
    }
}

// Le nom du joueur //
void affiche_joueurs(int num_joueur, char pseudo[100])
{
    switch(num_joueur)
    {
    case 0 :
        printf("%s",pseudo);
        break;
    case 1 :
        printf("OUEST");
        break;
    case 2 :
        printf("NORD");
        break;
    case 3 :
        printf("EST");
        break;
    case 5 :
        printf("personne");
        break;
    }
}


/// Fonctions de gestion des affichages et du jeux ///

void gestion_menu()
{
    int selection = 1;
    char touche = 'a';
    menu1();

    // Tant que l'on appuie pas sur "Entrée", on test si on appuie sur 1, 2, 3 ou 4 ///
    while(touche!=13)
    {
        touche = getch();
        if(touche=='1')
        {
            menu1();
            selection = 1; // Menu selection jouer
        }

        if(touche=='2')
        {
            menu2();
            selection = 2; // Menu selection regles
        }

        if(touche=='3')
        {
            menu3();
            selection = 3; // Menu selection tableau des scores
        }

        if(touche=='4')
        {
            menu4();
            selection = 4; // Menu selection quitter
        }
    }

    if(selection==4)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tAu revoir !");
        getch();
        exit(0);
    }

    if(selection==3)
    {
        stats();
        printf("\n\n\n\n  Appuyer sur une touche pour revenir au menu.");
        getch();
        gestion_menu();
    }

    if(selection==2)
    {
        regles();
        getch();
        gestion_menu();
    }

    if(selection==1)
    {
        system("cls");
        printf("\n\n");
        jeux();
    }
}

void gestion_enchere(int jeux[4][8], int *pre_contrat, int *num_contrat,char atout_contrat[3])
{
    char selection;
    char Atout_Enchere[3];

    enchere();
    printf("\n\tFaites votre choix : ");
    scanf("%s",&selection); // le joueur choisis s'il veut encherir ou non

    while(selection != '1' && selection != '2')
    {
        printf("\tFaites votre choix : ");
        scanf("%s",&selection);
    }

    if(selection == '1')
    {
        printf("\n\tVous : passe");
    }

    if(selection == '2')
    {
        Encherir(&*pre_contrat,Atout_Enchere,atout_contrat);
        *num_contrat = 0;

    }
}

void gestion_pli(int jeux[4][8],char pseudo[100],int tab_pli[4],int nb_pli,int num_atout, int tableau_points[4][8], int gagnant_manche[4], int somme_points_manche[4],char atout_contrat[3])
{
    int atout_jouer,joueur_joue,point_carte_gagnante,carte,premiere_couleur_jouer, tour, point_carte,joueur_carte_gagnante,somme_points_pli;
    int carte_valide=0;
    srand(time(0));
    // on commence la boucle des 8 plis d'une manche
    for(nb_pli=1; nb_pli<=8; nb_pli++)
    {
        atout_jouer = 0;
        //le premier joueur  qui joue au premier pli est tiré au hasard
        if(nb_pli==1)
        {
            joueur_joue= rand()%4;
            point_carte_gagnante = 0;
        }
        // on désigne le joueur qui commence le pli( si c'est pas le premier ) par celui qui a gagné  le pli précédent( soit celui avec la meilleure carte)
        else
        {
            joueur_joue= joueur_carte_gagnante;
            point_carte_gagnante = 0;
        }

        somme_points_pli = 0;

        int tab_pli[4]= {0};
        //on affiche le pli lorsque ce dernier commence
        A_pli(jeux,pseudo,tab_pli,nb_pli, atout_contrat,somme_points_manche);
        //on commence la boucle du pli
        for( tour = 0; tour <4 ; tour ++)
        {
            carte_valide=0;
            // programme si l'utilisateurs commence
            if (tour ==0 && joueur_joue== 0)
            {
                //fonction qui permet d'afficher la selection des cartes pour l'utilisateurs ( le joueur peut jouer n'importe quand)
                joueur_pli_debut(jeux,pseudo,&carte,  tab_pli, nb_pli,&premiere_couleur_jouer, joueur_joue,atout_contrat,somme_points_manche);
                //on regarde si la carte joué est un atout ( pour savoir qui gagnera les points à la fin)
                if((jeux[joueur_joue][carte-1]/100) == num_atout)
                {
                    atout_jouer = atout_jouer + 1;
                }
            }

//programme si l'un des ordis commence
            if(tour ==0 && joueur_joue!= 0)
            {
                //fonction qui permet de selectionné une carte de la main de l'ordi qui aura la plus faible valeur au niveau des points
                IA_pli_debut(jeux,&carte,&premiere_couleur_jouer, joueur_joue,tableau_points);
                //on regarde si la carte joué est un atout ( pour savoir qui gagnera les points à la fin
                if((jeux[joueur_joue][carte-1]/100) == num_atout)
                {
                    atout_jouer = atout_jouer + 1;
                }
            }
            //programme qui s'effectue si l'utilsateurs  joue mais pas en premier
            if( joueur_joue==0 && tour != 0)
            {
                //boucle qui s'effectue tant que la carte selectionne ne correspond pas aux règles
                while(carte_valide == 0)
                {
                    //programme qui affiche la selection des cartes puis qui test si cette  carte correspond aux règles
                    joueur_pli_suite(jeux,pseudo,&carte,  tab_pli, nb_pli,premiere_couleur_jouer,&carte_valide, joueur_joue,num_atout,&atout_jouer,atout_contrat,somme_points_manche);
                }
            }
            //programme qui s'effectue si l'un des ordis  joue mais pas en premier
            if(joueur_joue!= 0 && tour != 0 )
            {
                //programe qui va selectionné la carte que va joué l'ordi en fonction de la meilleure carte joué dans le pli
                IA_pli_suite(jeux,&carte,premiere_couleur_jouer,&carte_valide, joueur_joue,num_atout,point_carte_gagnante,tableau_points,&atout_jouer);
            }

            tab_pli[joueur_joue] = jeux[joueur_joue][carte-1];
            // on affiche le pli avec la carte qui aura été selectionné selon les règles
            A_pli(jeux, pseudo,tab_pli,nb_pli,atout_contrat,somme_points_manche);

            getch();
            // on prend les points de la carte selectionné puis on l'affecte aux points totaux du pli
            point_carte = tableau_points[joueur_joue][carte-1];
            somme_points_pli = somme_points_pli + point_carte;



            //on cherche à savoir qu'elle carte est la plus forte afin de savoir quel joueur gagne le pli
            // ainsi dans un premier temps , on regarde le nombre de carte atout qui ont été joué
            if(atout_jouer == 1 )
            {
                // si il y en a eu 1 , alors automatiquement la carte atout prend le plis
                if((jeux[joueur_joue][carte-1])/100 == num_atout)
                {
                    point_carte_gagnante = point_carte;
                    joueur_carte_gagnante = joueur_joue;
                }
            }
            if(atout_jouer >= 1)
            {
                // si il y en a plus , alors on regarde si l'atout qui vient d'être joué est supérieur à celui d'avant
                if((jeux[joueur_joue][carte-1]/100) == num_atout)
                {
                    if(point_carte >= point_carte_gagnante)
                    {
                        point_carte_gagnante = point_carte;
                        joueur_carte_gagnante = joueur_joue;
                    }
                }
            }
            if(atout_jouer == 0 )
            {
                // si il y en a eu 0 , alors le gagnant est celui qui aura eu la meilleure carte parmi les 4 autres
                if(point_carte >= point_carte_gagnante)
                {

                    point_carte_gagnante = point_carte;
                    joueur_carte_gagnante = joueur_joue;
                }
            }

            // après qu'une carte carte soit joué , on lui affecte une valeur afin que cette dernière ne puisse plus être rejoué
            if (joueur_joue== 0 )
            {
                jeux[0][carte-1] = 600;
                A_pli(jeux,pseudo,tab_pli,nb_pli,atout_contrat,somme_points_manche);

            }
            else
            {
                jeux[joueur_joue][carte-1] = 600;
            }

            // on affecte 1 au numéros du joueur pour effectuer le tour des 4 joueurs ( quand on arrive à 4 , la valeur reviens à 0 )
            joueur_joue= (joueur_joue+ 1)%4;
        }
        // on calcule le score totale du pli qui reviendra au joueur gagnant
        somme_points_manche[joueur_carte_gagnante] = somme_points_manche[joueur_carte_gagnante] + somme_points_pli;

        // si c'est le dernier pli , on ajouter 10 points au pli
        if(nb_pli==8)
        {
            printf("\n\n\t");
            affiche_joueurs(joueur_carte_gagnante,pseudo);
            printf(" a gagne la dix de der (+10 pts)");
            somme_points_manche[joueur_carte_gagnante] = somme_points_manche[joueur_carte_gagnante] + 10;
        }
        char nom_gagnant[20];
        Correspondance_Joueurs(joueur_carte_gagnante,nom_gagnant,pseudo);
        printf("\n\n\n\tLe joueur gagnant est %s et il remporte %d points ",nom_gagnant,somme_points_pli);
        gagnant_manche[joueur_carte_gagnante] = gagnant_manche[joueur_carte_gagnante]+1;

        getch();
        printf("\n");
        //tableau score total
    }
}

void point_total_manche(int somme_points_manche [4], int gagnant_manche[4], int tableau_equipe[2], int max_annonce, int jr_annonce,char pseudo[100],int pre_contrat,int num_contrat, int score_final[2])
{
    int equipe_annonce = 0, equipe_contrat,tab_annonce[2]= {0};
    // affichage de la fin de manche
    system("cls");
    printf("\n\n                                     *************************\n ");
    printf("                                    ******* PARTIE DE *******\n ");
    printf("                                    ******** COINCHE ********\n ");
    printf("                                    *************************\n\n ");
    printf("                                      -- FIN DE MANCHE --\n\n\n");

    // on regarde si l'une des équipe à fait un capot
    if(gagnant_manche[0]+gagnant_manche[2] == 8)
    {
        printf("\n\tL'equipe 1 a realisez un capot ");
        tableau_equipe[0] = tableau_equipe[0] + 250;
    }
    if(gagnant_manche[1] + gagnant_manche[3] == 8)
    {
        printf("\n\tL'equipe 2 a realisez un capot");
        tableau_equipe[1] = tableau_equipe[1] + 500;
    }
    // on regarde si l'un des joueur à fait une général
    for(int i=0; i<4; i++)
    {
        if(gagnant_manche[i] == 8 )
        {
            printf("\n\tLe joueur %d a realisez un general ",i);
            somme_points_manche[i]= somme_points_manche[i] + 200;
        }

    }
    //si uen annonce avait été faite par joueur  ,alors on fait en sorte que les annonce soit faite en fonction des équipes
    if(max_annonce>0)
    {
        if(jr_annonce==1 || jr_annonce==3)
        {
            equipe_annonce = 1;
            tab_annonce[1]= max_annonce;
        }
        else
        {
            equipe_annonce = 0;
            tab_annonce[0] = max_annonce;

        }

    }

    // la même chose pour les contrats , on attribue un contrat à l'équipe et non à un joueur
    if(num_contrat==1 || num_contrat==3)
    {
        equipe_contrat = 1;

    }
    else
    {
        equipe_contrat = 0;


    }


// on calcule les points des équipes ( soit la somme des points de la manche des deux joueurs de l'équipe)

    tableau_equipe[0] = somme_points_manche[0]+somme_points_manche[2];
    tableau_equipe[1] = somme_points_manche[1] + somme_points_manche[3];

    printf(" \n\n\tLes points des equipes a la fin de la manche sont  : ");
    printf(" \n\tEquipe %s / NORD : %d ",pseudo,tableau_equipe[0]);
    printf(" \n\tEquipe EST / OUEST : %d ", tableau_equipe[1]);
    getch();
    printf(" \n\n\t Or le contrat etait de %d propose par ",pre_contrat);
    affiche_joueurs(num_contrat, pseudo);
    printf("\n");

    // on test si l'équipe qui avait proposé un contrat ( equipe_contrat) , l'est bien validé

    //on regarde déjà si les points de l'équipe sont supérieur à 82
    if( tableau_equipe[equipe_contrat] > 82)
    {
        //si oui , alors on va ajouter la valeur des annonnces à leurs points de manche  pour voir si la somme est supérieur au contrat
        //si c'est l'equipe 1 :
        if(equipe_contrat == 0)
        {
            if(tableau_equipe[0]+tab_annonce[0] >=pre_contrat)
            {
                printf("\n\tL'équipe %s / NORD ont rempli le contrat, ils remportent donc %d points",pseudo,pre_contrat);
                tableau_equipe[0] = tableau_equipe[0] + pre_contrat;
            }
            else
            {
                printf("\n\tL'équipe %s / NORD n'ont pas rempli le contrat",pseudo);

                tableau_equipe[1] = 162 + pre_contrat;
            }
        }
        // si c'est l'équipe 2 :
        if(equipe_contrat == 1 )
        {
            if(tableau_equipe[1]+tab_annonce[1] >=pre_contrat)
            {
                printf("\n\tL'equipe EST / OUEST ont rempli le contrat, ils remportent donc %d points",pre_contrat);
                tableau_equipe[1] = tableau_equipe[1] + pre_contrat;
            }
            else
            {
                printf("\n\tL'equipe EST / OUEST n'ont pas rempli le contrat");
                tableau_equipe[0] = 162 + pre_contrat;
            }
        }

    }
    // si les points de l'équipe est inférieur à 82 , alors on va tester si la somme des points de manches ( sans les annonce !!!) est supérieur au contrat
    else
    {
        // si c'est l'équipe 1 :
        if(equipe_contrat == 0)
        {
            if(tableau_equipe[0]>=pre_contrat)
            {
                printf("\n\tL'équipe %s / NORD ont rempli le contrat, ils remportent donc %d points",pseudo,pre_contrat);
                tableau_equipe[0] = tableau_equipe[0] + pre_contrat;
            }
            else
            {
                printf("\n\tL'équipe %s / NORD n'ont pas rempli le contrat",pseudo);
                tableau_equipe[1] = 162 + pre_contrat ;
            }
        }
        // si c'est l'équipe 2 :
        if(equipe_contrat == 1 )
        {
            if(tableau_equipe[1]>=pre_contrat)
            {
                printf("\n\tL'equipe EST / OUEST ont rempli le contrat, ils remportent donc %d points",pre_contrat);
                tableau_equipe[1] = tableau_equipe[1] + pre_contrat ;
            }
            else
            {
                printf("\n\tL'equipe EST / OUEST n'ont pas rempli le contrat");
                tableau_equipe[0] = 162 + pre_contrat;
            }
        }

    }
    // on affiche la valeur de l'annonce  et le joueur qui l'a proposé
    if(max_annonce>0)
    {
        printf("\n\n\t");
        affiche_joueurs(jr_annonce,pseudo);
        printf(" a un supplement de %d points ce qui correspond a l'annonce \n\n",max_annonce);
    }
    // on a joute la valeur des annonce à la somme des points de l'équipe ( avec contrat + manche)
    tableau_equipe[equipe_annonce] = tableau_equipe[equipe_annonce] + max_annonce;
    printf("\n\n\tL'equipe  %s / NORD a %d de point ",pseudo,tableau_equipe[0]);
    printf("\n\n\tL'equipe  EST / OUEST a %d de point ",tableau_equipe[1]);
    //on affiche le score de l'équipe de la manche
    if(tableau_equipe[0] > tableau_equipe[1])
    {
        printf("\n\n\tL'equipe %s / NORD remporte cette manche ",pseudo);
    }
    else
    {
        if (tableau_equipe[0] == tableau_equipe[1] )
        {
            printf("\n\n\tLes deux equipes sont a egalites ");
        }
        else
        {
            printf("\n\n\tL'equipe EST / OUEST remporte cette manche");

        }
    }
    // on ajoute les points de la manche  au score final ( toutes les manches réunis)
    score_final[0] = score_final[0] + tableau_equipe[0];
    score_final[1] = score_final[1] + tableau_equipe[1];
    getch();

}

void gestion_tour(int *tour_enchere, int *num_IA)
{
    if(*tour_enchere==4)
    {
        *tour_enchere = 0;
    }

    switch(*tour_enchere)
    {
    case 0 :
        *num_IA = 2;
        break;
    case  1 :
        *num_IA = 3;
        break;
    case 2 :
        *num_IA = 0;
        break;
    case 3:
        *num_IA = 1;
        break;
    }
    tour_enchere += 1;
}


/// Fonctions du paquet de carte ///

void initialisation_paquet(int paquet[32])
{
    // coeur = C //
    for(int i = 0; i < 8; i++) // on met les cartes de coeur dans le paquet de paquet[0] à paquet[7]
    {
        paquet[i] = i + 7;
    }

    // pique = P //
    for(int i = 8; i < 16; i++) // on met les cartes de pique dans le paquet de paquet[8] à paquet[15]
    {
        paquet[i] = (i-8) + 107;
    }

    // carreau = K //
    for(int i = 16; i < 24; i++) // on met les cartes de carreau dans le paquet de paquet[16] à paquet[23]
    {
        paquet[i] = (i-16) + 207;
    }

    // trèfle = T //
    for(int i = 24; i < 32; i++) // on met les cartes de trefle dans le paquet de paquet[24] à paquet[31]
    {
        paquet[i] = (i-24) + 307;
    }
}

void melange_paquet(int paquet[32])
{
    int compteur = 0;
    int alea1, alea2, m;
    srand(time(0));
    while(compteur < 100) // on melange 100 fois
    {
        alea1 = rand()%32;
        alea2 = rand()%32;
        m = paquet[alea1];
        paquet[alea1] = paquet[alea2]; // On échange deux cartes du paquet
        paquet[alea2] = m;
        compteur++;
    }
}

void distribution(int paquet[32], int jeux[4][8])
{
    int colonne[4] = {0}, compteur = 0;
    for(int tour = 0; tour < 3; tour++) // on regarde a quelle tour de distribution on est
    {
        for(int joueur = 0; joueur < 4; joueur++) // boucle qui defini quel joueur on distribue
        {
            for(int carte = 0; carte < (3-tour%2); carte++) // on distrbue (3-tour%2) cartes
            {
                jeux[joueur][colonne[joueur]] = paquet[compteur]; // ici colonne[joueur] teste combien de carte sont distribuées dans le paquet de chaque joueurs
                compteur++;
                colonne[joueur]++;
            }
        }
    }


    /// fonction de tri par selection pour mettre les cartes dans un ordre croissant ///
    for(int j = 0; j < 4; j++)
    {
        int fin_tab = 7, max, rang, mem;
        while(fin_tab >= 0)
        {
            max = 0;
            for(int i = 0; i <= fin_tab; i++)
            {
                if(jeux[j][i] > max)
                {
                    max = jeux[j][i];
                    rang = i;
                }
            }
            mem = jeux[j][fin_tab];
            jeux[j][fin_tab] = max;
            jeux[j][rang] = mem;
            fin_tab--;
        }
    }
}

void tri_paquet(int jeux[4][8])
{

    for(int j = 0; j < 4; j++)
    {
        int fin_tab = 7, max, rang, mem;
        while(fin_tab >= 0)
        {
            max = 0;
            for(int i = 0; i <= fin_tab; i++)
            {
                if(jeux[j][i] > max)
                {
                    max = jeux[j][i];
                    rang = i;
                }
            }
            mem = jeux[j][fin_tab];
            jeux[j][fin_tab] = max;
            jeux[j][rang] = mem;
            fin_tab--;
        }
    }
}


/// Fonctions du jeu propres au joueur ///

void nom_du_joueur(char pseudo[100])
{
    int space;
    printf("\n\t\t\t-- CHOIX DU PSEUDO --");

    do
    {
        int i = 0;
        space = 0;
        printf("\n\tSaisir un pseudo (20 caracteres max | sans espaces)\n\n                                ");

        gets(pseudo);

        while(pseudo[i] != '\0') // On s'arrete à la fin du pseudo
        {
            if(pseudo[i] == ' ') // On regarde si un espace est présent dans le monde
            {
                space = 1;
            }
            i += 1;
        }

        if(space == 1)
        {
            system("cls");
            printf("\n Votre pseudo ne doit pas contenir d'espaces!");
            printf("\n\n\t\t\t-- CHOIX DU PSEUDO --");
        }

        if(strlen(pseudo) > 20) // On regarde si le nom a plus de 20 caractères
        {
            system("cls");
            printf("\n Votre nom est trop long!");
            printf("\n\n\t\t\t-- CHOIX DU PSEUDO --");
        }

        if(pseudo[0] == '\0')
        {
            system("cls");
            printf("\n Vous n'avez rien saisie!");
            printf("\n\n\t\t\t-- CHOIX DU PSEUDO --");
        }
    }
    while(strlen(pseudo) > 20 || space == 1 || pseudo[0] == '\0');
}

void annonce(int jeux[4][8], int val_annonce[4],int type_annonce[4][2],int i)
{
    int carre[6] = {11,9,10,12,13,14},points[6] = {200,150,100,100,100,100},ok, suite_max=0;
    type_annonce[i][1] = 0;
    type_annonce[i][2]=0;
    val_annonce[i]=0;
    for(int k=0; k<6; k++) // Changement de carré
    {
        ok = 0;
        while(ok<4) // Si ok = alors il y aura un carré dans le jeu
        {
            for(int j=0; j<8; j++) // boucle qui change de teste toutes les cartes
            {
                if(jeux[i][j]==carre[k]) // on teste si une carte est égale au carré testé
                {
                    ok = ok + 1;
                    carre[k] = carre[k] + 100;
                    j = 8;
                }

                if(j==7 &&  jeux[i][j]!=carre[k]) // si on est a la derniere boucle et que la condition n'est pas respectée alors on stop la boucle.
                {
                    ok = 5;
                }
            }
        }
        if(ok==4)
        {
            type_annonce[i][1] = 2; // on note le type d'annonce que l'on fait
            type_annonce[i][2] = carre[k] - 400; // on note la carte avec la quelle le carré fonction
            val_annonce[i] = points[k];
            k = 7;
            return;
        }
    }

    for(int j=0; j<4; j++) // boucle qui teste la premiere carte de la suite
    {
        ok = 0;
        for(int l=1; l<6; l++) // boucle qui augmente la valeur de la suite petit a petit
        {
            if(jeux[i][j] == jeux[i][j+l] - l)
            {
                ok = ok + 1;
            }
            else
            {
                if(ok > suite_max) // si l'ancienne suite est inférieure à la nouvelle testée alors la valeur de la suite maximale change
                {
                    suite_max = ok + 1;
                    type_annonce[i][2] = jeux[i][j]; // on note la carte avec la quelle la suite fonction
                }
                l = 6;
            }
        }
    }
    if(suite_max == 5)
    {
        val_annonce[i] = 100;
        type_annonce[i][1] = 5; // on note le type d'annonce que l'on fait
        return;
    }
    if(suite_max == 4)
    {
        val_annonce[i] = 50;
        type_annonce[i][1] = 4; // on note le type d'annonce que l'on fait
        return;
    }
    if(suite_max == 3)
    {
        val_annonce[i] = 20;
        type_annonce[i][1] = 3; // on note le type d'annonce que l'on fait
        return;
    }
}

void Encherir(int *pre_contrat, char Atout_Enchere[3], char atout_contrat[3])
{
    int N_Val_Enchere,ok = 0;
    char N_Atout_Enchere[3],touche='a';
    N_Val_Enchere = *pre_contrat + 10;

    while(ok != 1) // ok teste si la valeur est bien supérieure à l'ancienne
    {
        while(touche != 13) // On le fait jusqu'à ce que la touche entrée soit saisie
        {
            system("cls");
            printf("\n\tAppuyez sur + ou - pour augmenter ou diminuer l'enchere");
            if(N_Val_Enchere != 160)
            {
                printf("\n\tEnchere actuelle : [%d]", N_Val_Enchere);
            }
            else
            {
                printf("\n\tEnchere actuelle : [capot]");
            }

            touche = getch();
            if(touche == '+' && N_Val_Enchere != 160) // On test si la touche + est saisie
            {
                N_Val_Enchere = N_Val_Enchere + 10;
            }

            if(touche == '-' && N_Val_Enchere > *pre_contrat + 10) // On test si la touche - est saisie
            {
                N_Val_Enchere = N_Val_Enchere - 10;
            }
        }

        if(N_Val_Enchere == *pre_contrat)
        {
            printf("  Erreur ! La valeur n'est pas supérieure à l'ancienne !");
        }
        else
        {
            *pre_contrat = N_Val_Enchere;
            ok = 1;
        }
    }

    ok=0;
    while(ok!=1) // On repete ca tant que la chaine caractere d'atout n'est pas valide
    {
        printf("\n\n\tSaisissez l'atout de l'enchere (TA,NA,CO,PI,CA,TR) : ");
        scanf("%s",N_Atout_Enchere);

        if(strcmp(N_Atout_Enchere,"TA")==0 || strcmp(N_Atout_Enchere,"NA")==0 || strcmp(N_Atout_Enchere,"CO")==0 || strcmp(N_Atout_Enchere,"PI")==0 || strcmp(N_Atout_Enchere,"CA")==0 || strcmp(N_Atout_Enchere,"TR")==0)
        {
            Atout_Enchere = N_Atout_Enchere;
            ok = 1;
            strcpy(atout_contrat,N_Atout_Enchere);
        }
        else
        {
            printf("\n\tCet atout n'existe pas !");
        }
    }
    printf("\n\tVotre contrat est donc %d %s", *pre_contrat, Atout_Enchere);
}

void tableau_point_carte( int jeux[4][8], char atout_contrat[3],int tableau_points[4][8], int num_atout)
{
    int chiffre_carte,point;

    for(int joueur = 0; joueur < 4; joueur++)

    {
        if (strcmp(atout_contrat,"TA")== 0 || strcmp(atout_contrat,"NA") == 0)
        {

            if(strcmp(atout_contrat,"TA")== 0)
            {
                for(int i=0; i<8; i++)
                {
                    chiffre_carte = jeux[joueur][i]%100;
                    switch(chiffre_carte)
                    {
                    case 7 :
                        point = 0;
                        break;
                    case 8 :
                        point = 0;
                        break;
                    case 9 :
                        point = 9;
                        break;
                    case 10 :
                        point = 5;
                        break;
                    case 11 :
                        point = 14;
                        break;
                    case 12 :
                        point = 1;
                        break;
                    case 13 :
                        point = 3;
                        break;
                    case 14 :
                        point = 6  ;
                        break;
                    }
                    tableau_points[joueur][i] = point;
                }
            }
            else
            {
                for(int i=0; i<8; i++)
                {

                    chiffre_carte = jeux[joueur][i]%100;
                    switch(chiffre_carte)
                    {
                    case 7 :
                        point = 0;
                        break;
                    case 8 :
                        point = 0;
                        break;
                    case 9 :
                        point = 0;
                        break;
                    case 10 :
                        point = 10;
                        break;
                    case 11 :
                        point = 2;
                        break;
                    case 12 :
                        point = 3;
                        break;
                    case 13 :
                        point = 4;
                        break;
                    case 14 :
                        point = 19  ;
                        break;
                    }
                    tableau_points[joueur][i] = point;
                }
            }
        }
        else
        {
            for(int i=0; i<8; i++)
            {
                chiffre_carte = jeux[joueur][i]%100;
                if (jeux[joueur][i]/100 == num_atout )
                {
                    switch(chiffre_carte)
                    {
                    case 7 :
                        point = 0;
                        break;
                    case 8 :
                        point = 0;
                        break;
                    case 9 :
                        point = 14;
                        break;
                    case 10 :
                        point = 10;
                        break;
                    case 11 :
                        point = 20;
                        break;
                    case 12 :
                        point = 3;
                        break;
                    case 13 :
                        point = 4;
                        break;
                    case 14 :
                        point = 11  ;
                        break;
                    }
                }
                else
                {
                    switch(chiffre_carte)
                    {
                    case 7 :
                        point = 0;
                        break;
                    case 8 :
                        point = 0;
                        break;
                    case 9 :
                        point = 0;
                        break;
                    case 10 :
                        point = 10;
                        break;
                    case 11 :
                        point = 2;
                        break;
                    case 12 :
                        point = 3;
                        break;
                    case 13 :
                        point = 4;
                        break;
                    case 14 :
                        point = 11  ;
                        break;
                    }
                }
                tableau_points[joueur][i] = point;
            }
        }
    }
}

void joueur_pli(int jeux[4][8], char pseudo[100], int tab_pli[4],int *carte,int nb_pli,char atout_contrat[3], int somme_points_manche[4])
{
    *carte = 0;
    char selection;
    system("cls");
    // affichage du pli , avec l'affichage de la selection de la carte de l'utilisateurs
    A_pli(jeux, pseudo,tab_pli,nb_pli,atout_contrat,somme_points_manche);
    printf("\n\n\tSaisir le numero de la carte choisit (1, 2, 3, ...) : ");
    scanf("%s",&selection);
// on teste si la valeur entrer est bien un nombre compris entre 1 et 8
    while(selection != '1' && selection != '2' && selection != '3' && selection != '4' && selection != '5' && selection != '6' && selection != '7' && selection != '8' )
    {
        printf("\n\tVous n'avez pas ecrit un nombre ");
        getch();
        system("cls");
        A_pli(jeux, pseudo,tab_pli,nb_pli,atout_contrat,somme_points_manche);
        printf(" \n\n\tSaisir le numero de la carte choisit (1, 2, 3, ...) :");
        scanf("%s",&selection);
    }
//si oui on attribue la valeur de la carte selectionné en fonction du nombre écrit
    if(selection == '1')
    {
        *carte =1;
    }
    if(selection == '2')
    {
        *carte =2;
    }
    if(selection == '3')
    {
        *carte =3;
    }
    if(selection == '4')
    {
        *carte =4;
    }
    if(selection == '5')
    {
        *carte =5;
    }
    if(selection == '6')
    {
        *carte =6;
    }
    if(selection == '7')
    {
        *carte =7;
    }
    if(selection == '8')
    {
        *carte =8;
    }
}

void joueur_pli_debut(int jeux[4][8],char pseudo[100],int *carte, int tab_pli[4],int nb_pli, int *premiere_couleur_jouer,int joueur_joue, char atout_contrat[3],int somme_points_manche[4])
{
    //affichage  de la selection de la carte pour l'utilisateurs
    joueur_pli(jeux,pseudo, tab_pli,carte,nb_pli,atout_contrat,somme_points_manche);
    //on test déjà si la carte à déjà été joué ( une carte joué prendra la valeur 600)
    while(jeux[0][*carte-1]==600)
    {
        // si la carte a déjà été joué , on affiche un message d'erreur , et on reaffiche la selection de la carte
        printf("\n\tLa carte a deja ete joue");
        getch();
        joueur_pli(jeux,pseudo, tab_pli,carte,nb_pli,atout_contrat,somme_points_manche);
    }


    // première carte joué , donc la couleur de cette carte sera la couleur prédominante
    *premiere_couleur_jouer = (jeux[joueur_joue][*carte-1])/100;
    // Etant donné que c'est la première carte joué , cette dernière est déjà valide car elle n'a pas de règles à respecter

}

void joueur_pli_suite(int jeux[4][8],char pseudo[100],int *carte, int tab_pli[4],int nb_pli, int premiere_couleur_jouer,int *carte_valide,int joueur_joue,int num_atout, int *atout_jouer, char atout_contrat[3], int somme_points_manche[4])
{

    //affichage  de la selection de la carte pour l'utilisateurs

    joueur_pli(jeux,pseudo,tab_pli,carte,nb_pli,atout_contrat,somme_points_manche);
    //on test déjà si la carte à déjà été joué ( une carte joué prendra la valeur 600)
    while(jeux[0][*carte-1]==600)
    {
        printf("\n\tLa carte a deja ete joue");
        getch();
        joueur_pli(jeux,pseudo, tab_pli,carte,nb_pli,atout_contrat,somme_points_manche);

    }
// on test si la carte correspond aux règles, si elle est valide la carte est selectionné , si non elle refait la boucle
    validation_carte(jeux,num_atout, premiere_couleur_jouer, carte_valide,carte, joueur_joue,atout_jouer);


}



/// Fonctions du jeu propres aux IA ///

void IA_enchere(int jeux[4][8], int num_IA, int *pre_contrat, int couleur_IA[5], int contrat_IA[5],int *num_contrat,int *num_atout)
{
    /// Phase d'enchère ///
    int Tcouleur[4] = {0}, max = 0,  i;

    for(i = 0; i < 8; i++)
    {
        if(jeux[num_IA][i] < 100)
        {
            Tcouleur[0]+= 1;
        }

        if(jeux[num_IA][i] > 100 && jeux[num_IA][i] < 200)
        {
            Tcouleur[1]+= 1;
        }

        if(jeux[num_IA][i] > 200 && jeux[num_IA][i] < 300)
        {
            Tcouleur[2]+= 1;
        }

        if(jeux[num_IA][i] > 300)
        {
            Tcouleur[3]+= 1;
        }
    }

    for(i = 0; i < 4; i++)
    {
        if(max < Tcouleur[i])
        {
            max = Tcouleur[i];
            couleur_IA[num_IA] = i;
        }
    }

    if(max == 3)
    {
        if(*pre_contrat<80)
        {
            contrat_IA[num_IA] = 80;
        }
    }

    if(max > 3)
    {
        contrat_IA[num_IA] = 120;
    }

    if(*pre_contrat>120 && *pre_contrat<140 && max>3)
    {
        *pre_contrat = 140;
    }

    if(max == 2)
    {
        contrat_IA[num_IA] = 0;
        couleur_IA[num_IA] = -1;
    }

    if(contrat_IA[num_IA] <= *pre_contrat)
    {
        couleur_IA[num_IA] = -1;
    }
    else
    {
        *pre_contrat = contrat_IA[num_IA];
    }

    if(couleur_IA[num_IA]!=-1)
    {
        *num_contrat = num_IA;
    }
    *num_atout = couleur_IA[num_IA];

    enchere_IA(num_IA,couleur_IA,contrat_IA);
}

void IA_pli_debut(int jeux[4][8],int *carte, int *premiere_couleur_jouer,int joueur_joue, int tableau_points[4][8])
{
    int i,carte_min, min = 20;

    // on fait une boucle pour toutes les cartes de la main de l'ordi
    for(i=0; i<8; i++)
    {
        // on test déjà si la carte a déjà joué
        if(jeux[joueur_joue][i] == 600)
        {
        }
        // si non , on cherche la carte qui aura la plus petite valeur au niveau des points
        else
        {
            if(tableau_points[joueur_joue][i] <= min)
            {
                min =  tableau_points[joueur_joue][i];
                carte_min = i;
            }
        }
    }
// la carte selectionné sera celle avec la plus petite valeur
    *carte = carte_min +1;
    *premiere_couleur_jouer = (jeux[joueur_joue][*carte-1])/100;
}

void IA_pli_suite(int jeux[4][8],int *carte, int premiere_couleur_jouer,int *carte_valide,int joueur_joue,int num_atout, int point_carte_gagnante, int tableau_points[4][8], int *atout_jouer)
{
    int min = 20,min2= 20,couleur = 0, temoin = 0, carte_min,carte_min2,i ;
    int tab_couleur[8] = {0} ;
// on fait une boucle pour toutes les cartes de la main de l'ordi


    for( i=0; i<8; i++)
    {
        //on test déjà si la couleur de la carte correspond à la couleur déjà joué
        if(jeux[joueur_joue][i]/100 == premiere_couleur_jouer)
        {
            // si oui , on affecte 1 à  des valeurs qui nous permettront de savoir quelles cartes est de la bonnes couleurs
            tab_couleur[i]= 1;
            couleur = 1;
            //ensuite on test si les points de cette carte sont supérieur à la plus forte carte du pli
            if(tableau_points[joueur_joue][i]> point_carte_gagnante)
            {
                //si oui , on va voir qu'elle est la plus faible parmi ces cartes
                temoin = 1 ;
                if(tableau_points[joueur_joue][i]<= min)
                {
                    min = tableau_points[joueur_joue][i];
                    carte_min = i;
                }
            }
        }
    }
    if(premiere_couleur_jouer == num_atout && couleur ==1)
    {
        *atout_jouer = *atout_jouer +1;
    }

    // on test si l'ordi à une carte de la bonne couleur mais aucune qui à des points supérieur à la plus forte carte du pli
    if(couleur == 1 && temoin == 0)
    {
        // si oui , on selectionné  une carte aleatoire qui aura la bonne couleur
        i = rand()%8;
        while (tab_couleur[i] == 0 )
        {
            i = (i+1)%8;
        }


        *carte = i +1;
    }
    else
    {
        //si non , on test si l'ordi à des cartes de la bonne couleur et si parmie ces cartes , l'une est supérieur au points de la plus forte carte du pli
        if(couleur == 1 && temoin == 1 )
        {
            // si oui on selectionne la carte qui est la  plus faibles parmis ces  cartes
            *carte = carte_min +1;
        }
        else
        {
            // si non , on test chacune des cartes   avec la boucle
            for(int i=0; i<8; i++)
            {
                // on test déjà si la carte a déjà été joué
                *carte_valide =0;
                if(jeux[joueur_joue][i] != 600)
                {
                    //si elle n'a pas été joué , alors , on regarde si elle est valide
                    *carte = i+1;
                    // si elle n'a jamais été joué , on appelle la fonction qui nous permet de tester la validité de la carte pour l'atout
                    carte_validite_atout(jeux,num_atout,premiere_couleur_jouer,carte_valide,carte, joueur_joue,atout_jouer);
                }
                //si elle est valide , on test pour voir si c'est la carte la plus faible parmis toutes les cartes valide
                if(*carte_valide == 1)
                {
                    if(tableau_points[joueur_joue][i] <= min2)
                    {
                        min2 =  tableau_points[joueur_joue][i];
                        // on récupère le numéro de la carte la plus faible
                        carte_min2 = i;
                    }
                }


            }
            //si la carte la plus faible est un  atout , on incrémente 1  à "atout_jouer"
            if((jeux[joueur_joue][carte_min2]/100) == num_atout)
            {
                *atout_jouer = *atout_jouer +1;
            }
            //ensutie la carte la plus faible  est la carte selectionné
            *carte = carte_min2+1;
        }
    }
}



/// Fonction d'enregistrement des stats ///

void save_stats(char pseudo[100], int score)
{
    int i, s_new = 0;
    Score tabs[10] = {0};


/// Ouverture du fichier stats pour récuperer les anciennes données ///

    FILE *stats = fopen("stats.txt", "r+");

    if(stats == NULL)
    {
        printf("ERREUR, le fichier ne s'est pas ouvert...");
    }

    // on insère les valeurs des scores et leur nom associer dans le tableau de structure //
    for(i = 0; i < 10; i++)
    {
        fscanf(stats,"%s %d\n", tabs[i].nom, &tabs[i].win);
    }

    fclose(stats);



/// On ajoute la nouvelle donnée du joueur qui est entrain de jouer (en vérifiant si il avait deja jouer avec ce pseudo) puis on tri le tableau de la structure "Score" ///

// ajout des nouvelles données //
    for(i = 0; i < 10; i++)
    {
        if(strcmp(pseudo,tabs[i].nom ) == 0)
        {
            tabs[i].win = score + tabs[i].win;
            s_new = 1;
        }
    }

    if(s_new == 0 && score > tabs[9].win)
    {
        tabs[9].win = score;
        strcpy(tabs[9].nom,pseudo);
    }

// Triage des stats //
    int fin_tab = 9, min, rang, m;
    char mem[100]= {0};

    while(fin_tab >= 0)
    {
        min = 1000;
        for(int i = 0; i <= fin_tab; i++)
        {
            if(tabs[i].win < min)
            {
                min = tabs[i].win;
                rang = i;
            }
        }

        m = tabs[fin_tab].win;
        tabs[fin_tab].win = min;
        tabs[rang].win = m;

        strcpy(mem,tabs[fin_tab].nom);
        strcpy(tabs[fin_tab].nom,tabs[rang].nom);
        strcpy(tabs[rang].nom,mem);

        fin_tab--;
    }



/// reouverture du fichier des stats pour faire l'upload des nouvelles données ///

    stats = 0;
    stats = fopen("stats.txt", "w+");

    if(stats == NULL)
    {
        printf("ERREUR, le fichier ne s'est pas ouvert...");
    }

    for(i = 0; i < 10; i++)
    {
        fprintf(stats,"%s %d\n", tabs[i].nom, tabs[i].win);
    }

    fclose(stats);
}



/// Fonctions de traductions ///

void Correspondance_Joueurs(int num_contrat,char nom_contrat[20],char pseudo[100])
{
    switch(num_contrat)
    {
    case 0 :
        strcpy(nom_contrat,pseudo);
        break;
    case 1 :
        strcpy(nom_contrat,"OUEST");
        break;
    case 2 :
        strcpy(nom_contrat,"NORD");
        break;
    case 3 :
        strcpy(nom_contrat,"EST");
        break;
    }
}

void Correspondance_Atout(int num_atout,char atout_contrat[3])
{

    switch(num_atout)
    {
    case -1 :
        ;
        break;
    case 0 :
        strcpy(atout_contrat,"CO");
        break;
    case 1 :
        strcpy(atout_contrat,"PI");
        break;
    case 2 :
        strcpy(atout_contrat,"CA");
        break;
    case 3 :
        strcpy(atout_contrat,"TR");
        break;
    }
}

void numero_atout(char atout_contrat[3], int *num_atout)
{
    // on affecte un numéro à la couleur de l'atout  en fonction des 2 premières lettres
    if(strcmp(atout_contrat,"CO")== 0)
    {
        *num_atout =0;
    }
    if(strcmp(atout_contrat,"PI")== 0)
    {
        *num_atout =1;
    }
    if(strcmp(atout_contrat,"CA")== 0)
    {
        *num_atout =2;
    }
    if(strcmp(atout_contrat,"TR")== 0)
    {
        *num_atout =3;
    }
    if(strcmp(atout_contrat,"TA")== 0)
    {
        *num_atout =4;
    }
    if(strcmp(atout_contrat,"NA")== 0)
    {
        *num_atout =5 ;
    }
}


/// Fonctions de vérifications ///

void validation_carte( int jeux[4][8],int num_atout,int premiere_couleur_jouer,int *carte_valide, int *carte, int joueur_joue, int *atout_jouer)
{

    int nombre_carte_forte = 0;
    // on calcule le nombre de carte de notre main qui sont  de la même couleur que celle joué en premier
    for(int i=0; i<8; i++)
    {
        if(jeux[joueur_joue][i]/100 == premiere_couleur_jouer)
        {
            nombre_carte_forte = nombre_carte_forte + 1;
        }
    }
    //Si on a plus que 0 alors on s'assure que la carte selectionné correspond bien à cette couleur

    if(nombre_carte_forte > 0 )
    {
        //si elle l'est , alors la carte est valide
        if((jeux[joueur_joue][*carte-1])/100 == premiere_couleur_jouer)
        {
            if(num_atout== premiere_couleur_jouer)
            {
                *atout_jouer =*atout_jouer +1;
            }

            *carte_valide = 1 ;
        }
        else
            // si non  , la carte n'est pas valide , alors on recommence la boucle où on selectionne une nouvelle carte
        {
            // si c'est le tour du joueur , alors on affiche un message d'erreur
            if(joueur_joue== 0)
            {

                printf("\n\tCette carte ne correspond pas car vous avez des cartes de la meme couleur que la premiere carte joue ");
                getch();
            }
            *carte_valide = 0 ;
        }

    }
    // si le jeu n'est pas composé de carte de la même couleur que celle déjà joué
    // alors on va appellé la fonction permettant de vérifier si on a des cartes atouts et si notre carte est atout ou pas
    else
    {
        carte_validite_atout(jeux,num_atout,premiere_couleur_jouer,carte_valide,carte, joueur_joue,atout_jouer);
    }
}

void carte_validite_atout(int jeux[4][8],int num_atout,int premiere_couleur_jouer,int *carte_valide, int *carte, int joueur_joue, int *atout_jouer)
{
    int nombre_carte_atout = 0;
    // comme pour la fonction d'avant , on calcule le nombre de cartes de la couleur de l'atout dans la main du joueur
    for(int i=0; i<8; i++)
    {
        if(jeux[joueur_joue][i]/100 == num_atout)
        {
            nombre_carte_atout = nombre_carte_atout + 1;
        }
    }
    // on test si la couleur de la première carte jouer n'est  pas de la même couleur  que celle de l'atout ou si c'est pas  TA ou pas NA
    if (num_atout != premiere_couleur_jouer || num_atout == 5 || num_atout == 4 )
    {
        // si oui , on regarde si on a des atout dans notre jeu
        if(nombre_carte_atout > 0 )
        {

            //si oui , on regarde si la carte selectionner est de la couleur de l'atout
            if((jeux[joueur_joue][*carte-1])/100 == num_atout)
            {
                // si oui la carte est validez , et on effecte 1 au nombre d'atout jouer durant le pli pour le joueur , car pour l'ordi c'est effectué dans la fonction "ordi_pli_suite"
                if(joueur_joue==0)
                {
                    *atout_jouer = *atout_jouer + 1;
                }
                *carte_valide = 1 ;

            }
            else
                // si non elle n'est pas valide , et recommence la boucle du programme principale du pli
            {
                // si c'est le joueur , alors on afficher le message d'erreur
                if(joueur_joue== 0)
                {
                    printf("\n\tCette carte ne correspond pas car  vous avez des cartes de la meme couleur que l'atout");
                    getch();
                }
                *carte_valide = 0 ;
            }

        }
        // si le jeu n'a pas d'atout , alors on peut jouer la carte selectionner peu importe la couleur
        else
        {


            *carte_valide = 1 ;
        }

    }
    // si la couleur de la première carte est celle de l'atout ou bien on  a TA ou NA
    // alors on peut jouer la carte selectionner  peut importe la couleur
    else
    {

        *carte_valide = 1 ;
    }
}
