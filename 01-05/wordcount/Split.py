import re
import heapq
from collections import defaultdict
from collections import Counter

def split(text):
    return [e for e in re.split(r'[^a-zA-Z0-9]',text) if len(e) > 0]

def wordFreq(filename) :
    freq = defaultdict(int)
    infile = open(filename)
    for line in infile:
        for w in split(line) :
            freq[w.lower()] += 1
    infile.close()
    return freq

def top(freq, n):
    ## return Counter(freq).most_common(n)
    topn = []
    i = 0
    for w in freq:
        if i < n:
            heapq.heappush(topn,(freq[w],w))
            i += 1
        else:
            if freq[w] > topn[0][0]:
                heapq.heappushpop(topn,(freq[w],w))
    return [w for f,w in sorted(topn, reverse=True)]

##-------- M A I N -------------------------------------

freq = wordFreq("aesop.txt")
print("#unique words = ", len(freq))
top10 = top(freq,10)
for w in top10:
    print(freq[w],"-->",w)

