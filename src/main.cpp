/* Copyright (C) 2018 cerkiewny - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please write to: , or visit :
 *
 * https://opensource.org/licenses/BSD-2-Clause 
 */

#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include <iostream>

int main(int argc, char* argv[])
{
    try {

        po::options_description desc("Allowed options");
        desc.add_options()
            ("help", "produce help message")
            ("input-file", po::value<std::string>(), "compiler entry file")
            ("vhdl-std", po::value<std::string>()->default_value("vhdl87"), "version of standard used options: vhdl87")
        ;
        po::positional_options_description p;
        p.add("input-file", -1);

        po::variables_map vm;

        po::store(po::command_line_parser(argc, argv).options(desc).positional(p).run(), vm);
        po::notify(vm); 

        if (vm.count("vhdl-std")) {
            std::cout << "using vhdl standard " << vm["vhdl-std"].as<std::string>() << std::endl; 
        }
        if (!vm.count("input-file")) {
            std::cout << "no input file specified" << std::endl;
        }
        if (vm.count("help")) {
            std::cout << desc << std::endl;
            return 0;
        }
    }
    catch(std::exception& e) {
        std::cerr << "error: " << e.what() << std::endl;
        return 1;
    }
    catch(...) {
        std::cerr << "Exception of unknown type!" << std::endl;
    }

    return 0;
}
