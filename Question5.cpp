// a, b, c, d, e, f, h, i, jWhat is the missing number in the sequence?  
#include<bits/stdc++.h>
using namespace std;

char findMissingLetter(char arr[], int n){
     char expectedLetter = 'a';
    for (int i = 0; i < n; i++) {
        if (arr[i] != expectedLetter) {
            return expectedLetter;
        }
        expectedLetter++;
    }
    return ' '; 
}

int main(){
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'h', 'i', 'j'};
    int n = sizeof(arr) / sizeof(arr[0]);
    char missingLetter = findMissingLetter(arr, n);
    cout << "The missing letter is: " << missingLetter;
    return 0;
}