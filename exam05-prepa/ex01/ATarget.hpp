# pragma once

#include <iostream>

class ATarget {
    private :
        std::string type;
    public :
        ATarget();
        ATraget(const ATarget& copy);
        ATarget& operator=(const ATarget& copy);
        virtual ~ATarget();

        std::string getType() const;
        ATarget* clone() const;
};