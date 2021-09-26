#ifndef MOVE_H_
#define MOVE_H_
class Move
{
	private:
		double x;
		double y;
	public:
		// sets x, y to a, b
		Move(double a = 0, double b = 0); 	
		// shows current x, y values
		void showmove() const;
		// this function adds x of m to x of invoking object to get new x,
		// adds y of m to y of invoking object to get new y, creates new
		// move object initialized to new x, y values and returns it
		Move add(const Move & m) const;
		// resets x, y to a, b
		void reset(double a = 0, double b = 0);
};
#endif
