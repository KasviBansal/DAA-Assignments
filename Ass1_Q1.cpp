#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; 
}

int main(){
    int n;
    cout<<"Size of Array"<<endl;
    cin>>n;
    vector<int> array(n);
    cout<<"Input Sorted Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int t;
    cout<<"Give Target number"<<endl;
    cin>>t;
    cout<<"Position of target element is "<<search(array,t)+1<<endl;
    return 0;
}