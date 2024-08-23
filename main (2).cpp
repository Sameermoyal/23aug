//selection sork

#include<bits/stdc++.h>
using namespace std;


void swapp(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}

int main(){

    vector<int>arr={29,13,14,55,86,7,8,3,96,61,34,67,43,15,51} ;
    int sma_ind=-1,sma_val=0;
    for(int i=0;i<arr.size();i++){
        int m=i;
        for(int j=i+1;j<arr.size()-1;j++){
            if(arr[m]>arr[j]){
                int t=m;m=j;j=t;
                if(arr[m]<)
            }
        }
        swapp(arr[i],arr[m]);
        
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}