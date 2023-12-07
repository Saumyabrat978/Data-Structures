<<<<<<< HEAD
#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[4]={-1,-2,4,6};
    reverse(arr,5);
    reverse(brr,4);
    print(arr,5);
    print(brr,4);
   return 0;
=======
#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[4]={-1,-2,4,6};
    reverse(arr,5);
    reverse(brr,4);
    print(arr,5);
    print(brr,4);
   return 0;
>>>>>>> 68aa01fdab9fee11a5c904df6524373b3a0d04a6
}