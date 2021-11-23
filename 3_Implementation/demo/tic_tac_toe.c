#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


char square[17] = { '\0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' , 'j', 'k', 'l', 'm', 'n', 'y', 'z'};
 
int checkwin();
void board();
 
int main()
{
    int player = 1, win_lose;
 
    char mark, move ='\0' ;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;
 
        printf("   Player %d, enter your move :", player);
        scanf("%c", &move);
       mark = (player == 1) ? 'X' : 'O';

        if (move =='a'&& square[1] == 'a')
                square[1] = mark;
 
        else if (move == 'b' && square[2] == 'b')
                square[2] = mark;
 
        else if (move== 'c' && square[3] == 'c')
                square[3] = mark;
 
        else if (move == 'd'  && square[4] == 'd')
                square[4] = mark;
 
        else if (move == 'e' && square[5] == 'e')
                square[5] = mark;
 
        else if (move == 'f' && square[6] == 'f')
                square[6] = mark;
 
        else if (move == 'g' && square[7] == 'g')
                square[7] = mark;
 
        else if (move == 'h' && square[8] == 'h')
                square[8] = mark;
 
        else if (move =='i'  && square[9] == 'i')
                square[9] = mark;

        else if (move == 'j'  && square[10] == 'j')
                square[10] = mark;
 
        else if (move == 'k' && square[11] == 'k')
                square[11] = mark;
 
        else if (move == 'l' && square[12] == 'l')
                square[12] = mark;
 
        else if (move =='m' && square[13] == 'm')
                square[13] = mark;
 
        else if (move == 'n' && square[14] == 'n')
                square[14] = mark;
 
        else if (move ==  'y' && square[15] == 'y')
                square[15] = mark;
 
        else if (move == 'z'  && square[16] == 'z')
                square[16] = mark;

        else if ((int) move == 10)
            continue ;
        else    
        {
             printf("   Invalid move ");
             player--;
             getch();
        }
     win_lose = checkwin();
        
        player++;
    }while (win_lose ==  - 1);
 
    board();
 
    if (win_lose == 1)
        printf("   ==>\aPlayer %d win ", --player);
    else
        printf("   ==>\aGame draw");
    
     getch();
 
    return 0;
}
 
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3] && square[3] == square[4])
        return 1;
 
    else if (square[6] == square[5] && square[7] == square[6] && square[7] == square[8])
        return 1;
 
    else if (square[9] == square[10] && square[10] == square[11] && square[11] == square[12])
        return 1;
 
    else if (square[13] == square[14] && square[14] == square[15] && square[15] == square[16])
        return 1;
 
    else if (square[1] == square[6] && square[6] == square[11] && square[11] == square[16])
        return 1;
 
    else if (square[4] == square[7] && square[7] == square[10] && square[10] == square[13])
        return 1;
 
    else if (square[1] == square[5] && square[5] == square[9] && square[13] == square[9])
        return 1;
 
    else if (square[2] == square[6] && square[6] == square[10] && square[10] == square[14])
        return 1;

    else if (square[3] == square[7] && square[7] == square[11] && square[11] == square[15])
        return 1;
        
    else if (square[4] == square[8] && square[8] == square[12] && square[12] == square[16])
        return 1;
        
 
    else if (square[1] != 'a' && square[2] != 'b' && square[3] != 'c' &&
        square[4] != 'd' && square[5] != 'e' && square[6] != 'f' && square[7]
        != 'g' && square[8] != 'h' && square[9] != 'i'  && square[10] != 'j' && 
        square[11] != 'k' && square[12] != 'l'  && square[13] != 'm' &&
        square[14] != 'n' && square[15] != 'y' && square[16] != 'z' )
        return 0;
    else
        return  - 1;
}
 
 

 
 
void board()
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
}