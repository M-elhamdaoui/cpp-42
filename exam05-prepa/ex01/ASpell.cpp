# include "ASpell.hpp"

    ASpell::ASpell() {
        this->name = "Default_name";
        this->effects = "Default_effects";
    }
   
    ASpell::ASpell(const ASpell& copy) {
        this->name = copy.getName();
        this->effects = copy.getEffects();
    }

    ASpell& ASpell::operator=(const ASpell& copy) {
        if (this != &copy)
        {
            this->name = copy.getName();
            this->effects = copy.getEffects();
        }
        return (*this);
    }
    
    ASpell::~ASpell() {

    }

    ASpell::ASpell(std::string name, std::string effects) {
        this->name = name;
        this->effects = effects;
    }
    
    std::string ASpell::getName() const {
            return (this->name);
    }

    std::string ASpell::getEffects() const {
        return (this->effects);
    }
    ASpell* ASpell::clone() const {
        return (this);
    }