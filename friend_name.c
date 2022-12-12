// write the name of the person you like
// if the name is yours print(Hurra this is me)
// This is my bff. 

// Good Luck
#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main(){
    char name[15]="Hatice";
    char name1[15];
    basla:
    printf("Enter your friend name:\n ");
    scanf("%s",name1);
    if(strcmp(name,name1)==0){
        printf("Hurra this is me!\n");
    }
    else{
        printf("This is your bbf!\n");
    }
    goto basla;
    
return 0;
}
