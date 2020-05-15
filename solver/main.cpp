#include <iostream>

using namespace std;

class Equation {
public:
    virtual float execute() = 0;

    static Equation* parseExpression(string equation) {
        // TODO ....
        //return new Operando(...)
    }
};

class Operando : Equation {
protected:
    float value;

public:
    float execute() override {
        return value;
    }
};

class Variable : Operando {
    string name;

public:
    Variable(string name) : name(name) {}

    float execute() override {
        // .. TODO get variable value
        if (!exists(name)) {
            cout << "Inserta el valor de la variable " << name << ": ";
            cin >> value;
            save(name, value);
        } else {
            value = obtain(name);
        }
        return value;
    }
};

class Operator : Equation {
protected:
    Operator* left;
    Operator* right;

public:
    virtual float execute() = 0;
};

class Plus : Operator {
public: 
    float execute() override {
        return left->execute() + right->execute();
    }
};

/*class Constant : Operation {
    float value;

    public:
    float execute() override {
        return value;
    }
};*/

int main(int argc, char *argv[]) {
    cout << "Hello world" << endl;

    // + * - / ^ () Variables
    //auto equation = Equation::parseExpression("5+3-5*a/2");
    auto equation = Equation::parseExpression("a+3-5*6/(a-2)");
    // equation.askForVariables();
    // Ingrese el valor de la variable a:
    // 3
    auto result = equation->execute();
    cout << "The result is: " << result << endl;

    return EXIT_SUCCESS;
}