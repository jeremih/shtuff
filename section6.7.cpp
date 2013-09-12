#include <vector>
using std::vector;

int greatest_commmon_factor (int i, int i2) {
	int i3 = (i > i2) ? i2 : i;
	int i4 = (i < i2) ? i2 : i;
	if (!(i4 % i3)) {
		return i3;
	}
	--i3;
	while ((i2 % i3 != 0) || (i % i3 != 0)) {
		--i3;
	}
	return i3;
}