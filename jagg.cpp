<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    row=3;
    int** arr=new int*[row];
    int sizes[]={4,2,3};
    for (int i = 0; i < row; i++)
    {
        *(arr+i)=new int[sizes[i]];
    }
     int num = 1; 
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < sizes[i]; j++) { 
            // cin>>arr[i][j];    //if user want to input 
            arr[i][j] = num++; 
        } 
    } 
  
    cout << "elements in matrix form as follow" << endl; 
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < sizes[i]; j++) { 
            cout << arr[i][j] << " "; 
        } 
        cout << endl; 
    } 
  
    return 0; 
=======
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    row=3;
    int** arr=new int*[row];
    int sizes[]={4,2,3};
    for (int i = 0; i < row; i++)
    {
        *(arr+i)=new int[sizes[i]];
    }
     int num = 1; 
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < sizes[i]; j++) { 
            // cin>>arr[i][j];    //if user want to input 
            arr[i][j] = num++; 
        } 
    } 
  
    cout << "elements in matrix form as follow" << endl; 
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < sizes[i]; j++) { 
            cout << arr[i][j] << " "; 
        } 
        cout << endl; 
    } 
  
    return 0; 
>>>>>>> 910b4b5bd767c05d4ab0dfbc9920d5efb3421c48
}