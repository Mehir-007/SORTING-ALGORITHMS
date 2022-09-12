/*
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.
Insertion sort works similarly as we sort cards in our hand in a card game.

We assume that the first card is already sorted then, we select an unsorted card. 
If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, 
other unsorted cards are taken and put in their right place.
A similar approach is used by insertion sort.

Insertion Sort Complexity
Time Complexity	 
Best	O(n)
Worst	O(n2)
Average	O(n2)
Space Complexity	O(1)
Stability	Yes
*/
#include<bits/stdc++.h>
using namespace std;
void Incertion_Sort(vector<int>&arr)
{
  for(int i=1;i<10;i++)
  {
    int key=arr[i];int j=i-1;
    while(j>=0 && key<arr[j])
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
  }
}

int main()
{
    vector<int> arr={10,9,7,3,5,6,8,1,2,4};
    Incertion_Sort(arr);
    for(auto x:arr)
    cout<<x<<" ";
}