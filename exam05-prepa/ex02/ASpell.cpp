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

    ASpell::ASpell(const std::string& name, const std::string& effects) {
        this->name = name;
        this->effects = effects;
    }
    
    const std::string& ASpell::getName() const {
            return (this->name);
    }

    const std::string& ASpell::getEffects() const {
        return (this->effects);
    }

    void ASpell::launch(const ATarget& target) const {
        target.getHitBySpell(*this);
    }