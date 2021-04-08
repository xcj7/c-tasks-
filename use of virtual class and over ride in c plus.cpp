#include <iostream> 
using namespace std; 
  
class Person { 
public: 
    virtual void show() 
    { 
        cout << "printing using show method  form person class \n"; 
    } 
}; 
  
class Student : public virtual  Person { 
     public: virtual void show()override{
    cout << " now we are in Student class  \n"; 
    }
    
}; 
  
class Employee : public virtual  Person { 
     public: virtual void show()override{
    cout << " now we are in Employee class  \n";
    }
}; 
  
class TA : public Student, public Employee { 
    
   
    public:
    
     virtual void show()override{
    cout << " now we are in TA class  \n";
    }
    
}; 


class Faculty : public Employee{
    public: virtual void show()override{
    cout << " now we are in Faculty class  \n";
    }
        
    
};

class Officer : public Employee{
     public: virtual void show()override{
    
    cout << " now we are in Officer class  \n";
    }
    
};
class scholarshipStudent : public Student{
     public: virtual void show()override{
    cout << " now we are in scholarshipStudent  class  \n";
    }
    
};
  
int main() 
{ 
    TA Zarin_Tasnim_Mihika; 
    Zarin_Tasnim_Mihika.show(); 
    cout << " ................virtual inheritance is used successfully for printing from TA.............  \n";
    
} 
