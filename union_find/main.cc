#include <iostream>
#include <algorithm>
#include <vector>

#include "../util/print_util.h"

using namespace std;

//node번호가 1부터 시작한다면, 1값으로 수정
constexpr int START_NODE_INDEX = 0;

vector<int> initParents(int size) {
  vector<int> parents(size, 0);

  int i = 0;
  generate(parents.begin(), parents.end(), [&i]() {
      return i++;
      });

  return parents;
}

int findParent(vector<int>& parents, int node_num) {
  //root까지 경로 압축
  if ( parents[node_num] != node_num ) {
    parents[node_num] = findParent(parents, parents[node_num]);
  }
  return parents[node_num];
}

void unionParent(vector<int>& parents, int node_a, int node_b) {
  node_a = findParent(parents, node_a);
  node_b = findParent(parents, node_b);
  if ( node_a < node_b ) {
    parents[node_b] = node_a;
  }
  else {
    parents[node_a] = node_b;
  }
}

bool hasSameParent(vector<int>& parents, int node_a, int node_b) {
  if ( findParent(parents, node_a) == findParent(parents, node_b) ) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  vector<int> parents{initParents(5)};

  PRINT_AND_CALL(unionParent(parents, 0, 1));
  PRINT_AND_CALL(unionParent(parents, 0, 2));

  PRINT_FUNC(hasSameParent(parents, 1, 2) == false);
  if ( hasSameParent(parents, 1, 2) == false ) {
    PRINT_AND_CALL(unionParent(parents, 1, 2));
  }
}
