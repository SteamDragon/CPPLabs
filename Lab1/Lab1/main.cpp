#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Please provide 2 numbers and operator (+ - * / %): ";
    double a,b,c;
    char op;
    cin >> a >> op >> b;
    switch(op)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        if(b == 0)
        {
            cout<< a << op << b << "= INF";
            return 0;
        }
        else
        {
            c = a / b;
        }
        break;
 /*  case '%':
       if (b == 0)
        {
            c = 0;
        }
        else
        {
            c = a % b;
        }
        break;*/
    default:
        cout<<"Failed to process operator "<< op << std::endl;
        return 1;
    }

    cout<< a << op << b << '=' << setprecision(12) <<  c;
    return 0;
}

