/*

//introduction
#include<iostream>
using namespace std;
int main()
{
   //ex- we take any variable
   int x;  //(uninitializated)
   cout<<x<<endl;  //R-4201083 garbage value

    int arr[3][3]; // decalartion   // 2-D array or matrix or grid
    // rows ->3  0-2(index)
    //column->3  0-2

    cout<<arr[0][0]<<endl;  // 6422476 - garbage value

   // initialization -first method -
   // it is very lendy and slow process,time consuming
    arr[0][1]=8;
    arr[3][1]=3;
    arr[3][0]=7;
    arr[2][2]=4;


    cout<<arr[0][1]<<endl; // R-8
    cout<<arr[3][1]<<endl; // R-3
    cout<<arr[3][0]<<endl;
    cout<<arr[2][2]<<endl;
}



#include<iostream>
using namespace std;
int main()
{
    //2-methods initialization
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};// initialize methods easy
    cout<<arr[0][0]<<endl; //R-1 print

    //suppose we print 4th elements
    //int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
            //{1,2,3}=(0,0)(0,1)(0,2) -> index
     //{1,2,3} 0th row - 1st ele-1, 2nd ele-2, 3rd ele-3
     //{4,5,6} 1st row - 1st ele-4, 2nd ele-5, 3rd ele-6
    cout<<arr[1][0]<<endl; //r-4


}




#include<iostream>
using namespace std;
int main()
{
    //3-methods initialization
    int arr[3][3]={1,2,3,4,5,6,7,8,9};// initialize methods easy
    cout<<arr[0][2]<<endl; //R-3 print
}



#include<iostream>
using namespace std;
int main()
{
    //3-methods initialization
   // int arr[3][3]={1,2,3,4,5,6,7,8,9};// initialize methods easy
    //  int arr[][3]={1,2,3,4,5,6,7,8,9}; //right
    int arr[3][]={1,2,3,4,5,6,7,8,9};//error
    cout<<arr[0][2]<<endl; //R-3 print
}




#include<iostream>
using namespace std;
int main()
{
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  //print 1 2 3 use- for loop
  for(int i=0; i<=2; i++)
  {
    cout<<arr[0][i]<<" ";
  }
}


*
// print  1 2 3
    //    4 5 6
// 1st methods
#include<iostream>
using namespace std;
int main()
{
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  //print 1 2 3 use- for loop
  for(int i=0; i<=2; i++)
  {
    cout<<arr[0][i]<<" "; // row no 0 and col. no change
  }
  cout<<endl;
   for(int i=0; i<=2; i++)
  {
    cout<<arr[1][i]<<" "; // row no 1 and col. no change
  }
  cout<<endl;
   for(int i=0; i<=2; i++)
  {
    cout<<arr[2][i]<<" ";
  }
  cout<<endl;
}

// traverse in 2-D array -> print all values


// 2nd methods loops inside another loop
#include<iostream>
using namespace std;
int main()
{
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  for(int i=0; i<=2; i++)  // i is the row no.s/ i is row
  {
    for(int j=0; j<=2; j++){  // j is column
    cout<<arr[i][j]<<" ";
  }
 cout<<endl;
}
}


// input/output in 2D arrays ->uers input

#include<iostream>
using namespace std;
int main()
{ // m denotes rows and n denotes columns.
   int m;  // m is row
   cout<<"Enter the number of rows";
   cin>>m;
   int n; // n is column
   cout<<"Enter the number of columns";
   cin>>n;
   int arr[m][n];
   cout<<"Enter the arrays elements"<<endl;
   // i -> row no. index, j-> column no. index and index always starts from zero(0)
   // input
  for(int i=0; i<=m-1; i++)// outer loop for rows// Inside for loop i variable is rows.
  {
    for(int j=0; j<=n-1; j++){  // j is columns.
    cin>>arr[i][j];
  }
  }
  cout<<"Display the array elements"<<endl;
  //output
  for(int i=0; i<=m-1; i++)
  {
    for(int j=0; j<=n-1; j++){
    cout<<arr[i][j]<<" ";
  }
 cout<<endl;
}
}





// question-> Write a program to store roll no and marks obtained by
// 4 students side by side in a matrix.
//output
// 1 2 3 4
// 45 65 45 65
// 1 2 3 4
// 45 65 45 65
// roll no, marks
//4 students


#include <iostream>
using namespace std;
int main()
{
  int arr[2][4]; // size, index=size-1. size=2,index=1

  for (int i = 0; i <= 1; i++)
  {
    for (int j = 0; j <= 3; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i <= 1; i++)
  {
    for (int j = 0; j <= 3; j++)
    {

      cout << arr[i][j] << " ";
    }

  cout << endl;
}
}



// Write a C++ program to find the
// largest elements of a given 2D array of integers.

#include <iostream>
#include<climits>
using namespace std;
int main()
{
  int m;
  cout << "Enter the number of rows";
  cin >> m;
  int n;
  cout << "Enter the number of columns";
  cin >> n;
  int arr[m][n];

  for (int i = 0; i <= m - 1; i++)
    for (int j = 0; j <= n - 1; j++)
    {
      cin >> arr[i][j];
    }

  // max
  int max = INT_MIN;
  for (int i = 0; i <= m - 1; i++)
    for (int j = 0; j <= n - 1; j++)
    {
      if (max < arr[i][j])
        max = arr[i][j];
    }

cout << max;
}
// output
// Enter the number of rows2
// Enter the number of columns2
// 5 6
// 5 8
// 8



// Write a C++ program to find the
// smallest elements of a given 2D array of integers.

#include <iostream>
#include<climits>
using namespace std;
int main()
{
  int m;
  cout << "Enter the number of rows";
  cin >> m;
  int n;
  cout << "Enter the number of columns";
  cin >> n;
  int arr[m][n];

  for (int i = 0; i <= m - 1; i++)
    for (int j = 0; j <= n - 1; j++)
    {
      cin >> arr[i][j];
    }

  // max
  int min = INT_MAX;
  for (int i = 0; i <= m - 1; i++)
    for (int j = 0; j <= n - 1; j++)
    {
      if (min> arr[i][j])
        min = arr[i][j];
    }

cout << min;
}






// Write a program to print sum of all the elements of a 2D matrix.



// this sum program is right

#include <iostream>
#include<climits>
using namespace std;
int main()
{
  int m;
  cout << "Enter no. of rows ";
  cin >> m;
  int n;
  cout << "Enter no. of columns ";
  cin >> n;
  int arr[m][n];
    for (int i = 0; i <= m - 1; i++)
    for (int j = 0; j <= n - 1; j++)
    {
      cin >> arr[i][j];
    }

  int sum = 0;
  for (int i = 0; i <= m - 1; i++)
    for (int j = 0; j <= n - 1; j++)
    {
      sum += arr[i][j];
    }
  cout << sum;
}





// this sum program is true
// #include <iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//   int m;
//   cout << "Enter the number of rows";
//   cin >> m;
//   int n;
//   cout << "Enter the number of columns";
//   cin >> n;
//   int arr[m][n];

  // for (int i = 0; i <= m - 1; i++)
  //   for (int j = 0; j <= n - 1; j++)
  //   {
  //     cin >> arr[i][j];
  //   }

// // sum
// int sum=0;
// // every elemnet ko travel karo and sum me add karo
//   for (int i = 0; i <= m - 1; i++)
//     for (int j = 0; j <= n - 1; j++)
//     {
// sum+=arr[i][j];
//     }
// cout << sum;
// }

//output
// Enter the number of rows3
// Enter the number of columns3
// 1 2 3
// 4 5 6
// 6 3 5
// 35



// Write a program to add two matrices.

// make a martix m*n and take input from the user and output
// and print sum of the elements of that matrix
//1st methods

#include <iostream>
using namespace std;
int main()
{
  // int arr1[3][3]={1,2,3,4,5,6,7,8,9};
  // int arr2[3][3]={1,2,3,4,5,6,7,8,9};
  // int sum=0;
  // sum=arr1[3][3]+arr2[3][3];
  // cout<<sum;

  // sum = arr1+arr2
  // arr1-input
  int m;
  cout << "Enter no. of rows" << endl;
  cin >> m;
  int n;
  cout << "Enter no. of columns" << endl;
  cin >> n;
  int arr1[m][n];
  int arr2[m][n];
  int arr3[m][n];
  cout << "Enter array1 elements" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= n - 1; j++)
    {
      cin >> arr1[i][j];
    }
  }
  cout << "Display array1" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= n - 1; j++)
    {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Enter array2 elements" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= n - 1; j++)
    {
      cin >> arr2[i][j];
    }
  }
  cout << "Display array2" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= n - 1; j++)
    {
      cout << arr2[i][j] << " ";
    }
    cout << endl;
  }
  int add = 0;
  cout << "Display sum of array1 and array2" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= n - 1; j++)
    {
      add = arr1[i][j] + arr2[i][j];

      cout << add << " ";
    }

    cout << endl;
  }
}




//2nd methods
#include<iostream>
using namespace std;
 int main()
 {
  int a[2][3]={{1,2,3},{4,5,6}};// first array
  int b[2][3]={{7,8,9},{10,11,12}}; // second array
  int res[2][3]; // 2 rows and 3 columns //new array
  // addtion of two matrix
  for(int i=0; i<2;i++)
  {
    for(int j=0; j<3; j++)
    {
      res[i][j]=a[i][j]+b[i][j]; // i row and j column
    }
  }
  // print the resultant matrix
    for(int i=0; i<2;i++)
  {
    for(int j=0; j<3; j++)
    {
     cout<< res[i][j]<<" ";
    }

  cout<<endl;
  }
 }



// Write a program to add two matrices,
// withour using third variable only add and print
// not take extra array,space only print the elements of array

#include<iostream>
using namespace std;
 int main()
 {
  int a[2][3]={{1,2,3},{4,5,6}};// first array
  int b[2][3]={{7,8,9},{10,11,12}}; // second array

  // print the resultant matrix
    for(int i=0; i<2;i++)
  {
    for(int j=0; j<3; j++)
    {
     cout<<a[i][j]+b[i][j]<<" ";
    }

  cout<<endl;
  }
 }



// 3rd question
// sum of the two matrix is stored in one of them matrix
// a+b -> add -> addition store -> In a or b
// here a means a[i][j] and b -> b[i][j].
// ques-> dono ka sum ek martrix me store karna h

// this code is right
#include<iostream>
using namespace std;
 int main()
 {
  int a[2][3]={{1,2,3},{4,5,6}};// first array
  int b[2][3]={{7,8,9},{10,11,12}}; // second array

  // print the resultant matrix
    for(int i=0; i<2;i++)
  {
    for(int j=0; j<3; j++)
    {
      b[i][j]=b[i][j]+a[i][j];
      cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }
 }






// also write this
// in details
#include<iostream>
using namespace std;
 int main()
 {
  int a[2][3]={{1,2,3},{4,5,6}};// first array
  int b[2][3]={{7,8,9},{10,11,12}}; // second array

   //a matrix - print
    cout<<"a martrix print"<<endl;
  for(int i=0; i<2;i++)
  {
    for(int j=0; j<3; j++)
    {
     cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  // b martix - print
   cout<<"b martrix print"<<endl;
      for(int i=0; i<2;i++)
  {
    for(int j=0; j<3; j++)
    {
     cout<< b[i][j]<<" ";
    }

    cout<<endl;
  }

  // b ke ander a add krna h
    for(int i=0; i<2;i++)
  {
    for(int j=0; j<3; j++)
    {
      b[i][j]+=a[i][j];
    }
    cout<<endl;
  }
 // print b martix after addion
 cout<<"Again / after addition b is print "<<endl;
     for(int i=0; i<2;i++)
  {
    for(int j=0; j<3; j++)
    {
     cout<< b[i][j]<<" ";
    }

    cout<<endl;
  }
 }






// WAP to print the transpose of the matrix entered by the
//  user and store it in a (new matrix) .
#include <iostream>
using namespace std;
int main()
{

  int m;
  cout << "Enter no. of rows" << endl;
  cin >> m;
  int n;
  cout << "Enter no. of columns" << endl;
  cin >> n;
  int arr1[m][n];

  cout << "Enter array1 elements" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= n - 1; j++)
    {
      cin >> arr1[i][j];
    }
  }

  cout << "Display array1" << endl;
  for (int i = 0; i <= m - 1; i++)
  {
    for (int j = 0; j <= n - 1; j++)
    {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }



  
/*

  // printing transpose (column wise printing)
  // cout << "Display the transpose array1/matrix" << endl;
  // for (int i = 0; i <= n - 1; i++)
  // {
  //   for (int j = 0; j <= m - 1; j++)
  //   {
  //     cout << arr1[j][i] << " ";
  //   }
  //   cout << endl;
  // }

  // OR ALSO WRITE LIKE THIS 1ST COLUMN


  // printing transpose (column wise printing)
//   cout << "Display the transpose array1/matrix" << endl;
//   for (int j = 0; j <= n - 1; j++) // j<n
//   {
//     for (int i = 0; i <= m - 1; i++) //j<m
//     {
//       cout << arr1[i][j] << " ";
//     }
//     cout<<endl;
//   }

*/

/*

// but the question says that store it in a new matrix.
// store the transpose
int tra[n][m];
 for (int i = 0; i <= n - 1; i++) //i<n
  {
    for (int j = 0; j <= m - 1; j++) //i<m
    {
     tra[i][j]=arr1[j][i];
    }
    }
// printing transpose matrix
    cout<<"Printing the transpose array"<<endl;
     for (int i = 0; i <= n - 1; i++) //i<n
  {
    for (int j = 0; j <= m - 1; j++) //i<m
    {
    cout<< tra[i][j]<<" ";
    }
    
    cout<<endl;
  }
  }



  // output
// Enter no. of rows
// 2
// Enter no. of columns
// 3
// Enter array1 elements
// 1 2 3
// 4 5 6 
// Display array1
// 1 2 3
// 4 5 6
// Printing the transpose array
// 1 4
// 2 5
// 3 6

*/

// question->
// WAP to change the given matrix with its transpose.


