#include <stdio.h>
 int main(){
     int x,n;
     do{
      printf("Veuillez entrer le nombre d'entiers positifs à saisir:");
      scanf("%d",&n);
      }while(n<0);
      for(int i=0;i<n;i++){
            do{
        puts("Veuillez saisir des entiers négatifs:");
        scanf("%d",&x);
            }while(x>0);
            printf("Vous avez saisir %d",x);
      }
    return 0;
 }
