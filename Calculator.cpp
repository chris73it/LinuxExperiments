#include "Calculator.h"

Calculator::Calculator()
{
    m_result = 0;
}

Calculator::~Calculator()
{
}

double Calculator::add(double a, double b)
{
    m_result = a + b;
    return m_result;
}

double Calculator::sub(double a, double b)
{
    m_result = a - b;
    return m_result;
}

double Calculator::mul(double a, double b)
{
    m_result = a * b;
    return m_result;
}

double Calculator::div(double a, double b)
{
    m_result = a / b;
    return m_result;
}

double Calculator::getResult()
{
    return m_result;
}
