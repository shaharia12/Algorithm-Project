#include <bits/stdc++.h>
using namespace std;
//for printing array
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//function for merging 
void merge(int a[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    int b[100];
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= r)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = l; i <= r; i++)
    {
        a[i] = b[i];
    }
}
//function for divide the array recursively
void mergesort(int a[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}
int main()
{
    //initialize array
    int a[]={6,5,1,3,2,4,7};
    int n=7;
    cout << "before merge sort:" << endl;
    printarray(a,n);
    cout<<endl;
    cout << "after merging sort:" << endl;
    mergesort(a, 0, 6);
    printarray(a,n);

    return 0;
}
