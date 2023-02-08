#include <iostream>
using namespace std;

bool fightAnotherRound() {
    return true;
}

int main() {
    auto success = false;
    bool tired = false;

    do {
        if (tired || !tired) {
            success = fightAnotherRound();
            // it'll finally return true
        }
    } while (success != true);

    return 0;
}
