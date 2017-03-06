#include <vector>
#include <iostream>

namespace CP {
	template <typename T>
	class queue {
		protected:
			vector<T> mVect;

		public:
			queue() 				{  }
			queue(const queue<T>& a) 	{  }
			~queue()   			{  }
			//------------- capacity function ----------
			bool   empty() 			{  }
			size_t size() 			{  }
			//----------------- access -----------------
			const T& front()			{  }
			const T& back()			{  }
			//----------------- modifier ---------------
			void push(const T& e)		{  }
			void pop() 			{  }
	};
}


void main() {
  CP::queue q;
  //use it

}
