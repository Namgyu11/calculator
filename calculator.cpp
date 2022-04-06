#include "calculator.h"
#include <iostream>
#include <string>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Divide.h"


using namespace std;

void Calculator::input()
{
    cin >> num1 >> op >> num2;

    if(op == '+')
        iop = (IOperator*)new Add();
    if(op == '-')
        iop = (IOperator*)new Sub();
    if(op == '*')
        iop = (IOperator*)new Mul();
    if(op == '/')
        iop = (IOperator*)new Divide();

    
}

void Calculator::calculate()
{
   res = iop->op(num1, num2);
}

void Calculator::output()
{
    cout << res << endl;
}
