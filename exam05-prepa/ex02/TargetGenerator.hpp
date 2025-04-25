# pragma once

# include <iostream>

#include <map>

#include "ATarget.hpp"

class ATarget;

class TargetGenerator {
    private:
        std::map<std::string, ATarget *> targets;

    public:
        TargetGenerator();
        ~TargetGenerator();
    
        void learnTargetType( ATarget* target );
        void forgetTargetType( const std::string& type ) ;
        ATarget* createTarget(const std::string& type );
};