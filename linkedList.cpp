#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    
    }    

        cout << endl;
}


void reverseArray(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}


void copyArray(int mainArr[], int sub1[], int sub2[])
{
    int k = 0;
    for (int i = 0; i < 10; i++)
    {    
        mainArr[k++] = sub1[i];

    }
    
    for (int i = 0; i < 10; i++)
    {    
        mainArr[k++] = sub2[i];

    }
}

void sorting(int sub1[],int size )
{
    for(int i =0 ; i< size ; i++)
    {
        for(int j = i +1 ; j< size ; j++)
        {
            if(sub1[i]>sub1[j])
            {
                int temp = sub1[i];
                sub1[i]=sub1[j];
                sub1[j]=temp;
            }
        }
    }
}



int sumWithoutRec(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int sumWithRec(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }

    return arr[size - 1] + sumWithRec(arr, size - 1);
}

void searchElement(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found\n";
}

void separateOddEven(int arr[], int size)
{
    cout << "Even numbers in main array : ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << "\nOdd numbers in main array : ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }

    }
}

void separatePosNeg(int arr[], int size)
{
    cout << "Positive elements are : ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << "\nNegative elements are : ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    
    }
}


int main()
{
    int SubArray1[10] = {1,-2,3,4,-5,6,7,-8,9,10};
    int SubArray2[10] = {11,-22,33,44,-55,66,77,88,-99,10};
    int MainArray[20];

    int choice;

   cout<<"enter the number what operation you want to perform "<<endl; 
   cout<<"1.INSERT OF ELEMENT"<<endl; 
   cout<<"2.DELETE OF NODE"<<endl; 
   cout<<"3.REVERSE THE ARRAY"<<endl; 
   cout<<"4.COPY THE ELEMENTS"<<endl; 
   cout<<"5.MERGE TWO SORTED ARRAY"<<endl; 
   cout<<"6.DISPLAY THE SUM WITHOUT RECURSION"<<endl; 
   cout<<"7.DISPLAY THE SUM WITH RECURSION"<<endl; 
   cout<<"8.SEARCH FOR THE VALUE"<<endl; 
   cout<<"9.SEPERATE THE MAIN ARRAY INTO SUB ARRAY (ODD AND EVEN)"<<endl; 
   cout<<"10.SEPERATE THE MAIN ARRAY INTO SUB ARRAY (POSITIVE AND NEGATIVE)"<<endl;
   
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            int pos, val;
            cout << "Enter position (0-9): ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            SubArray1[pos] = val;
            SubArray2[pos] = val;

            displayArray(SubArray1, 10);
            break;
        }

        case 2:
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            for (int i = pos; i < 9; i++)
            {
                SubArray1[i] = SubArray1[i + 1];
            }
            SubArray1[9] = 0;
            displayArray(SubArray1, 10);
            break;
        }

        case 3:
        {
            reverseArray(SubArray1, 10);
            reverseArray(SubArray2,10);
            cout<<"reversed array 1 is: ";
            displayArray(SubArray1, 10);
            cout<<"reversed array 2 is: ";
            displayArray(SubArray2, 10);
            break;
        }

        case 4:
        {
            copyArray(MainArray, SubArray1, SubArray2);
            cout<<"coped array is : "<<endl;
            displayArray(MainArray, 20);
            break;

        }

        case 5:
        {
            sorting(SubArray1,10);
            sorting(SubArray2,10);
            copyArray(MainArray,SubArray1,SubArray2);
            sorting(MainArray,20);
            reverseArray(MainArray,20);
            cout<<"merged descending order array is: ";
            displayArray(MainArray, 20);
            break;

        }

        case 6:
        {
            cout << "Sum of the array 1 is : " << sumWithoutRec(SubArray1, 10) << endl;
            cout << "Sum of the array 2 is : " << sumWithoutRec(SubArray2, 10) << endl;
            break;

        }

        case 7:
        {
            cout << "Sum of the array 1 is : " << sumWithRec(SubArray1, 10) << endl;
            cout << "Sum of the array 2 is : " << sumWithRec(SubArray2, 10) << endl;
            break;

        }

        case 8:
        {
            int key;
            cout << "Enter value you want to search : ";
            cin >> key;
            cout<<"searched array 1: ";
            searchElement(SubArray1, 10, key);
            cout<<"searched array 2: ";
            searchElement(SubArray2,10,key);
            break;
        }

        case 9:
        {
            copyArray(MainArray, SubArray1, SubArray2);
            separateOddEven(MainArray, 20);
            break;
        }

        case 10:
        {
            copyArray(MainArray, SubArray1, SubArray2);
            separatePosNeg(MainArray, 20);
            break;
        }

        default:
        {
            cout << "Invalid choice try again \n";
        }
    }

    return 0;
}
