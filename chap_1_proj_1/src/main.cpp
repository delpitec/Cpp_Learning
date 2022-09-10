/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 1 | Project 1                                                                          */
/* Author: Rafael Del Pino                                                                        */
/* Read a cereal breakfast packet weight in ounces and and displays the weight in tons as         */
/* well as the number of packets is necessary to produce a cereal tonne.                          */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

namespace po = boost::program_options;
using namespace std;

// Aux function to find packates per tons
double PackageQuantityCalculator(double ouncePerPacket){
    const double AToneIsThisValueOunces = 35273.92;
    return AToneIsThisValueOunces/ouncePerPacket;
}

int main(int ac, char* av[])
{
    
    try {
        double weight = 0.0;        

        po::options_description desc("Allowed options");
        desc.add_options()
            ("help,h", "Produce this help menu")
            ("weight,w", po::value<double>(&weight)->value_name("NUM")->required(), "Weight per package in ounce")
        ;

        po::variables_map vm;        
        po::store(po::parse_command_line(ac, av, desc), vm);    

        if (vm.count("help")) {
            cout << desc << "\n";
            return 0;
        }

        // Notify that --help is optional and --weigh is mandatory
        po::notify(vm);

        if (vm.count("weight")) {
            printf("Each package has %.2f tons.\n", calculator::OunceToTonne(weight));
            printf("One ton has %.2f packages.\n", PackageQuantityCalculator(weight));
        } 
    }
    catch(exception& e) {
        cerr << "error: " << e.what() << "\n";
        return 1;
    }
    catch(...) {
        cerr << "Unknown error has occured. Contact code author.\n";
    }

    return 0;
}
