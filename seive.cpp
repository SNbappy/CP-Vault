#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
vector<bool> isPrime(N, true);

int main(){

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if(isPrime[i]){
            for (int j = i*i; j <= N; j+=i)
            {
                /* code */
                isPrime[j] = false;
            }
            
        }
    }
    

    return 0;
}