#include <iostream>
using namespace std;


void rotate(int n, int a[],int d)
{
  for(int i=0; i<d; i++)
  {
    int temp;
    for(int j=0; j<n-1; j++)
    {
      temp =a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
  }

  for(int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  }
}

int main() {
  int n,d;
  cin>>n;
  int a[n];
  for(int i=0; i<n ;i++)
  {
    cin>>a[i];
  }
  cin>>d;
  
  rotate(n,a,d);

  return 0;
}
