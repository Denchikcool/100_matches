#include <libhundred-matches/ask_yes_no.h>
#include <libhundred-matches/matches_player.h>
#include <libhundred-matches/play_vs_anplayer.h>
#include <libhundred-matches/struct.h>
#include <libhundred-matches/who_is_who.h>

extern struct Players player[COUNT_PLAYERS];

void play_vs_anplayer(std::vector<char>* vec)
{
    int matches, count = 0;

    char answer = ask_yes_no();
    who_is_who(player, answer);

    if (player[0].number == 0) {
        count = 0;
    } else {
        count = 1;
    }

    while (vec->size() != 0) {
        std::cout << std::endl
                  << "How many matches you will take?" << std::endl;
        matches = matches_player(vec);

        std::vector<char>::iterator it_begin = vec->begin();
        vec->erase(it_begin, it_begin + matches);

        for (std::vector<char>::iterator i = vec->begin(); i != vec->end();
             i++) {
            std::cout << *i;
        }

        std::cout << "(" << vec->size() << ")" << std::endl;
        count = 1 - count;
    }
    if (count == 0) {
        std::cout << "The first player has won! And his name is - "
                  << player[count].nickname << std::endl;
    } else {
        std::cout << "The second player has won! And his name is - "
                  << player[count].nickname << std::endl;
    }
}
