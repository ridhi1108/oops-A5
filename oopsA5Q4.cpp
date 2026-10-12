#include <iostream>
using namespace std;

class Result
{
public:
    void result(int marks)
    {
        cout << "Marks in one subject = "
             << marks << endl;
    }

    double result(int a, int b)
    {
        return (a + b) / 2.0;
    }

    double result(int a, int b, int c)
    {
        return (a + b + c) / 3.0;
    }
};

int main()
{
    Result r;

    r.result(85);

    cout << "Average of two subjects = "
         << r.result(80, 90) << endl;

    cout << "Average of three subjects = "
         << r.result(70, 80, 90) << endl;

    return 0;
}
