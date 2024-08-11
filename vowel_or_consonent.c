#include <stdio.h>
int main(){
    char userCha;
    printf("Enter a charatcher: ");
    scanf("%c", &userCha);
    // use of if else statement and logical operator
/*
    if ( userCha=='a'|| userCha== 'e'|| userCha=='i' || userCha=='o'|| userCha=='u'|| userCha=='A'|| userCha=='E'|| userCha=='I' || userCha=='O'||userCha=='U'){
    
        printf("'%C' is Vowel", userCha);
    }
    else if (userCha=='w'|| userCha== 'y'|| userCha=='W' || userCha=='Y'){
    
        printf("'%c' is Semi-vowel", userCha);
    }
    
    else{
        printf("'%C' is Consonent ", userCha);
    }
*/

// ues of switch statement
switch (userCha)
{
case 'a':
    printf("'%C' is Vowel", userCha);
    break;
case 'A':
    printf("'%C' is Vowel", userCha);
    break;
case 'e':
    printf("'%C' is Vowel", userCha);
    break;

case 'E':
    printf("'%C' is Vowel", userCha);
    break;
case 'i':
    printf("'%C' is Vowel", userCha);
    break;
case 'I':
    printf("'%C' is Vowel", userCha);
    break;
case 'o':
    printf("'%C' is Vowel", userCha);
    break;
case 'O':
    printf("'%C' is Vowel", userCha);
    break;
case 'u':
    printf("'%C' is Vowel", userCha);
    break;
case 'U':
    printf("'%C' is Vowel", userCha);
    break;
case 'w':
    printf("'%C' is Vowel", userCha);
    break;
case 'W':
    printf("'%C' is Vowel", userCha);
    break;
case 'y':
    printf("'%C' is Vowel", userCha);
    break;
case 'Y':
    printf("'%C' is Vowel", userCha);
    break;
default:
 printf("'%C' is Consonent ", userCha);
    break;
}

    return 0;
}