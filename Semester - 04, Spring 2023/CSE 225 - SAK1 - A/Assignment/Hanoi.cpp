#include <iostream>
using namespace std;

void Hanoi(int discNumber, char sourcePeg, char destinationPeg, char auxiliaryPeg){
    if(discNumber == 1){
        cout << "Move disc 1 from peg " << sourcePeg << " to peg " << destinationPeg << endl;
        return;
    }

    Hanoi(discNumber - 1, sourcePeg, auxiliaryPeg, destinationPeg);
    cout << "Move disc " << discNumber << " from peg " << sourcePeg << " to peg " << destinationPeg << endl;
    Hanoi(discNumber - 1, auxiliaryPeg, destinationPeg, sourcePeg);
}

int main()
{
    Hanoi(5, 'A', 'C', 'B');
    return 0;
}
