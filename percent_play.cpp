#include <cstdlib>
#include <iostream>
using namespace std;

int main (int argc, char **argv)
{
double startingValue;
double finalValue;
double percentGain;
int tradeCount = 1;

cout << "Input starting value in BTC, and then percentage gain per trade";
cin >> startingValue;
cin >> percentGain;

while(tradeCount != 366)
{
    char quitVal;
    double workingBalance;

    workingBalance = startingValue*percentGain;
    finalValue = startingValue + workingBalance;

    cout << "Trade " << tradeCount << " BTC Balance: " << startingValue << "BTC Gained: " << workingBalance << " New BTC Balance: " << finalValue;
    cout << "\n";
    startingValue = finalValue;
    tradeCount++;
}

return 0;
}
