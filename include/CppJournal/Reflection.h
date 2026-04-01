#ifndef REFLECTION_H
#define REFLECTION_H

#include <fstream>
#include <string>
#include <iostream>

class Reflection{
    private:
    std::string summary;
    std::string experience;
    std::string rating;

    public:
    Reflection() = default;

    Reflection(std::string sum, std::string exp, std::string rate)
        : summary(sum), experience(exp), rating(rate)
    {}

    void setSummary(std::string sum){ summary = sum; }

    void setExperience(std::string exp){ experience = exp; }

    void setRating(std::string rate){ rating = rate; }

    std::string getSummary() const { return summary;}

    std::string getExperience() const { return experience;}

    std::string getRating() const { return rating; }

    void inputInfo(){
        std::cout << "\n===========Daily Reflection===========" << std::endl;
        std::cout << "Summarize your day: "            << std::endl;
        std::getline(std::cin, summary);
        std::cout << "What went well/poorly? "         << std::endl;
        std::getline(std::cin, experience);
        std::cout << "How would you rate today?(1-10)" << std::endl;
        std::getline(std::cin, rating);
        std::cout << "\n==================================" << std::endl;
    }

    void printInfo(std::ostream &outLog = std::cout) const{
        outLog << "Log: "                   << getSummary()    << std::endl;
        outLog << "Noteworthy experience: " << getExperience() << std::endl;
        outLog << "Overall rating: "        << getRating()     << std::endl;
    }
};

#endif