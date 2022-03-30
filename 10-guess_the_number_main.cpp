#include "main.h"

/**
 * main: entry point for guess_number
 * return: always 0
 */
int main(void)
{
    int number = 0, times = 0, answer = 0;

    srand(time(NULL));
    number = 1 + rand() % 100;

    cout << "Guess a number between 1 and 100!" << endl;

    do {
        cout << "Type a number: ";
        cin >> answer;
        if (answer < number)
        {
            cout << "Is greater";
        }
        if (answer > number)
        {
            cout << "Is lower";
        }
        times++;
    }
    while (answer != number);

    cout << "Yes! you did it in " << times << " tries!" << endl;

    return (0);
}
