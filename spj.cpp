#include <cstdio>
#include <cassert>
int main(int argc, char **argv){
    FILE *in = fopen(argv[1],"r");
    FILE *sol = fopen(argv[2],"r");
    FILE *out = fopen(argv[3],"r");
    fclose(in);
    fclose(sol);
    fclose(out);
    return 0;
}
