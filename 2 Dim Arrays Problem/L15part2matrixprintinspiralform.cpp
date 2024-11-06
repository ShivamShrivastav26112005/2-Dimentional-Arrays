
// Important spiral form 
// WAP to print the matrix in spiral form.

//output - 1st - 3*3

// Enter the rows of matrix
// 3
// Enter the columns of matrix
// 3
// Enter the elements of matrix
// 1 2 3 4 5 6 7 8 9 
// Display the elements of matrix
// 1 2 3
// 4 5 6
// 7 8 9
// Display the spiral form of the above given matrix
// 1 2 3 6 9 8 7 4 5



//output - 2nd - 3*4
// Enter the rows of matrix
//  3
// Enter the columns of matrix
// 4
// Enter the elements of matrix
// 1 2 3 4 5 6  7 8 9 10 11 12 13 14 15 16
// Display the elements of matrix
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Display the spiral form of the above given matrix
// 1 2 3 4 8 12 11 10 9 5 6 7 


#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the rows of matrix" << endl;
    cin >> m;
    int n;
    cout << "Enter the columns of matrix" << endl;
    cin >> n;

    int arr[m][n];
    cout << "Enter the elements of matrix " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for(int j = 0; j <= n - 1;j++)

        {
            cin >> arr[i][j];
        }
    }
    cout<<"Display the elements of matrix"<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0 ; j<=n-1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    
    cout<<endl;
    }
  cout<<"Display the spiral form of the above given matrix"<<endl;
    // main spiral code
    int minr=0, minc=0;
    int maxr=m-1, maxc=n-1;
    while (minr<=maxr && minc<=maxc)
    {
       // right 
       for(int j=minc; j<=maxc; j++){
       cout<<arr[minr][j]<<" ";
    }
    minr++;
  
     if(minr>maxr || minc>maxc)    break;

       // down
       for(int i=minr; i<=maxr; i++){
       cout<<arr[i][maxc]<<" ";
    }
    maxc--;

       if(minr>maxr || minc>maxc)    break;

       // left 
       for(int j=maxc; j>=minc; j--){
       cout<<arr[maxr][j]<<" ";
    }

      if(minr>maxr || minc>maxc)    break;

    maxr--;
    {
        //top
     for(int i=maxr; i>=minr; i--){
       cout<<arr[i][minc]<<" ";
    }
    minc++;

}}
}