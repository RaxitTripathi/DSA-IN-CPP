
#include<iostream>
#include<vector>
using namespace std;

void printA(vector<int> arr){
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
}

void merge(vector<int> &a, vector<int> &b, vector<int> &c){

    int i=0, j=0, k=0;

    while(i<a.size() && j<b.size()){

        if(a[i] < b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }

    while(i<a.size()){
        c[k++] = a[i++];
    }

    while(j<b.size()){
        c[k++] = b[j++];
    }
}

void mergeSort(vector<int> &arr){

    int n = arr.size();

    // Base condition
    if(n <= 1){
        return;
    }

    // Divide
    vector<int> a(n/2);
    vector<int> b(n-n/2);

    int j=0;

    for(int i=0; i<n/2; i++){
        a[i] = arr[i];
    }

    for(int i=n/2; i<n; i++){
        b[j++] = arr[i];
    }

    // Recursively sort
    mergeSort(a);
    mergeSort(b);

    // Merge
    merge(a, b, arr);
}

int main(){

    int n;

    vector<int> arr;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter elements of array: ";

    for(int i=0; i<n; i++){
        int user;
        cin >> user;
        arr.push_back(user);
    }

    cout << "Before sorting: ";
    printA(arr);

    mergeSort(arr);

    cout << "After sorting: ";
    printA(arr);

    return 0;
}
