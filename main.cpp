#include <iostream>

using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if(arr[i]==x)
        return i;
    return -1;
}

int main(void)
{
    int arr[]={20,45,98,80,40};
    int x = 40;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = search(arr,n,x);
    (result == -1)?cout<<"Item is not present in array"
    :cout<<"Item is present at position "
    <<result;
    return 0;
}
