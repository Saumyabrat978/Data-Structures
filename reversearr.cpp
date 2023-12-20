<<<<<<< HEAD
void reverseArray(vector<int> &arr , int m){
    // Write your code here    
    int s=m+1;
    int e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }   	
=======
void reverseArray(vector<int> &arr , int m){
    // Write your code here    
    int s=m+1;
    int e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }   	
>>>>>>> 50ef977783f2780ad0c330667fed2d4d9555da08
}