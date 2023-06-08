#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomNumberGenrator()
{
    srand((int)time(0));
    return rand() % 100 + 1;
}

main()
{
    int userNumber, terms = 0;
    int randomNumber = randomNumberGenrator();
    cout << "Guess a number into 1 and 100: " << endl;
    do
    {
        cin >> userNumber;
        if (randomNumber > userNumber)
        {
            cout << "Greater one please" << endl;
            terms += 1;
            continue;
        }
        else if (randomNumber < userNumber)
        {
            cout << "Lower number Please" << endl;
            terms += 1;
            continue;
        }
        else if (randomNumber == userNumber)
        {
            cout << "You find out ########### Win ##########" << randomNumber << endl;
            cout << "You find in " << terms << " terms" << endl;
            break;
        }

    } while (userNumber != randomNumber);
}