/*
Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and 
places that element at the beginning of the unsorted list.

Time Complexity	 
Best	O(n2)
Worst	O(n2)
Average	O(n2)
Space Complexity	O(1)
Stability	No
*/
#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(vector<int>&arr)
{
    for(int i=0;i<9;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<10;j++)
        {
            if(arr[j]<arr[min_idx])
            min_idx=j;
        }
        swap(arr[i],arr[min_idx]);
    }
}

int main()
{
    vector<int> arr={10,9,7,3,5,6,8,1,2,4};
    Selection_Sort(arr);
    for(auto x:arr)
    cout<<x<<" ";
}