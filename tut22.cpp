// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup 
// class --> extensions of structures (in C)
// structures and limitations
//    - members are public
//    - no methods
// classes  --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declaration like this:
/*  class Employee{
      class definition
} harry , rohan , lovish; */  
// harry.salary = 8 makes no sense if salary is private


#include <iostream>
#include <string>
using namespace std;

class binary
{
// private:    already private by default
string s;
void chk_bin(void);
  
  public:
  void read(void);
  void ones_compliment(void);
  void display(void);
};
void binary :: read(void)
{
  cout<< "Enter a binary number" << endl;
  cin >> s;
}

void binary :: chk_bin(void)
{
  for(int i = 0; i<s.length(); i++){
    if (s.at(i) !='0' && s.at(i) !='1')
    {
       cout << "Incorrect binary format" <<endl;
       exit(0);
    } 
  }
}

void binary :: ones_compliment(void)
{
  chk_bin();
  for(int i = 0; i<s.length(); i++){
    if (s.at(i) =='0' )
    {
       s.at(i) = '1';
    } 
    else{
      s.at(i) = '0';
    }
  }  
}

void binary :: display(void){
  cout<<"Displaying your binary number"<<endl;
  for(int i = 0; i<s.length(); i++){
    cout<<s.at(i);
  }  
  cout<<endl;
}

int main(){
  binary b;
  b.read();
  // b.chk_bin();
  b.display();
  b.ones_compliment();
  b.display();

  return 0;
}