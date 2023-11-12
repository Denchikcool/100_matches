#include <libhundred-matches/check_matches_player.h>

int check_matches_player(std::vector<char>* vec, int matches)
{
    if ((matches >= MIN_NUMBER) && (matches <= MAX_NUMBER)) {
        if (matches > (int)vec->size()) {
            return 1;
        } else
            return 0;
    } else {
        return 2;
    }
}
