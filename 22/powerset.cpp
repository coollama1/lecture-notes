#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <set>
using std::set;

/* TODO: if you haven't already, try to write the powerset function.
 * The main idea is in the notes.
 * A prototype might look something like this. */
set<set<int> > powerSet(set<int>& S);
/* NOTE: you will probably find this challenging. */

int main()
{
	/* TODO: test code goes here */
	#if 0 /* uncomment when you are ready to test... */
	set<int> S = {0,1,2};
	set<set<int> > P = powerSet(S);
	cout << "{\n";
	for (set<set<int> >::iterator i = P.begin(); i!=P.end(); i++) {
		cout << "  {";
		for (set<int>::iterator j = (*i).begin(); j!=(*i).end(); j++) {
			cout << *j << " ";
		}
		cout << "},\n";
	}
	cout << "}\n";
	#endif
	return 0;
}
