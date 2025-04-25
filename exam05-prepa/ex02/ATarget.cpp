# include "ATarget.hpp"
#include "ASpell.hpp"

    ATarget::ATarget() {
        this->type = "Defualt type";
    }
     ATarget::ATarget(const std::string& type) {
        this->type = type;
    }
    ATarget::ATarget(const ATarget& copy) {
        this->type = copy.getType();
    }
    ATarget& ATarget::operator=(const ATarget& copy) {
        if (this != &copy)
            this->type = copy.getType();
        return (*this);
    }

    ATarget::~ATarget() {

    }

    const std::string& ATarget::getType() const {
        return (this->type);
    }

     void ATarget::getHitBySpell(const ASpell &attacker) const {
        std::cout << this->getType() << " has been " << attacker.getEffects() << "!" << std::endl;
    }