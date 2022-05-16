

    #include <iostream>  
    using namespace std;  
    class vehicle  
    {  
    public:  
     void vehicle()  
        {  
    cout<< "This is a vehicle\n";  
        }  
    };  
    class Car: public vehicle  
    {  
    public:  
    void Car()  
        {  
    cout<< "This is a car\n";  
        }  
    };  
    class Racing  
    {  
    public:  
    void Racing()  
        {  
    cout<< "This is for Racing\n";  
        }  
    };  
    class Ferrari: public Car, public Racing  
    {  
    public:  
    void Ferrari()  
        {  
    cout<< "Ferrari is a Racing Car\n";  
        }  
      
    };  
    int main() {  
        Ferrari f;  
        return 0;  
    }  
