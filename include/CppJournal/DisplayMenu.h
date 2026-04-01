#ifndef DISPLAYMENU_H
#define DISPLAYMENU_H

#include <fstream>
#include <iostream>
#include <string>
#include "JournalEntry.h"

class DisplayMenu {
    public:
        void showOptions() {
            std::cout << "\n===========Journal Menu===========" << std::endl;
            std::cout << "What would you like to enter?" << std::endl;
            std::cout << "1. Everything" << std::endl;
            std::cout << "2. Emotion Check" << std::endl;
            std::cout << "3. Physical State Tracker" << std::endl;
            std::cout << "4. Daily Reflection" << std::endl;
            std::cout << "5. Today's Planned Activities" << std::endl;
            std::cout << "6. Exit" << std::endl;
            std::cout << "\n==================================" << std::endl;
        }

        void processChoice(int choice, JournalEntry& journal){
            switch(choice){
                case 1:
                    journal.fullEntry();
                    break;
                case 2:
                    journal.enterEmotion();
                    break;
                case 3:
                    journal.enterPhysical();
                    break;
                case 4:
                    journal.enterReflection();
                    break;
                case 5:
                    journal.enterPlan();
                    break;
                case 6:
                    std::cout << "Later gator" << std::endl;
                    break;
            }
        }
};

#endif