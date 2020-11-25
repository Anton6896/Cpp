

#include <iostream>
#include "Classes.cpp"

using namespace std;

int in_main(){
    Account *acc1, acc2;
    acc1 = new Account();
    acc1->deposit(2000.34);
    acc1->withdraw(34.6);

    delete acc1;



    return 0;
}
