#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        stack<int> t;
        int n;
        cin >> n;
        while (n > 0)
        {
            t.push(n % 2);
            n /= 2;
        }
        while (!t.empty())
        {
            cout << t.top();
            t.pop();
        }
        cout << endl;
    }
}