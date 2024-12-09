#include "Transformer.h"

class MockTransformer : public Transformer {
public:
    MockTransformer(std::string name = "Optimus Prime", std::string model = "Meteor", int power = 1000, const Pilot& pilot = Pilot(), Weapon weapon = Weapon())
        : Transformer(name, model, power, pilot, weapon) {
        destructorCalled = false; 
    }

    ~MockTransformer() { destructorCalled = true; }


    void transform() override {
    
    }

    void openFire() override {
        
    }

    void ultra() override {
   
    }

    bool destructorCalled = false; 
};
