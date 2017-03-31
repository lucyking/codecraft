//
// Created on 3/27/17.
//

#ifndef CDN_TYPE_H
#define CDN_TYPE_H

#include <map>

using namespace std;
typedef pair<int, int> Edge;     //<start,dest>
typedef pair<int, int> EdgeInfo; //<capacity,cost>
typedef map<Edge, EdgeInfo> EdgeInfoDict;
typedef map<pair<int, int>, int> ClientInfoDict; // < <cost,#clint>, #neighbour > ,
// using **cost** as the 1st key for map's auto sort

typedef pair<int, int> NodeCap;
typedef map<NodeCap, int> NodeCapDict; // <sum_flow,<node_index,sum_flow>>

#endif //CDN_TYPE_H
