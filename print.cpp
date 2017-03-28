#include <iostream>
#include "type.h"
#include "print.h"
using namespace std;

void printEdgeMap(EdgeInfoDict &m){
    for(auto k = m.begin(); k != m.end(); k++){
        printf("%d %d %d %d\n",
               k->first.first,k->first.second,
               k->second.first,k->second.second);
    }
    cout<<endl;
}

void printClientMap(ClientInfoDict &m){
    for(auto k = m.begin(); k != m.end(); k++) {
        printf("%d %d %d\n",
               k->first.first, k->first.second,
               k->second);
    }
    cout<<endl;
}

