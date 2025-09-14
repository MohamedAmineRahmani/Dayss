// Challenge 1 : Paire ou Impaire
#include <stdio.h>
int main() {
    int n;
    printf("Entrer le nombre : ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("le nombre %d est paire .", n);
    } else if (n % 2 != 0) {
        printf("le nombre %d est impaire .", n );}
    return 0;
}

// ------------------------------------------

 
// Challenge 2 : Voyelle ou Non
#include <stdio.h>
int main() {
    char voyel;
    printf("entrer un caractère ( minuscule )  : ");
    scanf("%c", &voyel);
    switch (voyel) {
        case 'a' :
           printf("oui , %c est un voyel", voyel);
           break;
        case 'e' :
           printf("oui , %c est un voyel", voyel);
           break;
        case 'i' :
           printf("oui , %c est un voyel", voyel);
           break;
        case 'o' :
           printf("oui , %c est un voyel", voyel);
           break;
        case 'u' :
           printf("oui , %c est un voyel", voyel);
           break;
        default : 
           printf("Non , %c est pas un voyel", voyel);
           break;
    }
    return 0;
}


// ------------------------------------------

// Challenge 3 : Somme de Deux Valeurs
#include <stdio.h>
int main() {
    int x,y, sum;
    printf("Entrer 1er nombre : ");
    scanf("%d", &x);
    printf("Entrer 2em nombre : ");
    scanf("%d", &y);
    sum = x + y;
    if (x == y) {
        for (int i = 1 ; i <= 3 ; i++ ) {
            printf("Sum : %d\n", sum);}
    }else {printf("Sum : %d", sum);}
    return 0;
}


// ------------------------------------------


// c hallenge 4 : Equation du Deuxième Degré
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c;
    printf("Entrer a : ");
    scanf("%f",  &a);
    printf("Entrer b : ");
    scanf("%f",  &b);
    printf("Entrer c : ");
    scanf("%f",  &c);
    int delta = pow(b , 2) - (4 * a * c);
    float x1 = (-b + sqrt(delta)) / 2 * a;
    float x2 = (-b -  sqrt(delta)) / 2 * a;
    
    if (delta == 0) {
        printf("on a une seul solution : x = %.2f", -b / (2*a));
    } else if (delta > 0) {
        printf("on a deux solutions : \nx1 = %.3f\nx2 = %.3f", x1, x2 );
    } else if (delta < 0) {
        printf("pas de solution");
    }
    return 0;
}


// ------------------------------------------


// Challenge 5 : Conversion d'Année
#include <stdio.h>
int main() {
    int année;
    printf("Entrer l'année : ");
    scanf("%d", &année);
    int mois = année * 12;
    int Jours = année * 365;
    int Heures = Jours * 24;
    int minutes = Heures * 60;
    int Seconds = minutes * 60;
    printf("Mois : %d\n", mois);
    printf("Jours : %d\n", Jours);
    printf("Heures : %d\n", Heures);
    printf("minutes : %d\n", minutes);
    printf("Seconds : %d\n", Seconds);
    return 0;
}


// ------------------------------------------


// Challenge 6 : Positif, Négatif ou Nul
#include <stdio.h>
int main() {
   int n;
   printf("Entrer un nombre : ");
   scanf("%d", &n);
   if (n < 0) {
       printf("le nombre est négatif");
   } else if (n >0) {
       printf("le nombre est positif");
   }else {
       printf("le nombre est nul");
   }
    return 0;
}


// ------------------------------------------


// Challenge 7 : Alphabet Majuscule
#include <stdio.h>
int main() {
    char A_Z;
    printf("Entrer un caractére : ");
    scanf("%c", &A_Z);
    if (A_Z >= 65 && A_Z <= 90)  {
        printf("%c est majuscule", A_Z);
    } else {
        printf("%c est miniscule", A_Z);
    }
    return 0;
}


// ------------------------------------------

// Challenge 8 : Mention Obtenue
#include <stdio.h>
int main() {
    float x;
    printf("Entrer le résulta : ");
    scanf("%f", &x);
    if (x < 10) {
        printf("recalé");
    } else if (x >= 10 && x < 12) {
        printf("passable");
    } else if (x >= 12 && x < 14) {
        printf("assez bien");
    } else if (x >= 14 && x < 16) {
        printf("bien");
    } else if (x >= 16) {
        printf("très bien");
    }
    return 0;
}

// ------------------------------------------


// Challenge 9 : Vérification d'Alphabet
#include <stdio.h>
int main() {
    char charr;
    printf("Entrer un caractére : ");
    scanf("%c", &charr);
    if (charr >= 65 && charr <= 90){
        printf("%c est majuscule", charr);
    } else if (charr >= 97 && charr <= 122 ) {
        printf("%c est minuscule ", charr);
    } else {
        printf("%c n\'est pas un caractére", charr);
    }
    return 0;
}


// ------------------------------------------


// Challenge 10 : Formatage de la Date
#include <stdio.h>
int main() {
    int j,m,a;
    printf("Entrer jour : ");
    scanf("%d", &j);
    printf("Entrer mois : ");
    scanf("%d", &m);
    printf("Entrer année (juste deux nombres) : ");
    scanf("%d", &a);
    
    char *months[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};
    a += 2000;
    printf("%d-%s-%d", j, months[m - 1], a);

  
    return 0;
}


// ------------------------------------------


// Challenge 11 : Jour de la Semaine
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char *week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    srand(time(NULL));
    int index = rand() % 7;
    printf("%s", week[index]);
    return 0;
}


// ------------------------------------------


// Challenge 12 : Comparaison d'Instants
#include <stdio.h>
int main() {
    int h1,m1,s1,h2,m2,s2;
    printf("entrer le temps come sa (HH:MM:SS)\n");
    printf("Entrer h1 :");
    scanf("%d", &h1);
    printf("Entrer m1 :");
    scanf("%d", &m1);
    printf("Entrer s1 :");
    scanf("%d", &s1);
    printf("Entrer h2 :");
    scanf("%d", &h2);
    printf("Entrer m2 :");
    scanf("%d", &m2);
    printf("Entrer s2 :");
    scanf("%d", &s2);
    printf("first : %d:%d:%d\n" , h1,m1,s1 );
    printf("second : %d:%d:%d\n" ,h2,m2,s2 );
    if (h1 > h2) {
        printf("Le deuxième instant vient avant le premier");
    } else if (h1 < h2) {
        printf("Le premier instant vient avant le deuxième");
    } else {
        if (m1 > m2) {
            printf("Le deuxième instant vient avant le premier");
        } else if (m1 < m2) {
            printf("Le premier instant vient avant le deuxième");
        }
        else {
            if (s1 > s2) {
                printf("Le deuxième instant vient avant le premier");
            } else if (s1 < s2) {
                printf("Le premier instant vient avant le deuxième ");
            } else {
                printf("Il s'agit du même instant.");
            }
        }
        
    }
    return 0;
}

// ------------------------------------------


// Challenge 13 : Point sur un Segment

/* i could not solve this */ 


