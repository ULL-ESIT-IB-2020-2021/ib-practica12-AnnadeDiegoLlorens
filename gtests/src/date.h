#ifndef DATE_H
#define DATE_H

class Date {
 private:
  int year_{};
  int month_{};
  int day_{};
 
 public:
  Date(int year = 2000, int month = 1, int day = 1) 
		   : year_{year}, month_{month}, day_{day} {}
  int year() const { return year_; }
  int month() const { return month_; }
  int day() const { return day_; }
	friend std::ostream& operator<<(std::ostream &out, const Date &date);
	friend bool operator== (const Date &d1, const Date &d2);
	friend bool operator> (const Date &d1, const Date &d2);
};

std::string ToString(const Date $date);
 
#endif
