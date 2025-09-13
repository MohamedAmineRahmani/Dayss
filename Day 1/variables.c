// Challenge 1 : Affichage Informations
#include <stdio.h>
int main() {
    char f_name[20], l_name[10], gender[10], email[40];
    int age;
    printf("Enter your first name : ");
    fgets(f_name, sizeof(f_name), stdin);
    printf("Enter your last name : ");
    fgets(l_name, sizeof(l_name), stdin);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your gender =>  M/F : ");
    scanf("%s", &gender );
    printf("Enter your email : ");
    scanf("%s", &email);
    printf("- You first  name : %s- your second name : %s", f_name, l_name);
    printf("- your age : %d\n", age );
    printf("- your gender : %s\n", gender);
    printf("- your email : %s\n", email);
    return 0;
}

// ------------------------------------------

//Challenge 2 : Conversion de la température
#include <stdio.h>

int main() {
    // Write C code here
    float celsius, kelvin;
    printf("Enter le nombre en celsius :");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("en Kelvin : %.2f", kelvin);
    

    return 0;
}

// ------------------------------------------

//Challenge 3 : Conversion de la distance
#include <stdio.h>

int main() {
    float km, Yards;
    printf("Entrer le nombre en Km : ");
    scanf("%f" , &km);
    Yards = km * 1093.61;
    printf("En Yards : %.2f", Yards);
    return 0;
}

// ------------------------------------------

//Challenge 4 : Conversion de la vitesse
#include <stdio.h>

int main() {
    // Write C code here
    float v_km_h, v_m_s;
    printf("Enter lo nombre en Km/h : ");
    scanf("%f", &v_km_h);
    v_m_s = v_km_h * 0.27778;
    printf("En mètres par second : %.2f", v_m_s);

    return 0;
}


// ------------------------------------------

// Challenge 5 : Affichage Température
#include <stdio.h>
int main() {
    int C;
    printf("Entrer le nombre en Celsius : ");
    scanf("%d", &C);
    if (C < 0) {printf("Solide");}
    else if (0 <= C && C < 100){printf("Liquide");}
    else if (C >= 100 ){printf("Gaz");}
    return 0;
}

// ------------------------------------------

// Challenge 6 : Calcul et affichage des résultats
#include <stdio.h>
int main() {
    float a,b ;
    printf("la valeur de b ne doit pas être égale à 0\n\n");
    printf("Entrer la valeur de a : ");
    scanf("%f", &a);
    printf("Entrer la valeur de b : ");
    scanf("%f", &b);
    printf("%.2f + %.2f = %.2f\n", a , b , a + b);
    printf("%.2f - %.2f = %.2f\n", a , b , a - b);
    printf("%.2f x %.2f = %.2f\n", a , b , a * b);
    printf("%.2f / %.2f = %.2f\n", a , b , a / b);
    return 0;
}

// ------------------------------------------


// Challenge 7 : Moyenne pondérée de trois nombres
#include <stdio.h>

int main() {
    int a,b,c ;
    printf("Enter la valeur de a : ");
    scanf("%d", &a);
    printf("Enter la valeur de b : ");
    scanf("%d", &b);
    printf("Enter la valeur de c : ");
    scanf("%d", &c);
    printf("1er nomber : %d\n", a * 2);
    printf("2er nomber : %d\n", b * 3);
    printf("3er nomber : %d", c * 5);

    return 0;
}

// ------------------------------------------

// Challenge 8 : Calcul de la moyenne géométrique
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, M_géométrique;
    printf("Entrer a : ");
    scanf("%f", &a);
    printf("\nEntrer b : ");
    scanf("%f", &b);
    printf("\nEntrer c : ");
    scanf("%f", &c);
    float r = a * b * c;
    M_géométrique = pow( r , (1.00 / 3.00));
    printf("La Moyenne géométrique : %.2f ", M_géométrique);
    return 0;
}


// ------------------------------------------


// Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
#include <stdio.h>
#include <math.h>
int main() {
    float x1,x2,y1,y2,z1,z2;
    printf("Entrer x1 : ");
    scanf("%f", &x1);
    printf("Entrer x2 : ");
    scanf("%f", &x2);
    printf("Entrer y1 : ");
    scanf("%f", &y1);
    printf("Entrer y2 : ");
    scanf("%f", &y2);
    printf("Entrer z1 : ");
    scanf("%f", &z1);
    printf("Entrer z2 : ");
    scanf("%f", &z2);
    float distance = sqrt(pow(x2-x1 , 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
    printf("Distance : %.2f", distance);
    return 0;
}


// ------------------------------------------

// Challenge 10 : Volume d'une sphère
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {
    float r;
    printf("Entrer le rayon : ");
    scanf("%f", &r);
    float volume = (4.0/3.0) * PI * pow(r , 3);
    printf("Le volume est : %.2f", volume);
    return 0;
}


// ------------------------------------------

// Challenge 11 : Surface d'un rectangle
#include <stdio.h>
int main() {
    float longueur , largeur;
    printf("Entrer la longeur : ");
    scanf("%f", &longueur);
    printf("Entrer la largeur : ");
    scanf("%f", &largeur);
    float Surface = longueur * largeur;
    printf("La surface est : %.2f ", Surface);
    return 0;
}

// ------------------------------------------

// Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
#include <stdio.h>
int main() {
   int n_entier;
   here :
   printf("Entrer un nombre entire : ");
   scanf("%d", &n_entier);
   int mille = n_entier % 10 ;
   int cent = (n_entier / 10) % 10;
   int dix  = (n_entier / 100) % 10;
   int nombre = n_entier / 1000;
   int inverse = mille * 1000 + cent * 100 + dix * 10 + nombre;
   if (n_entier < 1000 || n_entier > 9999){
       goto here;
   }
   printf("inverse nombre : %d", inverse);
    return 0;
}

// ------------------------------------------


// Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
#include <stdio.h>
int main() {
    int n;
    printf("Enter nombre entier : ");
    scanf("%d", &n);
    printf("hexadecimal : %X\n", n);
    printf("binaire : ");
    printf("%d", (n >> 7) & 1);
    printf("%d", (n >> 6) & 1);
    printf("%d", (n >> 5) & 1);
    printf("%d", (n >> 4) & 1);
    printf("%d", (n >> 3) & 1);
    printf("%d", (n >> 2) & 1);
    printf("%d", (n >> 1) & 1);
    printf("%d", (n >> 0) & 1);
    return 0;
}


