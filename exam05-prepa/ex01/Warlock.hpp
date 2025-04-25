# pragma once

# include <iostream>

#include <map>

#include "ASpell.hpp"

class ASpell;

class Warlock {
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *> spells;

    public:
        Warlock( const std::string& name,const std::string& title);
        ~Warlock();
        const std::string& getName() const;
        const std::string& getTitle() const;

        void setTitle(const std::string& title);
        void introduce() const;


        void learnSpell( ASpell* aSplell );
        void forgetSpell( const std::string& name ) ;
        void launchSpell(const std::string& name, const ATarget& aTarget );
};