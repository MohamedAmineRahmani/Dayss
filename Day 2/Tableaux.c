// Challenge 1 : Initialisation et Affichage
#include <stdio.h>
int main() {
    int T[5] = {1, 2, 3, 4, 5}, i;
    for (i = 0 ; i < 5 ; i++) {
        printf("%d ", T[i]);
    }
    return 0;
}


// ------------------------------------------

// Challenge 2 : Saisie et Affichage des Éléments
#include <stdio.h>
int main() {
    int A, i ;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("élement de tableau : \n");
    for (i = 0 ; i < A ; i++) {
        printf("%d ", T[i]);
    }
    return 0;
}


// ------------------------------------------


// Challenge 3 : Somme des Éléments
#include <stdio.h>
int main() {
    int A, i ;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    int S = 0;
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        S += T[i];
    }
     printf("\nLa somme est : %d", S);
    return 0;
}

// ------------------------------------------


// Challenge 4 : Trouver le Maximum
#include <stdio.h>
int main() {
    int A, i ;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    int max = T[0];
    for (i = 1; i < A ; i++) {
        if (max < T[i]) {
            max = T[i];
    
        } 
    }
    printf("Max : %d", max);
    return 0;
}


// ------------------------------------------


// Challenge 5 : Trouver le Minimum
#include <stdio.h>
int main() {
    int A, i ;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    int min = T[0];
    for (i = 1; i < A ; i++) {
        if (min > T[i]) {
            min = T[i];
    
        } 
    }
    printf("Min : %d", min);
    return 0;
}


// ------------------------------------------


// Challenge 6 : Multiplication des Éléments
#include <stdio.h>
int main() {
    int A, i , f;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    printf("Entrer nombre de facteur de manipulation :  ");
    scanf("%d", &f);
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = %d => %d x %d = %d \n",i, T[i], T[i], f, T[i] * f);
    }
    return 0;
}


// ------------------------------------------


// Challenge 7 : Tableau en Ordre Croissant
#include <stdio.h>
int main() {
    int A, i , f, j , a;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    for (i = 0 ; i < A ; i++) {
        for (j = i + 1; j < A ; ++j) {
            if(T[i] > T[j]) {
               a = T[i];
               T[i] = T[j];
               T[j] = a  ; 
                
            }         
        }
    } 
    printf("Sorted : ");
    for(i = 0 ; i < A ; i++) {
        printf("%d ", T[i]);
    }
    return 0;
}



// ------------------------------------------


// Challenge 8 : Copie d'un Tableau
#include <stdio.h>
int main() {
    int T[5] = {1, 4, 5, 88, 2}, J[5], i;
    for (i = 0 ; i < 5 ; i++) {
        J[i] = T[i];
    }
    printf("=> tableau original : ");
    for (i=0;i<5; i++) {
        printf("%d ", T[i]);
    } 
    printf("\n=> tableau copié    : ");
    for (i=0;i<5; i++) {
        printf("%d ", J[i]);
    } 
    return 0;
}


// ------------------------------------------


// Challenge 9 : Inversion d'un Tableau
#include <stdio.h>
int main() {
    int A, i, j ;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    int B[A];
    for (i = A - 1 , j = 0 ; i >= 0 , j < A; i-- , j++) {
        B[j] = T[i];
    }
    printf("Inverse tavleau : ");
    for (i = 0; i < A; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}


// ------------------------------------------


// Challenge 10 : Rechercher un Élément
#include <stdio.h>
int main() {
    int A, i,e ;
     printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("Entrer l'élément à rechercher : ");
    scanf("%d", &e);
    for (i = 0 ; i < A ; i++)
    {
        if (T[i] == e) {
            printf("l'élément est présent");
            break;
        } else if( i == A - 1 && T[i] != e) {
            printf("il n'y a aucun élément comme celui-ci");
            break;
        } else {
            continue;
        }
    } 
    return 0;
}


// ------------------------------------------


// Challenge 11 : Remplacer un Élément
#include <stdio.h>
int main() {
    int A, i, y , z;
     printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    } 
    printf("quelle valeur vous souhaitez remplacer : \n");
    i = 0;
    while(i < A) {
        printf("=> %d\n", T[i]);
        i++;
    }
    printf("Entrer ton reponse : ");
    scanf("%d", &y);
    
    printf("Entrer le nombre tu veux ajouter : ");
    scanf("%d", &z);
    
    for (i = 0 ; i < A ; i++) {
        if (T[i] == y ) {
            T[i] = z;
            break;
        } else {
            continue;
        }
    } 
     printf("les valeurs après remplacement : ");
    for (i = 0 ; i < A ; i++) {
       printf("%d ", T[i]);
    }
    return 0;
}



// ------------------------------------------



// Challenge 12 : Afficher les Éléments Paire
#include <stdio.h>
int main() {
    int A, i;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("les éléments pairs : ");
    for (i = 0 ; i < A ; i++) {
        if (T[i] % 2 == 0) {
            printf("%d ", T[i]);
        } else {
            continue;
        }
    }
    return 0;
}


// ------------------------------------------



// Challenge 13 : Afficher les Éléments Impairs
#include <stdio.h>
int main() {
    int A, i;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    printf("les éléments impairs : ");
    for (i = 0 ; i < A ; i++) {
        if (T[i] % 2 != 0) {
            printf("%d ", T[i]);
        } else {
            continue;
        }
    }
    return 0;
}



// ------------------------------------------


// Challenge 14 : Calculer la Moyenne
#include <stdio.h>
int main() {
    int A, i; float M , S = 0;
    
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        S += T[i];
    }
    M = (float) S / A;
    printf("La Moyenne : %.2f", M);
    return 0;
}



// ------------------------------------------


// Challenge 15 : Fusion de Deux Tableaux
#include <stdio.h>
int main() {
    int A,B ,C, i, j;
    printf("Nombre d\'éléments d\'un 1er tableau : ");
    scanf("%d", &A);
    printf("Nombre d\'éléments d\'un 2em tableau : ");
    scanf("%d", &B);
    printf("Nombre d\'éléments des deux  tableaux : ");
    scanf("%d", &C);
    int P_T[A], D_T[B], X[C];
    for (i = 0 ; i < A ; i++) {
        printf("P_T[%d] = ", i);
        scanf("%d", &P_T[i]);
    }
    for (i = 0 ; i < B ; i++) {
        printf("D_T[%d] = ", i);
        scanf("%d", &D_T[i]);
    }
    for (i = 0 ; i < A; i++) {
          X[i] = P_T[i];
    }
    for (j = A , i = 0 ; j < C , i < B; j++ ,i++) {
          X[j] = D_T[i];
    }
    printf("le tableau fusionné : ");
    for (i = 0 ; i < C ; i++) {
        printf("%d ", X[i]);
    }
    return 0;
}











