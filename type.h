//
// Created on 3/27/17.
//

#ifndef CDN_TYPE_H
#define CDN_TYPE_H

#include <map>
using namespace std;
typedef pair<int, int> Edge;     //<start,dest>
typedef pair<int, int> EdgeInfo; //<index,weight>
typedef map<Edge, EdgeInfo> EdgeInfoDict;
typedef map<Edge,int> ClientInfoDict;

#endif //CDN_TYPE_H
