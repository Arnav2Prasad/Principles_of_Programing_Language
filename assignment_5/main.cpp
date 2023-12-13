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
        cout << "Animal Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Species: " << species << endl;
    }
};

int main() {
    
    Animal cat; 
    cout << "Details of Cat (Default Constructor):" << endl;
    cat.printAnimal();
    cout << "\n";

    Animal dog("Buddy", 3, "Dog");
    cout << "Details of Dog (Parameterized Constructor):" << endl;
    dog.printAnimal();
    cout << "\n";

    Animal monkey;
    cout << "Enter details for Monkey:" << endl;
    monkey.readData();
    cout << "\nDetails of Monkey:" << endl;
    monkey.printAnimal();


    return 0;
}

