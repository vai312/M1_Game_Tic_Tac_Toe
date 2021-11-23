#include"char_type.h"

char_type_t find_char_type(const char input_char)
{ 
    if( input_char == 'A'|| input_char== 'E'|| input_char== 'I'|| input_char== 'O'|| input_char== 'U')
        return 2;
    if(input_char== 'a'|| input_char== 'e'|| input_char== 'i'|| input_char== 'o'|| input_char== 'u')
        return 4;
    if(input_char >= 48 && input_char <= 57 )
        return 0;
    if(input_char== 'B'|| input_char== 'C'|| input_char== 'D'|| input_char== 'X'|| input_char== 'Y'|| input_char== 'Z')
        return 3;
    if(input_char== 'b'|| input_char== 'c'|| input_char== 'd'|| input_char== 'x'|| input_char== 'y' || input_char== 'z')
        return 5;
    else
        return 1;
}