#include <libhundred-matches/check_quest_vs_who.h>

int check_quest_vs_who(char* letter)
{
    if (letter[0] != 'c' && letter[0] != 'p')
        return 1;
    else
        return 0;
}
