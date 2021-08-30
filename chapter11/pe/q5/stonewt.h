// 11.16 stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
	private:
		enum {Lbs_per_stn = 14}; 			// pounds per stone
		enum Mode {STONE, DPOUNDS, IPOUNDS};
		int stone; 										// whole stones
		double pds_left;  						// fractional pounds
		double pounds; 								// entire weight in pounds
		Mode mode;
	public:
		Stonewt(double lbs); 					// constructor for double pounds
		Stonewt(int stn, double lbs); // constructor for stone, lbs
		Stonewt();
		~Stonewt();
		// void show_lbs() const; 				// show weight in pounds format
		// void show_stn() const; 				// show weight in stone format
		void to_int_pounds();
		void to_double_pounds();
		void to_stone();
		Stonewt operator+(const Stonewt & s2) const;
		Stonewt operator-(const Stonewt & s2) const;
		Stonewt operator*(double n) const;
		friend Stonewt operator*(double n, const Stonewt & s2);
		friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};

#endif
