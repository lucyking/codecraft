//
// Created by root on 3/29/17.
//
#ifndef CDN_ANALYSE_H
#define CDN_ANALYSE_H

#include "type.h"

void sortEdgeInfoDict(EdgeInfoDict &m);

NodeCapDict sumNodeCap(EdgeInfoDict &m);

NodeCapDict sumNodeCap2(EdgeInfoDict &m, int nodesize);

int sumClientCost(ClientInfoDict &m);

EdgeInfoDict genFullDict(int n_node, int server_price, EdgeInfoDict e, ClientInfoDict c);

#endif //CDN_ANALYSE_H
