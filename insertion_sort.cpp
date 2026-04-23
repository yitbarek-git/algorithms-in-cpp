#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
  // insertion sort
  for (int i = 1; i < n; i++)
  {
    int key = arr[i];//
    int j = i - 1;
    while( j >=0 && arr[j] > key){
      arr[j+1] =arr[j];
      j--;
    }
    arr[j+1] = key;
  }
}

int main()
{
  cout << "Enter the number of elements: " << endl;
  int n;
  cin >> n;

  cout << "Enter the unsorted array: " << endl;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  insertionSort(arr, n);
  cout << "Sorted array with insertion sort 👇" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}