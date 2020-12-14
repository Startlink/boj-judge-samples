#!/usr/bin/python3

import sys

infile = sys.argv[1]
solfile = sys.argv[2]
outfile = sys.argv[3]

fp = open(infile,'r')
fp.close()

fp = open(solfile,'r')
fp.close()

fp = open(outfile,'r')
fp.close()

sys.exit(0)
