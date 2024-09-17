// WAF to calculate the sum and product of all the numbers in an array.
#include<bits/stdc++.h>
using namespace std;

void calculateSum_and_Product(int arr[], int sz){
  int sum=0, product=1;
  
  for (int i = 0; i <= sz; i++)
  {
    sum = sum + arr[i];
    product = product * arr[i];
  }

  cout << "Sum: " << sum << endl;
  cout << "Product: " << product << endl;  
}

int main(){
    int arr[] = {1, 2, 3, 4 ,5};
    int sz = 4;

    calculateSum_and_Product(arr, sz);
    return 0;
}