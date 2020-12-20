#include <iostream>

enum class wochentag {
    montag = 1,
    dienstag,
    mittwoch,
    donnerstag,
    freitag,
    samstag,
    sonntag,
};

int main()
{
    int wt = static_cast<int>(wochentag::sonntag);
}
