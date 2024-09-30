/* stabilire se dati due numeri A e B 
controllare se A è minore, manggiore o uguale a B*/
    int main(){
        int a=0;
        int b=0;
        printf("inserisci il primo valore:");
        scanf("%f",&a);
       printf("inserisci il secondo valore:");
       scanf("%f",&b);
       if(a==b){
        printf("i due valori sono uguali.");
        
       }
       else{
        if(a>b)
        printf(" a%d è maggiore di b%d",a,b);
        else
        printf(" a%d è minore di b%d",a,b);
       }
       return 0;
    }