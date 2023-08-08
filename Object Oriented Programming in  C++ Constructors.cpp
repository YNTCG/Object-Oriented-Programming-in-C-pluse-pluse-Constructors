#include <iostream>

using std::string;
class Employee
{
//protected:
//private:
public:
	string Name;
	string Company;
	string Postion;
	int Age;
	int Id_number;
	


	void IntroduceYourSelf() { // function
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Postion - " << Postion << std::endl;
		std::cout << "Age - " << Age << std::endl;
		std::cout << "Id_number - " << Id_number << std::endl;
	}//private:
    
	Employee(string name, string company,string postion,int age,int id_number) {
		Name = name;
		Company = company;
		Postion = postion;
		Age = age;
		Id_number = id_number;
	}
};
int main()
{

	Employee employee1 = Employee("Me","BB","Engineer",25,1112);
	employee1.IntroduceYourSelf();


	Employee employee2 = Employee("Him", "AA","Programmer", 45, 1332);
	employee2.IntroduceYourSelf();
	
	
}


