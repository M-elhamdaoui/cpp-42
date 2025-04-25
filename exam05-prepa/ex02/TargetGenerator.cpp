#include "TargetGenerator.hpp"



TargetGenerator::TargetGenerator() {

}
TargetGenerator::~TargetGenerator() {

}

void TargetGenerator::learnTargetType( ATarget* target ) {    
    std::map<std::string, ATarget *>::iterator it = this->targets.find(target->getType());
    if (it == this->targets.end()) {
        this->targets[target->getType()] = target->clone();
    }
}
void TargetGenerator::forgetTargetType( const std::string& type )  {
    std::map<std::string, ATarget *>::iterator it = this->targets.find(type);
    if (it != this->targets.end()) {
        delete it->second;
        this->targets.erase(type);
        // this->targets[target->getType()] = target->clone();
    }
}
ATarget* TargetGenerator::createTarget(const std::string& type ) {
    std::map<std::string, ATarget *>::iterator it = this->targets.find(type);
    if (it != this->targets.end()) {
        return (it->second->clone());
    }
    return (NULL);
}