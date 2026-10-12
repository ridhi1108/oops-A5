#include <iostream>
using namespace std;

class Maximum
{
public:
    int findMax(int a, int b)
    {
        if (a > b)
            return a;
        else
            return b;
    }

    int findMax(int a, int b, int c)
    {
        int max = a;

        if (b > max)
            max = b;

        if (c > max)
            max = c;

        return max;
    }

    double findMax(double a, double b)
    {
        if (a > b)
            return a;
        else
            return b;
    }
};

int main()
{
    Maximum m;

    cout << "Maximum of two integers = "
         << m.findMax(10, 20) << endl;

    cout << "Maximum of three integers = "
         << m.findMax(10, 50, 30) << endl;

    cout << "Maximum of two decimals = "
         << m.findMax(5.5, 3.2) << endl;

    return 0;
}
