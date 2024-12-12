
#include <iostream>
using namespace std;
int main()
{
   int temp;
   int n=5;
   int arr[5]={1,2,3,4,5};
   for(int i=0;i<n/2;++i)
   {
   temp=arr[n-i-1];
   arr[n-i-1]=arr[i];
   arr[i]=temp;
  
   }
   for(int i=0;i<5;++i)
   {
       cout<<arr[i];
   }
}