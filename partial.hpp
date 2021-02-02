#pragma once
#include <cassert>
#include <string>
#include <iostream>
#include <cstdio>

class Partial {
    private:
        int solution_id;
    public:
        Partial(const int argc, const char *const argv[]) {
            assert(argc > 4);
            this->solution_id = std::stoi(std::string(argv[4]));
            std::cout << solution_id << std::endl;
            set_score(0);
        }
        ~Partial() {

        }
        void set_score(int score) {
            std::cout << "set_score int" << score << std::endl;
        }
        void set_score(double score) {
            std::cout << "set_score double" << score << std::endl;
        }
};
