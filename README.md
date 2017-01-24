# Data Structure 2016

# Lecture Log

### (2017-Jan-04) 
We discussed why we need to learn data structure. Also, the material, links, class forums are introduced. A very primitive introduction to C++ is given. See [01-05](01-05) for example. 

### (2016-Jan-9)
See [01-09](01-09). We practice using code::block, the IDE for this class. We start with a very basic data structure called `pair`. We familiarize ourself with the notion of _Template_, i.e., specification of types into a class. For example, `pair<int,string>` is a data structure that holds `int` and `string` together.

**In-class exercise:** Follow the example on the screen and try to compile it.

**Topics:** `std::pair`, using template class (such as pair<int,int>), `std::vector`

### (2016-Jan-11)
See [01-11](01-11). We talked about vector. A vector is a _smart_ array. It works like an array such that we can access its element by numeric indices such as v[0], v[1], v[400]. Moreover, vector does not require us to declare its size. It can extend itself to cover the items that we put in it. Several access and modifier function are given such as `insert()`, `delete()`, `front()`, `pop_back()`, etc. A simple usage of iterator is discussed. We know how to use `begin()`, `end()` and some basic arithmatic of iterator. A reference for the STL is given. 

**In-class exercise:** Write a code that access the specific element in the array.

**Topics:** `std::vector` and some of its method, basic iterator, How to read the document of each data structure.

### (2016-Jan-23)
See [01-23](01-23). We considered more in-depth usage of data structure through a problem of _counting the number of unique words_. It is shown that this can be done by iterating over all text and maintaining a collection of words that we have seen so far. The number of words in the collections is the answer. However, maintaining a list of word and checking if a text that we have just read is in the collection is somewhat non-trivial. With different implementation using different kind of collection (array, vector, set), the running time varies greately. 

`std::set` is discussed. It is a data structure that represent a set of unique element. The method `insert()`, `find()` is demonstrated. 

**In-class exercise:** Extending the concept of fast finding member in a collection of data, the student is tasked with the problem of _pair_sum_,  findind whether there are a pair of integer in the given list that their summation equal to the query.

**Topics:** `std::set`, `std::find` function and `std::set.find()`. How to access value of the iterator via `*` operator. _wordcount_ problem.
