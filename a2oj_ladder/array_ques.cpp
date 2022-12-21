#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, sum = 0;
    cin >> n;
    int arr[n];
    int array[n / 2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < (n - 1); i++)
    {
        sum = sum + arr[i + 1] - arr[i];
        i++;
    }
    cout << sum << endl;

    return 0;
}