// base class
class Cd {   // represents a CD disk
	private:
		// char performers[50];
		char * performers;
		// char lable[20];
		char * lable;
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


