#include "sum.h"
#include "mockcpp/mockcpp.hpp"
#include <iostream>
using namespace std;

int main()
{
    cout << "Before MOCKER..." << endl;
    cout << "The sum of 2 and 3 is " << Sum(2, 3) << endl;
    
    MOCKER(Sum).stubs().will(returnValue(100));

    cout << "After MOCKER..." << endl;
    cout << "The sum of 2 and 3 is " << Sum(2, 3) << endl;

    return 0;
}