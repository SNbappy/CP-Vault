#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;
bool mark[N];

int main(){
    for (int i = 2; i * i < N; i++)
    {
        if (!mark[i])
        {
            for (int j = i * i; j < N; j += i)
                mark[j] = true;
        }
    }

    int prev = 3;

    cout << "Hello" << endl;

    int mx = 0;
    for (int i = 3; i < N; i++)
    {
        if (!mark[i])
        {
            mx = max(mx, i - prev);
            prev = i;
        }
    }

    cout << mx << endl;
}