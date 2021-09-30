// 14.1 studentc.h -- defining a Student class using containment
#ifndef _STUDENTC_H_
#define _STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>

class Student {
	private:
		typedef std::valarray<double> ArrayDb;
		std::string name; 	// contained object
		ArrayDb scores; 		// contained object
		// private method for scores output
		std::ostream & arr_out(std::ostream & os) const;
	public:
		Student() : name("Null Student"), scores() {}
		explicit Student(const std::string & s)
			: name(s), scores() {}
		explicit Student(int n) : name("Nully"), scores(n) {}
		Student(const std::string & s, int n)
			: name(s), scores(n) {}
		Student(const std::string & s, const ArrayDb & a)
			: name(s), scores(a) {}
		~Student() {}
		double Average() const;
		const std::string & Name() const;
		double & operator[](int i);
		double operator[](int i) const;
		// friends
		// input
		friend std::istream & operator>>(std::istream & is,
																			Student & stu); 	// 1 word
		friend std::istream & getline(std::istream & is,
																		Student & stu);
		// output
		friend std::ostream & operator<<(std::ostream & os,
																		const Student & stu);
};

#endif
