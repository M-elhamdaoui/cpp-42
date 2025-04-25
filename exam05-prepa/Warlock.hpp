# pragma once

# include <iostream>

class Warlock {
    private:
        std::string name;
        std::string title;
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        std::string getName() const;
        std::string getTitle() const;

        void setTitle(std::string title);
        void introduce() const;
};