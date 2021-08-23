#ifndef PLORG_H_
#define PLORG_H_
class Plorg
{
	static const int LEN = 19;
	char m_name[LEN + 1]; 		// 1 for the null terminator
	int m_ci;
	public:
		// initialized Plorg object
		Plorg(const char name[] = "Plorga", int ci = 50);

		// updates ci
		void update_ci(int ci);

		// shows game
		void show() const;
};
#endif
