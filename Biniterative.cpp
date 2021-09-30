#include<bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int l, int r, int x){
    while(l<=r){
        int m = l+(r-l)/2;
        if(arr[m]==x){
            return m;
        }
        if(arr[m]<x){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return -1;
}
int main(){
    int arr[]= {11,12,13,14,15,16,17,18,19};
    int wanttofind = 19;
    int index = binSearch(arr, 0, 9, wanttofind);
    cout<<"Element "<< wanttofind<<" found at "<< "arr["<<index<<"]" <<endl;
}