// Challenge 1 : Table de Multiplication
#include <stdio.h>
int main() {
   int n;
   printf("Entrer un nombre : ");
   scanf("%d", &n);
   int i = 1;
   while (i <= 10) {
       printf("%d x %d = %d\n", n , i , n*i);
       i++;
   }
   return 0;
}

// ------------------------------------------


// Challenge 2 : Factorielle d'un Nombre
#include <stdio.h>
int main() {
   int n;
   printf("Entrer un nombre : ");
   scanf("%d", &n);
   const int N = n ;
   int i = n - 1;
   while (i > 0) {
       n *= i;
       i -= 1;
   } printf("%d! = %d", N , n);
   return 0;
}


// ------------------------------------------


// Challenge 3 : Somme des N Nombres
#include <stdio.h>
int main() {
    int N;
    printf("Entrer un nombre entier : ");
    scanf("%d", &N);
    int n = 0;
    for (int i = 1; i < N ; i++) {
        n += i;
    } 
    int somme = n + N;
    printf("somme : %d", somme);
    return 0;
}



// ------------------------------------------


// Challenge 4 : Affichage des N Premiers Nombres Impairs
#include <stdio.h>

int main() {
    int n;
    printf("Entrer un nombre : ");
    scanf("%d", &n);
    int count = 0 , i = 1;
    while (count < n) {
        printf("%d ", i);
        i += 2;
        count++;
    }
    return 0;
}

// ------------------------------------------


// Challenge 5 : Calcul de la Puissance
#include <stdio.h>
#include <math.h>
int main() {
    int b,p;
    printf("Entrer la base : ");
    scanf("%d", &b);
    printf("Entrer la puissance : ");
    scanf("%d", &p);
    
    int poww = pow(b, p);
    printf("%d^%d = %d", b,p , poww);
    return 0;
}


// ------------------------------------------


// Challenge 6 : Affichage des N Premiers Nombres Pair
#include <stdio.h>
int main() {
    int n;
    printf("Entrer un nombre : ");
    scanf("%d", &n);
    int count = 0 , i = 2;
    while (count < n) {
        printf("%d ", i);
        i += 2;
        count++;
    }
    return 0;
}


// ------------------------------------------


// Challenge 7 : Inversion d'un Entier
#include <stdio.h>
int main() {
    int n;
    printf("Entrer un nombre :");
    scanf("%d", &n);
    int inverse = 0;
    while (n != 0) {
        int d = n % 10;
        inverse = inverse *10 + d;
        n /= 10 ;
    } printf("inverse : %d", inverse);
    return 0;
}


// ------------------------------------------


// Challenge 8 : Affichage de la Suite de Fibonacci : 

#include <stdio.h>
int main() {
    int n;
    printf("Entrer le nombre de termes : ");
    scanf("%d", &n);

    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        printf("%d ", a);       
        int next = a + b;       
        a = b;                 
        b = next;
    }
    return 0;
}




// ------------------------------------------



// Challenge 9 : Compteur de Chiffres
#include <stdio.h>
int main() {
    int n;
    printf("Entrer le nombre  : ");
    scanf("%d", &n);
    int count = 0;
    if (n == 0) {
        count += 1;
    } else {
        while (n != 0) {
            n /= 10 ;
            count++;
        }
    }
    printf("Nombre de chiffres => %d", count);
    return 0;
}


// ------------------------------------------


// Challenge 10 : Calcul de la Somme des N Entiers
#include <stdio.h>
int main() {
    int n, N = 0;
    printf("Entrer un nombre : ");
    scanf("%d", &n);
    for (int i = 1 ; i < n; i++) {
        N += i;
    } 
    printf("La somme est : %d", N + n);
    return 0;
}

