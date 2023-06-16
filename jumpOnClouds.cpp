#include<bits/stdc++.h>
using namespace std;


int jumpingOnClouds(vector<int> c) {
    int jumps=0;
    for(int i=0;i<c.size()-1;){
        if(i!=c.size()-2 && c[i+2]==0){
            i=i+2;
        }
        else{
            i++;
        }
        jumps++;
    }
    return jumps;
}

int main(){

    vector<int> x={0,0,1,0,0,1,0};
    cout<<jumpingOnClouds(x)<<endl;
    return 0;
}