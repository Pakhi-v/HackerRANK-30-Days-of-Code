#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    cout<<arr[i]<<" ";
    cout<<endl;
}