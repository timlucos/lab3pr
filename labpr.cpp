#include <iostream>
#include <string>

class Company
{
private:
    std::string country = "GERMANY";
    std::string companyName = "BMW";

public:
    Company(std::string name, std::string country)
        : country(country), companyName(name) {}

    Company(std::string country)
        : country(country) {}

    Company();

    ~Company() = default;

    std::string getCompanyName()
    {
        return companyName;
    }

    std::string getCountry()
    {
        return country;
    }
};

class Employee : public Company
{
private:
    std::string nameEmployee = "Oleg";
    int ageEmployee = 45;
    std::string documentEmployee = "None";
    bool marriedStatus = false;

public:
    void setNameEmployee(std::string newNameEmployee)
    {
        nameEmployee = newNameEmployee;
    }

    void setAgeEmployee(int newAgeEmployee)
    {
        ageEmployee = newAgeEmployee;
    }

    void setMarriedStatus(bool married)
    {
        marriedStatus = married;
    }

    void setDocumentEmployee(std::string document)
    {
        documentEmployee = document;
    }

    void getInfo()
    {
        std::cout << nameEmployee << "\t" << ageEmployee << "\t" << documentEmployee << "\t" << marriedStatus << std::endl;
    }
};

class Vehicle : public Company
{
private:
    std::string registrationNumber = "12345678";
    int wheelCount = 2;
    std::string material = "metal";
    int passengersCount = 1;

public:
    Vehicle(std::string material)
        : material(material) {}

    Vehicle(std::string material, std::string companyName, std::string country)
        : Company(companyName, country), material(material) {}

    Vehicle(std::string registrationNumber, int wheelCount, int passengersCount, std::string companyName, std::string country)
        : Company(companyName, country), registrationNumber(registrationNumber), wheelCount(wheelCount), passengersCount(passengersCount) {}

    Vehicle(std::string registrationNumber, int wheelCount, int passengersCount)
        : registrationNumber(registrationNumber), wheelCount(wheelCount), passengersCount(passengersCount) {}

    Vehicle(std::string companyName, std::string country)
        : Company(companyName, country) {}

    Vehicle();

    void setRegistrationNumber(std::string getNumber)
    {
        registrationNumber = getNumber;
    }

    void setWheelCount(int count)
    {
        wheelCount = count;
    }

    void setPassengersCount(int pass)
    {
        passengersCount = pass;
    }

    void setMaterial(std::string mat)
    {
        material = mat;
    }

    int getWheelCount()
    {
        return wheelCount;
    }

    std::string getRegistrationNumber()
    {
        return registrationNumber;
    }

    std::string getMaterial()
    {
        return material;
    }

    int getPassengersCount()
    {
        return passengersCount;
    }
};

class Car : public Vehicle
{
private:
    int weight = 1000;
    int mileage;

public:
    Car(int weight, int mileage, std::string companyName, std::string country)
        : Vehicle(companyName, country), weight(weight), mileage(mileage) {}

    Car(std::string registrationNumber, int wheelCount, int passengersCount, std::string companyName, std::string country, int weight, int mileage)
        : Vehicle(registrationNumber, wheelCount, passengersCount, companyName, country), weight(weight), mileage(mileage) {}

    Car(int weight, int mileage, std::string registrationNumber, int wheelCount, int passengersCount)
        : Vehicle(registrationNumber, wheelCount, passengersCount), weight(weight), mileage(mileage) {}

    Car();

    void setMileage(int newMileage)
    {
        mileage = newMileage;
    }

    void setWeight(int newWeight)
    {
        weight = newWeight;
    }
};
class Track : Vehicle
{
private:
    int bladeWidth = 4;
    float weight = 5000;
public:
    Track(int width, float weight, std::string manufacturer, std::string originCountry)
        : Vehicle(manufacturer, originCountry), bladeWidth(width), weight(weight) {}
    Track(int width, float weight, std::string registrationNumber, int circleCount, int passengersCount, std::string manufacturer, std::string originCountry)
        :Vehicle(registrationNumber, circleCount, passengersCount, manufacturer, originCountry), bladeWidth(width), weight(weight) {}
    Track(int width, std::string registrationNumber, int circleCount, int passengersCount)
        : Vehicle(registrationNumber, circleCount, passengersCount), bladeWidth(width) {}





    void setBladeWidth(int width)
    {
        bladeWidth = width;
    }

    void setWeight(float newWeight)
    {
        weight = newWeight;
    }
    int getBladeWidth()
    {
        return bladeWidth;
    }
    float getWeight()
    {
        return weight;
    }
};




int main()
{
    //реализовать связь между классами Vehicle, Employee и Company можно с помощью обычных функций, которые можно реализовать здесь, в main-е.
    //Вместо этого сделал наследование и передал классу Vehicle возможность выбрать производителя и страну производства, что передалось и в Bulldozer
    std::cout << "Hello World!\n";
}