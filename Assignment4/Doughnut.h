#if !defined(DOUGHNUT_H)
#define DOUGHNUT_H

#include <string>
#include <vector>
#include "Classic.h"

using namespace std;

class Doughnut
{
    public:
        Doughnut();
        ~Doughnut();
        
    private:
        int FindNumNeighbors();
};

#endif