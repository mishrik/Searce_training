/*Assignment Question 1*/

#include <iostream>

using namespace std;

int main ()
{
  int Q;
  cout << "Enter number of elements you want in the array - ";
  cin >> Q;

  int P[Q];
  int R[Q];
  for (int i = 0; i < Q; i++)	//insert elements 
    {
      cout << "Enter element " << i + 1 << " - ";
      cin >> P[i];
    }

  cout << "\n\nOriginal Array: \n";
  for (int i = 0; i < Q; i++)	//print array 
    {
      cout << P[i] << " ";
    }
    
  cout << "\n\nReversed Array: \n";
  for (int i = 0; i < Q; i++)	//print reverse array
    {
      R[i] = P[Q - i - 1];
      cout << R[i] << " ";
    }

  return 0;
}
