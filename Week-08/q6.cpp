#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // 4
    while (n--)
    {
        int age;
        cin >> age;
        if (age < 18)
            cout << "coto coto bascha" << endl;
        else if (age >= 18 && age < 30)
            cout << "coto bascha" << endl;
        else if (age >= 30 && age < 50)
            cout << "mejo bascha" << endl;
        else if (age >= 50 && age < 70)
            cout << "Halka boro bascha" << endl;
        else
            cout << "boro bascha" << endl;
    }

    return 0;
}