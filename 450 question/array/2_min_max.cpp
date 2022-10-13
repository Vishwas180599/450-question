//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

long long getMin(long long a[],int n){
    long long  mini= INT_MAX;
    for(int i=0;i<n;i++)
        mini=min(mini,a[i]);

    return mini;
}
long long getMax(long long a[],int n){
    long long  maxi= INT_MIN;
    for(int i=0;i<n;i++)
        maxi=max(maxi,a[i]);

    return maxi;
    
}
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long,long>p;
    p.first = getMin(a,n);
    p.second = getMax(a,n);
    
    return p;
}