#include <iostream>
using namespace std;

class Employee
{
  int id;
  static int count; // S tatic variable class se jud jata hai aur sare employee ke liye use aata hai
  // Agar static na hokar int rehta to sab ke liye count ka value apna apna hota
  // Is class ke jitne objects banenge unka value purane objects ke count se aayega

public:
  void setData(void)
  {
    cout << "Enter the id " << endl;
    cin >> id;
    count++;
  }
  void getData(void)
  {
    cout << "The id of employee is " << id << " and this is employee number " << count << endl;
  }

  static void getCount(void){   // only can use static variables
    // cout<<id; // throws an error
    cout<<"The value of count is "<<count<<endl;
  }
};

// Count is the static data member of class Employee
int Employee::count = 0; // Default value is zero

int main()
{
  Employee rishi, rohan, ritesh;
  // rishi.id = 1;
  // rishi.count = 1; // cannot do this as id and count are private

  rishi.setData();
  rishi.getData();
  Employee::getCount();
  
  rohan.setData();
  rohan.getData();
  Employee::getCount();
  
  ritesh.setData();
  ritesh.getData();
  Employee::getCount();
  return 0;
}