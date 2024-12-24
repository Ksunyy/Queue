#include <iostream>

#include <vector>

template <class T>
class Queue{

private:
	int last;
	std::vector<T> data;

public:

	Queue(int n){
		if (n < 0) throw "wrong value";
		data = std::vector<T>(n);
		last = -1;
	}



	void pop() {
		if (last < 0 ) throw "queue is empty";
		T tmp = data[0];
		for (int i = 0; i < last; ++i) {
			data[i - 1] = data[i];
		}
		last--;

	}

	void push(const T val) {
		last++;
		data[last] = val;

	}


	T top() {
		if (last < 0) throw "queue is empty";
		return data[last];
	}

	int get_size() {
		 return last + 1;
	}

	bool empty() {
		return (last < 0);
	}

};



