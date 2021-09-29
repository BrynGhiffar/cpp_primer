#ifndef _CD_H_
#define _CD_H_
// base class
class Cd {   // represents a CD disk
	private:
		char performers[50];
		char lable[20];
		int selections;
		double playtime;
	public:
		Cd(const char * pf, const char * la, int s, double pt);
		Cd(const Cd & d);
		Cd();
		virtual ~Cd();
		virtual void Report() const; // reports all CD data
		Cd & operator=(const Cd & d);
};

#endif
