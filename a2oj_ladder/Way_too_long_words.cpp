#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t{};
    cin >> t;
    for (int i{}; i < t; i++)
    {
        string s;
        cin >> s;
        int x = s.length();

        if (x > 10)
            cout << s.at(0) << (x - 2) << s.at(x - 1) << endl;
        else
            cout << s << endl;
    }

    return 0;
}
