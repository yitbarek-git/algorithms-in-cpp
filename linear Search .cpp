/*Algorithm (Step-by-Step)
Start from the first element (i = 0).
Compare the element at index i with the target value.
If it matches, return the index (or success).
If it doesn’t, move to the next element (i++).
Repeat until the end of the array.
If no match is found, return -1 (or indicate failure)*/

// implementation
#include <iostream>
using namespace std;

int linearSearch(int arr[], int key, int n){
  for(int i = 0; i<n; i++){
    if(arr[i] == key)
    return i;
  }
  return -1;
}

int main(){
  
  int n, arr[n], key;

  cout << "Enter the size an array: "<<endl;
  cin >> key;

  cout << "Enter  array elements: "<<endl;
  for (int i = 0; i<n; i++)
  cin>>arr[i];

  cout<<" Enter the Element to be searched"<<endl;
  

  int result = linearSearch(arr, n, key);
  if (result != -1)
      cout << "Element found at index: " << result << endl;
  else
      cout << "Element not found." << endl;

  return 0;
}