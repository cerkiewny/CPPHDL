/* Copyright (C) 2018 cerkiewny - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please write to: , or visit :
 *
 * https://opensource.org/licenses/BSD-2-Clause 
 */

#pragma once

#include <string>
#include <vector>

#include "port" 

namespace CPPHDL {


    class entity {
        public:

            std::string name;
            std::vector<ports> ports;

        private:
            std::unordered_map<std::string, entity> children; 
            std::vector<connection> connections;
        

    }
}
