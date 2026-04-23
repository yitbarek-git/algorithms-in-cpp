#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of elements: " << endl;
  cin >> n;

  cout << "Enter the elements: " << endl;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
  
  cout << "Sorted array : ";
  for (int i = 0; i < n; i++)
    cout<< arr[i] << " ";

  return 0;
}
