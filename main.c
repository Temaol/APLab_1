
#include <stdio.h>
#define K 10
struct coords
{
    int x, y;
}cor[K];
struct colours
{
    int redx, redy, greenx, greeny, blackx, blacky, goldx, goldy;
}col[K];


int main() {
    int kilk, cl;
    printf("введіть кількість координат\n");
    scanf("%d", &kilk);
    for(int i=0; i<kilk; i++){
           printf("Введіть колір 1-red, 2-green, 3-black, 4-gold\n");
          scanf("%d", &cl);
        if (cl == 1){
          printf("Введіть x y\n");
         scanf("%d%d", &col[i].redx, &col[i].redy);
            
            }
         if (cl == 2){
                 printf("Введіть x y\n");
                scanf("%d%d", &col[i].greenx, &col[i].greeny);
           }
         if (cl == 3){
                 printf("Введіть x y\n");
                scanf("%d%d", &col[i].blackx, &col[i].blacky);
           }
         if (cl == 4){
                 printf("Введіть x y\n");
                scanf("%d%d", &col[i].goldx, &col[i].goldy);
            
           }
    }
    for(int i=0; i<kilk; i++){
        if(col[i].redx != 0){
           printf("%d\t%d\n",col[i].redx, col[i].redy );
        }
        if(col[i].greenx != 0){
           printf("%d\t%d\n",col[i].greenx, col[i].greeny );
        }
           if(col[i].blackx != 0){
           printf("%d\t%d\n",col[i].blackx, col[i].blacky );
           }
                  if(col[i].goldx != 0){
           printf("%d\t%d\n",col[i].goldx, col[i].goldy );
                  }
    }
    printf("\n\n\tCортування за кольорами\n");
    for(int i=0; i<kilk; i++){
    if(col[i].redx != 0){
       printf("%d\t%d\n",col[i].redx, col[i].redy );
        }
    }
    for(int i=0; i<kilk; i++){
        if(col[i].greenx != 0){
           printf("%d\t%d\n",col[i].greenx, col[i].greeny );
        }
    }
    for(int i=0; i<kilk; i++){
        if(col[i].blackx != 0){
                  printf("%d\t%d\n",col[i].blackx, col[i].blacky );
                  }
    }
    for(int i=0; i<kilk; i++){
        if(col[i].goldx != 0){
        printf("%d\t%d\n",col[i].goldx, col[i].goldy );
               }
    }
    int wr = 10, wg = 10, wb = 10, wgo = 10, wr1, wg1, wb1, wgo1;
    printf("Найменьша ввідстань в red\t");
    for(int i = 0; i<kilk; i++){
        if(col[i].redx < col[i].redy){
            wr1 = col[i].redy - col[i].redx;
            if(wr > wr1 && wr1 != 0){
                wr=wr1;
            }
        }
        else{
            wr1 = col[i].redx - col[i].redy;
            if(wr > wr1 && wr1 != 0){
                wr=wr1;
            }
        }
    }
    printf("%d\n",wr);
    printf("Найменьша ввідстань в green");
    for(int i = 0; i<kilk; i++){
         if(col[i].greenx < col[i].greeny){
             wg1 = col[i].greeny - col[i].greenx;
             if(wg > wg1 && wg1 != 0){
                 wg=wg1;
             }
         }
         else{
             wg1 = col[i].greenx - col[i].greeny;
             if(wg > wg1 && wg1 != 0){
                 wg=wg1;
             }
         }
     }
     printf("%d\n",wg);
    printf("Найменьша ввідстань в black");
    for(int i = 0; i<kilk; i++){
         if(col[i].blackx < col[i].blacky){
             wb1 = col[i].blacky - col[i].blackx;
             if(wb > wb1 && wb1 != 0){
                 wb=wb1;
             }
         }
         else{
             wb1 = col[i].blackx - col[i].blacky;
             if(wb > wb1 && wb1 != 0){
                 wb=wb1;
             }
         }
     }
     printf("%d\n",wb);
    printf("Найменьша ввідстань в gold");
    for(int i = 0; i<kilk; i++){
         if(col[i].goldx < col[i].goldy){
             wgo1 = col[i].goldy - col[i].goldx;
             if(wgo > wgo1 && wgo != 0){
                 wgo=wgo1;
             }
         }
         else{
             wgo1 = col[i].goldx - col[i].goldy;
             if(wgo > wgo1 && wgo1 != 0){
                 wgo=wgo1;
             }
         }
     }
     printf("%d\n",wgo);
    
}
