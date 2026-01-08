#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"enter the values of the matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"matrix is \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<arr[i][j];
          cout<<"-";
          cout<< &arr[i][j];
           cout<<"\t";
        }
        cout<<endl;
    }

}