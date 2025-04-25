# include "ATarget.hpp"

    ATarget::ATarget() {
        
    }
    ATraget(const ATarget& copy);
    ATarget& operator=(const ATarget& copy);
    virtual ~ATarget();
    std::string getType() const;