class Calculator
{
private:
    double m_result;
public:
    Calculator();
    ~Calculator();
    double add(double a, double b);
    double sub(double a, double b);
    double mul(double a, double b);
    double div(double a, double b);
    double getResult();
};
