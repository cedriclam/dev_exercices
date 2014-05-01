#include "dev_exercices/exercice.h"

#include <unordered_map>

namespace dev_exercices {

bool AreAllUnique(const std::string &iString){
	typedef std::unordered_map<char,int> hashMap;

	hashMap aCharIterationMap;

	for(const char& c : iString) {
		// each time the c char we increment
		// the integer corresponding to the char in the hashMap
		if ((++aCharIterationMap[c]) > 1){
			// if superior to 1 it means the a charcheter is not unique
			return false;
		}
	}

	return true;
}

}  // namespace dev_exercices
