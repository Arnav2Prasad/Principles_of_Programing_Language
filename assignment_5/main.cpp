#include <iostream>
#include <string>
using namespace std;

class Animal {
	private:
    		string name;
    		int age;
    		string species;

	public:
    		Animal() : name("Unknown"), age(0), species("Unknown") {}

    Animal(string n, int a,string s) : name(n), age(a), species(s) {}

    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter species: ";
        cin >> species;
    }

    void printAnimal() {
        cout << "Animal Details:" << std::endl;
        cout << "Name: " << name << std::endl;
        cout << "Age: " << age << " years" << std::endl;
        cout << "Species: " << species << std::endl;
    }
};

int main() {
    
    Animal cat; 
    std::cout << "Details of Cat (Default Constructor):" << std::endl;
    cat.printAnimal();
    cout << "\n";

    Animal dog("Buddy", 3, "Dog");
    std::cout << "Details of Dog (Parameterized Constructor):" << std::endl;
    dog.printAnimal();
    cout << "\n";

    Animal monkey;
    std::cout << "Enter details for Monkey:" << std::endl;
    monkey.readData();
    std::cout << "\nDetails of Monkey:" << std::endl;
    monkey.printAnimal();


    return 0;
}

