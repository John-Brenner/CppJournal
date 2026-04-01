#ifndef DAILYPLAN_H
#define DAILYPLAN_H

#include <fstream>
#include <string>
#include <iostream>

class DailyPlan {
    private:
        std::string primary;
        std::string secondary;
        std::string tertiary;
        std::string quarternary;
        std::string quinary;
        std::string senary;
        std::string septenary;
        int activeEntries = 0;

    public:
        DailyPlan() = default;

        DailyPlan(std::string pri, std::string sec, std::string tert, std::string quar, std::string quin, std::string sen, std::string sept)
                  : activeEntries(0), primary(pri), secondary(sec), tertiary(tert), quarternary(quar), quinary(quin), senary(sen), septenary(sept){}

        void setPrimary(std::string pri){ primary = pri; }
        void setSecondary(std::string sec){ secondary = sec; }
        void setTertiary(std::string tert){ tertiary = tert; }
        void setQuarternary(std::string quar){ quarternary = quar; }
        void setQuinary(std::string quin){ quinary = quin; }
        void setSenary(std::string sen){ senary = sen; }
        void setSeptenary(std::string sept){ septenary = sept; }

        std::string getPrimary() const { return primary; }
        std::string getSecondary() const { return secondary; }
        std::string getTertiary() const { return tertiary; }
        std::string getQuarternary() const { return quarternary; }
        std::string getQuinary() const { return quinary; }
        std::string getSenary() const { return senary; }
        std::string getSeptenary() const { return septenary; }

        void inputInfo(){
            std::cout << "\n===========Today's Plan===========" << std::endl;
            std::string userChoice = "yes";
                while(activeEntries < 7){
                    switch(activeEntries){
                        case 0:
                            std::cout << "What is the non-negotiable activity today?" << std::endl;
                            std::getline(std::cin, primary);
                            break;
                        case 1:
                            std::cout << "What else is on the docket?(1 entered)" << std::endl;
                            std::getline(std::cin, secondary);
                            break;
                        case 2:
                            std::cout << "What else is on the docket?(2 entered)" << std::endl;
                            std::getline(std::cin, tertiary);
                            break;
                        case 3:
                            std::cout << "What else is on the docket?(3 entered)" << std::endl;
                            std::getline(std::cin, quarternary);
                            break;
                        case 4:
                            std::cout << "What else is on the docket?(4 entered...busy bee)" << std::endl;
                            std::getline(std::cin, quinary);
                            break;
                        case 5:
                            std::cout << "What else is on the docket?(5 entered...really?)" << std::endl;
                            std::getline(std::cin, senary);
                            break;
                        case 6:
                            std::cout << "What else is on the docket?(6 entered...bruv)" << std::endl;
                            std::getline(std::cin, septenary);
                            break;
                }
                activeEntries++;
                std::cout << "Have another one to enter?" << std::endl;
                std::getline(std::cin, userChoice);
                if(userChoice != "yes" && userChoice != "Yes") break;
                }
                std::cout << "\n==================================" << std::endl;
        }

        void printInfo(std::ostream &outLog = std::cout) const{
            for(int i = 0; i < activeEntries; i++){
                switch(i){
                    case 0:
                        outLog << "1. The Non-Negotiable: " << getPrimary() << std::endl;
                        break;
                    case 1:
                        outLog << "2. " << getSecondary() << std::endl;
                        break;
                    case 2:
                        outLog << "3. " << getTertiary() << std::endl;
                        break;
                    case 3:
                        outLog << "4. " << getQuarternary() << std::endl;
                        break;
                    case 4:
                        outLog << "5. " << getQuinary() << std::endl;
                        break;
                    case 5:
                        outLog << "6. " << getSenary() << std::endl;
                        break;
                    case 6:
                        outLog << "7. " << getSeptenary() << std::endl;
                        break;

                }
            }
        }
};
#endif