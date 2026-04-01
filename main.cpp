#include <fstream>
#include <string>
#include <iostream>
#include "JournalEntry.h"
#include "DisplayMenu.h"
#include "PrintLogger.h"

int main(){
    #ifdef _WIN32
    system("title My Daily Journal");
    #endif
    JournalEntry todaysJournal;
    DisplayMenu menu;
    PrintLogger pl;
    int choice = 0;

    while(choice != 6){
        menu.showOptions();
        std::cin >> choice;

        std::cin.ignore(1000, '\n');

        menu.processChoice(choice, todaysJournal);
    }

    pl.printJournal(todaysJournal);

    return 0;
}