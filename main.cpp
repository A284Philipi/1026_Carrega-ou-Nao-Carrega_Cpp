#include <iostream>

using namespace std;

int main()
{
    long long int a, number_1, number_2;
    while (cin >> number_1){
        cin >> number_2;
        a = number_1 ^ number_2;
        cout << a <<endl;
    }
    return 0;
}
