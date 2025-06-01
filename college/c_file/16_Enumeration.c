#include <stdio.h>

// Define an enumeration for days of the week
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Day today;

    today = WEDNESDAY;

    if (today == WEDNESDAY) {
        printf("It's midweek!\n");
    }

    printf("The value of today (WEDNESDAY) is: %d\n", today);

    return 0;
}
