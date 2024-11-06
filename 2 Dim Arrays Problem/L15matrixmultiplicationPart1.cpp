/*
//WAP to print the multiplication of two matrices given by the user.
// here no. of rows and no. of column same means sq. matrix
//  Enter the no. of rows
// 2
// Enter the no. of columns
// 2
// Enter the array1 elements
// 2 2 2 2
// Display the array1 matrix
// 2 2
// 2 2
// Enter the array2 elements
// 2 2 2 2
// Display the array2 matrix
// 2 2
// 2 2
// Display multiplication of the two matrix
// 8 8
// 8 8


// it doesn't work for other order means 3*3




#include <iostream>
using namespace std;
int main()

{
   // matrix size m*n
   int m;
   cout<<"Enter the no. of rows"<<endl;
   cin>>m;
   int n;
   cout<<"Enter the no. of columns"<<endl;
   cin>>n;
   // matrix-name-arr
   int arr1[m][n];
   // print the matrix by user
   cout<<"Enter the array1 elements"<<endl;
   for(int i=0; i<=m-1; i++)
   {
       for(int j=0; j<=n-1; j++)
       {
           cin>>arr1[i][j];
       }
   }

   int arr2[m][n];
   // display matrix entered by the user
   cout<<"Display the array1 matrix"<<endl;
   for( int i=0; i<=m-1 ; i++)
   {
       for(int j=0; j<=n-1; j++)
       {
           cout<<arr1[i][j]<<" ";
       }
       cout<<endl;
   }


   cout<<"Enter the array2 elements "<<endl;
   for(int i=0; i<=m-1; i++)
   {
       for(int j=0; j<=n-1; j++)
       {
           cin>>arr2[i][j];
       }
   }


   cout<<"Display the array2 matrix "<<endl;
   for(int i=0; i<=m-1; i++)
   {
       for(int j=0; j<=n-1; j++)
       {
           cout<<arr2[i][j]<<" ";
       }
       cout<<endl;
   }

//    int arr3[m][n];

   cout<<"Display multiplication of the two matrix "<<endl;
   for(int i=0; i<=m-1; i++)
   {
       for(int j=0; j<=n-1; j++)
       {

           cout<<arr1[i][j]*arr2[j][i]+arr1[i][j]*arr2[j][i]<<" ";
           // cout<<arr3[i][j]<<" ";
       }
       cout<<endl;
   }
}











*/

// WAP to print the multiplication of two matrices given by the user.
//  it work all the order

/*
#include <iostream>
using namespace std;
int main()

{
    // 1st matrix
    int m;
    cout << "Enter rows of 1st matrix" << endl;
    cin >> m;
    int n;
    cout << "Enter columns of 1st matrix" << endl;
    cin >> n;

    // 2nd matrix
    int p;
    cout << "Enter rows of 2nd matrix" << endl;
    cin >> p;
    int q;
    cout << "Enter columns of 2nd matrix" << endl;
    cin >> q;

    // matrix rules
    if (n == p)
    {
        // we make 2 arrays

        // matrix-name-a
        int a[m][n];
        // print the matrix by user
        // 1st matrix
        cout << "Enter elements of 1st matrix" << endl;
        for (int i = 0; i <= m - 1; i++)
        {
            for (int j = 0; j <= n - 1; j++)
            {
                cin >> a[i][j];
            }
        }

        cout << "Display elements of 1st matrix" << endl;
        for (int i = 0; i <= m - 1; i++)
        {
            for (int j = 0; j <= n - 1; j++)
            {
                cout<<a[i][j]<<" ";
            }
         cout<<endl;
        }



        int b[p][q];
        // display matrix entered by the user
        // 2nd matrix


         cout << "Enter elements of 2nd matrix" << endl;
        for (int i = 0; i <= p - 1; i++)
        {
            for (int j = 0; j <= q- 1; j++)
            {
                cin>>b[i][j];
            }
        }

         cout << "Display elements of 2nd matrix" << endl;
        for (int i = 0; i <= p - 1; i++)
        {
            for (int j = 0; j <= q - 1; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }

        // important part
        // resultant matrix
        int res[m][q]; // m and q are the order od res matrix

        for (int i = 0; i <= m - 1; i++)
        {
            for (int j = 0; j <= q - 1; j++)
            {
                // multiply
                res[i][j] = 0;   // 1st we initilize res to 0
               // res[i][j]=a[i][0]*b[0][j] + a[i][1]*b[1][j] + ... add using loops
                for (int k = 0; k <= p - 1; k++) //
                {
                    res[i][j] += a[i][k] * b[k][j];
                }

            }
        }
  cout << endl;

        // print multiplication
        cout<<"Display the final multipication of two matrices "<<endl;
        for (int i = 0; i <= m - 1; i++)
        {
            for (int j = 0; j <= q - 1; j++)
            {
                cout<< res[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    else // n!=p
    {
        cout << "The matrices cannot be multiplied" << endl;
    }
}


//output
// Enter rows of 1st matrix
// 2
// Enter columns of 1st matrix
// 3
// Enter rows of 2nd matrix
// 3
// Enter columns of 2nd matrix
// 4
// Enter elements of 1st matrix
// 1 2 3 4 5 6
// Display elements of 1st matrix
// 1 2 3
// 4 5 6
// Enter elements of 2nd matrix
// 1 2 3 4 5 6 7 8 9 10 11 12
// Display elements of 2nd matrix
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// Display the final multipication of two matrices
// 38 44 50 56
// 83 98 113 128


*/
/*


#include <iostream>
using namespace std;
int main()

{
    // 1st matrix
    int m;
    cout << "Enter rows of 1st matrix" << endl;
    cin >> m;
    int n;
    cout << "Enter columns of 1st matrix" << endl;
    cin >> n;

    // 2nd matrix
    int p;
    cout << "Enter rows of 2nd matrix" << endl;
    cin >> p;
    int q;
    cout << "Enter columns of 2nd matrix" << endl;
    cin >> q;
    if (n == p)
    {
        // we make 2 arrays

        // matrix-name-a
        int a[m][n];
          // 1st matrix
        cout << "Enter elements of 1st matrix" << endl;
        for (int i = 0; i <= m - 1; i++)
        {
            for (int j = 0; j <= n - 1; j++)
            {
                cin >> a[i][j];
            }
        }

     int b[p][q];
     // 2nd matrix
         cout << "Enter elements of 2nd matrix" << endl;
        for (int i = 0; i <= p - 1; i++)
        {
            for (int j = 0; j <= q- 1; j++)
            {
                cin>>b[i][j];
            }
        }

       int res[m][q]; // m and q are the order od res matrix
        for (int i = 0; i <= m - 1; i++)
        {
            for (int j = 0; j <= q - 1; j++)
            {
                // multiply
                res[i][j] = 0;   // 1st we initilize res to 0
               // res[i][j]=a[i][0]*b[0][j] + a[i][1]*b[1][j] + ... add using loops
                for (int k = 0; k <= p - 1; k++) //
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

 // print multiplication
        cout<<"Display the final multipication of two matrices "<<endl;
        for (int i = 0; i <= m - 1; i++)
        {
            for (int j = 0; j <= q - 1; j++)
            {
                cout<< res[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    else // n!=p
    {
        cout << "The matrices cannot be multiplied" << endl;
    }
}








// you print order wise when matrix is given like 2*3
// 1 2 3
// 4 5 6 you give input 1space2space3enter4 like wise becoz in this code
//we can't code for matrix display




//output
// Enter rows of 1st matrix
// 2
// Enter columns of 1st matrix
// 3
// Enter rows of 2nd matrix
// 3
// Enter columns of 2nd matrix
// 4
// Enter elements of 1st matrix
// 1 2 3
// 4 5 6
// Enter elements of 2nd matrix
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Display the final multipication of two matrices
// 38 44 50 56
// 83 98 113 128





*/

/*
//question.2
// WAP to print the addtion of two matrices given by the user.
#include <iostream>
using namespace std;
int main()

{
    // matrix size m*n
    int m;
    cout<<"Enter the no. of rows"<<endl;
    cin>>m;
    int n;
    cout<<"Enter the no. of columns"<<endl;
    cin>>n;
    // matrix-name-arr
    int arr1[m][n];
    // print the matrix by user
    cout<<"Enter the array1 elements"<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>arr1[i][j];
        }
    }

    int arr2[m][n];
    // display matrix entered by the user
    cout<<"Display the matrix"<<endl;
    for( int i=0; i<=m-1 ; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the array2 elements "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>arr2[i][j];
        }
    }


    cout<<"Display the matrix "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

   int arr3[m][n];

    cout<<"Display addition of the two matrix "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
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

/*
// WAP to print the matrix in wave form
// this code is correct but no. of lines is very much
// so after this we write a same code and no. of lines in that code is less.

#include <iostream>
using namespace std;
int main()

{

    int m;
    cout << "Enter rows of matrix" << endl;
    cin >> m;
    int n;
    cout << "Enter columns of matrix" << endl;
    cin >> n;
    int a[m][n];
    cout << "Enter elements of matrix" << endl;


    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> a[i][j];
        }
        cout<<endl;
    }



    // normal print
    cout << "Display the elements of matrix" << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << a[i][j] << " ";
        }

    cout << endl;
    }
    cout<<endl;
        // wave print
        cout<<"Display wave form "<<endl;
        for (int i = 0; i <= m - 1; i++)
        {
            if (i % 2 == 0) {// i is even, i=2,4,6.. print- normal order.
                for (int j = 0; j <= n - 1; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout<<endl;
        }
            else // i=1,3,5...
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    cout << a[i][j] << " ";
                }


            cout << endl;
        }
    }
}


*/

/*


// WAP to print the matrix in wave form
// user input 1 2 3 4 5 6 7 8 9
// output -> 1 2 3 6 5 4 7 8 9
// hint row no. even -> print normal else print reverse

// Enter rows of matrix
// 3
// Enter columns of matrix
// 3
// Enter elements of matrix
// 1 2 3 4 5 6 7 8 9
// Display wave form
// 1 2 3 6 5 4 7 8 9
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter rows of matrix" << endl;
    cin >> m;
    int n;

    cout << "Enter columns of matrix" << endl;
    cin >> n;
    int a[m][n];
    cout << "Enter elements of matrix" << endl;

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> a[i][j];
        }
    }
       // wave print
        cout<<"Display wave form "<<endl;
        for (int i = 0; i <= m - 1; i++)
        {
            if (i % 2 == 0) {// i is even, i=2,4,6.. print- normal order.
                for (int j = 0; j <= n - 1; j++)
                {
                    cout << a[i][j] << " ";
                }
        }
            else // i=1,3,5...
            {// reverse print
                for (int j = n - 1; j >= 0; j--)
                {
                    cout << a[i][j] << " ";
           }
        }
    }

}

*/

/*


// WAP to print the matrix in wave form
// Wave Printing
// user input 1 2 3 4 5 6 7 8 9
// output ->  3 2 1 4 5 6 9 8 7
// hint row no. even -> print reverse else print normal

// Enter rows of matrix
// 3
// Enter columns of matrix
// 3
// Enter elements of matrix
// 1 2 3 4 5 6 7 8 9
// Display wave form
// 3 2 1 4 5 6 9 8 7
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter rows of matrix" << endl;
    cin >> m;
    int n;

    cout << "Enter columns of matrix" << endl;
    cin >> n;
    int a[m][n];
    cout << "Enter elements of matrix" << endl;

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> a[i][j];
        }
    }
       // wave print
        cout<<"Display wave form "<<endl;
        for (int i = 0; i <= m - 1; i++)
        {
            if (i % 2 != 0) {// i is odd, i=1,3,5... print- normal order.
                for (int j = 0; j <= n - 1; j++)
                {
                    cout << a[i][j] << " ";
                }
        }
            else // i=2,4,6....
            {// reverse print
                for (int j = n - 1; j >= 0; j--)
                {
                    cout << a[i][j] << " ";
           }
        }
    }

}





*/

/*



// WAP to print the matrix in wave form
// Wave Printing
// user input 1 2 3 4 5 6 7 8 9
// output ->  7 8 9 6 5 4 1 2 3
// hint row no. even -> print reverse else print normal

// output
// Enter rows of matrix
// 3
// Enter columns of matrix
// 3
// Enter elements of matrix
// 1 2 3 4 5 6 7 8 9
// Display wave form
// 7 8 9 6 5 4 1 2 3
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter rows of matrix" << endl;
    cin >> m;
    int n;

    cout << "Enter columns of matrix" << endl;
    cin >> n;
    int a[m][n];
    cout << "Enter elements of matrix" << endl;

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> a[i][j];
        }
    }
       // wave print
        cout<<"Display wave form "<<endl;
        for (int i = m-1; i >=0; i--) // becoz no.print from
        // the last row -> right in notes prefer notes .
        {
            if (i % 2 == 0) { //even -same as it is
                for (int j = 0; j <n; j++)
                {
                    cout << a[i][j] << " ";
                }
        }
            else
            { //odd - reverse
                for (int j = n-1; j>=0; j--)
                {
                    cout << a[i][j] << " ";
           }
        }
    }

}



*/

/*

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
// Display the wave form
// 1 2 3 6 5 4 7 8 9

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

    int a[m][n];
    cout << "Enter the elements of matrix " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for(int j = 0; j <= n - 1;j++)

        {
            cin >> a[i][j];
        }
    }
    cout<<"Display the elements of matrix"<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0 ; j<=n-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
    
    cout<<endl;
}

cout<<"Display the wave form "<<endl;
for(int i=0 ; i<=m-1; i++)
{
    if(i%2==0) // even - normal
    {
        for(int j=0; j<=n-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    else // odd - reverse
    {
        for(int j=n-1; j>=0; j--) // code for reverse
        {
            cout<<a[i][j]<<" ";
        }
    }
}
    cout<<endl;

}


*/







/*


// column wise printing 
// input - 1 2 3 4 5 6 7 8 9 
// column - even and odd 
// print 1 4 7 2 5 8 3 6 9

// output 
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
// Display the column wise printing
// 1 4 7 2 5 8 3 6 9 










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

    int a[m][n];
    cout << "Enter the elements of matrix " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for(int j = 0; j <= n - 1;j++)

        {
            cin >> a[i][j];
        }
    }
    cout<<"Display the elements of matrix"<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0 ; j<=n-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
    
    cout<<endl;
}

cout<<"Display the column wise printing "<<endl;
 for(int j=0; j<=n-1; j++)
{
    if(j%2==0) // even - normal
    {
        for(int i=0 ; i<=m-1; i++)
       
        {
            cout<<a[i][j]<<" ";
        }
    }
    if(j%2!=0) // odd - normal as it is
    {
        for(int i=0; i<=m-1; i++) 
        {
            cout<<a[i][j]<<" ";
        }
    }
}
    cout<<endl;

}



*/












/*




// this code reduces some lines 

// take user input in matrix form
// 1 2 3      
// 4 5 6 
// 7 8 9 

// Enter the rows of matrix
// 3
// Enter the columns of matrix
// 3
// Enter the elements of matrix
// 1 2 3      
// 4 5 6 
// 7 8 9 
// output
// 1 4 7 2 5 8 3 6 9



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

    int a[m][n];
    cout << "Enter the elements of matrix " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for(int j = 0; j <= n - 1;j++)

        {
            cin >> a[i][j];
        }
    }
// give input in matrix form.
cout<<endl;
// column wise printing in very less line
for(int j=0; j<=n-1; j++)
{
  for(int i=0; i<=n-1; i++)
  {
    cout<<a[i][j]<<" ";
  }
}

    cout<<endl;

}

*/

/*

// print left to right

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
// Display the wave form
// 9 6 3 8 5 2 7 4 1




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

    int a[m][n];
    cout << "Enter the elements of matrix " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for(int j = 0; j <= n - 1;j++)

        {
            cin >> a[i][j];
        }
    }
    cout<<"Display the elements of matrix"<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0 ; j<=n-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
    
    cout<<endl;
}

cout<<"Display the wave form "<<endl;
for(int j=n-1; j>=0; j--)
{
    if(j%2==0)
    {
        for(int i=m-1; i>=0; i--)
        {
            cout<<a[i][j]<<" ";
        }
    }
    if(j%2!=0)
    {
        for(int i=m-1; i>=0; i--)
        {
            cout<<a[i][j]<<" ";
        }
    }
}
    cout<<endl;

}




*/


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
// Display the wave form
// 7 4 1 8 5 2 9 6 3





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

    int a[m][n];
    cout << "Enter the elements of matrix " << endl;
    for (int i = 0; i <= m - 1; i++)
    {
        for(int j = 0; j <= n - 1;j++)

        {
            cin >> a[i][j];
        }
    }
    cout<<"Display the elements of matrix"<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0 ; j<=n-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
    
    cout<<endl;
}

cout<<"Display the wave form "<<endl;
for(int j=0; j<=n-1; j++)
{
    if(j%2==0) // even - reverse
     {
        for(int i=n-1; i>=0; i--) // code for reverse
        {
            cout<<a[i][j]<<" ";
        }
    }
    if(j%2!=0)// odd - reverse
    {
        for(int i=n-1; i>=0; i--) // code for reverse
        {
            cout<<a[i][j]<<" ";
        }
    }
}
    cout<<endl;

}



