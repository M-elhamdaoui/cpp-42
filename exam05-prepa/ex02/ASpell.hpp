# pragma once

#include <iostream>

#include "ATarget.hpp"

class ASpell {
    protected :
        std::string name;
        std::string effects;
    public :
        ASpell();
        ASpell(const ASpell& copy);
        ASpell& operator=(const ASpell& copy);
        virtual ~ASpell();
        ASpell(const std::string& name, const std::string& effects);
        const std::string& getName() const;
        const std::string& getEffects() const;

        virtual ASpell* clone() const = 0;

        void launch(const ATarget& target) const  ;
};