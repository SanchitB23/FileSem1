//To Check If the Given Var is Alphabet Or not
#include<stdio.h>
void main(){
    char c;
    int i,j,x = 0,y = 0;
    printf("Enter A Character");
    scanf("%c",&c);
    for(i = 'A' ; i <= 'Z' ; i++){
        if(c == i){
            x = 1;
        }
    }
    for(j= 'a' ; j <= 'z' ; j++){
        if(c == j){
            y = 1;
        }
    }
    if(x == 1 || y == 1){
        printf("\nIt's An Alphabet");
    }
    else{
        printf("It's Not An Alphabet");
    }
}
