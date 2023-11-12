#include <libhundred-matches/check_right_input_matches.h>

int check_right_input_matches(char* matches)
{
    int i;
    if (matches[0] == '0')
        return 1;
    if (strlen(matches) > 0 && strlen(matches) <= 2) {
        for (i = 0; i < (int)strlen(matches); i++) {
            if (matches[i] >= '0' && matches[i] <= '9')
                continue;
            else
                return 1;
        }
        return 0;
    } else
        return 1;
}
