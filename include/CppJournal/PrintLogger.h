#ifndef PRINTLOGGER_H
#define PRINTLOGGER_H

#include <fstream>
#include <string>
#include <iostream>

class PrintLogger {
    public:
        void printJournal(JournalEntry& journal){
            std::ofstream outLog("journal_entries.txt", std::ios::app);
            if(outLog.is_open()) {
                journal.DisplayEntry(outLog);
                outLog.close();
                std::cout << "Successfully Logged :)" << std::endl;
            }   else {
                std::cerr << "FAILED TO LOG THE INFORMATION" << std::endl;
            }
        }
};
#endif