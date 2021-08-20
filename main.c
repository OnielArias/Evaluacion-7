#include <stdio.h>


int main(){

    int e = 0,u = 0,c = 1;

    for(int i=0; i < 10; i++){

        printf("\nIntroduzca el Numero: ");
         scanf("%d", &e);
        if (e >= u){
        if(e == u){
        c = c + 1;
        }else{
        c = 1;
        }
        u = e;
      }
    }
    printf("\n\nEl Numero Mas Grande Fue %d y Aparecio %d Veces\n", u, c);

    return 0;

}
