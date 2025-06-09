#include<bits/stdc++.h>
using namespace std;
int subarray(vector<int>&arr,int target){
    int count=0,prefixsum=0;
    unordered_map<int,int>sumfreq;sumfreq[0]=1;
    for(int num:arr){
        prefixsum+=num;
        if(sumfreq.find(prefixsum-target)!=sumfreq.end()){
            count+=sumfreq[prefixsum-target];
        }
        sumfreq[prefixsum]++;
    }
    return count;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int target=9;
    cout<<subarray(arr,target);
    return 0;
}