#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

void io_file() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
}
bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

void code_here(){
        ll s,time_=0;
        cin>>s;
        ll intro[s];
        for(ll i=0;i<s;i++){
            cin>>intro[i];
        }
        for(ll i=0;i<s;i++){
            ll episode;
            cin>>episode;
            for(ll j=0;j<episode;j++){
                ll e;
                cin>>e;
                if(j==0){
                    time_+=e;
                }
                else{
                    time_+=e-intro[i];
                }
            }
        }
        
        cout<<time_<<endl;
        
        
    }



int main() {
	// your code goes here
	io_file();
	ll t;cin>>t;
    while (t--){
        code_here();
    }
	return 0;
}
