THIS IS QUESTION 2

#include <iostream>
using namespace std;

int main() {
  int n;
  int avg=0;
  cout<<"Enter the number of elements you want to enter in the array:";
  cin>>n;
  int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
     }
  for(int i=0;i<n;i++){
      avg=avg+arr[i];
    }
  cout<<"The average of the array is "<<avg/n;
  return 0;
}
