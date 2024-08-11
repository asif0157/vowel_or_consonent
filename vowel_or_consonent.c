#include <stdio.h>
int main(){
    char userCha;
    printf("Enter a charatcher: ");
    scanf("%c", &userCha);
    // use of if else statement and logical operator
    
    if ( userCha=='a'|| userCha== 'e'|| userCha=='i' || userCha=='o'|| userCha=='u'|| userCha=='A'|| userCha=='E'|| userCha=='I' || userCha=='O'||userCha=='U'){
    
        printf("'%C' is Vowel", userCha);
    }
    else if (userCha=='w'|| userCha== 'y'|| userCha=='W' || userCha=='Y'){
    
        printf("'%c' is Semi-vowel", userCha);
    }
    
    else{
        printf("'%C' is Consonent ", userCha);
    }


    return 0;
}