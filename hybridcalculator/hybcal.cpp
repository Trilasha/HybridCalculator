
/*
Two classes have been created and they do the following:-
1.Simple calculator:-takes input of 2 numbers using a utility function and performs +,-,*,/ and displays the results using another function.
2.Scientific calculator:-takes input of 2 numbers using a utility function and performs three scientific operations(sin,cos,tan) and displays the results using another function .
Another class (HybridCalculator ) is created and it is inherited using the above mentioned two classes:

Some other info:-
--->Multi level inheritance has been used to make the hybrid calculator
--->Mode of visibility is kept PUBLIC
*/
#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    double a, b;

public:
    void set_data(double num1, double num2)
    {
        cout << "Enter the first value: " << endl;
        cin >> num1;
        cout << "Enter the second value: " << endl;
        cin >> num2;
        a = num1;
        b = num2;
    }
    double get_data1()
    {
        return a;
    }
    double get_data2()
    {
        return b;
    }

    void operation1()
    {
        int opt;
        cout << "Choose your desired arithmetic operation: " << endl
             <<"-------------------------------------------------"<<endl
             << "1-->for ADDITION" << endl
             << "2-->for SUBTRACTION" << endl
             << "3-->for MULTIPLICATION" << endl
             << "4-->for DIVISION" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
            break;
        case 2:
            cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
            break;
        case 3:
            cout << "The product of " << a << " and " << b << " is " << a * b << endl;
            break;
        case 4:
            cout << "The quotient of " << a << " and " << b << " is " << a / b << endl;
            break;
        }
    }
};
class ScientificCalculator : public SimpleCalculator
{
    double rad;

public:
    void choose()
    {
        int cho;
        cout << "Out of the two entered numbers,which one do you want to use for the scientific calculation?" << endl
            <<"----------------------------------------------------------------------------------------------"<<endl
             << "Press:"<<endl
             <<"1-->to go with the first value"<<endl
              <<"2-->to go with the second" << endl;
        cin >> cho;
        switch (cho)
        {
        case 1:
            operation2();
            break;

        default:
            operation3();
            break;
        }
    }
    void operation2()
    {
        int che;
        cout << "Press:" << endl
            << "1-->for sine operation(sin value)" << endl
             << "2-->for cosine operation(cos value)" << endl
             << "3-->for tangent operation(tan value)" << endl;
        cin >> che;
        rad = get_data1() * (3.1415926536 / 180);
        switch (che)
        {
        case 1:
            cout << "The sine of the angle(assumed to be in degrees) is " << sin(rad) << endl;
            break;
        case 2:
            cout << "The cosine of the angle(assumed to be in degrees) is " << cos(rad) << endl;
            break;
        case 3:
            cout << "The tangent of the angle(assumed to be in degrees) is " << tan(rad) << endl;
            break;
        }
    }
    void operation3()
    {
        int che;
        cout << "Press:" << endl
             << "1-->for sine operation(sin value)" << endl
             << "2-->for cosine operation(cos value)" << endl
             << "3-->for tangent operation(tan value)" << endl;
        cin >> che;
        rad = get_data2() * (3.1415926536 / 180);
        switch (che)
        {
        case 1:
            cout << "The sine of the angle(assumed to be in degrees) is " << sin(rad) << endl;
            break;
        case 2:
            cout << "The cosine of the angle(assumed to be in degrees) is " << cos(rad) << endl;
            break;
        case 3:
            cout << "The tangent of the angle(assumed to be in degrees) is " << tan(rad) << endl;
            break;
        }
    }
    int get_rad()
    {
        return rad;
    }
};
class HybridCalculator : public ScientificCalculator
{
public:
    void option()
    {
        int opt2;
        double f, s;
        cout << "Press:"<<endl
             << "1-->To perform simple calculation" << endl
             << "2-->To perform scientific calculation" << endl;
        cin >> opt2;
        switch (opt2)
        {
        case 1:
            set_data(f, s);
            operation1();

            break;
        case 2:
            set_data(f, s);
            choose();
        }
    }
};

int main()
{
    double d, g;
    HybridCalculator h1;
    h1.option();
    return 0;
}