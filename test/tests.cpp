#include <ctest.h>
#include <libhundred-matches/check_ask_yes_no.h>
#include <libhundred-matches/check_matches_player.h>
#include <libhundred-matches/check_quest_vs_who.h>
#include <libhundred-matches/check_right_input_matches.h>

CTEST(check_ask_yes_no, read_no_error)
{
    char letter[MAX_SIZE_CHAR] = "y";
    const int result = check_ask_yes_no(letter);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_ask_yes_no, read_error)
{
    char letter[MAX_SIZE_CHAR] = "t";
    const int result = check_ask_yes_no(letter);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_quest_vs_who, read_no_error)
{
    char letter[MAX_SIZE_CHAR] = "c";
    const int result = check_quest_vs_who(letter);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_quest_vs_who, read_error)
{
    char letter[MAX_SIZE_CHAR] = "m";
    const int result = check_quest_vs_who(letter);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_right_input_matches, read_first_type_of_error)
{
    char matches[MAX_SIZE_CHAR] = "0";
    const int result = check_right_input_matches(matches);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_right_input_matches, read_second_type_of_error)
{
    char matches[MAX_SIZE_CHAR] = "111";
    const int result = check_right_input_matches(matches);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_right_input_matches, read_third_type_of_error)
{
    char matches[MAX_SIZE_CHAR] = "1a";
    const int result = check_right_input_matches(matches);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_right_input_matches, read_fourth_type_of_error)
{
    char matches[MAX_SIZE_CHAR] = "five";
    const int result = check_right_input_matches(matches);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_right_input_matches, read_no_error)
{
    char matches[MAX_SIZE_CHAR] = "5";
    const int result = check_right_input_matches(matches);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_matches_player, read_no_error)
{
    std::vector<char> vec;
    for (int i = 0; i < N; i++)
        vec.push_back('|');
    const int result = check_matches_player(&vec, 10);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_matches_player, read_first_type_of_error)
{
    std::vector<char> vec;
    for (int i = 0; i < N; i++)
        vec.push_back('|');
    const int result = check_matches_player(&vec, 11);
    const int expected = 2;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_matches_player, read_second_type_of_error)
{
    std::vector<char> vec;
    for (int i = 0; i < N - 93; i++)
        vec.push_back('|');
    const int result = check_matches_player(&vec, 10);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
