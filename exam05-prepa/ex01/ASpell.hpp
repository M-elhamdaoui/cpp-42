# pragma once
#incluse <iostream>

class ASpell {
    protected :
        std::string name;
        std::string effects;
    public :
        ASpell();
        ASpell(const ASpell& copy);
        ASpell& operator=(const ASpell& copy);
        virtual ~ASpell();
        ASpell(std::string name, std::string effects);
        std::string getName() const;
        std::string getEffects() const;

        ASpell* clone() const;

};