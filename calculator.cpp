#include "calculator.h"
#include <iostream>
#include <string>

using namespace std;

void Calculator::input()
{
    cin >> num1 >> op >> num2;
}

void Calculator::calculate()
{
    if(op == '+')
    {
        add();     
    }
    else if (op == '-')
    {
        sub();
    }
    else if (op == '*')
    {
        mul();
    }
    else if (op == '/')
    {
        divide();
    }
}

void Calculator::output()
{
    cout << res << endl;
}
void Calculator::add() 
{
    res = num1 + num2;
}
void Calculator::sub() 
{
    res = num1 - num2;
}
void Calculator::mul() 
{
    res = num1 * num2;
}
void Calculator:: divide() 
{   if(num2 == 0)
    {
    res = "0으로 나눌 수 없습니다.";
    }
    else
    {
    res = (float)num1 / (float)num2;    
    }

}