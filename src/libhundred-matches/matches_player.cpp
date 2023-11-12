#include <libhundred-matches/check_matches_player.h>
#include <libhundred-matches/check_right_input_matches.h>
#include <libhundred-matches/matches_player.h>

int matches_player(std::vector<char>* vec)
{
    char matches[MAX_SIZE_CHAR];
    int flag = 1, value;

    while (flag != 0) {
        fgets(matches, MAX_SIZE_CHAR, stdin);
        matches[strlen(matches) - 1] = '\0';
        if (check_right_input_matches(matches) == 0) {
            value = atoi(matches);
            flag = check_matches_player(vec, value);
            if (flag == 1)
                std::cout << "The number entered is greater than required. "
                             "Please "
                             "try again"
                          << std::endl;
            if (flag == 2)
                std::cout << "Wrong amount. Please try again" << std::endl;
        } else
            std::cout << "Enter number between 1 to 10 without symbols!"
                      << std::endl;
    }
    return value;
}
