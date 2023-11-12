#include <libhundred-matches/check_ask_yes_no.h>

int check_ask_yes_no(char* letter)
{
    if (letter[0] != 'y' && letter[0] != 'n')
        return 1;
    else
        return 0;
}
