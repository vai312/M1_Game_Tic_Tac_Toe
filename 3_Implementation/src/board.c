#include <stdio.h>
#include <stdlib.h>


int board(char *square)
{
    

     system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t        Tic Tac Toe");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
 
    printf("\tPlayer 1 (X)  -  Player 2 (O)\n\n");
 
 
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t|     |     |     |     |\n");
    printf("\t|  %c  |  %c  |  %c  |  %c  |  \n", square[1], square[2], square[3], square[4]);
 
    printf("\t|_____|_____|_____|_____|\n");
    printf("\t|     |     |     |     |\n");
 
    printf("\t|  %c  |  %c  |  %c  |  %c  |  \n", square[5], square[6], square[7], square[8]);
 
    printf("\t|_____|_____|_____|_____|\n");
    printf("\t|     |     |     |     |\n");
 
    printf("\t|  %c  |  %c  |  %c  |  %c  |  \n", square[9], square[10], square[11], square[12]);
    printf("\t|_____|_____|_____|_____|\n");
    printf("\t|     |     |     |     |\n");
 
    printf("\t|  %c  |  %c  |  %c  |  %c  |  \n", square[13], square[14], square[15], square[16]);
 
 
    printf("\t|     |     |     |     |\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

 return 0;
}