#include<iostream>
using namespace std;
int main()
{
    static int SubArray1[10] = {1,-2,3,4,-5,6,7,-8,9,10};
    static int SubArray2[10] = {11,-22,33,44,-55,66,77,88,-99,10};
    static int MainArray[20];
    int choice;
   
    cout<<"enter the number what operation you want to perform "<<endl;
    cout<<"1.INSERT OF ELEMENT"<<endl;
    //cout<<"2.MODIFY OF NODE"<<endl;
    cout<<"2.DELETE OF NODE"<<endl;
    cout<<"4.REVERSE THE ARRAY"<<endl;
    cout<<"5.COPY THE ELEMENTS"<<endl;
    cout<<"6.MERGE TWO SORTED ARRAY"<<endl;
    cout<<"7.DISPLAY THE SUM"<<endl;
    cout<<"8.SEARCH FOR THE VALUE"<<endl;
    cout<<"9.SEPERATE THE MAIN ARRAY INTO SUB ARRAY "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"enter the position where you want to add the element ";
            int position;
            cin>>position;
            cout<<"enter the element: "<<endl;
            int element;
            cin>>element;
            SubArray1[position] = element;
            SubArray2[position] = element;
            cout<<"your array 1 and 2 is "<<endl;
            for(int i=0 ; i<10 ; i++)
            {
                cout<<SubArray1[i]<<" ";  
            }
            cout<<endl;
            for(int i=0 ; i<10 ; i++)
            {
                cout<<SubArray2[i]<<" ";   
            }
            cout<<endl;
            break;
        }
        case 2:
        {
             cout<<"enter the position where you want to delete the element ";
            int position;
            cin>>position;
            for(int i = position ; i<9 ; i++)
            {
                SubArray1[i] = SubArray1[i+1];
            }
            SubArray1[9]=NULL;
            for(int i = position ; i<9 ; i++)
            {
                SubArray2[i] = SubArray2[i+1];
            }
            SubArray2[9]=NULL;
            for(int i = 0 ; i<10 ; i++)
            {
                cout<<SubArray1[i]<<" ";
            }
            cout<<endl;
            for(int i = 0 ; i<10 ; i++)
            {
                cout<<SubArray2[i]<<" ";
            }
        }
        case 3:
        {
            
        }
    }

}