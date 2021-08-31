#include "coord.h"
#include "instruments.h"
#include <iostream>

const std::string instruments[] = {"scalpel","hemostat","tweezers","suture"};

bool is_correct_instrument (std::string &instrument) {
    for (int i=0;i < 4;++i) {
        if (instrument == instruments[i]) return true;
    }
    return false;
}

int main() {

    std::string selectInstrument;

    std::cout << "To start the operation enter 'scalpel'" << std::endl;
    std::cout << ">";

    do {
        std::cin >> selectInstrument;
        if (selectInstrument != instruments[0]) std::cout << "Incorrect!Repeat.\n>";
    } while (selectInstrument != instruments[0]);

    Point cutStart, cutFinish, sutureStart, sutureFinish;

    std::cout << "Enter coordinate X Y of start cut: ";
    std::cin >> cutStart.x >> cutStart.y;
    std::cout << "Enter coordinate X Y of finish cut: ";
    std::cin >> cutFinish.x >> cutFinish.y;
    if (cutFinish.x < cutStart.x) std::swap(cutFinish,cutStart);
    scalpel(cutStart, cutFinish);

    do {
        std::cout << "Choose instrument: " << std::endl;
        for (int i=0;i < 4;++i) {
            std::cout << "-" << instruments[i] << std::endl;
        }
        std::cout << ">";
        do {
            std::cin >> selectInstrument;
            if (!is_correct_instrument(selectInstrument)) std::cout << "Incorrect!Repeat.\n>";
        } while (!is_correct_instrument(selectInstrument));

        if (selectInstrument == instruments[0]) {
            Point cutA, cutB;
            cutA = input_coord();
            cutB = input_coord();
            scalpel(cutA,cutB);
        }
        if (selectInstrument == instruments[1]) {
            Point clampingPlace = input_coord();
            hemostat(clampingPlace);
        }
        if (selectInstrument == instruments[2]) {
            Point tweezerPlace = input_coord();
            tweezers(tweezerPlace);
        }
        if (selectInstrument == instruments[3]) {
            sutureStart = input_coord();
            sutureFinish = input_coord();
            suture(sutureStart,sutureFinish);
        }
    } while (!(coincidence_of_points(cutStart,sutureStart) && coincidence_of_points(cutFinish,sutureFinish)));

    std::cout << "Operation completed!" << std::endl;
    return 0;
}
