# pragma once

#include <iostream>



class ASpell;

class ATarget {
    private :
        std::string type;
    public :
        ATarget();
        ATarget(const std::string& type);
        ATarget(const ATarget& copy);
        ATarget& operator=(const ATarget& copy);
        virtual ~ATarget();

        const std::string& getType() const;
        virtual ATarget* clone() const = 0;
        void getHitBySpell(const ASpell   &attacker) const;
};


#include "ASpell.hpp"