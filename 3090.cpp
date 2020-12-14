#include <cstdio>
#include <cassert>
#include "partial.hpp"
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char **argv){
	FILE *in = fopen(argv[1],"r");
    FILE *sol = fopen(argv[2],"r");
	FILE *out = fopen(argv[3],"r");
    Partial partial(argc, argv);
    int total_data = stoi(string(argv[7]));
    int n;
    long long t;
    fscanf(in,"%d %lld",&n,&t);
    vector<long long> a(n);
    for (int i=0; i<n; i++) {
        fscanf(in,"%lld",&a[i]);
    }
    vector<long long> b(n);
    for (int i=0; i<n; i++) {
        fscanf(sol,"%lld",&b[i]);
    }
    long long ans = abs(b[0] - b[1]);
    for (int i=1; i<n-1; i++) {
        long long temp = abs(b[i] - b[i+1]);
        if (temp > ans) ans = temp;
    }
    long long diff = 0;
    fclose(in);
    fclose(sol);
    for (int i=0; i<n; i++) {
        assert(fscanf(out,"%lld",&b[i]) == 1);
        assert(1 <= b[i] && b[i] <= a[i]);
        diff += a[i] - b[i];
    }
    assert (diff <= t);
    long long yourans = abs(b[0] - b[1]);
    for (int i=1; i<n-1; i++) {
        long long temp = abs(b[i] - b[i+1]);
        if (temp > yourans) yourans = temp;
    }
    long long temp;
    assert(fscanf(out,"%lld",&temp) != 1);
    double score =  100*(double)(ans+1)/(double)(yourans+1)/(double)total_data;
    partial.set_score(score);
    return 0;
}
