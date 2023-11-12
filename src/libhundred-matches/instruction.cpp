#include <libhundred-matches/instruction.h>

void instruction(std::vector<char>* vec)
{
    int i;

    std::cout << "Welcome to the game '100 Matches'" << std::endl;
    std::cout << "Below you can see your 100 matches, so you should take the "
                 "count between 1 to 10"
              << std::endl;

    for (i = 0; i < N; i++) {
        vec->push_back('|');
        std::cout << (*vec)[i] << ' ';
    }
    std::cout << std::endl;
}
