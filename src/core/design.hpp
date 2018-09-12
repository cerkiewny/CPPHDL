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

#include <unordered_map>
#include <string>

#include "entity.hpp";
#include "types.hpp";

namespace CPPHDL {

    class design {
   
        public: 
            design(std::string name);
            void save_to_file(std::string filename);

        private:
            std::string name;
            unordered_map<std::string, entity *> entities_lookup;
            unordered_map<std::string, type *> types_lookup;
    }
}
