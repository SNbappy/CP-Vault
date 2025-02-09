/*

بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

Author: Depressed_C0der
Created: 2023-12-28 22:31:09

E-mail: bappy.just@gmail.com

*/

#include <bits/stdc++.h>
using namespace std;

#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define ll long long

void solve()
{

    string s1,s2,s3;
    cin >> s1>>s2>>s3;
    int cnt = 0, k=5,p=5,m=5;
    int A = 0, B = 0, C = 0;
    for (int i = 0; i < 3; i++)
    {
        if(s1[i]=='A')
            A++;
        else if (s1[i] == 'B')
            B++;
        else if(s1[i]=='C')
            C++;
        if (s2[i] == 'A')
            A++;
        else if (s2[i] == 'B')
            B++;
        else if (s2[i] == 'C')
            C++;
        if (s3[i] == 'A')
            A++;
        else if (s3[i] == 'B')
            B++;
        else if (s3[i] == 'C')
            C++;
    }
    if(A==2)
        cout << "A" << el;
    else if(B==2)
        cout << "B" << el;
        else
            cout << "C" << el;
}

int main()
{\

    tst
    solve();
    return 0;
}