#include <iostream>
#include <conio.h>
using namespace std;
void MinHeap(int *i, int p, int q)
{
   int a, y;
   y= i[p];
   a = 2 * p;
   while (a <= q) 
   {
      if (a < q && i[a+1] < i[a])
         a = a + 1;
      if (y < i[a])
         break;
      else if (y >= i[a]) 
	  {
         i[a/2] = i[a];
         a = 2 * a;
      }
   }
   i[a/2] = y;
   return;
}
void createHeap(int *i, int q) 
{
   int x;
   for(x = q/2; x >= 1; x--) 
   {
      MinHeap(i, x, q);
   }
}
int main() 
{
   int q, n;
   cout<<"Enter Number of Elements in array: \n";
   cin>>q;
   
   int i[10];
   for (n = 1; n <= q; n++) 
   {
      cout<<"Enter element"<<" "<<(n)<<endl;
      cin>>i[n];
   }
   createHeap(i, q);
   cout<<"Min-heap\n";
   for (n = 1; n <= q; n++) 
   {
      cout<<i[n]<<endl;
   }
}
