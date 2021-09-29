#include "cd.h"

class Classic : public Cd
{
	private:
		char * work;
	public:
		Classic(const char * w, const char * pf,
				const char * la, int s, double pt);
		Classic(const Classic & d);
		Classic();
		~Classic();
		void Report() const;
		Classic & operator=(const Classic & d);
};
