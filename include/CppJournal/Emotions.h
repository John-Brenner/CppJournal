#ifndef EMOTIONS_H
#define EMOTIONS_H

#include <fstream>
#include <string>
#include <iostream>

class Emotions {
    private:
    std::string name;
    std::string definition;
    std::string location;
    std::string triggers;
    std::string activity;
    std::string felt;
    
    public:
    Emotions() = default;

    Emotions(std::string nam, std::string def, std::string loc, std::string trig, std::string act, std::string flt)
        : name(nam), definition(def), location(loc), triggers(trig), activity(act), felt(flt)
    {}

    void setName(std::string nam){ name = nam; }

    void setDefinition(std::string def){ definition = def; }

    void setLocation(std::string loc){ location = loc; }

    void setTriggers(std::string trig){ triggers = trig; }

    void setActivity(std::string act){ activity = act; }

    void wasFelt(std::string flt){ felt = flt; }

    std::string getName() const { return name; }

    std::string getDefinition() const { return definition; }

    std::string getLocation() const { return location; }

    std::string getTriggers() const { return triggers; }

    std::string getActivity() const { return activity; }

    std::string getFeel() const { return felt; }

    void inputInfo(){
        std::cout << "\n===========Emotion Check===========" << std::endl;
        std::cout << "What is today's emotion?" << std::endl;
        std::getline(std::cin, name);
        std::cout << "How would you define it?" << std::endl;
        std::getline(std::cin, definition);
        std::cout << "Where do you feel it in your body?" << std::endl;
        std::getline(std::cin, location);
        std::cout << "What has triggered this for you before?" << std::endl;
        std::getline(std::cin, triggers);
        std::cout << "Did you have to evoke it?" << std::endl;
        std::getline(std::cin, activity);
        std::cout << "Did you feel it today?" << std::endl;
        std::getline(std::cin, felt);
        std::cout << "\n==================================" << std::endl;
    }

    void printInfo(std::ostream &outLog = std::cout) const{
        outLog << "Definition: " << getDefinition() << std::endl;
        outLog << "Location: "   << getLocation()   << std::endl;
        outLog << "Trigger(s): " << getTriggers()   << std::endl;
        outLog << "Actions: "    << getActivity()   << std::endl;
        outLog << "Got? "        << getFeel()       << std::endl;
    }

};

#endif