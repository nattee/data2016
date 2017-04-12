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
    std::vector<T> v;
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
      return max;
    }

    void push(const T& element) {
      if (element > max) max = element;
      v.push_back(element);
    }

    void pop() {
      auto it_max = begin();
      for (int i = 0;i < v.size();i++) {
        if (v[i] > *it_max) {
          it_max = begin() + i;
        }
      }
      v.erase(it_max);
      for (int i = 0;i < v.size();i++) {
        if (v[i] > max) max = v[i];
      }
    }


};

}

#endif


