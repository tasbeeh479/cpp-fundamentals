#include <iostream>

using namespace std;

int main() 
{
    int num=5678;
    int reversed = 0;
    int n = num;

    cout << "Original Number: " << num << endl;

    reversed = reversed * 10 + (n % 10);
    n = n / 10;

    reversed = reversed * 10 + (n % 10);
    n = n / 10;

    reversed = reversed * 10 + (n % 10);
    n = n / 10;

    reversed = reversed * 10 + (n % 10);
    n = n / 10;

    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
