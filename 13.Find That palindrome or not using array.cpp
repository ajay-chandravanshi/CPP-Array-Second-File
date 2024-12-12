
#include <iostream>
using namespace std;
int main()
{
   int n=5;
   int arr[]={1,2,1,2,1};
   for(int i=0;i<n/2;++i)
   {
      if(arr[i]!=arr[n-i-1])
      {
          cout<<"Not Pallindrome";
          return 0;
       }
}
cout<<"Pallindrome";
}