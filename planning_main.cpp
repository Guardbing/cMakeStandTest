#include <iostream>
#include "process.h"
using std::cout, std::endl;
int main()
{
    cout << "planning start" << endl;
    process pro;
    pro.planProcess();
    cout << "planning end" << endl;
    return 0;
}