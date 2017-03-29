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
typedef map<Edge,int> ClientInfoDict;

typedef pair<int,int> NodeCap;
typedef map<NodeCap,int> NodeCapDict; // <sum_flow,<node_index,sum_flow>>

#endif //CDN_TYPE_H
