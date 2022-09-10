#include <boost/program_options.hpp>
#include <iostream>
#include <sstream>
namespace po = boost::program_options;

bool process_command_line(int argc, char** argv,
                          std::string& host,
                          std::string& port,
                          std::string& configDir)
{
    int iport;

    try
    {
        po::options_description desc("Program Usage", 1024, 512);
        desc.add_options()
          ("help",     "produce help message")
          ("host,h",   po::value<std::string>(&host)->required(),      "set the host server")
          ("port,p",   po::value<int>(&iport)->required(),             "set the server port")
          ("config,c", po::value<std::string>(&configDir)->required(), "set the config path")
        ;

        po::variables_map vm;
        po::store(po::parse_command_line(argc, argv, desc), vm);

        if (vm.count("help"))
        {
            std::cout << desc << "\n";
            return false;
        }

        // There must be an easy way to handle the relationship between the
        // option "help" and "host"-"port"-"config"
        // Yes, the magic is putting the po::notify after "help" option check
        po::notify(vm);
    }
    catch(std::exception& e)
    {
        std::cerr << "Error: " << e.what() << "\n";
        return false;
    }
    catch(...)
    {
        std::cerr << "Unknown error!" << "\n";
        return false;
    }

    std::stringstream ss;
    ss << iport;
    port = ss.str();

    return true;
}

int main(int argc, char** argv)
{
  std::string host;
  std::string port;
  std::string configDir;

  bool result = process_command_line(argc, argv, host, port, configDir);
  if (!result)
      return 1;

  // else
  std::cout << "host:\t"   << host      << "\n";
  std::cout << "port:\t"   << port      << "\n";
  std::cout << "config:\t" << configDir << "\n";

  // Do the main routine here
}

/*
#include "main.h"

namespace po = boost::program_options;
using namespace std;

int main(int ac, char* av[])
{
    try { 
        // Define a multi-token option.
        po::options_description desc("Allowed options");
        desc.add_options()
            ("list", po::value<std::vector<std::string>>()->multitoken(), "multiple values");

        // Just parse the options without storing them in a map.
        po::parsed_options parsed_options = po::command_line_parser(ac, av)
            .options(desc)
            .run();

        // Build list of multi-valued option instances. We iterate through
        // each command-line option, whether it is repeated or not. We
        // accumulate the values for our multi-valued option in a
        // container.
        std::vector<std::vector<std::string>> lists;
        for (const po::option& o : parsed_options.options) {
            if (o.string_key == "list")
                lists.push_back(o.value);
        }



        // If we had other normal options, we would store them in a map
        // here. In this demo program it isn't really necessary because
        // we are only interested in our special multi-valued option.
        po::variables_map vm;
        po::store(parsed_options, vm);

        // Print out the multi-valued option, each separate instance on its
        // own line.
        for (size_t i = 0; i < lists.size(); ++i) {
            for (size_t j = 0; j < lists[i].size(); ++j)
                std::cout << lists[i][j] << ' ';
            std::cout << '\n';
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
*/