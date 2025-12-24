#include <iostream>
#include <string>

class Component {
    public: 
        std::string type;
        int value;
    
};

class Resistor : public Component{
    public:
    
};

class VoltageSource : public Component{
    public:
    
};

class CurrentSource : public Component{
    public:
    
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

