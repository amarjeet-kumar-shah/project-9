#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter number :"<<" "; 
   cin>>n;

   int i = 0; ;
   int sum = 0;
   while(i<=n){
    sum = sum + i ;
    i = i+1;

   }
   cout<<"Sum of n numbers is : "<< sum;
}