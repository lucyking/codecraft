//
// Created by root on 3/29/17.
//
#ifndef CDN_ANALYSE_H
#define CDN_ANALYSE_H
#include "type.h"
void sortEdgeInfoDict(EdgeInfoDict &m);
NodeCapDict sumNodeCap(EdgeInfoDict &m);
NodeCapDict sumNodeCap2(EdgeInfoDict &m, int nodesize);

#endif //CDN_ANALYSE_H
