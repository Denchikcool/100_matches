#include <libhundred-matches/struct.h>
#include <libhundred-matches/who_is_who.h>

extern struct Players player[COUNT_PLAYERS];

void who_is_who(struct Players* player, char letter)
{
    if (letter == 'y') {
        player[0].number = 0;
        player[1].number = 1;
    }
    if (letter == 'n') {
        player[0].number = 1;
        player[1].number = 0;
    }
}
