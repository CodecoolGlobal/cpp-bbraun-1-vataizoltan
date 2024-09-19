#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
};

class Dog : public Animal
{
private:
    int age;

public:
    Dog(int age) : age(age) {}
    void speak() override
    {
        cout << "Woof!" << endl;
    }
    int getAge() const
    {
        return age;
    }
};

class Cat : public Animal
{
private:
    string color;

public:
    Cat(string color) : color(color) {}
    void speak() override
    {
        cout << "Meow!" << endl;
    }
    string getColor() const
    {
        return color;
    }
};

char toChar(int asciiValue)
{
    // TODO: convert asciiValue to char
    char c= static_cast<char>(asciiValue);
    return c;
    
} 
//dynamic_cast is evaluated during runtime
//if the dynamic_cast can be executed, it will be done, and it means a true value
//if the dynamic_cast cannot be executed, it will give a null pointer, which means false

void animalTalk()
{
    Animal *animals[] = {new Dog(4), new Cat("black")};

    for (Animal *animal : animals)
    {
        // TODO: construct the condition to check the animal is a Dog
        if (Dog *dog = dynamic_cast<Dog *>(animal))
        {
            cout << "Speaking dog is: " << dog->getAge() << " years old.";
            dog->speak();
        }
        // TODO: construct the condition to check the animal is a Cat
        else if (Cat *cat = dynamic_cast<Cat *>(animal))
        {
            cout << "Speaking cat is: " << cat->getColor() << " color.";
            cat->speak();
        }
        else
        {
            cout << "Unknown animal" << endl;
        }
    }
}

int main()
{
    int asciiValue = 65;
    char character = toChar(asciiValue);
    cout << "ASCII code: " << asciiValue << " represent the following charater: " << character << endl;

    animalTalk();

    return 0;
}