# pragma once

# include <iostream>

#include <map>

#include "ASpell.hpp"

class ASpell;

class SpellBook {
    private:
        std::map<std::string, ASpell *> spells;

    public:
        SpellBook();
        ~SpellBook();
    
        void learnSpell( ASpell* aSplell );
        void forgetSpell( const std::string& name ) ;
        ASpell* createSpell(const std::string& name);
};