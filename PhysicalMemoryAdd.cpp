#include<iostream>
using namespace std;
int main()
{
    int row1,col1;
    cout<<"enter the rows and column for the matrix : "<<endl;
    cin>>row1>>col1;
    int arr[row1][col1];
    cout<<"enter the elements of the matrix "<<endl;
    for(int i=0; i<row1;i++)
    {
        for( int j = 0 ; j<col1; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter the row and column of the elment whose add you want to search: "<<endl;
    int row2,col2;
    cin>>row2>>col2;
    //using row major formula
    int* loc = &arr[0][0] + ((col2-col1)*((row1-0)+1))*sizeof(int) + (row2)*sizeof(int);
    int* loc2 = &arr[0][0] + ((row2-0)*(row1 - 0 + 1))*sizeof(int) + (col2 - 0)*sizeof(int);

    cout<<"your memory address int CMO is "<<loc<<endl;
    cout<<"your memory address int RMO is "<<loc2<<endl;
}