#ifndef PIGGYBANK_H
#define PIGGYBANK_H

using namespace std;

class PiggyBank{
public:
//constructors
PiggyBank();
~PiggyBank();
PiggyBank(double);

//accessors
double countSavings();
bool getsmash();



//mutator functions
void depositMoney( double countSavings);
double smash();

private:

bool broken;
double savings;

};

#endif