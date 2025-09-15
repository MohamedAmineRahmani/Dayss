// Challenge 1 : Évaluation d'un Prêt
#include <stdio.h>
int main() {
    int R_annuel, S_de_crédi, D_du_prêt;
    printf("Entrer ton Revenu annuel (en euros) : ");
    scanf("%d", &R_annuel);
    printf("Entrer ton Score de crédit  : ");
    scanf("%d", &S_de_crédi);
    printf("Entrer Durée du prêt : ");
    scanf("%d", &D_du_prêt);
    if (R_annuel >= 30000 && S_de_crédi >= 700 && D_du_prêt <= 10) {
        printf("Éligible");
    } else if (R_annuel >= 30000 && S_de_crédi >= 650 && D_du_prêt <= 15){
        printf("Éligible avec conditions");
    } else {
        printf("Non éligible");
    } 
    return 0;
}

// ------------------------------------------

// Challenge 2 : Calcul de Prime d'Assurance Auto
#include <stdio.h>
int main() {
    int age, type_voiture, nb_accidents;
    float prime_base = 500.0;
    float prime_finale = prime_base;

    printf("Entrer l'âge du conducteur : ");
    scanf("%d", &age);

    printf("Type de voiture :\n");
    printf("1. Sportive\n2. Utilitaire\n3. Familiale\n");
    printf("Entrez le numéro correspondant : ");
    scanf("%d", &type_voiture);

    printf("Nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &nb_accidents);
    if (age < 25) {
        prime_finale *= 1.5;
    } else if (age > 65) {
        prime_finale *= 1.2;
    }
    if (type_voiture == 1) {
        prime_finale *= 2.0;
    } else if (type_voiture == 2) {
        prime_finale *= 1.2;
    } else if (type_voiture == 3) {
        prime_finale *= 1.1;
    }
    if (nb_accidents > 1) {
        prime_finale *= 1.3;
    }
    printf("La prime d'assurance calculée est : %.2f euros\n", prime_finale);

    return 0;
}


// ------------------------------------------


// Challenge 3 : Gestion des Congés
#include <stdio.h>

int main() {
    float Total, Congés_utilisés , Statut_de_lemployé;
    printf("Entrer Nombre total de jours de congés accordés : ");
    scanf("%f", &Total);
    
    printf("Nombre de jours de congés utilisés : ");
    scanf("%f", &Congés_utilisés);
    
    printf("Entrer Statut de l'employé : \n0. pour temps partiel \n1. pour temps plein");
    printf("\nEntrer le nombre ici : ");
    scanf("%f", &Statut_de_lemployé);
    
    if (Congés_utilisés > Total) {
        printf("Alerte");
        return 0;
    }
    
    if (Statut_de_lemployé == 1) {
        printf("Jours restants : %.1f Days", Total - Congés_utilisés);
    } else if (Statut_de_lemployé == 0) {
        printf("Jours restants : %.1f Days" , (Total / 2.0) - Congés_utilisés);
    }
    
    
    return 0;
}


// ------------------------------------------


// Challenge 4 : Évaluation de Performance d'Employé
#include <stdio.h>
int main() {
    float Score_de_performance, Ancienneté;
    int Récompenses_reçues;
    printf("Entrer ton Score de performance (de 0 à 100)  : ");
    scanf("%f", &Score_de_performance);
    
    
    printf("Entrer ton Ancienneté (en années) : ");
    scanf("%f", &Ancienneté);
    
    printf("\n==> Récompenses reçues : \n0 pour aucune\n1. pour une\n2. pour deux ou plus\n");
    printf("écrivez votre réponse : ");
    scanf("%d", &Récompenses_reçues);
    
    if (Score_de_performance >= 90 && Ancienneté >= 5 ) {
        printf("Excellente\n");
    }
    else if (Score_de_performance >= 75 && Ancienneté >= 3 ) {
        printf("Bonne\n");
    }
    else if (Score_de_performance >= 50 && Ancienneté < 3 ) {
        printf("Satisfaisante\n");
    }
    else if (Score_de_performance < 50) {
        printf("Insuffisante\n");
    }
    if (Récompenses_reçues == 1) {
        printf("votre salaire augmentera de 10 %%\n");
    } else if (Récompenses_reçues  >= 2) {
        printf("votre salaire augmentera de 20 %%\n");
    }
    return 0;
}


// ------------------------------------------


// Challenge 5 : Planification de Voyage
#include <stdio.h>
int main() {
    float Budget;
    int Destination , N_personnes;
    
    printf("Entrer ton budget (en euros) : ");
    scanf("%f", &Budget);
    
    printf("Les Destinations : ");
    printf("\n1. la plage\n2. la montagne \n3. la ville\n");
    printf("Entrer votre réponse : ");
    scanf("%d", &Destination);
    
    printf("le nombre de personnes : ");
    scanf("%d", &N_personnes);
    
    if (Budget >= 1000.0) {
        printf("Voyage haut de gamme\n");
        if (N_personnes > 2) {
            printf("Destination : Plage ");
        }
    } else if (Budget >= 500.0 && Budget < 1000.0) {
        printf("Voyage milieu de gamme\n");
    } else if (Budget < 500) {
        printf("Voyage petit budget\n");
    }
    
    if (Budget >= 500.0 && N_personnes <= 2) {
        printf("\nDestination Montagne");
    }
    
    if (Budget > 0 && N_personnes > 0 ) {
        printf("\nDestination Ville");
    }

    return 0;
}


// ------------------------------------------


// Challenge 6 : Calcul de la Facture d'Électricité
#include <stdio.h>
int main() {
    float C_délectricité, facture ;
    int T_d_utilisateur, T_d_contrat;
    printf("Entrer Consommation d'électricité (en kWh) : ");
    scanf("%f", &C_délectricité);
    printf("Type d'utilisateur : ");
    printf("\n1. résidentiel \n2. commercial\n");
    printf("Entrer ton réponse : ");
    scanf("%d", &T_d_utilisateur);
    printf("Entrer Type de contrat : ");
    printf("\n0. standard \n1. réduit\n");
    printf("Entrer ton reponse : ");
    scanf("%d", &T_d_contrat);
    if (T_d_utilisateur == 1) {
        if (T_d_contrat == 0) {
            facture = C_délectricité * 0.20;
        } else if (T_d_contrat == 1) {
            facture = C_délectricité * 0.15;
        }
    }
    if (T_d_utilisateur == 2) {
        if (T_d_contrat == 0) {
            facture = C_délectricité * 0.30;
        } else if (T_d_contrat == 1) {
            facture = C_délectricité * 0.25;
        }
    }
    
    if (C_délectricité > 500 ) {
        facture = facture + ((C_délectricité * 10.0) / 100.0 );
    }
    printf("Facture : %.2f Dh", facture);
    return 0;
}


// ------------------------------------------


// je ne suis pas sûr à 100 % que cela soit vrai

// Challenge 7 : Calcul des Impôts
#include <stdio.h>
int main() {
    float R_annuel , Impôts ; int S_fiscal; 
    printf("Entrer ton Revenu annuel (en euros) : ");
    scanf("%f", &R_annuel);
    const float Total = R_annuel;
    printf("Statut fiscal : \n");
    printf("1. célibataire \n2. marié \n3. chef de famille\n");
    printf("Entrer ton reponse : ");
    scanf("%d", &S_fiscal);
    
    if (S_fiscal == 1) {
        R_annuel -= 1000.0;
    }
    else if (S_fiscal == 2) {
        R_annuel -= 2000.0;
    }
    else if (S_fiscal == 3) {
        R_annuel -= 3000.0;
    }
    if (R_annuel <= 20000.0) {
        R_annuel = R_annuel  - (R_annuel / 20) ;
    } else if (R_annuel > 20000.0 && R_annuel <= 50000.0) {
        R_annuel = R_annuel  - (R_annuel / 10) ;
    } else if (R_annuel > 50000.0) {
        R_annuel = R_annuel  - (R_annuel / 5) ;
    }
    printf("Ton Impôts : %.2f €", Total - R_annuel);
    return 0;
}


// ------------------------------------------


// Challenge 8 : Plan de Santé
#include <stdio.h>
int main() {
   int age , H_médical ;
   printf("Entrer ton age : ");
   scanf("%d", &age);
   printf("Historique médical : \n");
   printf("0. aucun problème \n1. problème mineur \n2. problème majeur\n");
   printf("Entrer ton réponse : ");
   scanf("%d", &H_médical);
   if (age < 30) {
       printf("Plan de base\n");
   } else if (age >= 30 && H_médical == 0) {
       printf("Plan de base\n");
   } else if (age >= 30 && H_médical >= 1) {
       printf("Plan étendu\n");
       if (H_médical == 2) {
           printf("vous recevrez 200 € chaque mois");
       }
   } 
   return 0;
}


// ------------------------------------------


// Challenge 9 : Calcul du Salaire avec Primes
#include <stdio.h>
int main() {
   float Salaire , heures ; int poste ;
   const float  hours_p_month = 160.00;
   printf("Entrer Salaire de base (€) : ");
   scanf("%f",&Salaire);
   const float x = Salaire;
   printf("Entrer Nombre d'heures supplémentaires : ");
   scanf("%f", &heures);
   printf("Type de poste : \n");
   printf("1. junior \n2. senior \n");
   printf("Entrer ton reponse : ");
   scanf("%d", &poste);
   if (heures >= 1) {
       float prix = (heures *( Salaire/ 160.0)) *1.5;
       if (poste == 2) {
       Salaire = Salaire + (Salaire / 5);
       } else if (poste == 1) {
       Salaire = Salaire + (Salaire / 10);
       }
       printf("=> Salaire : %.2f €/h\n", Salaire );
       printf("=> prix de heures  supplémentaires par jours    :%.2f €/h",prix);
       }
   return 0;
}


// ------------------------------------------



// Challenge 10 : Plan de Retraite avec Épargne
#include <stdio.h>
int main() {
   int age , A_cotisation ;
   float Montant ;
   printf("Entrer ton age :");
   scanf("%d", &age);
   printf("ENtrer Années de cotisation : ");
   scanf("%d", &A_cotisation);
   printf("ENtrer Montant total épargné (en euros) : ");
   scanf("%f", &Montant);
   if (age >= 65 && A_cotisation >= 30 && Montant >= 100000.0) {
       printf("==> Plan complet avec pension élevée\n");
   } else if (age >= 65 && A_cotisation >= 20 && Montant >= 50000.0) {
       printf("==> Plan partiel avec pension moyenne\n");
   } else if (age < 65) {
       printf("==> Plan épargne non encore disponible\n");
   }
   if (Montant >= 50000.0) {
        float N_M  = Montant - 50000.0;
        int x = 0;
        for (int i = 10000; i <= N_M; i += 10000){
            x += 500;
        } N_M +=  x;
        printf("==> Ton Montant total épargné (en euros) : %.2f €", N_M + 50000.0);
        }
   return 0;
}
