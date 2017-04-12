#ifndef _CP_PRIORITY_QUEUE_INCLUDED_
#define _CP_PRIORITY_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
#include <vector>
//#pragma once

namespace CP {

template <typename T>

class priority_queue
{
  protected:
    std::vector<T> v; //sort from min to max
    int max;

  public:
    //-------------- constructor ----------

    // copy constructor
    priority_queue() {
      max = INT_MIN;
    }

    // default constructor


    ~priority_queue() {
    }

    //------------- capacity function -------------------
    bool empty() const {
      return v.empty();
    }

    size_t size() const {
      return v.size();
    }

    //----------------- access -----------------
    const T& top() {
      return v.back();
    }

    void push(const T& element) {
      // v.push_back(element);
      // v is not sorted from min to max because of "element"
      // fix it.... in O(n)
      // cannot use sort(v.begin(), v.end()); because it's O(n lg n)
//      std::vector<T>::reverse_iterator itr = v.rbegin();
//      while(itr != v.rend() && *itr > element ) itr++;
//      v.insert(itr-1, element);
      v.push_back(element);
      for (int i = v.size()-1;i >= 0;i--) {
        if (v[i] < element) {
          break;
        } else {
          std::swap(v[i],v[i-1]);
        }
      }
    }

    void pop() {
      v.pop_back();
    }


};

}

#endif


