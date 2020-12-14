#include <cstdio>
#include <cassert>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
int main(int argc, char **argv){
    FILE *in = fopen(argv[1],"r");
    FILE *sol = fopen(argv[2],"r");
    FILE *out = fopen(argv[3],"r");
    int n;
    fscanf(in,"%d",&n);
    fclose(in);
    int ans;
    fscanf(sol,"%d",&ans);
    fclose(sol);
    int yourans;
    assert(fscanf(out,"%d",&yourans)==1);
    assert(ans == yourans);
    int a, b;
    assert(fscanf(out,"%d",&a)==1);
    assert(n == a);
    for (int i=0; i<yourans; i++) {
        assert(fscanf(out,"%d",&b)==1);
        assert(a-1 == b || (a%2 == 0 && a/2 == b) || (a%3 == 0 && a/3 == b));
        a = b;
    }
    assert(a == 1);
    assert(fscanf(out,"%d",&b) != 1);
    return 0;
}
