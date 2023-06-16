#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int N=1e6+2;
    int inx[N];
    int min_inx=INT16_MAX;

    for (int i = 0; i < N; i++)
    {
        inx[i]=-1;
    }

    for (int i = 0; i < n; i++)
    {
        if (inx[arr[i]]!=-1)
        {
            
            min_inx=min(inx[arr[i]],min_inx);
            
        }
        else
        {
            inx[arr[i]]=i;
        }
        
        
    }

    if (min_inx==INT16_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<min_inx<<endl;
    }
    
    
    
    
    
    return 0;
}