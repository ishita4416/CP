#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h)
{
    int n1=m-l+1;
    int n2=l-m;
    int lar[n1], rar[n2];
    for(int i=0;i<n1;i++)
    lar[i]=arr[l+i];
    for(int j=0;j<n2;j++)
    rar[j]=arr[m+1+j];
    int i = 0;
    int j = 0;  
    int k = l;
    while (i<n1 && j<n2)    
    {    
        if(lar[i] <= rar[j])    
        {    
            arr[k] = lar[i];    
            i++;    
        }    
        else    
        {    
            arr[k] = rar[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        arr[k] = lar[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        arr[k] = rar[j];    
        j++;    
        k++;    
    }   
}

void mergeSort(int arr[], int l, int h)
{
    if(l<h)
    {
        int m=(l+h)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	mergeSort(arr,0,n-1);
	for(int i=0; i<n; i++)
	cout<<arr[i]<<" ";
	return 0;
}
