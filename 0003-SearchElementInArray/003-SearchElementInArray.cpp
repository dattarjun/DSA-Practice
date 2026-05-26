#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {50,46,95,21,66};
    int target = 21;
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == target)
        {            index = i;
            break;
        }
    }    if(index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }    else
    {        cout << "Element not found in the array." << endl;
    }
    return 0;
}