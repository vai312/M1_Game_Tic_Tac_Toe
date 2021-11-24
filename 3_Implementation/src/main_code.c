#include <stdio.h>
#include <stdlib.h>


int tic_tac_toe(char *square)
{
    int player = 1, win_lose;

    char mark, move ='\0' ;
    do
    {
        board(square);
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
             getchar();
        }
     win_lose = check_if_win(square);
        
        player++;
    }while (win_lose ==  - 1);
 
    board();
 
    if (win_lose == 1)
        printf("   ==>\aPlayer %d win ", --player);
    else
        printf("   ==>\aGame draw");
    
     getchar();
     }