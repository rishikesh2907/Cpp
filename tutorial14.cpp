#include <iostream>
using namespace std;

// Structures is C++
// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };

typedef struct employee
{
    /* data */
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main()
{
    // ep rishikesh;   
    // struct employee ram;    
    // struct employee shyam;    

    // rishikesh.eId = 1;
    // rishikesh.favChar = 'c';
    // rishikesh.salary = 12000000;
    // cout << "The value is " << rishikesh.eId << endl;
    // cout << "The value is " << rishikesh.favChar << endl;
    // cout << "The value is " << rishikesh.salary << endl;

    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice;
    
    // Enums in C++
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = dinner;
    cout<<m1;

    return 0;
}