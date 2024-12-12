
#include <iostream>
using namespace std;
int main()
{
   int largest=0;
   int slargest;
   int arr[]={1,2,3,4,5};
   for(int i=0;i<5;++i)
   {
    if(arr[i]>largest)
      {
        largest=arr[i];
        
      }
   }
   for(int i=0;i<5;++i)
   {
    if(arr[i]>slargest && arr[i]!=largest)
      {
        slargest=arr[i];
        
      }
   }
  cout<<slargest;

}