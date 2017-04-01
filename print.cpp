#include <iostream>
#include "type.h"
#include "print.h"

using namespace std;

void printEdgeMap(EdgeInfoDict &m) {
    cout << ">>>>>>EdgeInfoDict<<<<<<\n";
    for (auto k = m.begin(); k != m.end(); k++) {
        printf("|%d %d %d %d\n",
               k->first.first, k->first.second,
               k->second.first, k->second.second);
    }
    cout << endl;
}

void printClientMap(ClientInfoDict &m) {
    printf("Cost Client Neighbour\n");
    for (auto k = m.begin(); k != m.end(); k++) {
        printf("!%d %d %d\n",
               k->first.first, k->first.second,
               k->second);
    }
    cout << endl;
}

void printNodeCapMap(NodeCapDict &m) {
    int i = 0;
    auto k = m.end();
    k--;
    cout << "##############\n";
    for (;; k--) {
        i++;
//        if (i>10) break;
//        std::cout<<i++<<endl;
//        printf("sum:%d <node:%d sum:%d>\n",k->first,k->second.first,k->second.second);
//        printf("node:%d sum:%d\n",k->second.first,k->second.second);
        printf("sum:%d node:%d\n", k->first.first, k->first.second);
        if (k == m.begin())
            break;
    }
}

void evulateNodeCap(NodeCapDict &m, int sum_cost) {
    int s = 0, i = 1;
    auto k = m.end();
    k--;
    for (;; k--, i++) {
        s += k->first.first;
        printf("sum:%d node:%d \ttotal cap:%d\t#%d\n", k->first.first, k->first.second, s, i);
        if (s > sum_cost || k == m.begin())
            break;
    }
}

