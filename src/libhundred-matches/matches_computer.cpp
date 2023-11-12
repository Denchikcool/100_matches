#include <libhundred-matches/matches_computer.h>

int matches_computer(std::vector<char>* vec)
{
    int matches;
    srand(time(0));

    if (vec->size() <= NEAR_WIN_POS && vec->size() > WIN_POS)
        matches = vec->size() - WIN_POS;
    else if (vec->size() < WIN_POS)
        matches = vec->size();
    else
        matches = rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;

    return matches;
}
