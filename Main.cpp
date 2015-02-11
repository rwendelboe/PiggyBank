#include <iostream>
#include <iomanip>
#include "PiggyBank.h"


using namespace std;


int main(){
	PiggyBank Rich;
	Rich.depositMoney(4.0);
	cout<< "You have $ "<<Rich.countSavings()<<endl; 
	Rich.depositMoney(7.0);
	cout<< "You have $ "<<Rich.countSavings()<<endl;
	Rich.depositMoney(12.0);
	cout<< "You have $ "<<Rich.countSavings()<<endl;
	Rich.depositMoney(11.0);
	cout<< "You have $ "<<Rich.countSavings()<<endl;
	Rich.depositMoney(13.0);
	cout<< "You have $ "<<Rich.countSavings()<<endl;
	Rich.smash();


return 0;
}
