// ROGE David
// ROCHE Hugo

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  // Initialisation des valeurs
  int u, iter=0, max=0;
  FILE *fich;

  // Demande de u0 a l'utilisateur
  printf("Donner un u0>1 \n");
  scanf("%d", &u);

  // Ouverture d'un fichier + Ajout de u0
  fich = fopen("syrval.txt","w");
  fprintf(fich, "%d \n", u);

  // Calcul de u(n), de son maximum et du nbre d'itérations
  while(u!=1){
    iter = iter + 1;
    if (u%2==0){
      u = u/2;
    }

    else{
      u = 3*u + 1;
    }
    if (u>max){
      max = u;
    }
  // Ajout des valeurs dans le fichier
  fprintf(fich, "%d \n", u);
  }

// Affichage du max et du nbre d'itérations sur le terminal
printf("max = %d \n iter = %d \n", max, iter);

// Fermeture du fichier
fclose(fich);
}
