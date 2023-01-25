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
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //long long s=0;
        //long long accumulate_=accumulate(arr.begin(),arr.end(),s);
        //long long sum=(m*(m+1))/2;
        int frequency[m]={0};
        
        
        for(int i=0;i<n;i++){
            frequency[arr[i]-1]++;
        }
        for(int i=0;i<m;i++){
            if(frequency[i]==0){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        /*for(int i=1;i<=m;i++){
            if(find(arr.begin(),arr.end(),i)==end(arr)){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;*/
        /*if(accumulate_<=n*m && accumulate_>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        /*if(accumulate_-sum<0){
            cout<<"YES"<<endl;
        }
        else if(accumulate_-sum>=0){
            cout<<"NO"<<endl;
        }*/
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
