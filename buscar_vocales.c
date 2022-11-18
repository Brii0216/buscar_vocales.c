#include <stdio.h>
char palabra[20];
int vocal[5];

int main(){
    printf("Ingrese una palabra\n");
    scanf("%s",palabra);
    
    for(int i=0;i<20;i++){
        char c=palabra[i];
        switch(c){
            case 'a':vocal[0]++;break;
            case 'e':vocal[1]++;break;
            case 'i':vocal[2]++;break;
            case 'o':vocal[3]++;break;
            case 'u':vocal[4]++;break;
        }
    }
        printf("Hay %i A, %i E, %i I, %i O y %i U en la palabra ingresada",vocal[0],vocal[1],vocal[2],vocal[3],vocal[4]);
        return 0;
}
