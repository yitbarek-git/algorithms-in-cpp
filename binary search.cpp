#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
  int found = 0;
  int index = 0;
  int middle;
  int bottom = 0, top = n - 1;

  do
  {
    middle = (top + bottom) / 2;

    if (key == arr[middle])
      found = 1;
    else {
      if (key < arr[middle])
      top = middle - 1;
    else
      bottom = middle + 1;
    }  
  } while (found == 0 && top >= bottom);

  if (found == 0)
    index = -1;
  else
    index = middle;

  return index;
}

int main()
{
  int n, key;
  int arr[20];

  cout << "Enter the size of the array" << endl;
  cin >> n;

  cout << "Enter sorted array" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Enter an element to be searched" << endl;
  cin >> key;

  int result = binarySearch(arr, n, key);

  if (result == -1)
    cout << "Element NOT found!" << endl;
  else
    cout << "Element found at index " << result;

  return 0;
}