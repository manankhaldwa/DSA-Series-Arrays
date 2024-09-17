// Question 1 = Find the smallest and largest number in array
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int nums[] = {5, 16, 12, -10, -15};
    int size = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);  
    }
     
    cout << "Smallest is : " << smallest << endl;
    cout << "Largest is : " << largest << endl;
    
    return 0;
}