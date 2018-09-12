/* Copyright (C) 2018 cerkiewny - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please write to: , or visit :
 *
 * https://opensource.org/licenses/BSD-2-Clause 
 */

#include <string>

namespace CPPHDL {

    template <typename storage>
    class type {

        public:
            type(std::string name, bool defined);
            
        private:
            bool is_defined;
            std::string name;
            storage value;
    }
}
