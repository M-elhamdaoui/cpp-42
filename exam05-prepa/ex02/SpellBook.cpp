
#include "SpellBook.hpp"

SpellBook::~SpellBook() {
}

SpellBook::SpellBook() {
}



void SpellBook::learnSpell( ASpell* aSplell ) {
    std::map<std::string, ASpell *>::iterator it = this->spells.find(aSplell->getName());
    if (it == this->spells.end()) {
        this->spells[aSplell->getName()] = aSplell->clone();
    }
}
void SpellBook::forgetSpell( const std::string& name ) {
    std::map<std::string, ASpell *>::iterator it = this->spells.find(name);
    if (it != this->spells.end()) {
        delete it->second;
        this->spells.erase(name);
    }
}

ASpell* SpellBook::createSpell( const std::string& name ) {
    std::map<std::string, ASpell *>::iterator it = this->spells.find(name);
    if (it != this->spells.end()) {
        return it->second->clone();
    }
    return (NULL);
}