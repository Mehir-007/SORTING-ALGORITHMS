/*
Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order.
Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. 
Therefore, it is called a bubble sort.

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
  
}

int main()
{
    vector<int> arr={10,9,7,3,5,6,8,1,2,4};
    Incertion_Sort(arr);
    for(auto x:arr)
    cout<<x<<" ";
}