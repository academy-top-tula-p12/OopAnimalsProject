#include <iostream>
using namespace std;

enum class AnimalType
{
    Cat,
    Dog,
    Pig
};

class Animal
{
    string name;
public:
    Animal(string name = "") : name{ name } {}
    string Name() { return name; }
    virtual string Say() = 0;
};

class Cat : public Animal
{
public:
    Cat() : Animal("cat") {};
    string Say() override { return "myau"; }
};

class Dog : public Animal
{
public:
    Dog() : Animal("dog") {};
    string Say() final override { return "gau"; }
};

class Pig : public Animal
{
public:
    Pig() : Animal("pig") {};
    string Say() override { return "hru"; }
};

class Fox : public Dog
{
public:
    //string Say() override { return "tyaf"; }
};


void SayAnimal(Animal* animal)
{
    cout << animal->Say() << "\n";
}

Animal* AnimalFactory(AnimalType type)
{
    switch (type)
    {
    case AnimalType::Cat:
        return new Cat();
    case AnimalType::Dog:
        return new Dog();
    case AnimalType::Pig:
        return new Pig();
    default:
        break;
    }
}



int main()
{
    /*Animal* animal = new Cat();
    
    cout << animal->Name() << "\n";
    cout << animal->Say() << "\n";
    delete animal;

    animal = new Dog();

    cout << animal->Name() << "\n";
    cout << animal->Say() << "\n";
    delete animal;*/

    
    //Animal* animals[2];
    //int size = 3;
    //Animal** animals = new Animal*[size];
    //animals[0] = new Dog();
    //animals[1] = new Cat();
    //animals[2] = new Pig();

    //for (int i = 0; i < size; i++)
    //{
    //    cout << animals[i]->Name() << "\n";
    //    //cout << animals[i]->Say() << "\n\n";
    //    SayAnimal(animals[i]);
    //}

    /*cout << "input code of animal (0, 1, 2): ";
    int code;
    cin >> code;

    Animal* a = AnimalFactory((AnimalType)code);
    cout << a->Say() << "\n";*/

    Animal* fox = new Fox();
    cout << fox->Say() << "\n";
}
