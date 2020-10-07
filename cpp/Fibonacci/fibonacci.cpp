#include <iostream>

using namespace std;

int fibbonaci(int n)
{
    if (n <= 1) { return(n); }
    return (fibbonaci(x - 1) + fibbonaci(n - 2));
}

int main()
{
    int x;
    
    cout << "Enter the number of terms of series : ";
    cin >> x;

    for (int i = 0; i < x; ++ i)
    {
        cout << " " << fibbonaci(i);
    }
    
    return 0;
}