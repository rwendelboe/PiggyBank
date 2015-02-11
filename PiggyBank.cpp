#include <iostream>
#include "PiggyBank.h"

using namespace std;



//constructors
PiggyBank:: PiggyBank(){

	savings = 0;
	broken = false;
}


PiggyBank::PiggyBank(double money){

	savings = money;
	broken = false;

}
PiggyBank::~PiggyBank(){
	if (broken == true)
	{
		cout<<"The piggy bank is broken"<<endl;
	}
}
//accessors
double PiggyBank::countSavings(){
	return savings;
}
bool PiggyBank::getsmash(){
	return broken;
}


//mutator functions
void PiggyBank::depositMoney( double countSavings)
{
	if (broken)
	{
		cout<<"Can't put money in the broken bank"<<endl;
		return;
	}
	if (countSavings <0)
	{
		cout<<"Negative money deposit is not allowed"<<endl;
	}
	savings = savings + countSavings;
}
double PiggyBank::smash(){
	broken = true;
	return savings;
}
