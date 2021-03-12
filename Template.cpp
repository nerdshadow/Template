
#include <iostream>

using namespace std;

template <class AddTemplate>
AddTemplate sum(AddTemplate x, AddTemplate y)
{
    return x + y;
}

int main()
{
    int a = 44, b = 25, iresult;
    double j = 5.78, k = 3.98, dresult;
    iresult = sum(a, b);
    dresult = sum(j, k);
    cout << "Result of adding int numbers: " << iresult<<endl;
    cout << "Result of adding double numbers: " << dresult;
}
