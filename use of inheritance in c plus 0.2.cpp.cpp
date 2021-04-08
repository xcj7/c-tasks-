#include <iostream> 
using namespace std; 
  
class Person { 
public: 
    void show() 
    { 
        cout << " form person  \n"; 
    } 
}; 
  
class Student : public  Person { 
   public:
    void show()
    {
    cout << " now we are in Student class  \n"; 
    }
}; 
  
class Employee : public  Person { 
    
     public:
     void show()
    {
    cout << " now we are in Employee class  \n";
    }
}; 
  
// class TA : public Student, public Employee { 
//     void show()
//     {
//     cout << " now we are in TA class  \n";
//     }
// }; 

class Faculty : public Employee{
    
     public:
     
    void show()
    {
    cout << " now we are in Faculty class  \n";
    }
    
};

class Officer : public Employee{
     public:
     
    void show()
    {
    cout << " now we are in Officer class  \n";
    }
    
};
class scholarshipStudent : public Student{
     public:
     
    void show()
    {
    cout << " now we are in scholarshipStudent  class  \n";
    }
    
};
  
int main() 
{ 
    Person object; 
    cout<<" ............................................\n";
    object.show();
    
    Student object1;
    cout<<" ............................................\n";
    object1.show();
    
    Employee object2;
    cout<<" ............................................\n";
    object2.show();
    
    
    Faculty object3;
    cout<<" ............................................\n";
    object3.show();
    
    
    Officer object4;
    cout<<" ............................................\n";
    object4.show();
    
    scholarshipStudent object5;
    cout<<" ............................................\n";
    object5.show();
    
    
    
    
    
    
    
    
    
} 
