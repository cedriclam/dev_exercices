#include "dev_exercices/exercice.h"

namespace dev_exercices {

	void reverseString(std::string &ioString){
		if (ioString.empty()) {
			return;
		}

		int length = ioString.length();
		char tmpChar;

		for (int i = 0; i < (length/2); ++i){
			tmpChar = ioString[i];
			ioString[i] = ioString[length - (i+1)];
			ioString[length- (i+1)] = tmpChar;
		}
	}
}  // namespace dev_exercices
