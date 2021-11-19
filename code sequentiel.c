
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(int argc, char** argv) 
    {
        int taille = 0;
        clock_t start = clock();
        printf("entrez la taille du tableau  ");
        scanf("%d",&taille);
           int tableau[taille];
        for (int i = 0; i < taille; i++)
            { 
                printf("entrez la donnée numero %d : ",i);
                scanf("%d",&tableau[i]);
            }
             int dmin = tableau[0]- tableau[1];
        for(int i = 0; i < taille; i++)
            {
                for(int j = i+1; i < taille; i++)
                {
                    if((tableau[i] -tableau[j]) < dmin)
                    {
                        dmin = tableau[i]-tableau[j];
                    }
                }
            } 

        printf("%d",dmin);
        clock_t stop = clock();
        double temp_ecoulez = ((stop-start));
        printf(" temps_ecoulez : %f",temps_ecoulez);
    }
