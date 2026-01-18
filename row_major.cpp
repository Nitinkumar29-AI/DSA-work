#include<iostream>
using namespace std;
int main()
{
   int rows,col;
   int arr[10][10];
   cout<<"enter rows and column"<<endl;
   cin>>rows>>col;
   cout<<"enter the element in ROW wise order"<<endl;
   for (int i=0;i<rows;i++)
   {
        for(int j=0;j<col;j++)
        cin>>arr[i][j];
   }
   cout<<"matrix is in ROW major form "<<endl;
   for (int i=0;i<rows;i++)
   {
        for(int j=0;j<col;j++)
        {
        cout<< arr[i][j]<<" ";
        }
        cout<<endl;
   }
}