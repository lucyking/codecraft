#include "type.h"
#include "print.h"

void printMap(EdgeInfoDict &m){
    for(auto k = m.begin(); k != m.end(); k++){
        printf("|%d %d %d %d\n",
               k->first.first,k->first.second,
               k->second.first,k->second.second);
    }
}