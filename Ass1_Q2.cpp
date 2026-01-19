#include<iostream>
using namespace std;

void Merge(int arr[], int lb, int mid, int ub){ 
    int i = lb;
    int j = mid + 1;
    int k = 0;
    int brr[ub - lb + 1];

    while(i <= mid && j <= ub){
        if(arr[i] < arr[j]){
            brr[k++] = arr[i++];
        }
        else{
            brr[k++] = arr[j++];
        }
    }

    while(i <= mid){
        brr[k++] = arr[i++];
    }

    while(j <= ub){
        brr[k++] = arr[j++];
    }

    for(int x = 0; x < k; x++){
        arr[lb + x] = brr[x];
    }
}

void MergeSort(int arr[], int lb, int ub){
    if(lb < ub){
        int mid = (ub + lb) / 2;
        MergeSort(arr, lb, mid);
        MergeSort(arr, mid + 1, ub);
        Merge(arr, lb, mid, ub);
    }
}

int main(){
    int n;
    cout << "Size of Array" << endl;
    cin >> n;

    int array[n];
    cout << "Input Array" << endl;
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    MergeSort(array, 0, n - 1); 

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}
