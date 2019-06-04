#ifndef _COCYCLE_H
#define _COCYCLE_H

#include <vector>
#include <cstddef>


class Cocycle{
	public:
		// birth index
		size_t index;

		// non-zero entries
		// IMPORTANT: this is assumed to always be sorted!
		std::vector<int> cochain;

		// we should never have this
		Cocycle() : index(-1){}

		// initializations
		Cocycle(int x) : index(x) {cochain.push_back(x); }
		Cocycle(int x, std::vector<int> y) :  index(x) , cochain(y) {}

		// for debug purposes
		void insert(int x);

		// add two cocycles over Z_2
		void add(const Cocycle &x);

		// dot product of two cocycles
		int dot(const Cocycle &x) const;

		// dimension - number of nonzero entries -1
		int dim() const;

		// debug function
		void print();

};



#endif
