#include <iostream>
using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() 
{
    //Primitive data types 
    int a = 10;
    float b = 3.14f;
    char c = 'A';
    double d = 25.678;

    // Non-primitive data types 
    int arr[3] = {1, 2, 3};
    Student s = {101, 88.5f};

    cout << "---- Primitive Data Types ----" << endl;
    cout << "int a = " << a
         << ", Address = " << &a
         << ", Size = " << sizeof(a) << " bytes" << endl;

    cout << "float b = " << b
         << ", Address = " << &b
         << ", Size = " << sizeof(b) << " bytes" << endl;

    cout << "char c = " << c
         << ", Address = " << (void*)&c
         << ", Size = " << sizeof(c) << " byte" << endl;

    cout << "double d = " << d
         << ", Address = " << &d
         << ", Size = " << sizeof(d) << " bytes" << endl;

    cout << "\n---- Non-Primitive Data Types ----" << endl;

    cout << "Array elements:" << endl;
    for(int i = 0; i < 3; i++) 
    {
        cout << "arr[" << i << "] = " << arr[i]
             << ", Address = " << &arr[i]
             << ", Size = " << sizeof(arr[i]) << " bytes" << endl;
    }

    cout << "\nStructure Student:" << endl;
    cout << "Roll = " << s.roll
         << ", Address = " << &s.roll
         << ", Size = " << sizeof(s.roll) << " bytes" << endl;

    cout << "Marks = " << s.marks
         << ", Address = " << &s.marks
         << ", Size = " << sizeof(s.marks) << " bytes" << endl;

    cout << "\nTotal size of structure Student = "
         << sizeof(s) << " bytes" << endl;

    return 0;
}
