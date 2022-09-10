/*------------------------------------------------------------------------------------------------*/
/*                                                                                                */
/* Chapter 1 | Project 3                                                                          */
/* Author: Rafael Del Pino                                                                        */
/* Workers at one particular company received a 7.6% raise backdated to six months.               */
/* Write a program that takes an employee's previous annual salary as input and presentation as   */
/* output the amount of retroactive pay due to the employee, the new annual salary, and the new   */
/* monthly salary. Use a variable declaration or const modifier to increase the pay increase.     */
/*                                                                                                */
/*------------------------------------------------------------------------------------------------*/
#include "main.h"

namespace po = boost::program_options;
using namespace std;

int main(int ac, char* av[])
{
    const double percentIncrease = 7.6;
    double salaryInput;

    try { 

        po::options_description desc("Allowed options");
        desc.add_options()
            ("help,h", "Produce this help menu")
            ("year-salary,y", po::value<double>(&salaryInput)->value_name("NUM"), "Last year total salary")
            ("salary,s", po::value<double>(&salaryInput)->value_name("NUM"), "Last year monthly salary")
        ;

        po::variables_map vm;        
        po::store(po::parse_command_line(ac, av, desc), vm);
        po::notify(vm);    

        // If --help or no args: will show options descriptions
        if (vm.count("help") || (!vm.count("year-salary") && !vm.count("salary"))) {
            cout << desc << "\n";
            return 0;
        }
        else if (vm.count("year-salary")) {
            printf("Total pending ammount: R$%.2f\n", (calculator::PercentValue(percentIncrease, salaryInput / 12) * 6));
            printf("New year salary: R$%.2f\n", salaryInput + (calculator::PercentValue(percentIncrease, salaryInput)));
            printf("New monthly salary: R$%.2f\n", (salaryInput + (calculator::PercentValue(percentIncrease, salaryInput))) / 12);
        } 
        else if (vm.count("salary")){
            printf("Total pending ammount: R$%.2f\n", (calculator::PercentValue(percentIncrease, salaryInput) * 6));
            printf("New year salary: R$%.2f\n", (salaryInput + (calculator::PercentValue(percentIncrease, salaryInput))) * 12);
            printf("New monthly salary: R$%.2f\n", salaryInput + (calculator::PercentValue(percentIncrease, salaryInput)));
        }
        else{
            ;
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
