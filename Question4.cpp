// WAP to swap the max and min number of array
#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
  int temp = a;
  a = b; 
  b = temp;
}

void swap_MAX_MIN(int arr[], int sz){
  int maxIndex = 0; 
  int minIndex = 0;

  for (int i = 1; i < sz; i++)
  {
    if (arr[i] > arr[maxIndex])
    {
      maxIndex = i;
    }
    else if (arr[i] < arr[minIndex])
    {
      minIndex = i;
    }
  }
   swap(arr[maxIndex], arr[minIndex]);
}

int main(){
  int arr[] = {4, 2, 7, 8, 1, 5, 9};
  int sz = 7;

  swap_MAX_MIN(arr, sz);

    cout << "Array after swapping max number and min number: ";
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}