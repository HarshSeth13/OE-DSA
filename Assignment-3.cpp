//HARSH SETH
//ECE-2nd YEAR
//21105103

/*QUESTION:How would you search for an element in an array/list whose size is unknown
*/

/*the solution to this problem requires binary search but with some modifications*/
#include <bits/stdc++.h>
using namespace std;
int binary(int arr[],int x,int low,int high){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        return binary(arr,x,low,mid-1);
        else
        return binary(arr,x,mid+1,high);
    }
    return -1;
}

int unknown(int arr[],int x){
    int low=0;
    int high=1;
    while(arr[high]<x){
        low=high;
        high=2*high;
    }
    return binary(arr,x,low,high);
}
int main(){
    int arr[]={1,10,15,20,40,60,80,100,200,500};
    int arr2[1000];
    for(int i=0;i<10;i++){
        arr2[i]=arr[i];
    }
    int x=15;
    cout<<"The index of the element to be searched is :"<<unknown(arr2,x);
}