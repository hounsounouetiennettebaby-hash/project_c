#include <stdio.h>
 int main(){
     int x,n,som=0,cpt=0;
     float moy;
     do{
      printf("Veuillez entrer le nombre d'entiers positifs à saisir:");
      scanf("%d",&n);
      }while(n<0);
      for(int i=0;i<n;i++){
            do{
        puts("Veuillez saisir des entiers négatifs:");
        scanf("%d",&x);
            }while(x>0);
             if(x%2==0){
            som=som+x;
            cpt++;
            }
      }
       moy= (float) som/cpt;
      printf("la moyenne est %.2f",moy);
      printf("le nombre de nombres impairs %d",n-cpt);
    return 0;
 }
