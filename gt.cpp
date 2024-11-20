#include <iostream>

double getTotal(double x[], int y);

int main()
{
    using namespace std;
    double Marks[] = {42.05, 52.05, 62.05};
    int size = sizeof(Marks)/sizeof(double);
    double total = getTotal(Marks, size);
    cout << total << endl;
    return 0;
}

double getTotal(double x[], int y)
{
    double z = 0;
    for(int i = 0; i < y; i++)
    {
        z += x[i];
    }
    return z;
}
