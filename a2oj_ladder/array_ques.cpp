#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    int length = 0, sum = 0;
    cin >> length;
    int arr[length];
    int array[length / 2];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + length);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < (length - 1); i++)
    {
        sum = sum + arr[i + 1] - arr[i];
        i++;
    }
    cout << sum << endl;

    // this is a test comment

    return 0;
}