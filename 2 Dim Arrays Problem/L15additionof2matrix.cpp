
/*
//question.1
// WAP to print the addtion of two matrices given by the user.
#include <iostream>
using namespace std;
int main()

{
    // matrix size m*m
    int m;
    cout<<"Enter the no. of rows"<<endl;
    cin>>m;
    // int n;
    // cout<<"Enter the no. of columns"<<endl;
    // cin>>n;
    // matrix-name-arr
    int arr1[m][m];
    // print the matrix by user
    cout<<"Enter the array1 elements"<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cin>>arr1[i][j];
        }
    }
    
    int arr2[m][m];
    // display matrix entered by the user
    cout<<"Display the matrix"<<endl;
    for( int i=0; i<=m-1 ; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the array2 elements "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cin>>arr2[i][j];
        }
    }
    

    cout<<"Display the matrix "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr3[m][m];

    cout<<"Display addition of the two matrix "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            //cout<<arr1[i][j]+arr2[i][j]<<" ";
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}
// this program is Done and Run.

*/

