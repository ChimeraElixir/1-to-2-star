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
    ll t;cin>>t;
    while (t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        loop{
            cin>>a[i];
        }
        int full_sum=0;
        
        if(accumulate(a,a+n,full_sum)==n){
            cout<<100<<endl;
            continue;
        }
        int half_sum=0;
        
        if(accumulate(a,a+m,half_sum)==m){
            cout<<k<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
}


int main() {
	// your code goes here
	io_file();
	code_here();
	
	return 0;
}
