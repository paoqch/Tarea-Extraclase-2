#include <iostream>
using namespace std;

/**
 * Final product created
 */
class Computer{
    string computer;
    string componets;
    string motherboard;

public:
    Computer(string computerType):computer{
        computerType
    } {}
    void setMotherboard(string type) {
        motherboard = type;
    }
    void setComponents(string body){
        componets = body;
    }
    string getMotherboard(){
        return motherboard;
    }
    string getComponents(){
        return componets;
    }

    void show() {
        cout << "Computer Builder Design Pattern" << endl;
        cout << "Computer Type: " << computer << endl;
        cout << "Components Type: " << componets << endl;
        cout << "Motherboard Type: "<< motherboard << endl << endl;
    }
};

/**
 * Computer Builder Abstract Class
 */
class ComputerBuilder{
protected:
    Computer *computer;
public:
    virtual void getPartsDone() = 0;
    virtual void buildComponents() = 0;
    virtual void buildMotherboard() = 0;
    Computer* getComputer(){ 
        return computer; 
    }
};

/**
 * Computer Builder concrete class it knows how to build Gaming PC
 */ 
class GamingPCBuilder: public ComputerBuilder {
public:
    void getPartsDone(){ 
        computer = new Computer("Gaming PC"); }
    void buildMotherboard(){
        computer->setMotherboard("ASUS ROG Strix X570-E Gaming"); }
    void buildComponents(){ 
        computer->setComponents("Gaming Components"); }
};


/**
 * It builds the Gaming PC in the correct order
 */
class Director{
    ComputerBuilder *builder;
public:
    Computer* createComputer(ComputerBuilder *builder) {
        builder->getPartsDone();
        builder->buildComponents();
        builder->buildMotherboard();
        return builder->getComputer();
    }
};

