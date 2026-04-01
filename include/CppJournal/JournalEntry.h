#ifndef JOURNALENTRY_H
#define JOURNALENTRY_H

#include <fstream>
#include <string>
#include <chrono>
#include <ctime>
#include "Emotions.h"
#include "PhysicalState.h"
#include "Reflection.h"
#include "DailyPlan.h"

class JournalEntry {
    private:
        std::string date;
        Emotions emotion;
        PhysicalState physical;
        Reflection reflection;
        DailyPlan plan;

    public:
        JournalEntry(){
            auto internalTime = std::chrono::system_clock::now();

            std::time_t secondsTime = std::chrono::system_clock::to_time_t(internalTime);

            std::tm* currentTime = std::localtime(&secondsTime);

            char actualDate[11];
            std::strftime(actualDate, sizeof(actualDate), "%m/%d/%Y", currentTime);

            date = std::string(actualDate);
        }

        JournalEntry(const std::string &d, Emotions e, Reflection r, PhysicalState p, DailyPlan dp)
                    : date(d), emotion(e), physical(p), reflection(r), plan(dp) {}

        void setDate(std::string d) { date = d; }

        void fullEntry(){
            emotion.inputInfo();
            physical.inputInfo();
            reflection.inputInfo();
            plan.inputInfo();
        }

        void enterEmotion(){
            emotion.inputInfo();
        }

        void enterPhysical(){
            physical.inputInfo();
        }

        void enterReflection(){
            reflection.inputInfo();
        }

        void enterPlan(){
            plan.inputInfo();
        }

        Emotions& getEmotions() { return emotion; }
        PhysicalState& getPhysical() { return physical; }
        Reflection& getReflection() { return reflection; }
        DailyPlan& getPlan() { return plan; }

        void DisplayEntry(std::ostream &outLog = std::cout){
            outLog << "Date: "<< date    << std::endl;
            outLog << "===========Emotions==========="       << std::endl;
            emotion.printInfo(outLog);
            outLog << "===========Physical State===========" << std::endl;
            physical.printInfo(outLog);
            outLog << "===========Reflection==========="     << std::endl;
            reflection.printInfo(outLog);
            outLog << "===========Daily Plan==========="     << std::endl;
            plan.printInfo(outLog);
            outLog << "==============================" << std::endl;
        }
};

#endif