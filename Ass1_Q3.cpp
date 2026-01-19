#include<iostream>
using namespace std;

int Partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void QuickSort(int arr[],int low, int high){
    if(low<high){
        int p=Partition(arr,low,high);
        QuickSort(arr,low,p-1);
        QuickSort(arr,p+1,high);
    }
}
int main(){
    int n;
    cout<<"Size of Array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Input Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    QuickSort(array,0,n);
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}