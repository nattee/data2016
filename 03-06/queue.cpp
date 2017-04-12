#include <vector>
#include <iostream>

using namespace std;

namespace CP {
	template <typename T>
	class queue {
		protected:
			vector<T> mVect;

		public:
			queue() 				{  }
			queue(const queue<T>& a) 	{ mVect = a.mVect; }
			~queue()   			{ }
			//------------- capacity function ----------
			bool   empty() 			{ return mVect.emty(); // return (size() == 0);
      }
			size_t size() 			{ return mVect.size(); }
			//----------------- access -----------------
			const T& front()			{ return mVect[0]; // return mVect.front()
      }
			const T& back()			{ return mVect[mVect.size()-1]; // return mVect.back()
      }
			//----------------- modifier ---------------
			void push(const T& e)		{  mVect.push_back(e); }
			void pop() 			{  mVect.erase(mVect.begin()); }
	};
}


int main() {
  CP::queue<int> q;
  //use it
  //
  int n = 2000000;
  for (int i = 0;i < n;i++) {
    q.push(i);
  }
  for (int i = 0;i < n;i++) {
    q.pop();
  }

}
