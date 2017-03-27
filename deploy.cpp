#include "deploy.h"
#include <stdio.h>
#include <vector>
#include <map>

using namespace std;
typedef pair<int, int> Edge;     //<start,dest>
typedef pair<int, int> EdgeInfo; //<index,weight>
typedef map<Edge, EdgeInfo> EdgeInfoDict;


int n_node = 0;
int n_edge = 0;
int n_client = 0;
int server_price = 0;

//你要完成的功能总入口
void deploy_server(char *topo[MAX_EDGE_NUM], int line_num, char *filename) {


    sscanf(topo[0], "%d %d %d\n", &n_node, &n_edge, &n_client);
    printf("Node:%d Edge:%d Client:%d\n", n_node, n_edge, n_client);

    sscanf(topo[2], "%d\n", &server_price);
    printf("Sever Price: %d\n", server_price);


    int data[4];
    // get EdgeInfo
    // |size| = n_edge
    for (int k = 4; k < n_edge + 4; k++) {
        printf(">>>%s$%lu>", topo[k], sizeof(topo[k]));
        sscanf(topo[k], "%d %d %d %d", data, data + 1, data + 2, data + 3);
        printf("{%d %d %d %d}\n\n", data[0], data[1], data[2], data[3]);
    }

    //get client data
    for(int k= n_edge + 5; k < n_edge+5+n_client;k++){
        printf(">>>%s$%lu>", topo[k], sizeof(topo[k]));
        sscanf(topo[k], "%d %d %d", data, data + 1, data + 2);
        printf("{%d %d %d}\n\n", data[0], data[1], data[2]);

    }



    // 需要输出的内容
    char *topo_file = (char *) "17\n\n0 8 0 20\n21 8 0 20\n9 11 1 13\n21 22 2 20\n23 22 2 8\n1 3 3 11\n24 3 3 17\n27 3 3 26\n24 3 3 10\n18 17 4 11\n1 19 5 26\n1 16 6 15\n15 13 7 13\n4 5 8 18\n2 25 9 15\n0 7 10 10\n23 24 11 23";

    // 直接调用输出文件的方法输出到指定文件中(ps请注意格式的正确性，如果有解，第一行只有一个数据；第二行为空；第三行开始才是具体的数据，数据之间用一个空格分隔开)
    write_result(topo_file, filename);

}
