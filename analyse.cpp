//
// Created by root on 3/29/17.
//

#include "type.h"

void sortEdgeInfoDict(EdgeInfoDict &m) {
    int a, b;
    for (auto k = m.begin(); k != m.end();) {
        if (k->first.first > k->first.second) {
            b = k->first.first;
            a = k->first.second;
            m.erase(k++);
            m[make_pair(a, b)] = make_pair(k->second.first, k->second.second);
        }
        else {
            k++;
        }
    }
}

NodeCapDict sumNodeCap(EdgeInfoDict &m) {
    NodeCapDict re;
    int node = 0, sum = 0;
    for (auto k = m.begin(); k != m.end(); k++) {
        if (node == k->first.first) {
            sum += k->second.first;
        }
        else if (node != k->first.first) {
            re[make_pair(sum, node)] = node;

            node = k->first.first;  // init [node && sum]
            sum = k->second.first;
        }
    }
    re[make_pair(sum, node)] = node;
    return re;
}


