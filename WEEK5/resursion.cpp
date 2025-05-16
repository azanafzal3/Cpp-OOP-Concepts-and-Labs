
#include <iostream>
using namespace std;
int printing(int n)
{
    if (n == 0)
    { 
        return 0;
    }

    cout << "* ";
    printing(n - 1);
        
}
int nextline(int n, int m)
{
    if (n== 0)
    {
        return 0;
    }
    printing(m);
    cout << endl;

    nextline(n - 1, m + 1);

}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    nextline(n, 1);
}


