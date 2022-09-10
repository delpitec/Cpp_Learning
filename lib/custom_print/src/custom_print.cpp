#include "custom_print.h"

namespace custom_print{

    void PrintDecimal(double value, unsigned int dotQuantity, bool printEndLine){
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(dotQuantity);

        if (printEndLine){
            cout << value << endl;
        }
        else{
            cout << value << " ";
        }
    }

    void PrintTextWithDecimal(string inputText, double value, unsigned int dotQuantity, bool printEndLine){
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(dotQuantity);

        if (printEndLine){
            cout << inputText << " " << value << endl;
        }
        else{
            cout << inputText << " " << value << " ";
        }
    }

}