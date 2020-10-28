/*
This code will give you winning percentage of your given guess
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int getRandom(int low, int high, int badNum) {
    int random = rand() % high + low;

    while (random == badNum) {
        random = rand() % high + low;
    }

    return random;
}

int main() {

    int guess = 0;
    int win_Num = 0;
    int elimNum = 0;
    int switchedNum = 0;
    int switchCount = 0;



    cout << "Please enter a guess: ";
    cin >> guess;
    cin.get();

    while (guess < 1 || guess > 3) {
        cout << "Please enter a valid number: ";
        cin >> guess;
        cin.get();
    }


    for (int i = 0; i <= 1000; i++) {

        win_Num = getRandom(1, 3, 0);
        elimNum = getRandom(1, 3, winningNum);
        switchedNum = getRandom(1, 3, elimNum);

        while (switchedNum == guess) {
            switchedNum = getRandom(1, 3, elimNum);
        }

        if (switchedNum == win_Num) { switchCount++; }
    }

    cout << "You won " << switchCount / 10 << "% of the time, and lost  " << 100 - (switchCount / 10) << "% of the time.";


    cin.get();
    return 0;

}
