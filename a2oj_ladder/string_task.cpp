#include <iostream>
#include <string>
#include <cstring>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'o' || s.at(i) == 'i' || s.at(i) == 'u')
        {
            s.erase(i, 1);
        }

        s1.push_back('.');
        s1.push_back(s.at(i));
    }
    cout << s1 << endl;

    return 0;
}