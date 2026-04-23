#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIndex])
        minIndex = j;
    }
    swap(arr[i], arr[minIndex]);
  }
}

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main()
{
  cout << "Enter the number of elements: " << endl;
  int n;
  cin >> n;

  int arr[n];
  cout << "Enter the elements: " << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  selectionSort(arr, n);
  cout << "Sorted array with selection sort";
  printArr(arr, n);
  return 0;
}
