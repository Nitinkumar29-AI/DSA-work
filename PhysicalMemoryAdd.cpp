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
    int i,j;
    cin>>i>>j;
    //using row major formula
    int *Rom = &arr[0][0] + ((i)*col1 + j);
    int *Com = &arr[0][0] + ((j)*row1 + i);

    cout<<"your memory address int CMO is "<<Com<<endl;
    cout<<"your memory address int RMO is "<<Rom<<endl;
    cout<<"the actual memory address is : "<<&arr[i][j]<<endl;
}