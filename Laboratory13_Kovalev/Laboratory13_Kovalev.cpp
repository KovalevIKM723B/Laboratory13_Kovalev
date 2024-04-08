#include <iostream>
using namespace std;

int sum1;

int Result(int n)
{
    if (n == 1)
    {
        return 7;
    }
    for (int i = 1; i <= n; i++)
    {
        sum1 = Result(n - 1) + 10;
    }
    return sum1;
}

int main()
{
    int n; 
    cout << "Enter serial element number\n";
    cin >> n;
    if (n > 10 || n < 1)
    {
        cout << "Too hight / low value";
        return 0;
    }
    cout << Result(n);
}