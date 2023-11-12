#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string.h>
#include <vector>

#include <libhundred-matches/ask_yes_no.h>
#include <libhundred-matches/check_ask_yes_no.h>
#include <libhundred-matches/check_matches_player.h>
#include <libhundred-matches/check_quest_vs_who.h>
#include <libhundred-matches/check_right_input_matches.h>
#include <libhundred-matches/instruction.h>
#include <libhundred-matches/matches_computer.h>
#include <libhundred-matches/matches_player.h>
#include <libhundred-matches/play_vs_anplayer.h>
#include <libhundred-matches/play_vs_computer.h>
#include <libhundred-matches/quest_vs_who.h>
#include <libhundred-matches/struct.h>
#include <libhundred-matches/who_is_who.h>

#define N 100
#define WIN_POS 11
#define NEAR_WIN_POS 21
#define MAX_NUMBER 10
#define MIN_NUMBER 1
#define MAX_SIZE_CHAR 256

char ask_yes_no();
int check_ask_yes_no(char letter);
int check_matches_player(std::vector<char>* vec, int matches);
int check_quest_vs_who(char* letter);
void instruction(std::vector<char>* vec);
int matches_computer(std::vector<char>* vec);
int matches_player(std::vector<char>* vec);
void play_vs_anplayer(std::vector<char>* vec);
void play_vs_computer(std::vector<char>* vec);
char quest_vs_who();
void who_is_who(struct Players* player, char letter);
int check_right_input_matches(char* matches);

struct Players player[2];

int main()
{
    char letter;
    std::vector<char> vec;

    instruction(&vec);
    letter = quest_vs_who();

    if (letter == 'p') {
        std::cout << "Ok, you will be playing against another player"
                  << std::endl;
        std::cout << "Enter your nicknames" << std::endl;
        std::cout << "Enter nickname of first player: " << std::endl;
        std::cin >> player[0].nickname;
        std::cout << "Enter nickname of second player: " << std::endl;
        std::cin >> player[1].nickname;
        play_vs_anplayer(&vec);
    } else {
        std::cout << "Ok, you will be playing against computer" << std::endl;
        std::cout << "Enter your nickname" << std::endl;
        std::cin >> player[0].nickname;
        strcpy(player[1].nickname, "Computer");
        play_vs_computer(&vec);
    }

    return 0;
}
