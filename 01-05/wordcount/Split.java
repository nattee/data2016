import java.util.*;
import java.io.*;

public class Split {

  static List<String> split(String text) {
    List<String> tokens = new ArrayList<String>();
    for (String e : text.split("[^a-zA-Z0-9]")) {
      if (e.length() > 0) tokens.add(e);
    }
    return tokens;
  }
  //--------------------------------------------------------
  static Map<String, Integer> wordFreq(String filename) throws IOException {
      Scanner infile = new Scanner(new File(filename));
      Map<String, Integer> freq = new HashMap<String, Integer>();
      String line;
      while (infile.hasNext()) {
          line = infile.nextLine();
          for (String w : split(line)) {
              w = w.toLowerCase();
              if (freq.containsKey(w)) {
                freq.put(w, freq.get(w) + 1);
              } else {
                freq.put(w, 1);
              }
          }
      }
      infile.close();
      return freq;
  }
  //---------------------------------------------------------
  static List<String> top(Map<String, Integer> freq, int n) {
    class Pair implements Comparable {
      int freq;
      String word;
      Pair(int f, String w) {
        freq = f; word = w;
      }
      public int compareTo(Object obj) {
        Pair that = (Pair) obj;
        return this.freq - that.freq;
      }
    }
    PriorityQueue<Pair> topfreq = new PriorityQueue<Pair>();
    int i = 0;
    for (String w : freq.keySet()) {
      if (i++< n) {
        topfreq.add(new Pair(freq.get(w), w));
      } else {
        if (freq.get(w) > topfreq.peek().freq) {
          topfreq.poll();
          topfreq.add(new Pair(freq.get(w), w));
        }
      }
    }
    List<String> topn = new ArrayList<String>();
    while (!topfreq.isEmpty()) {
      topn.add(topfreq.poll().word);
    }
    Collections.reverse(topn);
    return topn;
  }
  //---------------------------------------------------------
  public static void main(String[] args) throws IOException {
    Map<String, Integer> freq = wordFreq("aesop.txt");
    System.out.println("#unique words = " + freq.size());
    List<String> top10 = top(freq, 10);
    for (String w : top10) {
      System.out.println(freq.get(w) + ", " + w);
    }
  }
}  
