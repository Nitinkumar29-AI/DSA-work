#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of elements to be enter in array\n";
    int len;
    cin>> len;
    int arr[len];
    float avg;
    int sum=0;
    cout<<"enter the elements \n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    //sorting of array (n^2) complexity
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"maximum of the number in array is "<<arr[len-1]<<endl;
    cout<<"minimum of the number in array is "<< arr[0]<<endl;
    cout<<"average of all the numbers is ";
    for(int i =0;i<len;i++)
    {
        sum=sum+arr[i];
        
    }
    avg=sum/len;
    cout<< avg << endl;
    cout<<"enter the number which you want to find ";
    int fnum;
    cin>> fnum;
    for(int i=0;i<len;i++)
    {
        if(fnum==arr[i])
        {
            cout<<"yes we found number "<<arr[i];
            break;
        }
    }

}
