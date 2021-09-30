#include<bits/stdc++.h>
using namespace std;
int binRecursive(int arr[], int l, int r, int x){
    if(r>=1){
        int mid = l+(r-l)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return binRecursive(arr, l, mid-1, x);
        }else{
            return binRecursive(arr, mid+1, r, x);
        }
    }
    return -1;
}
int main(){
    int arr[]= {11,12,13,14,15,16,17,18,19};
    int wanttofind = 17;
    int index = binRecursive(arr, 0, 9, wanttofind);
    cout<<"Element "<< wanttofind<<" found at "<< "arr["<<index<<"]" <<endl;
    return 0;
}