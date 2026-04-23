#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of elements: " << endl;
  cin >> n;

  int arr[20];
  cout << "Enter the elements: " << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n-1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
        swap(arr[i], arr[j]);
    }
  }

  cout << "Sorted array 👇" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  return 0;
}
