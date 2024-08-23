#include<bits/stdc++.h>
using namespace std;

void swapp(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}

int main(){

    vector<int>arr={29,13,14,55,86,7,8,3,96,61,34,67,43,15,51} ;
    for(int i=0;i<arr.size()-1;i++){
        int m=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[m]>arr[j]){
                int t=m;m=j;j=t;
            }
        }
        swapp(arr[i],arr[m]);
        
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}