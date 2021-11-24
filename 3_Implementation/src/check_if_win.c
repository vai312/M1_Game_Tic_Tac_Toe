#include <stdio.h>


int check_if_win(char *square)
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