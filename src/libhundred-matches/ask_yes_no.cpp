#include <libhundred-matches/ask_yes_no.h>
#include <libhundred-matches/check_ask_yes_no.h>

char ask_yes_no()
{
    char letter[MAX_SIZE_CHAR];
    int flag = 1;
    getchar();
    do {
        std::cout << "Do you want to go first? Answer yes (y) or no (n).";
        fgets(letter, MAX_SIZE_CHAR, stdin);
        if ((strlen(letter) - 1) == 1)
            flag = check_ask_yes_no(letter);
        else
            std::cout << "Enter right value, please! Yes (y) or no (n)!"
                      << std::endl;
    } while (flag == 1);
    return *letter;
}
