<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int firstocc(vector<int>& arr,int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;

        }
        else{
                  //key<arr[mid]
            e=mid-1;      
        
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(vector<int>& arr,int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            //key<arr[mid]
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
   return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int firstocc(vector<int>& arr,int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;

        }
        else{
                  //key<arr[mid]
            e=mid-1;      
        
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(vector<int>& arr,int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            //key<arr[mid]
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
   return 0;
>>>>>>> 3ef28e0fd8ffdb15a5711d8314b4e3a4a220b25d
}