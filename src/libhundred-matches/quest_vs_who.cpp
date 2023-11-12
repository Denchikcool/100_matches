#include <libhundred-matches/check_quest_vs_who.h>
#include <libhundred-matches/quest_vs_who.h>

char quest_vs_who()
{
    char letter[MAX_SIZE_CHAR];
    int flag = 1;

    do {
        std::cout << "Against whom do you want to play? Computer (c) or "
                     "another player (p)?"
                  << std::endl;
        fgets(letter, MAX_SIZE_CHAR, stdin);
        if ((strlen(letter) - 1) == 1)
            flag = check_quest_vs_who(letter);

        else {
            std::cout << "Enter one letter ('c' or 'p')!" << std::endl;
            flag = 1;
        }
    } while (flag == 1);

    return *letter;
}
