
double calculateWage(double, double);

double calculateWage(double salary, double hours_per_week)
{
	double hours_per_year = hours_per_week * 50;

    double wage = salary / hours_per_year;    
	return wage;
}