#ifndef PHYSICALSTATE_H
#define PHYSICALSTATE_H

#include <fstream>
#include <string>
#include <iostream>

class PhysicalState{
    private:
    std::string sleep;
    std::string energy;
    std::string exercise;

    public:
    PhysicalState() = default;

    PhysicalState(std::string eepy, std::string nrg, std::string exorcist)
        : sleep(eepy), energy(nrg), exercise(exorcist)
    {}

    void setSleep(std::string eepy){ sleep = eepy; }
    void setEnergy(std::string nrg){ energy = nrg; }
    void exercised(std::string exorcist){ exercise = exorcist;}

    std::string getSleep() const { return sleep; }
    std::string getEnergy() const { return energy; }
    std::string getExercise() const { return exercise; }

    void inputInfo(){
        std::cout << "\n===========Physical State===========" << std::endl;
        std::cout << "How many hours did you sleep?" << std::endl;
        std::getline(std::cin, sleep);
        std::cout << "What was your energy level today?(1-10)" << std::endl;
        std::getline(std::cin, energy);
        std::cout << "Did you exercise today?" << std::endl;
        std::getline(std::cin, exercise);
        std::cout << "\n==================================" << std::endl;
    }

    void printInfo(std::ostream &outLog = std::cout) const{
        outLog << "Hours slept: "  << getSleep()        << std::endl;
        outLog << "Energy level: " << getEnergy()       << std::endl;
        outLog << "Exercised? "    << getExercise()     << std::endl;
    }
};

#endif