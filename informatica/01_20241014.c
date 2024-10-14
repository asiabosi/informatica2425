/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE*/
#include <stdio.h>
int main(){
    int giorno1, mese1, anno1;
    int giorno2, mese2, anno2, bisestile;
    printf("Inserisci la prima data: ");
    scanf("%d%d%d", &giorno1, &mese1, &anno1);
    printf("Inserisci la seconda data: ");
    scanf("%d%d%d", &giorno2, &mese2, &anno2);
    // controllo prima data
    if(anno1%100==0){
        if (anno1%400==0){
            printf("L'anno1 è bisestile");
            bisestile=1;
        }
    }
    else{
        if (anno1%4==0){
            printf("L'anno1 è bisestile");
            bisestile=1;
        }
    }
    //controllo del mese e del giorno
    if (mese1>=1 && mese1 <=12){
        if (mese1==2){
            if(giorno1>=1 && giorno1<=28+bisestile){
                printf("\nLa data1 è accettabile");
            }
            else{
                printf("\nLa data1 non è accettabile");
            }
        }
        else{
            if( mese1==11 || mese1==4 || mese1==6 || mese1==9){
                if (giorno1>=1 && giorno1<=30){
                    printf("\nLa data1 è accettabile");
                }
                else{
                    printf("\nLa data1 non è accettabile");
                }
            }
            else{
                if (giorno1>=1 && giorno1<=31){
                    printf("\nLa data1 è accettabile");
                }
                else{
                    printf("\nLa data1 non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa data1 non è accettabile");
    }
    // controllo seconda data 
     if(anno2%100==0){
        if (anno2%400==0){
            printf("L'anno2 è bisestile");
            bisestile=1;
        }
    }
    else{
        if (anno2%4==0){
            printf("L'anno2 è bisestile");
            bisestile=1;
        }
    }
    //controllo del mese e del giorno
    if (mese2>=1 && mese2 <=12){
        if (mese2==2){
            if(giorno2>=1 && giorno2<=28+bisestile){
                printf("\nLa data2 è accettabile");
            }
            else{
                printf("\nLa data2 non è accettabile");
            }
        }
        else{
            if( mese2==11 || mese2==4 || mese2==6 || mese2==9){
                if (giorno2>=1 && giorno2<=30){
                    printf("\nLa data2 è accettabile");
                }
                else{
                    printf("\nLa data2 non è accettabile");
                }
            }
            else{
                if (giorno2>=1 && giorno2<=31){
                    printf("\nLa data2 è accettabile");
                }
                else{
                    printf("\nLa data2 non è accettabile");
                }
            }
        }
    }
    else{
        printf("\nLa data2 non è accettabile");
    }
    if (anno1>anno2)
        printf("la prima data è più recente");
    else if(anno1==anno2){
        if(mese1>mese2)
            printf("la prima data è più recente");
        else if(mese1==mese2){
            if(giorno1>giorno2)
                 printf("la prima data è più recente");
            else if(giorno1==giorno2)
                printf("le date sono uguali");
            else
                printf("la seconda data è più recente");

        

        }
        else
        printf("la seconda data è più recente");    
    }
    else
        printf("la seconda data è più recente");    
    }

    

   



    