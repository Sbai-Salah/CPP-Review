#include <iostream>
#include <vector>
#include <stdexcept>

class MyClass {
private:
    int privateVar;
    std::string name;
		static int counter; // it's static just to calculate the number of instances we create
		// One important thing about this static attribute is that we should initialize it outside
		// the class. (see just after the class)
		//do your research about the static keyword :)

public:
    // Constructors
    MyClass() : privateVar(0), name("Default") {counter++;}
    MyClass(int value, const std::string& n) : privateVar(value), name(n) {counter++;}
    MyClass(const MyClass& other) : privateVar(other.privateVar), name(other.name) {counter++;}
/*
----- Concerning the const in front of the string& ( pass by reference) ------
When you use a non-const reference, 
you are indicating that the referred object might be modified through that reference.
If you accidentally attempt to modify a temporary object (which is often not what you want),
the compiler will generate an error to prevent unintended changes.

which means if we entered a value as an argument we can modifie it.
for example if we gave it as a param : n = "salah sbai". This name should not be changed.
that's why we add the const in front.


----- this code bellow is not allowed ----
MyClass(int value, std::string& n) : privateVar(value), name(n) {
    // Attempt to modify the string
    n += "_Modified";
}

Here, I've removed the const from the reference parameter.
 In this modified constructor, 
I've attempted to modify the string by appending "_Modified" to it. 
However, this would result in a compilation error because you're trying 
to modify a string through a non-const reference in the constructor, 
and the argument passed could be a temporary object, which can't be modified.

*/
    // Destructor
    ~MyClass() {
        std::cout << "Destructor called for " << name << std::endl;
    }


/*in the context of a member function like getPrivateVar(), 
marking it as const indicates that calling this function won't 
alter the internal state of the object that called it.

if we don't put the const in front of the getPrivateVar(), this method can change the 
state of the object that called it. For example : imagine that we incremented the value of 
privateVar inside the get method ( which is something we should not do ) :
Without the const in front the value of the privateVar of the obj1 will change.
soooo, put a const in front of getters :)

*/
    int getPrivateVar() const {
        return privateVar;
    }

    void setPrivateVar(int value) {
        privateVar = value;
    }

    // Overloading << operator for output
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj);

// Concerning the use of this-> 
/*
Note that in most cases, you can omit this->, 
and the compiler will understand that you are referring to the member 
variables of the current object. 
However, explicitly using this-> can be useful to disambiguate 
between local variables and member variables, 
especially in larger and more complex codebases.
*/
    // Overloading + operator for addition
    MyClass operator+(const MyClass& other) const {
        MyClass result;
        result.privateVar = this->privateVar + other.privateVar;
        result.name = this->name + "_" + other.name;
        return result;
    }

    // Overloading [] operator for array-like access
		/*
puisque makanch indice negative kandiro unsigned int w puisque twila kayen wa7ed alias
f c++ li hya size_t.

Because there's no negative indexes, we use the unsigned int and because its a bit long to 
write it down, we use an alias for it provided by C++ which : size_t.
------ size_t ? ------
size_t is an unsigned integer type in C++ that is commonly 
used to represent sizes and indices of objects in memory. 
It is typically defined as an alias for an unsigned integer type, 
and its size is chosen to be capable of representing the maximum 
size of an object that can exist in the host environment.

------ what is unsigned int ? TRY TO UNDERSTAND THIS EXAMPLE BELLOW------
int main() {
    unsigned int x = 0;
    x--;  // This causes an overflow, and x becomes the maximum representable value for an unsigned int

    std::cout << "Value of x: " << x << std::endl;  // Output: Value of x: 4294967295

    return 0;
}
    */


    char operator[](size_t index) const {
        if (index < name.length()) {
            return name[index]; // we can put this->name[index] 
        } else {
            throw std::out_of_range("Index out of range");
        }
    }

// Overloading = operator for assignment
    MyClass& operator=(const MyClass& other) {
        if (this != &other) { // Avoid self-assignment
            privateVar = other.privateVar;
            name = other.name;
        }
        return *this;
    }

    // Static method
    static void staticMethod() {
        std::cout << "Static method called" << std::endl;
    }


};

// init of static member variable :
int MyClass::counter = 0;

// the friend function : see that we can do this : obj.name just because it's friend to the MyClass.
 std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Name: " << obj.name << ", privateVar: " << obj.privateVar << " | Object number: " <<obj.counter;
        return os;
    }




int main() {
    // Instantiate MyClass
    MyClass obj1(10, "Object1");
    MyClass obj2(20, "Object2");

    // Output using <<
    std::cout << "Object 1: " << obj1 << std::endl;
    std::cout << "Object 2: " << obj2 << std::endl;

    // Addition using +
    MyClass obj3 = obj1 + obj2;
    std::cout << "Object 3 (sum of Object 1 and Object 2): " << obj3 << std::endl;


    // Array-like access using []
    try {
        char firstChar = obj1[0];
        std::cout << "First character of Object 1's name: " << firstChar << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }


    // Call the static method
    MyClass::staticMethod();
    // Instantiate vector of MyClass objects
    std::vector<MyClass> myClassVector = {obj1, obj2, obj3};

    // Access elements in vector using []
    for (const auto& obj : myClassVector) {
        std::cout << "Vector element: " << obj << std::endl;
    }

    return 0;
}