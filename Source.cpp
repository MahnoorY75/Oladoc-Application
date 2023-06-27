#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class Payment
{
private:
	string Gateway;
	string Payment_Status;
	int Amount;
public:
	Payment()
	{
		Gateway = "";
		Payment_Status = "";
		Amount = 0;
	}
	void Set_Gateway(string Element)
	{
		Gateway = Element;
	}
	void Set_Payment(string Element)
	{
		Payment_Status = Element;
	}
	void Set_Amount(int Element)
	{
		Amount = Element;
	}

	string Get_Gateway()
	{
		return Gateway;
	}

	string Get_Payment_Stat()
	{
		return Payment_Status;
	}

	int Get_Amount()
	{
		return Amount;
	}

};

class Feedback
{
private:
	int Rating;
	string Patients_Review;
	string Doctors_Review;
public:
	Feedback()
	{
		Rating = 0;
		Patients_Review = "NO REVIEW";
	}
	void Set_Rating(int Element)
	{
		Rating = Element;
	}
	void Set_pReview(string Element)
	{
		Patients_Review = Element;
	}
	void Set_dReview(string Element)
	{
		Doctors_Review = Element;
	}

	int	Get_Rating()
	{
		return Rating;
	}
	string Get_pReview()
	{
		return Patients_Review;
	}
	string Get_dReview()
	{
		return Doctors_Review;
	}
};

class User
{
private:
	string Username;
	string Password;
public:
	User()
	{
		Username = "";
		Password = "";
	}

	void Set_Username(string Element)
	{
		Username = Element;
	}

	void Set_Password(string Element)
	{
		Password = Element;
	}

	string Get_Username()
	{
		return Username;
	}

	string Get_Password()
	{
		return Password;
	}
};

class Admin : public User
{
private:
	string Name;
	string Cnic;
public:
	Admin()
	{
		Name = "";
		Cnic = "";
	}

	void Set_Name(string Element)
	{
		Name = Element;
	}

	void Set_Cnic(string Element)
	{
		Cnic = Element;
	}

	string Get_Name()
	{
		return Name;
	}

	string Get_Cnic()
	{
		return Cnic;
	}
};

class Patient : public User
{
private:
	string Name;
	string Cnic;
	string Phone_No;
	int Balance;
public:
	Patient()
	{
		Name = "";
		Cnic = "";
		Phone_No = "";
		Balance = 3500;
	}

	void Set_Name(string Element)
	{
		Name = Element;
	}


	void Set_Cnic(string Element)
	{
		Cnic = Element;
	}

	void Set_Phone_No(string Element)
	{
		Phone_No = Element;
	}

	void Set_Balance(int Element)
	{
		Balance = Element;
	}

	string Get_Name()
	{
		return Name;
	}

	string Get_Cnic()
	{
		return Cnic;
	}

	string Get_Phone()
	{
		return Phone_No;
	}

	int Get_Balance()
	{
		return Balance;
	}
};

class Doctor : public User
{
private:
	string Email;
	string Name;
	string Cnic;
	string Spaciallization;
	string Spaciallization2;
	string Phone_No;
	int Experience;
	string Working_Hospital;
	string City;
	int Start_Time;
	int End_Time;
public:
	Doctor()
	{
		Name = "";
		Cnic = "";
		Spaciallization = "";
		Phone_No = "";
		Email = "";
	}

	int Rating;
	int Number_Of_Patients;
	int Balance;
	string Availablity;
	int Video_Rates;
	int Person_Rates;

	void Set_Name(string Element)
	{
		Name = Element;
	}

	void Set_Email(string Element)
	{
		Email = Element;
	}

	void Set_Cnic(string Element)
	{
		Cnic = Element;
	}

	void Set_Spaciallization(string Element)
	{
		Spaciallization = Element;
	}

	void Set_Spaciallization2(string Element)
	{
		Spaciallization2 = Element;
	}

	void Set_Phone_No(string Element)
	{
		Phone_No = Element;
	}
	void Set_StartTime(int Element)
	{
		Start_Time = Element;
	}
	void Set_EndTime(int Element)
	{
		End_Time = Element;
	}
	void Set_Experience(int Element)
	{
		Experience = Element;
	}
	void Set_WorkingHospital(string Element)
	{
		Working_Hospital = Element;
	}
	void Set_City(string Element)
	{
		City = Element;
	}

	string Get_Name()
	{
		return Name;
	}

	string Get_Cnic()
	{
		return Cnic;
	}

	string Get_Spaciallization()
	{
		return Spaciallization;
	}

	string Get_Spaciallization2()
	{
		return Spaciallization2;
	}

	string Get_Phone_No()
	{
		return Phone_No;
	}

	string Get_Email()
	{
		return Email;
	}
	int Get_StartTime()
	{
		return Start_Time;
	}
	int Get_EndTime()
	{
		return End_Time;
	}
	int Get_Experience()
	{
		return Experience;
	}
	string Get_WorkingHospital()
	{
		return Working_Hospital;
	}
	string Get_City()
	{
		return City;
	}


};

class Hospitals
{
public:
	string City;
	string Hospital;
};

class Appointments
{
private:
	string Location;
	string Type;
	int Booked_Day;
	int App_Day;
	string Time_Slot;
	string Status;
public:
	Doctor Doctor_App;
	Patient Patient_App;
	Feedback Fb;
	Payment Pay;
	string Spaciallization;
	Appointments()
	{
		Location = "None";
	}
	void Set_Location(string Element)
	{
		Location = Element;
	}
	void Set_Type(string Element)
	{
		Type = Element;
	}
	void Set_BookDay(int Element)
	{
		Booked_Day = Element;
	}
	void Set_AppDay(int Element)
	{
		App_Day = Element;
	}
	void Set_Time_Slot(string Element)
	{
		Time_Slot = Element;
	}
	void Set_Status(string Element)
	{
		Status = Element;
	}
	string Get_Location()
	{
		return Location;
	}
	string Get_Type()
	{
		return Type;
	}
	int Get_BookDay()
	{
		return Booked_Day;
	}
	int Get_AppDay()
	{
		return App_Day;
	}
	string Get_Time_Slot()
	{
		return Time_Slot;
	}
	string Get_Status()
	{
		return Status;
	}
};

int main()
{
	//PREDEFINED SPACIALITIES;
	string Spaciallities[8] = { "Gynecology",
							   "Cardiology",
							   "Psychiatry",
							   "Gastroenterology",
							   "Internal Medicine",
							   "Neurology",
							   "Orthopaedic",
							   "Dermatology" };
	string City[3] = { "Karachi", "Islamabad", "Lahore" };
	int Number_of_Hospitals = 15;
	Hospitals Locations[15];
	Locations[0].City = "Karachi";	  Locations[0].Hospital = "Aga-Khan-Hospital";
	Locations[1].City = "Karachi";	  Locations[1].Hospital = "Memon-Hospital";
	Locations[2].City = "Karachi";	  Locations[2].Hospital = "South-West-Hospital";
	Locations[3].City = "Karachi";	  Locations[3].Hospital = "DHA-Hospital";
	Locations[4].City = "Karachi";    Locations[4].Hospital = "Liaquat-Hospital";
	Locations[5].City = "Islamabad";  Locations[5].Hospital = "PIMS-Hospital";
	Locations[6].City = "Islamabad";  Locations[6].Hospital = "Maroof-Hospital";
	Locations[7].City = "Islamabad";  Locations[7].Hospital = "Medicsi-Hospital";
	Locations[8].City = "Islamabad";  Locations[8].Hospital = "MedCity-Hospital";
	Locations[9].City = "Islamabad";  Locations[9].Hospital = "Shifa-Hospital";
	Locations[10].City = "Lahore";	  Locations[10].Hospital = "National-Hospital";
	Locations[11].City = "Lahore";	  Locations[11].Hospital = "Services-Hospital";
	Locations[12].City = "Lahore";	  Locations[12].Hospital = "Surgimed-Hospital";
	Locations[13].City = "Lahore";	  Locations[13].Hospital = "General-Hospital";
	Locations[14].City = "Lahore";	  Locations[14].Hospital = "MidCity-Hospital";

	int Menu = 0;
	while (Menu != 1)
	{
		/*---------------------------MENU-------------------------------------------*/
	L1:
		Admin Admin_Panel[100];
		Patient Patients[100];
		Doctor Doctors[100];
		Appointments List_Of_Appointments[100];

		int Admin_Members = 0;
		int Number_of_Patients = 0;
		int Number_of_Doctors = 0;
		int Number_of_Appointments = 0;

		/*READING ADMIN FILE*/
		fstream Admin_File;
		string File = "admins.txt";
		Admin_File.open(File);
		int FilePointer = 1;
		string Word;
		while (Admin_File >> Word)
		{
			if (FilePointer % 2 != 0)
			{
				Admin_Panel[Admin_Members].Set_Username(Word);
			}
			if (FilePointer % 2 == 0)
			{
				Admin_Panel[Admin_Members].Set_Password(Word);
				Admin_Members++;
			}
			FilePointer++;
		}
		Admin_File.close();

		/*READING PATIENTS FILE*/
		fstream Pat_File;
		File = "patients.txt";
		Pat_File.open(File);
		FilePointer = 0;
		int FileLine = 0;
		while (Pat_File >> Word)
		{
			if (FilePointer == 5)
			{
				FilePointer = 0;
			}
			if (FilePointer == 0)
			{
				Patients[Number_of_Patients].Set_Cnic(Word);
			}
			if (FilePointer == 1)
			{
				Patients[Number_of_Patients].Set_Password(Word);
			}
			if (FilePointer == 2)
			{
				Patients[Number_of_Patients].Set_Name(Word);
			}
			if (FilePointer == 3)
			{
				Patients[Number_of_Patients].Set_Phone_No(Word);
			}
			if (FilePointer == 4)
			{
				Patients[Number_of_Patients].Set_Balance(stoi(Word));
				Number_of_Patients++;
			}
			FilePointer++;
		}
		Pat_File.close();

		/*READING DOCTORS FILE*/
		fstream Doc_File;
		File = "doctors.txt";
		Doc_File.open(File);
		FilePointer = 0;
		FileLine = 0;
		while (Doc_File >> Word)
		{
			if (FilePointer > 17)
			{
				FilePointer = 0;
			}
			if (FilePointer == 0)
			{
				Doctors[Number_of_Doctors].Set_Email(Word);
			}
			if (FilePointer == 1)
			{
				Doctors[Number_of_Doctors].Set_Cnic(Word);
			}
			if (FilePointer == 2)
			{
				Doctors[Number_of_Doctors].Set_Password(Word);
			}
			if (FilePointer == 3)
			{
				Doctors[Number_of_Doctors].Set_Name(Word);
			}
			if (FilePointer == 4)
			{
				Doctors[Number_of_Doctors].Set_Spaciallization(Word);
			}
			if (FilePointer == 5)
			{
				Doctors[Number_of_Doctors].Set_City(Word);
			}
			if (FilePointer == 6)
			{
				Doctors[Number_of_Doctors].Set_WorkingHospital(Word);
			}
			if (FilePointer == 7)
			{
				Doctors[Number_of_Doctors].Set_StartTime(stoi(Word));
			}
			if (FilePointer == 8)
			{
				Doctors[Number_of_Doctors].Set_EndTime(stoi(Word));
			}
			if (FilePointer == 9)
			{
				Doctors[Number_of_Doctors].Set_Experience(stoi(Word));
			}
			if (FilePointer == 10)
			{
				Doctors[Number_of_Doctors].Set_Phone_No(Word);
			}
			if (FilePointer == 11)
			{
				Doctors[Number_of_Doctors].Rating = stoi(Word);
			}
			if (FilePointer == 12)
			{
				Doctors[Number_of_Doctors].Number_Of_Patients = stoi(Word);
			}
			if (FilePointer == 13)
			{
				Doctors[Number_of_Doctors].Balance = stoi(Word);
			}
			if (FilePointer == 14)
			{
				Doctors[Number_of_Doctors].Availablity = Word;
			}
			if (FilePointer == 15)
			{
				Doctors[Number_of_Doctors].Video_Rates = stoi(Word);
			}
			if (FilePointer == 16)
			{
				Doctors[Number_of_Doctors].Person_Rates = stoi(Word);
			}
			if (FilePointer == 17)
			{
				Doctors[Number_of_Doctors].Set_Spaciallization2(Word);	
				Number_of_Doctors++;
			}
			FilePointer++;
		}
		Doc_File.close();

		fstream App_File;
		File = "appointments.txt";
		App_File.open(File);
		FilePointer = 0;
		while (App_File >> Word)
		{
			if (FilePointer > 15)
			{
				FilePointer = 0;
			}
			
			if (FilePointer == 0)
			{
				for (int i = 0; i < Number_of_Doctors; i++)
				{
					if (Doctors[i].Get_Cnic() == Word)
					{
						List_Of_Appointments[Number_of_Appointments].Doctor_App = Doctors[i];
					}
				}
			}
			if (FilePointer == 2)
			{
				for (int i = 0; i < Number_of_Patients; i++)
				{
					if (Patients[i].Get_Cnic() == Word)
					{
						List_Of_Appointments[Number_of_Appointments].Patient_App = Patients[i];
					}
				}
			}
			if (FilePointer == 4)
			{
				List_Of_Appointments[Number_of_Appointments].Set_Location(Word);
			}
			if (FilePointer == 5)
			{
				List_Of_Appointments[Number_of_Appointments].Set_Type(Word);
			}
			if (FilePointer == 6)
			{
				List_Of_Appointments[Number_of_Appointments].Set_AppDay(stoi(Word));
			}
			if (FilePointer == 7)
			{
				List_Of_Appointments[Number_of_Appointments].Set_BookDay(stoi(Word));
			}
			if (FilePointer == 8)
			{
				List_Of_Appointments[Number_of_Appointments].Set_Time_Slot(Word);
			}
			if (FilePointer == 9)
			{
				List_Of_Appointments[Number_of_Appointments].Set_Status(Word);
			}
			if (FilePointer == 10)
			{
				List_Of_Appointments[Number_of_Appointments].Pay.Set_Amount(stoi(Word));
			}
			if (FilePointer == 11)
			{
				List_Of_Appointments[Number_of_Appointments].Pay.Set_Gateway(Word);
			}
			if (FilePointer == 12)
			{
				List_Of_Appointments[Number_of_Appointments].Fb.Set_Rating(stoi(Word));
			}
			if (FilePointer == 13)
			{
				List_Of_Appointments[Number_of_Appointments].Fb.Set_pReview(Word);
			}
			if (FilePointer == 14)
			{
				List_Of_Appointments[Number_of_Appointments].Fb.Set_dReview(Word);
			}
			if (FilePointer == 15)
			{
				List_Of_Appointments[Number_of_Appointments].Spaciallization = Word;
				Number_of_Appointments++;
			}

			FilePointer++;
		}
		App_File.close();
		

		int Choice = 0;
		cout << "||--------------- MENU ---------------||" << endl;
		cout << "|| PRESS 1,\tTO REGISTER AS ADMIN " << endl;
		cout << "|| PRESS 2,\tTO REGISTER AS DOCTOR " << endl;
		cout << "|| PRESS 3,\tTO REGISTER AS PATIENT " << endl;
		cout << "|| PRESS 4,\tTO LOGIN AS ADMIN " << endl;
		cout << "|| PRESS 5,\tTO LOGIN AS DOCTOR " << endl;
		cout << "|| PRESS 6,\tTO LOGIN AS PATEINT " << endl;
		cout << "|| PRESS 7,\tTO EXIT " << endl;
		cout << "|| ENTER: ";
		cin >> Choice;
		while (Choice > 7 || Choice < 1)
		{
			cout << "|| INVALID CHOICE, ENTER AGAIN: ";
			cin >> Choice;
		}
		/*------------------REGISTERATION OF ADMIN----------------------------------*/
		if (Choice == 1)
		{
			string Username;
			string Password;
			fstream Admin_File;
			string File_Name = "admins.txt";

			cin.ignore();

			bool Repeat = false;
			//USERNAME CHECK
			while (Repeat != true)
			{
				Username = "";
				cout << "\t\t|| ENTER USERNAME: ";
				getline(cin, Username);

				bool Check = false;
				//CHECKING IF USERNAME ALREADY EXSISTS
				Admin_File.open(File_Name);
				int FilePointer = 0;
				string Word;
				while (Admin_File >> Word)
				{
					if (FilePointer % 2 == 0)
					{
						if (Word == Username)
						{
							Check = true;
							cout << "\t\t\tSORRY THE USERNAME ALREADY EXSISTS" << endl;
						}
					}
					FilePointer++;
				}
				if (!Check)
				{
					Repeat = true;
				}
				Admin_File.close();
			}

			//PASSWORD CHECK
			cout << "\t\t|| ENTER PASSWORD: ";
			getline(cin, Password);

			int Symbols = 0;
			int Caps = 0;
			int Smalls = 0;
			int Integers = 0;
			int Lenght = 1;
			for (int i = 0; Password[i] != '\0'; i++)
			{
				Lenght++;
				if (Password[i] >= 'a' && Password[i] <= 'z')
				{
					Smalls++;
				}
				else if (Password[i] >= 'A' && Password[i] <= 'Z')
				{
					Caps++;
				}
				else if (Password[i] >= '0' && Password[i] <= '9')
				{
					Integers++;
				}
				else
				{
					Symbols++;
				}
			}
			int Password_Check = 1;
			if (Symbols >= 1 && Caps >= 1 && Smalls >= 1 && Integers >= 1 && Lenght > 8)
			{
				Password_Check = 0;
			}
			while (Password_Check != 0)
			{
				Symbols = 0;
				Caps = 0;
				Smalls = 0;
				Integers = 0;
				Lenght = 1;
				cout << "\t\t|| ENTER YOUR PASSWORD (>8 ,Symbols, Capital , Small and a Number): ";
				getline(cin, Password);
				for (int i = 0; Password[i] != '\0'; i++)
				{
					Lenght++;
					if (Password[i] >= 'a' && Password[i] <= 'z')
					{
						Smalls++;
					}
					else if (Password[i] >= 'A' && Password[i] <= 'Z')
					{
						Caps++;
					}
					else if (Password[i] >= '0' && Password[i] <= '9')
					{
						Integers++;
					}
					else
					{
						Symbols++;
					}
				}
				if (Symbols >= 1 && Caps >= 1 && Smalls >= 1 && Integers >= 1 && Lenght > 8)
				{
					Password_Check = 0;
				}
			}


			string Write = Username;
			Write += '\t';
			Write += Password;

			ofstream File;
			File.open(File_Name, std::ios_base::app);
			File << Write << endl;
			File.close();

			cout << endl;
			cout << "\t\tREGISTERATION WAS SUCCESSFUL" << endl;
		}

		//------------------REGISTERATION OF DOCTOR---------------------------------//		
		else if (Choice == 2)
		{
			cin.ignore();

			string F_Name;
			cout << "\t\tENTER FIRST NAME (NO SPACES): ";
			getline(cin, F_Name);

			string L_Name;
			cout << "\t\tENTER LAST NAME (NO SPACES): ";
			getline(cin, L_Name);

			string Name = "DR.";
			Name += F_Name;
			Name += '-';
			Name += L_Name;

			//PHONE-NO + CHECK
			string Phone_No;
			cout << "\t\tENTER YOUR PHONE NO: ";
			getline(cin, Phone_No);
			bool Check = false;
			for (int i = 0; i < Phone_No.length(); i++)
			{
				if (Phone_No[i] < '0' || Phone_No[i] > '9')
				{
					Check = true;
				}
			}
			if (Check)
			{
				cout << "\t\tSORRY, ONLY NUMBERS TO BE ENTERED" << endl;
				cout << "\t\tENTER YOUR PHONE NO: ";
				getline(cin, Phone_No);
			}

			//EMAIL VALIDATION
			bool Repeat = false;
			string Email;
			while (Repeat != true)
			{
				Email = "";
				cout << "\t\tENTER YOUR EMAIL: ";
				getline(cin, Email);

				bool Check = false;
				for (int i = 0; i < Number_of_Doctors; i++)
				{
					if (Doctors[i].Get_Email() == Email)
					{
						Check = true;
						cout << "\t\t\tEMAIL ALREADY EXSISTS, TRY WITH A NEW ONE" << endl;
					}
				}
				if (!Check)
				{
					Repeat = true;
				}
			}

			//CNIC CHECK
			Repeat = false;
			string Cnic;
			while (Repeat != true)
			{
				Cnic = "";
				bool Error = false;
				while (Error != true)
				{
					cout << "\t\tENTER YOUR CNIC ( ie, 4210139610453 ): ";
					getline(cin, Cnic);
					int Check = false;
					if (Cnic.length() != 13)
					{
						Check = true;
					}
					for (int i = 0; i < Cnic.length(); i++)
					{
						if (Cnic[i] < '0' || Cnic[i] > '9')
						{
							Check = true;
						}
					}
					if (Check)
					{
						cout << "\t\tSORRY, LENGHT SHOULD BE 13 AND ONLY NUMBERS" << endl;
					}
					if (!Check)
					{
						Error = true;
					}
				}

				bool Check2 = false;
				for (int i = 0; i < Number_of_Doctors; i++)
				{
					if (Doctors[i].Get_Cnic() == Cnic)
					{
						Check2 = true;
						cout << "\t\t\tCNIC ALREADY EXSISTS, TRY WITH A NEW ONE" << endl;
					}

				}
				if (!Check2)
				{
					Repeat = true;
				}
			}

			//PASSWORD CHECK
			string Password;
			cout << "\t\tENTER PASSWORD: ";
			getline(cin, Password);
			int Symbols = 0;
			int Caps = 0;
			int Smalls = 0;
			int Integers = 0;
			int Lenght = 1;
			for (int i = 0; Password[i] != '\0'; i++)
			{
				Lenght++;
				if (Password[i] >= 'a' && Password[i] <= 'z')
				{
					Smalls++;
				}
				else if (Password[i] >= 'A' && Password[i] <= 'Z')
				{
					Caps++;
				}
				else if (Password[i] >= '0' && Password[i] <= '9')
				{
					Integers++;
				}
				else
				{
					Symbols++;
				}
			}
			int Password_Check = 1;
			if (Symbols >= 1 && Caps >= 1 && Smalls >= 1 && Integers >= 1 && Lenght > 8)
			{
				Password_Check = 0;
			}
			while (Password_Check != 0)
			{
				Symbols = 0;
				Caps = 0;
				Smalls = 0;
				Integers = 0;
				Lenght = 1;
				cout << "\t\tENTER YOUR PASSWORD (>8 ,Symbols, Capital , Small and a Number): ";
				getline(cin, Password);
				for (int i = 0; Password[i] != '\0'; i++)
				{
					Lenght++;
					if (Password[i] >= 'a' && Password[i] <= 'z')
					{
						Smalls++;
					}
					else if (Password[i] >= 'A' && Password[i] <= 'Z')
					{
						Caps++;
					}
					else if (Password[i] >= '0' && Password[i] <= '9')
					{
						Integers++;
					}
					else
					{
						Symbols++;
					}
				}
				if (Symbols >= 1 && Caps >= 1 && Smalls >= 1 && Integers >= 1 && Lenght > 8)
				{
					Password_Check = 0;
				}
			}

			cout << "\t\tREGISTERATION WAS SUCCESSFUL" << endl;
			cout << endl;
			cout << "\t\tENTER FURTHER DETAILS" << endl;

			string Spaciallization;
			cout << "\t\tSELECT SPACIALIZATION: " << endl;
			for (int i = 0; i < 8; i++)
			{
				cout << "\t\tPRESS " << i + 1 << ", FOR " << Spaciallities[i] << endl;
			}
			int Choice1;
			cout << "\t\tENTER:";
			cin >> Choice1;
			while (Choice1 > 8 || Choice1 < 1)
			{
				cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
				cin >> Choice1;
			}
			Spaciallization = Spaciallities[Choice1 - 1];

			string New[7];
			for (int i = 0 ,j=0; i < 8; i++)
			{
				if (Spaciallities[i] != Spaciallities[Choice1 - 1])
				{
					New[j] = Spaciallities[i];
					j++;
				}
			}

			string Spaciallization2;
			cout << "\t\tPRESS 1, TO SELECT ANOTHER SPACIALLIZATION" << endl;
			cout << "\t\tENTER:";
			cin >> Choice1;
			if (Choice1 == 1)
			{
				cout << "\t\tSELECT SPACIALIZATION: " << endl;
				for (int i = 0; i < 7; i++)
				{
					cout << "\t\tPRESS " << i + 1 << ", FOR " << New[i] << endl;
				}
				int Choice2;
				cout << "\t\tENTER:";
				cin >> Choice2;
				while (Choice2 > 7 || Choice2 < 1)
				{
					cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
					cin >> Choice2;
				}
				Spaciallization2 = New[Choice2 - 1];
			}
			else
			{
				Spaciallization2 = "NONE";
			}


			int Experience = 0;
			string Working_Hospital;
			string Cit;
			int Start_Time = 0;
			int End_Time = 0;
			cout << endl;
			cout << "\t\tSELECT CITY: " << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << "\t\tPRESS " << i + 1 << ", FOR " << City[i] << endl;
			}
			int Choice2;
			cout << "\t\tENTER:";
			cin >> Choice2;
			while (Choice2 > 3 || Choice2 < 1)
			{
				cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
				cin >> Choice2;
			}
			if (Choice2 == 1)
			{
				Cit = City[Choice2 - 1];
				cout << "\t\t\tSELECT HOSPITAL: " << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << "\t\t\tPRESS " << i + 1 << ", FOR " << Locations[i].Hospital << endl;
				}
				int Choice3;
				cout << "\t\t\tENTER:";
				cin >> Choice3;
				while (Choice3 > 5 || Choice3 < 1)
				{
					cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
					cin >> Choice3;
				}
				Working_Hospital = Locations[Choice3 - 1].Hospital;
			}
			else if (Choice2 == 2)
			{
				Cit = City[Choice2 - 1];
				cout << "\t\t\tSELECT HOSPITAL: " << endl;
				for (int i = 5; i < 10; i++)
				{
					cout << "\t\t\tPRESS " << i - 4 << ", FOR " << Locations[i].Hospital << endl;
				}
				int Choice3;
				cout << "\t\t\tENTER:";
				cin >> Choice3;
				while (Choice3 > 5 || Choice3 < 1)
				{
					cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
					cin >> Choice3;
				}
				Working_Hospital = Locations[Choice3 + 4].Hospital;
			}
			else if (Choice2 == 3)
			{
				Cit = City[Choice2 - 1];
				cout << "\t\t\tSELECT HOSPITAL: " << endl;
				for (int i = 10; i < 15; i++)
				{
					cout << "\t\t\tPRESS " << i - 9 << ", FOR " << Locations[i].Hospital << endl;
				}
				int Choice3;
				cout << "\t\t\tENTER:";
				cin >> Choice3;
				while (Choice3 > 5 || Choice3 < 1)
				{
					cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
					cin >> Choice3;
				}
				Working_Hospital = Locations[Choice3 + 9].Hospital;
			}

			cout << "\t\tENTER YOUR STARTING TIME (24hrs clock): ";
			cin >> Start_Time;
			while (Start_Time > 23 || Start_Time < 0)
			{
				cout << "\t\tINVALID TIME, ENTER AGAIN: ";
				cin >> Start_Time;
			}
			cout << "\t\tENTER YOUR END TIME (24hrs clock): ";
			cin >> End_Time;
			while (End_Time > 24 || End_Time < Start_Time)
			{
				cout << "\t\tINVALID TIME(Should be Greater then start time), ENTER AGAIN: ";
				cin >> End_Time;
			}

			cout << "\t\tENTER YOUR EXPERIENCE: ";
			cin >> Experience;
			while (Experience > 80 || Experience < 0)
			{
				cout << "\t\tENTER POSSIBLE NUMBER,ENTER AGAIN: ";
				cin >> Experience;
			}

			int Person_Rates;
			cout << "\t\tENTER THE CHARGES OF IN PERSON APPOINTMNETS($): ";
			cin >> Person_Rates;

			int Video_Rates;
			Video_Rates = 0.7 * Person_Rates;

			string Availability = "AVAILABLE";

			string Write = Email;
			Write += '\t';
			Write += Cnic;
			Write += '\t';
			Write += Password;
			Write += '\t';
			Write += Name;
			Write += '\t';
			Write += Spaciallization;
			Write += '\t';
			Write += Cit;
			Write += '\t';
			Write += Working_Hospital;
			Write += '\t';
			Write += to_string(Start_Time);
			Write += '\t';
			Write += to_string(End_Time);
			Write += '\t';
			Write += to_string(Experience);
			Write += '\t';
			Write += Phone_No;
			Write += '\t';
			Write += '5';
			Write += '\t';
			Write += '0';
			Write += '\t';
			Write += '0';
			Write += '\t';
			Write += "AVAILABLE";
			Write += '\t';
			Write += to_string(Video_Rates);
			Write += '\t';
			Write += to_string(Person_Rates);
			Write += '\t';
			Write += Spaciallization2;

			ofstream File;
			File.open("doctors.txt", std::ios_base::app);
			File << Write << endl;
			File.close();
		}

		//------------------REGISTERATION OF PATIENTS-------------------------------//		
		else if (Choice == 3)
		{
			cin.ignore();

			string F_Name;
			cout << "\t\tENTER FIRST NAME (NO SPACES): ";
			getline(cin, F_Name);

			string L_Name;
			cout << "\t\tENTER LAST NAME (NO SPACES): ";
			getline(cin, L_Name);

			string Name = F_Name;
			Name += '-';
			Name += L_Name;

			//PHONE-NO + CHECK
			string Phone_No;
			cout << "\t\tENTER YOUR PHONE NO: ";
			getline(cin, Phone_No);
			bool Check = false;
			for (int i = 0; i < Phone_No.length(); i++)
			{
				if (Phone_No[i] < '0' || Phone_No[i] > '9')
				{
					Check = true;
				}
			}
			if (Check)
			{
				cout << "\t\tSORRY, ONLY NUMBERS TO BE ENTERED" << endl;
				cout << "\t\tENTER YOUR PHONE NO: ";
				getline(cin, Phone_No);
			}

			//CNIC CHECK
			bool Repeat = false;
			string Cnic;
			while (Repeat != true)
			{
				Cnic = "";
				bool Error = false;
				while (Error != true)
				{
					cout << "\t\t|| ENTER YOUR CNIC ( ie, 4210139610453 ): ";
					getline(cin, Cnic);
					int Check = false;
					if (Cnic.length() != 13)
					{
						Check = true;
					}
					for (int i = 0; i < Cnic.length(); i++)
					{
						if (Cnic[i] < '0' || Cnic[i] > '9')
						{
							Check = true;
						}
					}
					if (Check)
					{
						cout << "\t\tSORRY, LENGHT SHOULD BE 13 AND ONLY NUMBERS" << endl;
					}
					if (!Check)
					{
						Error = true;
					}
				}

				bool Check2 = false;
				for (int i = 0; i < Number_of_Patients; i++)
				{
					if (Patients[i].Get_Cnic() == Cnic)
					{
						Check2 = true;
						cout << "\t\t\tCNIC ALREADY EXSISTS, TRY WITH A NEW ONE" << endl;
					}

				}
				if (!Check2)
				{
					Repeat = true;
				}
			}

			//PASSWORD CHECK
			string Password;
			cout << "\t\t|| ENTER PASSWORD: ";
			getline(cin, Password);
			int Symbols = 0;
			int Caps = 0;
			int Smalls = 0;
			int Integers = 0;
			int Lenght = 1;
			for (int i = 0; Password[i] != '\0'; i++)
			{
				Lenght++;
				if (Password[i] >= 'a' && Password[i] <= 'z')
				{
					Smalls++;
				}
				else if (Password[i] >= 'A' && Password[i] <= 'Z')
				{
					Caps++;
				}
				else if (Password[i] >= '0' && Password[i] <= '9')
				{
					Integers++;
				}
				else
				{
					Symbols++;
				}
			}
			int Password_Check = 1;
			if (Symbols >= 1 && Caps >= 1 && Smalls >= 1 && Integers >= 1 && Lenght > 8)
			{
				Password_Check = 0;
			}
			while (Password_Check != 0)
			{
				Symbols = 0;
				Caps = 0;
				Smalls = 0;
				Integers = 0;
				Lenght = 1;
				cout << "\t\t|| ENTER YOUR PASSWORD (>8 ,Symbols, Capital , Small and a Number): ";
				getline(cin, Password);
				for (int i = 0; Password[i] != '\0'; i++)
				{
					Lenght++;
					if (Password[i] >= 'a' && Password[i] <= 'z')
					{
						Smalls++;
					}
					else if (Password[i] >= 'A' && Password[i] <= 'Z')
					{
						Caps++;
					}
					else if (Password[i] >= '0' && Password[i] <= '9')
					{
						Integers++;
					}
					else
					{
						Symbols++;
					}
				}
				if (Symbols >= 1 && Caps >= 1 && Smalls >= 1 && Integers >= 1 && Lenght > 8)
				{
					Password_Check = 0;
				}
			}

			string Write = Cnic;
			Write += '\t';
			Write += Password;
			Write += '\t';
			Write += Name;
			Write += '\t';
			Write += Phone_No;
			Write += '\t';
			Write += "3500";

			ofstream File;
			File.open("patients.txt", std::ios_base::app);
			File << Write << endl;
			File.close();

			cout << endl;
			cout << "\t\tREGISTERATION WAS SUCCESSFUL" << endl;
		}

		else if (Choice == 4)
		{
			string Username;
			string Password;
			//USERNAME AUTHENTIFICATION
			bool Repeat = false;
			while (Repeat != true)
			{
				cin.ignore();
				Username = "";
				cout << "\t\tENTER USERNAME: ";
				getline(cin, Username);

				bool Check = false;
				for (int i = 0; i < Admin_Members; i++)
				{
					if (Admin_Panel[i].Get_Username() == Username)
					{
						Check = true;
					}
				}
				if (Check)
				{
					Repeat = true;
				}
				else
				{
					cout << "\t\tNO USERNAME FOUND, ENTER AGAIN" << endl;
					cout << "\t\tPRESS 1, TO EXIT" << endl;
					cout << "\t\tPRESS ANY KEY, TO TRY AGAIN" << endl;
					cout << "\t\tENTER: ";
					int Key;
					cin >> Key;
					if (Key == 1)
					{
						goto L1;
					}
				}

			}
			//PASSWORD AUTHENTIFICATION
			Repeat = false;
			while (Repeat != true)
			{
				cout << "\t\tENTER THE PASSWORD: ";
				getline(cin, Password);

				bool Check = false;
				for (int i = 0; i < Admin_Members; i++)
				{
					if (Admin_Panel[i].Get_Username() == Username)
					{
						if (Admin_Panel[i].Get_Password() == Password)
						{
							Check = true;
							cout << "\t\tLOGIN WAS SUCCESSFUL" << endl;
						}
					}
				}
				if (Check)
				{
					Repeat = true;
				}
				else
				{
					cout << "\t\tINCORRECT PASSWORD, TRY AGAIN" << endl;
				}
			}

			int Menu2 = 0;
			while (Menu2 != 1)
			{
				cout << "\t\t||--------------- MENU ---------------||" << endl;
				cout << "\t\t|| PRESS 1, TO VIEW DATA OF DOCTORS" << endl;
				cout << "\t\t|| PRESS 2, TO VIEW DATA OF PATIENTS" << endl;
				cout << "\t\t|| PRESS 3, TO VIEW APPOINTMENTS" << endl;				//
				cout << "\t\t|| PRESS 4, TO ALTER THE DATA OF DOCTOR" << endl;
				cout << "\t\t|| PRESS 5, TO PROCESS APPOINTMENTS " << endl;			//
				cout << "\t\t|| PRESS 6, TO LOG_OUT " << endl;
				cout << "\t\t|| ENTER: ";
				int Choice2;
				cin >> Choice2;
				while (Choice2 > 6 || Choice2 < 1)
				{
					cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
					cin >> Choice2;
				}
				if (Choice2 == 1)
				{
					cout << "|-------------------------------------------------------------" << endl;
					cout << "|\t\tDOCTORS DETAILS" << endl;
					for (int i = 0; i < Number_of_Doctors; i++)
					{
						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
						cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
						cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
						cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
						cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
						cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
						cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
						cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
						cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
						cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
						cout << "|-------------------------------------------------------------" << endl;
					}
				}

				else if (Choice2 == 2)
				{
					cout << "PATIENT-NAME\tPHONE-NO\tCNIC\t\tBALANCE" << endl;
					for (int i = 0; i < Number_of_Patients; i++)
					{
						cout << Patients[i].Get_Name() << "\t" << Patients[i].Get_Phone() << "\t" << Patients[i].Get_Cnic()
							<< "\t" << Patients[i].Get_Balance() << endl;
					}
				}

				else if (Choice2 == 3)
				{
					cout << "DOCTOR-CNIC\tDr.NAME\t\tPATIENT_CNIC\tPATIENT_NAME\tBOOKED_DATE\tAPPOINTMENT\tTIME\t\tSTATUS" << endl;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						cout << List_Of_Appointments[i].Doctor_App.Get_Cnic() << "\t";
						cout << List_Of_Appointments[i].Doctor_App.Get_Name() << "\t";
						cout << List_Of_Appointments[i].Patient_App.Get_Cnic() << "\t";
						cout << List_Of_Appointments[i].Patient_App.Get_Name() << "\t";
						cout << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022\t";
						cout << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022\t";
						cout << List_Of_Appointments[i].Get_Time_Slot() << "\t";
						cout << List_Of_Appointments[i].Get_Status() << endl;
					}
				}
				
				else if (Choice2 == 4)
				{			
					cout << "|-------------------------------------------------------------" << endl;
					cout << "|\t\tDOCTORS DETAILS" << endl;
					for (int i = 0; i < Number_of_Doctors; i++)
					{
						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\tDOCTOR ID: " << 1000 + i << endl;
						cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
						cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
						cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
						cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
						cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
						cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
						cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
						cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
						cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
						cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
						cout << "|-------------------------------------------------------------" << endl;
					}
					int ID;
					cout << "\t\tENTER THE ID OF DOCTOR YOU WANT TO SELECT: ";
					cin >> ID;
					bool Authenticate = false;
					for (int i = 0; i < Number_of_Doctors; i++)
					{
						if ((1000 + i) == ID)
						{
							Authenticate = true;
							cout << "\t\tAUTHENTIFICATION SUCCESSFUL" << endl;
						}
					}

					if (Authenticate)
					{
						cout << "\t\t|| PRESS 1, TO UPDATE WORKING HOSPITAL" << endl;
						cout << "\t\t|| PRESS 2, TO UPDATE PHONE_NO " << endl;
						cout << "\t\t|| PRESS 3, TO UPDATE EXPERIENCE" << endl;
						cout << "\t\t|| PRESS 4, TO UPDATE TIMINGS" << endl;
						cout << "\t\t|| PRESS 5, TO UPDATE AVAILABILITY" << endl;
						cout << "\t\t|| PRESS 6, TO UPDATE CHARGES" << endl;
						cout << "\t\t|| ENTER: ";
						int Choice3;
						cin >> Choice3;
						while (Choice3 > 6 || Choice3 < 1)
						{
							cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
							cin >> Choice3;
						}
						if (Choice3 == 1)
						{
							string Working_Hospital;
							string Cit;
							cout << endl;
							cout << "\t\tSELECT CITY: " << endl;
							for (int i = 0; i < 3; i++)
							{
								cout << "\t\tPRESS " << i + 1 << ", FOR " << City[i] << endl;
							}
							int Choice4;
							cout << "\t\tENTER:";
							cin >> Choice4;
							while (Choice4 > 3 || Choice4 < 1)
							{
								cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
								cin >> Choice4;
							}
							if (Choice4 == 1)
							{
								Cit = City[Choice4 - 1];
								cout << "\t\t\tSELECT HOSPITAL: " << endl;
								for (int i = 0; i < 5; i++)
								{
									cout << "\t\t\tPRESS " << i + 1 << ", FOR " << Locations[i].Hospital << endl;
								}
								int Choice5;
								cout << "\t\t\tENTER:";
								cin >> Choice5;
								while (Choice5 > 5 || Choice5 < 1)
								{
									cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
									cin >> Choice5;
								}
								Working_Hospital = Locations[Choice5 - 1].Hospital;
							}
							else if (Choice4 == 2)
							{
								Cit = City[Choice4 - 1];
								cout << "\t\t\tSELECT HOSPITAL: " << endl;
								for (int i = 5; i < 10; i++)
								{
									cout << "\t\t\tPRESS " << i - 4 << ", FOR " << Locations[i].Hospital << endl;
								}
								int Choice5;
								cout << "\t\t\tENTER:";
								cin >> Choice5;
								while (Choice5 > 5 || Choice5 < 1)
								{
									cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
									cin >> Choice5;
								}
								Working_Hospital = Locations[Choice5 + 4].Hospital;
							}
							else if (Choice4 == 3)
							{
								Cit = City[Choice4 - 1];
								cout << "\t\t\tSELECT HOSPITAL: " << endl;
								for (int i = 10; i < 15; i++)
								{
									cout << "\t\t\tPRESS " << i - 9 << ", FOR " << Locations[i].Hospital << endl;
								}
								int Choice5;
								cout << "\t\t\tENTER:";
								cin >> Choice5;
								while (Choice5 > 5 || Choice5 < 1)
								{
									cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
									cin >> Choice5;
								}
								Working_Hospital = Locations[Choice5 + 9].Hospital;
							}
						
							ID = ID - 1000;
							Doctors[ID].Set_City(Cit);
							Doctors[ID].Set_WorkingHospital(Working_Hospital);
						}
						else if (Choice3 == 2)
						{
							cin.ignore();
							string Phone_No;
							cout << "\t\tENTER YOUR PHONE NO: ";
							getline(cin, Phone_No);
							bool Check = false;
							for (int i = 0; i < Phone_No.length(); i++)
							{
								if (Phone_No[i] < '0' || Phone_No[i] > '9')
								{
									Check = true;
								}
							}
							if (Check)
							{
								cout << "\t\tSORRY, ONLY NUMBERS TO BE ENTERED" << endl;
								cout << "\t\tENTER YOUR PHONE NO: ";
								getline(cin, Phone_No);
							}
							ID = ID - 1000;
							Doctors[ID].Set_Phone_No(Phone_No);
						}
						else if (Choice3 == 3)
						{
							int Experience;
							cout << "\t\tENTER YOUR EXPERIENCE: ";
							cin >> Experience;
							while (Experience > 80 || Experience < 0)
							{
								cout << "\t\tENTER POSSIBLE NUMBER,ENTER AGAIN: ";
								cin >> Experience;
							}
							ID = ID - 1000;
							Doctors[ID].Set_Experience(Experience);
						}
						else if (Choice3 == 4)
						{
							int Start_Time;
							int End_Time;
							cout << "\t\tENTER YOUR STARTING TIME (24hrs clock): ";
							cin >> Start_Time;
							while (Start_Time > 23 || Start_Time < 0)
							{
								cout << "\t\tINVALID TIME, ENTER AGAIN: ";
								cin >> Start_Time;
							}
							cout << "\t\tENTER YOUR END TIME (24hrs clock): ";
							cin >> End_Time;
							while (End_Time > 24 || End_Time < Start_Time)
							{
								cout << "\t\tINVALID TIME(Should be Greater then start time), ENTER AGAIN: ";
								cin >> End_Time;
							}
							ID = ID - 1000;
							Doctors[ID].Set_StartTime(Start_Time);
							Doctors[ID].Set_EndTime(End_Time);
						}
						else if (Choice3 == 5)
						{
							cout << "\t\tPRESS 1, FOR AVAILABLE" << endl;
							cout << "\t\tPRESS 2, FOR UNAVAILABLE" << endl;
							cout << "\t\tENTER: ";
							int Key;
							cin >> Key;
							while (Key > 2 || Key < 1)
							{
								cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
								cin >> Key;
							}
							ID = ID - 1000;
							if (Key == 1)
							{
								Doctors[ID].Availablity = "AVAILABLE";
							}
							else
							{
								Doctors[ID].Availablity = "UNAVAILABLE";
								for (int i = 0; i < Number_of_Appointments; i++)
								{
									if (List_Of_Appointments[i].Doctor_App.Get_Cnic() == Doctors[ID].Get_Cnic())
									{
										List_Of_Appointments[i].Set_Status("CANCELLED");
										cout << "\t\tALL THE APPOINTMENTS OF THIS DOCTOR WERE AUTOMATICALLY CANCELLED" << endl;
										cout << "\t\tALL THE PAYMENTS DONE TO DOCTOR WERE REVERSED" << endl;
										Doctors[ID].Balance = Doctors[ID].Balance - List_Of_Appointments[i].Pay.Get_Amount();
										for (int j = 0; j< Number_of_Patients; j++)
										{
											if (Patients[j].Get_Cnic() == List_Of_Appointments[i].Patient_App.Get_Cnic())
											{
												Patients[j].Set_Balance(Patients[j].Get_Balance() + List_Of_Appointments[i].Pay.Get_Amount());
											}
										}
										
										ofstream File;
										File.open("transactions.txt", std::ios_base::app);
										string Write = List_Of_Appointments[i].Doctor_App.Get_Cnic();
										Write += '\t';
										Write += List_Of_Appointments[i].Patient_App.Get_Cnic();
										Write += '\t';
										Write += to_string(List_Of_Appointments[i].Pay.Get_Amount());
										Write += '\t';
										Write += List_Of_Appointments[i].Pay.Get_Gateway();
										File << Write << endl;
										File.close();
										
									}
								}

							}
						}
						else if (Choice3 == 6)
						{
							int Video_Rates;
							cout << "\t\tENTER THE CHARGES OF VIDEO CONFERENCE APPOINTMNETS($): ";
							cin >> Video_Rates;

							int Person_Rates;
							cout << "\t\tENTER THE CHARGES OF IN PERSON APPOINTMNETS($): ";
							cin >> Person_Rates;

							ID = ID - 1000;
							Doctors[ID].Person_Rates = Person_Rates;
							Doctors[ID].Video_Rates = Video_Rates;
						}		
					}
					else
					{
						cout << "\t\tDOCTOR NOT FOUND" << endl;
					}
				}

				else if (Choice2 == 5)
				{
					int Date;
					cout << "\t\tENTER THE DAY OF DATE TODAY (ie 24 if 24-JUNE-2022): ";
					cin >> Date;
					while (Date > 31 || Date < 1)
					{
						cout << "\t\t|| INVALID DATE, ENTER AGAIN: ";
						cin >> Date;
					}
					cout << "\t\tDISPLAYING PENDING APPOINTMENTS THIS MONTH " << endl;
					cout << "APT-ID\tDOCTOR-CNIC\tDr.NAME\t\tPATIENT_CNIC\tPATIENT_NAME\tBOOKED_DATE\tAPPOINTMENT\tTIME\t\tSTATUS" << endl;
					int* Array = new int[Number_of_Appointments];
					int Index = 0;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Get_AppDay() >= Date && List_Of_Appointments[i].Get_Status()=="PENDING")
						{
							cout << 1000 + i << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_Time_Slot() << "\t";
							cout << List_Of_Appointments[i].Get_Status() << endl;
							Array[Index] = 1000 + i;
							Index++;
						}
					}
					if (Index != 0)
					{
						int ID;
						cout << "\t\tENTER APPOINTMENT ID: ";
						cin >> ID;
						bool found = false;
						for (int i = 0; i < Index; i++)
						{
							if (ID == Array[i])
							{
								found = true;
							}
						}
						if (!found)
						{
							cout << "\t\tYOU ENTERED AN INCORRECT ID, TRY AGAIN LATER" << endl;
						}
						else
						{
							cout << endl;
							cout << "\t\tPRESS 1, TO CHANGE STATUS TO APPROVED" << endl;
							cout << "\t\tPRESS 2, TO CHANGE STATUS TO DISAPPROVED" << endl;
							cout << "\t\tPRESS 3, TO CHANGE STATUS TO CANCELLED" << endl;
							cout << "\t\tENTER: ";
							int Choice3;
							cin >> Choice3;
							while (Choice3 > 3 || Choice3 < 1)
							{
								cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
								cin >> Choice3;
							}
							ID = ID - 1000;
							if (Choice3 == 1)
							{
								List_Of_Appointments[ID].Set_Status("APPROVED");
							}
							else if (Choice3 == 2)
							{
								List_Of_Appointments[ID].Set_Status("DISAPPROVED");
								cout << "\t\tPAYMENT FROM DOCTOR TO PATIENT WAS REVERSED" << endl;
								for (int i = 0; i < Number_of_Doctors; i++)
								{
									if (Doctors[i].Get_Cnic() == List_Of_Appointments[ID].Doctor_App.Get_Cnic())
									{
										Doctors[i].Balance = Doctors[i].Balance - List_Of_Appointments[ID].Pay.Get_Amount();
									}
								}
								for (int j = 0; j < Number_of_Patients; j++)
								{
									if (Patients[j].Get_Cnic() == List_Of_Appointments[ID].Patient_App.Get_Cnic())
									{
										Patients[j].Set_Balance(Patients[j].Get_Balance() + List_Of_Appointments[ID].Pay.Get_Amount());
									}
								}

								ofstream File;
								File.open("transactions.txt", std::ios_base::app);
								string Write = List_Of_Appointments[ID].Patient_App.Get_Cnic();
								Write += '\t';
								Write += List_Of_Appointments[ID].Doctor_App.Get_Cnic();;
								Write += '\t';
								Write += to_string(List_Of_Appointments[ID].Pay.Get_Amount());
								Write += '\t';
								Write += List_Of_Appointments[ID].Pay.Get_Gateway();
								File << Write << endl;
								File.close();
							}
							else if (Choice3 == 3)
							{
								List_Of_Appointments[ID].Set_Status("CANCELLED");
								cout << "\t\tPAYMENT FROM DOCTOR TO PATIENT WAS REVERSED" << endl;
								for (int i = 0; i < Number_of_Doctors; i++)
								{
									if (Doctors[i].Get_Cnic() == List_Of_Appointments[ID].Doctor_App.Get_Cnic())
									{
										Doctors[i].Balance = Doctors[i].Balance - List_Of_Appointments[ID].Pay.Get_Amount();
									}
								}
								for (int j = 0; j < Number_of_Patients; j++)
								{
									if (Patients[j].Get_Cnic() == List_Of_Appointments[ID].Patient_App.Get_Cnic())
									{
										Patients[j].Set_Balance(Patients[j].Get_Balance() + List_Of_Appointments[ID].Pay.Get_Amount());
									}
								}

								ofstream File;
								File.open("transactions.txt", std::ios_base::app);
								string Write = List_Of_Appointments[ID].Doctor_App.Get_Cnic();
								Write += '\t';
								Write += List_Of_Appointments[ID].Patient_App.Get_Cnic();
								Write += '\t';
								Write += to_string(List_Of_Appointments[ID].Pay.Get_Amount());
								Write += '\t';
								Write += List_Of_Appointments[ID].Pay.Get_Gateway();
								File << Write << endl;
								File.close();
							}
						}
					}
					else
					{
						cout << "\t\tTHERE ARE NO APPOINTMENTS PENDING FOR PROCESSING" << endl;
					}	
					
					ofstream File;
					File.open("patients.txt");
					for (int i = 0; i < Number_of_Patients; i++)
					{
						string Write = Patients[i].Get_Cnic();
						Write += '\t';
						Write += Patients[i].Get_Password();
						Write += '\t';
						Write += Patients[i].Get_Name();
						Write += '\t';
						Write += Patients[i].Get_Phone();
						Write += '\t';
						Write += to_string(Patients[i].Get_Balance());
						File << Write << endl;
					}
					File.close();

					File.open("doctors.txt");
					for (int i = 0; i < Number_of_Doctors; i++)
					{
						string Write = Doctors[i].Get_Email();
						Write += '\t';
						Write += Doctors[i].Get_Cnic();
						Write += '\t';
						Write += Doctors[i].Get_Password();
						Write += '\t';
						Write += Doctors[i].Get_Name();
						Write += '\t';
						Write += Doctors[i].Get_Spaciallization();
						Write += '\t';
						Write += Doctors[i].Get_City();
						Write += '\t';
						Write += Doctors[i].Get_WorkingHospital();
						Write += '\t';
						Write += to_string(Doctors[i].Get_StartTime());
						Write += '\t';
						Write += to_string(Doctors[i].Get_EndTime());
						Write += '\t';
						Write += to_string(Doctors[i].Get_Experience());
						Write += '\t';
						Write += Doctors[i].Get_Phone_No();
						Write += '\t';
						Write += to_string(Doctors[i].Rating);
						Write += '\t';
						Write += to_string(Doctors[i].Number_Of_Patients);
						Write += '\t';
						Write += to_string(Doctors[i].Balance);
						Write += '\t';
						Write += Doctors[i].Availablity;
						Write += '\t';
						Write += to_string(Doctors[i].Video_Rates);
						Write += '\t';
						Write += to_string(Doctors[i].Person_Rates);
						Write += '\t';
						Write += Doctors[i].Get_Spaciallization2();

						File << Write << endl;
					}
					File.close();
	
					File.open("appointments.txt");
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						string Write = List_Of_Appointments[i].Doctor_App.Get_Cnic();
						Write += '\t';
						Write += List_Of_Appointments[i].Doctor_App.Get_Name();
						Write += '\t';
						Write += List_Of_Appointments[i].Patient_App.Get_Cnic();
						Write += '\t';
						Write += List_Of_Appointments[i].Patient_App.Get_Name();
						Write += '\t';
						Write += List_Of_Appointments[i].Get_Location();
						Write += '\t';
						Write += List_Of_Appointments[i].Get_Type();
						Write += '\t';
						Write += to_string(List_Of_Appointments[i].Get_AppDay());
						Write += '\t';
						Write += to_string(List_Of_Appointments[i].Get_BookDay());
						Write += '\t';
						Write += List_Of_Appointments[i].Get_Time_Slot();
						Write += '\t';
						Write += List_Of_Appointments[i].Get_Status();
						Write += '\t';
						Write += to_string(List_Of_Appointments[i].Pay.Get_Amount());
						Write += '\t';
						Write += List_Of_Appointments[i].Pay.Get_Gateway();
						Write += '\t';
						Write += to_string(List_Of_Appointments[i].Fb.Get_Rating());
						Write += '\t';
						Write += List_Of_Appointments[i].Fb.Get_pReview();
						Write += '\t';
						Write += List_Of_Appointments[i].Fb.Get_dReview();
						Write += '\t';
						Write += List_Of_Appointments[i].Spaciallization;

						File << Write << endl;
					}
					File.close();

				}

				else if (Choice2 == 6)
				{
					Menu2 = 1;
				}
			}
		}
		
		else if (Choice == 5)
		{
			string Username;
			string Password;
			cout << "\t\tPRESS 1, TO LOGIN USING EMAIL" << endl;
			cout << "\t\tPRESS 2, TO LOGIN USING CNIC" << endl;
			int CH;
			cout << "\t\tENTER: ";
			cin >> CH;
			while (CH > 2 || CH < 1)
			{
				cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
				cin >> CH;
			}
			if (CH == 1)
			{
				//USERNAME AUTHENTIFICATION
				bool Repeat = false;
				while (Repeat != true)
				{
					cin.ignore();
					Username = "";
					cout << "\t\tENTER EMAIL: ";
					getline(cin, Username);

					bool Check = false;
					for (int i = 0; i < Number_of_Doctors; i++)
					{
						if (Doctors[i].Get_Email() == Username)
						{
							Check = true;
						}
					}
					if (Check)
					{
						Repeat = true;
					}
					else
					{
						cout << "\t\tNO USERNAME FOUND, ENTER AGAIN" << endl;
						cout << "\t\tPRESS 1, TO EXIT" << endl;
						cout << "\t\tPRESS ANY KEY, TO TRY AGAIN" << endl;
						cout << "\t\tENTER: ";
						int Key;
						cin >> Key;
						if (Key == 1)
						{
							goto L1;
						}
					}
				}
			}
			else
			{
				bool Repeat = false;
				while (Repeat != true)
				{
					cin.ignore();
					Username = "";
					cout << "\t\tENTER CNIC: ";
					getline(cin, Username);

					bool Check = false;
					for (int i = 0; i < Number_of_Doctors; i++)
					{
						if (Doctors[i].Get_Cnic() == Username)
						{
							Check = true;
						}
					}
					if (Check)
					{
						Repeat = true;
					}
					else
					{
						cout << "\t\tNO USERNAME FOUND, ENTER AGAIN" << endl;
						cout << "\t\tPRESS 1, TO EXIT" << endl;
						cout << "\t\tPRESS ANY KEY, TO TRY AGAIN" << endl;
						cout << "\t\tENTER: ";
						int Key;
						cin >> Key;
						if (Key == 1)
						{
							goto L1;
						}
					}
				}
			}

			int Id_Doctor;

			//PASSWORD AUTHENTIFICATION
			bool Repeat = false;
			while (Repeat != true)
			{
				cout << "\t\tENTER THE PASSWORD: ";
				getline(cin, Password);

				bool Check = false;
				for (int i = 0; i < Number_of_Doctors; i++)
				{
					if (Doctors[i].Get_Cnic() == Username || Doctors[i].Get_Email() == Username)
					{
						if (Doctors[i].Get_Password() == Password)
						{
							Check = true;
							cout << "\t\tLOGIN WAS SUCCESSFUL" << endl;
							Id_Doctor = i;
						}
					}
				}
				if (Check)
				{
					Repeat = true;
				}
				else
				{
					cout << "\t\tINCORRECT PASSWORD, TRY AGAIN" << endl;
				}
			}

			int Menu2 = 0;
			while (Menu2 != 1)
			{
				cout << "\t\t||--------------- MENU ---------------||" << endl;
				cout << "\t\t|| PRESS 1, TO VIEW PROFILE" << endl;
				cout << "\t\t|| PRESS 2, TO VIEW YOUR PATIENT DETAILS" << endl;
				cout << "\t\t|| PRESS 3, EDIT AVAILABILITY & CHARGES" << endl;
				cout << "\t\t|| PRESS 4, TO VIEW YOUR APPOINTMENTS" << endl;
				cout << "\t\t|| PRESS 5, TO MARK APPOINTMENT AS COMPLETED" << endl;
				cout << "\t\t|| PRESS 6, TO PROCESS APPOINTMENTS " << endl;
				cout << "\t\t|| PRESS 7, TO UPDATE DETAILS " << endl;
				cout << "\t\t|| PRESS 8, TO VIEW FEEDBACKS " << endl;
				cout << "\t\t|| PRESS 9, TO CHECK BALANCE " << endl;
				cout << "\t\t|| PRESS 10, TO LOG_OUT " << endl;
				cout << "\t\t|| ENTER: ";
				int Choice2;
				cin >> Choice2;
				while (Choice2 > 10 || Choice2 < 1)
				{
					cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
					cin >> Choice2;
				}
				if (Choice2 == 1)
				{
					int Rating = 0;
					int Number = 0;
					//CALCUALTING RATING;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Doctor_App.Get_Cnic() == Doctors[Id_Doctor].Get_Cnic())
						{
							if (List_Of_Appointments[i].Fb.Get_Rating() != 0)
							{
								Rating = Rating + List_Of_Appointments[i].Fb.Get_Rating();
								Number++;
							}
						}
					}
					bool Avg = float(Rating) / float(Number);
					cout << "|-------------------------------------------------------------" << endl;
					cout << "|\t\tDOCTORS DETAILS" << endl;
					cout << "|-------------------------------------------------------------" << endl;
					cout << "|\tDOCTOR_NAME: " << Doctors[Id_Doctor].Get_Name() << endl;
					cout << "|\tSPACIALIZATION-1: " << Doctors[Id_Doctor].Get_Spaciallization() << endl;
					cout << "|\tSPACIALIZATION-2: " << Doctors[Id_Doctor].Get_Spaciallization2() << endl;
					cout << "|\tWORKING HOSPITAL: " << Doctors[Id_Doctor].Get_WorkingHospital() << endl;
					cout << "|\tCITY: " << Doctors[Id_Doctor].Get_City() << endl;
					cout << "|\tEMAIL: " << Doctors[Id_Doctor].Get_Email() << endl;
					cout << "|\tPHONE-NO: " << Doctors[Id_Doctor].Get_Phone_No() << endl;
					cout << "|\tAVAILABILITY: " << Doctors[Id_Doctor].Availablity << endl;
					cout << "|\tIn-Person Charges: " << Doctors[Id_Doctor].Person_Rates << endl;
					cout << "|\tVideo Charges: " << Doctors[Id_Doctor].Video_Rates << endl;
					cout << "|\t\tRATING: " << Avg << endl;
					cout << "|-------------------------------------------------------------" << endl;
				}
				if (Choice2 == 2)
				{
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Doctor_App.Get_Cnic() == Doctors[Id_Doctor].Get_Cnic())
						{
							cout << "|----------------------------------------------------------------|" << endl;
							cout << "|- DATED: " << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022" << endl;
							cout << "|- TIME: " << List_Of_Appointments[i].Get_Time_Slot() << endl;
							cout << "|- STATUS: " << List_Of_Appointments[i].Get_Status() << endl;
							cout << "|- TYPE: " << List_Of_Appointments[i].Get_Type() << endl;
							cout << "|- FOR: " << List_Of_Appointments[i].Spaciallization << endl;
							cout << "|---------------------------------PATIENT DETAILS " << endl;
							cout << "|---------------------------------PATIENT NAME: " << List_Of_Appointments[i].Patient_App.Get_Name() << endl;
							cout << "|---------------------------------PATIENT CNIC: " << List_Of_Appointments[i].Patient_App.Get_Cnic() << endl;
							cout << "|---------------------------------PATIENT PHONE: " << List_Of_Appointments[i].Patient_App.Get_Phone() << endl;
							cout << "|----------------------------------------------------------------|" << endl;
						}
					}

				}
				if (Choice2 == 3)
				{
					cout << "\t\t|| PRESS 1 , TO CHANGE AVAILABILITY " << endl;
					cout << "\t\t|| PRESS 2 , TO CHANGE CHARGES " << endl;
					cout << "\t\t|| ENTER: ";
					int Choice3;
					cin >> Choice3;
					while (Choice3 > 2 || Choice3 < 1)
					{
						cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
						cin >> Choice3;
					}
					if (Choice3 == 1)
					{
						cout << "\t\tPRESS 1, FOR AVAILABLE" << endl;
						cout << "\t\tPRESS 2, FOR UNAVAILABLE" << endl;
						cout << "\t\tENTER: ";
						int Key;
						cin >> Key;
						while (Key > 2 || Key < 1)
						{
							cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
							cin >> Key;
						}
						int ID = Id_Doctor;
						if (Key == 1)
						{
							Doctors[ID].Availablity = "AVAILABLE";
						}
						else
						{
							Doctors[ID].Availablity = "UNAVAILABLE";
							cout << "\t\tALL THE APPOINTMENTS OF THIS DOCTOR WERE AUTOMATICALLY CANCELLED" << endl;
							cout << "\t\tALL THE PAYMENTS DONE TO DOCTOR WERE REVERSED" << endl;

							for (int i = 0; i < Number_of_Appointments; i++)
							{
								if (List_Of_Appointments[i].Doctor_App.Get_Cnic() == Doctors[ID].Get_Cnic())
								{
									List_Of_Appointments[i].Set_Status("CANCELLED");
									Doctors[ID].Balance = Doctors[ID].Balance - List_Of_Appointments[i].Pay.Get_Amount();
									for (int j = 0; j < Number_of_Patients; j++)
									{
										if (Patients[j].Get_Cnic() == List_Of_Appointments[i].Patient_App.Get_Cnic())
										{
											Patients[j].Set_Balance(Patients[j].Get_Balance() + List_Of_Appointments[i].Pay.Get_Amount());
										}
									}

									ofstream File;
									File.open("transactions.txt", std::ios_base::app);
									string Write = List_Of_Appointments[i].Doctor_App.Get_Cnic();
									Write += '\t';
									Write += List_Of_Appointments[i].Patient_App.Get_Cnic();
									Write += '\t';
									Write += to_string(List_Of_Appointments[i].Pay.Get_Amount());
									Write += '\t';
									Write += List_Of_Appointments[i].Pay.Get_Gateway();
									File << Write << endl;
									File.close();

								}
							}

						}
					}
					else if (Choice3 == 2)
					{
						int Video_Rates;
						cout << "\t\tENTER THE CHARGES OF VIDEO CONFERENCE APPOINTMNETS($): ";
						cin >> Video_Rates;

						int Person_Rates;
						cout << "\t\tENTER THE CHARGES OF IN PERSON APPOINTMNETS($): ";
						cin >> Person_Rates;

						int ID = Id_Doctor;
						Doctors[ID].Person_Rates = Person_Rates;
						Doctors[ID].Video_Rates = Video_Rates;
					}
				}
				if (Choice2 == 4)
				{
					string Spaciallization;
					if (Doctors[Id_Doctor].Get_Spaciallization2() != "NULL")
					{
						cout << "\t\tPRESS 1 , FOR " << Doctors[Id_Doctor].Get_Spaciallization() << " VIEW" << endl;
						cout << "\t\tPRESS 2 , FOR " << Doctors[Id_Doctor].Get_Spaciallization2() << " VIEW" << endl;
						cout << "\t\tENTER: ";
						int Spec;
						cin >> Spec;
						while (Spec > 2 || Spec < 1)
						{
							cout << "\t\tINVALID KEY, ENTER AGAIN:";
							cin >> Spec;
						}
						if (Spec == 1)
						{
							Spaciallization = Doctors[Id_Doctor].Get_Spaciallization();
						}
						else
						{
							Spaciallization = Doctors[Id_Doctor].Get_Spaciallization2();
						}
					}
					else
					{
						Spaciallization = Doctors[Id_Doctor].Get_Spaciallization();
					}

					cout << "|------------------------------APPOINTMENTS-----------------------------------|" << endl;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Doctor_App.Get_Cnic() == Doctors[Id_Doctor].Get_Cnic() && List_Of_Appointments[i].Spaciallization == Spaciallization)
						{
							cout << "|----------------------------------------------------------------|" << endl;
							cout << "|- BOOKING DATE: " << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022" << endl;
							cout << "|- DATED: " << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022" << endl;
							cout << "|- TIME: " << List_Of_Appointments[i].Get_Time_Slot() << endl;
							cout << "|- STATUS: " << List_Of_Appointments[i].Get_Status() << endl;
							cout << "|- TYPE: " << List_Of_Appointments[i].Get_Type() << endl;
							cout << "|- FOR: " << List_Of_Appointments[i].Spaciallization << endl;
							cout << "|- LOCATION: " << List_Of_Appointments[i].Get_Location() << endl;
							cout << "|- PATIENT NAME: " << List_Of_Appointments[i].Patient_App.Get_Name() << endl;
							cout << "|- PAID AMOUNT: " << List_Of_Appointments[i].Pay.Get_Amount() << endl;
							cout << "|----------------------------------------------------------------|" << endl;
						}
					}
				}
				if (Choice2 == 5)
				{
					int Date;
					cout << "\t\tENTER THE DAY OF DATE TODAY (ie 24 if 24-JUNE-2022): ";
					cin >> Date;
					while (Date > 31 || Date < 1)
					{
						cout << "\t\t|| INVALID DATE, ENTER AGAIN: ";
						cin >> Date;
					}

					cout << endl;
					cout << "\t\tONLY THE APPROVED APPOINTMENTS TILL THIS DATE ENTERED ARE SHOWN AND MARKED HERE " << endl;
					cout << endl;
					
					cout << "\t\tDISPLAYING APPOINTMENTS THIS MONTH " << endl;
					cout << endl;
					cout << "APT-ID\tDOCTOR-CNIC\tDr.NAME\t\tPATIENT_CNIC\tPATIENT_NAME\tBOOKED_DATE\tAPPOINTMENT\tTIME\t\tSTATUS" << endl;
					int* Array = new int[Number_of_Appointments];
					int Index = 0;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Get_AppDay() <= Date && List_Of_Appointments[i].Get_Status() == "APPROVED" && List_Of_Appointments[i].Doctor_App.Get_Cnic()==Doctors[Id_Doctor].Get_Cnic())
						{
							cout << 1000 + i << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_Time_Slot() << "\t";
							cout << List_Of_Appointments[i].Get_Status() << endl;
							Array[Index] = 1000 + i;
							Index++;
						}
					}
					if (Index != 0)
					{
						int ID;
						cout << "\t\tENTER APPOINTMENT ID: ";
						cin >> ID;
						bool found = false;
						for (int i = 0; i < Index; i++)
						{
							if (ID == Array[i])
							{
								found = true;
							}
						}
						ID = ID - 1000;
						if (!found)
						{
							cout << "\t\tYOU ENTERED AN INCORRECT ID, TRY AGAIN LATER" << endl;
						}
						else
						{
								List_Of_Appointments[ID].Set_Status("COMPLETED");
								int Date2;
								cout << "\t\tENTER THE DAY OF DATE OF COMPLETION(ie 24 if 24-JUNE-2022): ";
								cin >> Date2;
								while (Date2 > Date || Date2 < List_Of_Appointments[ID].Get_AppDay())
								{
									cout << "\t\t|| INVALID DATE, ENTER AGAIN: ";
									cin >> Date2;
								
								}
								if (Date2 == List_Of_Appointments[ID].Get_AppDay())
								{
									cout << "\t\t APPOINTMENT WAS MARKED AS COMPLETED" << endl;
								}
								else if (Date2 == List_Of_Appointments[ID].Get_AppDay() + 1)
								{
									cout << "\t\t PATIENT WAS LATE BY A DAY(30%) WILL BE DEDUCTED FOR HIS ACCOUNT" << endl;
									cout << "\t\t APPOINTMENT WAS MARKED AS COMPLETED" << endl;
									Doctors[Id_Doctor].Balance = Doctors[Id_Doctor].Balance + (0.3 * List_Of_Appointments[ID].Pay.Get_Amount());
									for (int i = 0; i < Number_of_Patients; i++)
									{
										if (List_Of_Appointments[ID].Patient_App.Get_Cnic() == Patients[i].Get_Cnic() )
										{
											Patients[i].Set_Balance(Patients[i].Get_Balance() - (0.3 * List_Of_Appointments[ID].Pay.Get_Amount()));
										}
									}
									ofstream File;
									File.open("transactions.txt", std::ios_base::app);
									string Write = List_Of_Appointments[ID].Patient_App.Get_Cnic();
									Write += '\t';
									Write += List_Of_Appointments[ID].Doctor_App.Get_Cnic();
									Write += '\t';
									Write += to_string(0.3*List_Of_Appointments[ID].Pay.Get_Amount());
									Write += '\t';
									Write += List_Of_Appointments[ID].Pay.Get_Gateway();
									File << Write << endl;
									File.close();

								}
								else if (Date2 == List_Of_Appointments[ID].Get_AppDay() + 2)
								{
									cout << "\t\t PATIENT WAS LATE BY 2 DAYS (60%) WILL BE DEDUCTED FOR HIS ACCOUNT" << endl;
									cout << "\t\t APPOINTMENT WAS MARKED AS COMPLETED" << endl;
									Doctors[Id_Doctor].Balance = Doctors[Id_Doctor].Balance + (0.6 * List_Of_Appointments[ID].Pay.Get_Amount());
									for (int i = 0; i < Number_of_Patients; i++)
									{
										if (List_Of_Appointments[ID].Patient_App.Get_Cnic() == Patients[i].Get_Cnic())
										{
											Patients[i].Set_Balance(Patients[i].Get_Balance() - (0.6 * List_Of_Appointments[ID].Pay.Get_Amount()));
										}
									}
									ofstream File;
									File.open("transactions.txt", std::ios_base::app);
									string Write = List_Of_Appointments[ID].Patient_App.Get_Cnic();
									Write += '\t';
									Write += List_Of_Appointments[ID].Doctor_App.Get_Cnic();
									Write += '\t';
									Write += to_string(0.6 * List_Of_Appointments[ID].Pay.Get_Amount());
									Write += '\t';
									Write += List_Of_Appointments[ID].Pay.Get_Gateway();
									File << Write << endl;
									File.close();

								}								
								else
								{
									List_Of_Appointments[ID].Set_Status("CALLED-OFF");
									cout << "\t\t APPOINTMENT WAS CALLED OFF AS PATIENT DIDN'T ATTEND" << endl;
								}

								cout << "\t\t PRESS 1, TO GIVE THE FEEDBACK ON THIS APPOINTMENT" << endl;
								cout << "\t\t ENTER: ";
								int Key;
								cin >> Key;
								if (Key == 1)
								{
									cout << "\t\tPRESS 1, FOR SATISFIED WITH PATIENT" << endl;
									cout << "\t\tPRESS 2, FOR NOT-SATISFIED WITH PATIENT" << endl;
									cout << "\t\tENTER: ";
									int CH;
									cin >>CH;
									while (CH > 2 || CH < 1)
									{
										cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
										cin >> CH;
									}
									if (CH == 1)
									{
										List_Of_Appointments[ID].Fb.Set_dReview("SATISFIED");
									}
									else
									{
										List_Of_Appointments[ID].Fb.Set_dReview("NOT-SATISFIED");
									}
								}
						
						
						}
					}
					else
					{
						cout << "\t\tTHERE ARE NO APPOINTMENTS APPROVED FOR PROCESSING" << endl;
					}
				}
				if (Choice2 == 6)
				{
					int Date;
					cout << "\t\tENTER THE DAY OF DATE TODAY (ie 24 if 24-JUNE-2022): ";
					cin >> Date;
					while (Date > 31 || Date < 1)
					{
						cout << "\t\t|| INVALID DATE, ENTER AGAIN: ";
						cin >> Date;
					}
					cout << "\t\tDISPLAYING PENDING APPOINTMENTS THIS MONTH " << endl;
					cout << "APT-ID\tDOCTOR-CNIC\tDr.NAME\t\tPATIENT_CNIC\tPATIENT_NAME\tBOOKED_DATE\tAPPOINTMENT\tTIME\t\tSTATUS" << endl;
					int* Array = new int[Number_of_Appointments];
					int Index = 0;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Get_AppDay() >= Date && List_Of_Appointments[i].Get_Status() == "PENDING" && List_Of_Appointments[i].Doctor_App.Get_Cnic() == Doctors[Id_Doctor].Get_Cnic())
						{
							cout << 1000 + i << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_Time_Slot() << "\t";
							cout << List_Of_Appointments[i].Get_Status() << endl;
							Array[Index] = 1000 + i;
							Index++;
						}
					}
					if (Index != 0)
					{
						int ID;
						cout << "\t\tENTER APPOINTMENT ID: ";
						cin >> ID;
						bool found = false;
						for (int i = 0; i < Index; i++)
						{
							if (ID == Array[i])
							{
								found = true;
							}
						}
						if (!found)
						{
							cout << "\t\tYOU ENTERED AN INCORRECT ID, TRY AGAIN LATER" << endl;
						}
						else
						{
							cout << endl;
							cout << "\t\tPRESS 1, TO CHANGE STATUS TO APPROVED" << endl;
							cout << "\t\tPRESS 2, TO CHANGE STATUS TO DISAPPROVED" << endl;
							cout << "\t\tPRESS 3, TO CHANGE STATUS TO CANCELLED" << endl;
							cout << "\t\tENTER: ";
							int Choice3;
							cin >> Choice3;
							while (Choice3 > 3 || Choice3 < 1)
							{
								cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
								cin >> Choice3;
							}
							ID = ID - 1000;
							if (Choice3 == 1)
							{
								List_Of_Appointments[ID].Set_Status("APPROVED");
							}
							else if (Choice3 == 2)
							{
								List_Of_Appointments[ID].Set_Status("DISAPPROVED");
								cout << "\t\tPAYMENT FROM DOCTOR TO PATIENT WAS REVERSED" << endl;
								for (int i = 0; i < Number_of_Doctors; i++)
								{
									if (Doctors[i].Get_Cnic() == List_Of_Appointments[ID].Doctor_App.Get_Cnic())
									{
										Doctors[i].Balance = Doctors[i].Balance - List_Of_Appointments[ID].Pay.Get_Amount();
									}
								}
								for (int j = 0; j < Number_of_Patients; j++)
								{
									if (Patients[j].Get_Cnic() == List_Of_Appointments[ID].Patient_App.Get_Cnic())
									{
										Patients[j].Set_Balance(Patients[j].Get_Balance() + List_Of_Appointments[ID].Pay.Get_Amount());
									}
								}

								ofstream File;
								File.open("transactions.txt", std::ios_base::app);
								string Write = List_Of_Appointments[ID].Patient_App.Get_Cnic();
								Write += '\t';
								Write += List_Of_Appointments[ID].Doctor_App.Get_Cnic();;
								Write += '\t';
								Write += to_string(List_Of_Appointments[ID].Pay.Get_Amount());
								Write += '\t';
								Write += List_Of_Appointments[ID].Pay.Get_Gateway();
								File << Write << endl;
								File.close();
							}
							else if (Choice3 == 3)
							{
								List_Of_Appointments[ID].Set_Status("CANCELLED");
								cout << "\t\tPAYMENT FROM DOCTOR TO PATIENT WAS REVERSED" << endl;
								for (int i = 0; i < Number_of_Doctors; i++)
								{
									if (Doctors[i].Get_Cnic() == List_Of_Appointments[ID].Doctor_App.Get_Cnic())
									{
										Doctors[i].Balance = Doctors[i].Balance - List_Of_Appointments[ID].Pay.Get_Amount();
									}
								}
								for (int j = 0; j < Number_of_Patients; j++)
								{
									if (Patients[j].Get_Cnic() == List_Of_Appointments[ID].Patient_App.Get_Cnic())
									{
										Patients[j].Set_Balance(Patients[j].Get_Balance() + List_Of_Appointments[ID].Pay.Get_Amount());
									}
								}

								ofstream File;
								File.open("transactions.txt", std::ios_base::app);
								string Write = List_Of_Appointments[ID].Doctor_App.Get_Cnic();
								Write += '\t';
								Write += List_Of_Appointments[ID].Patient_App.Get_Cnic();
								Write += '\t';
								Write += to_string(List_Of_Appointments[ID].Pay.Get_Amount());
								Write += '\t';
								Write += List_Of_Appointments[ID].Pay.Get_Gateway();
								File << Write << endl;
								File.close();
							}
						}
					}
					else
					{
						cout << "\t\tTHERE ARE NO APPOINTMENTS PENDING FOR PROCESSING" << endl;
					}
				}
				if (Choice2 == 7)
				{
					int ID = Id_Doctor;
					cout << "\t\t|| PRESS 1, TO UPDATE WORKING HOSPITAL" << endl;
					cout << "\t\t|| PRESS 2, TO UPDATE PHONE_NO " << endl;
					cout << "\t\t|| PRESS 3, TO UPDATE EXPERIENCE" << endl;
					cout << "\t\t|| PRESS 4, TO UPDATE TIMINGS" << endl;
					cout << "\t\t|| ENTER: ";
					int Choice3;
					cin >> Choice3;
					while (Choice3 > 4 || Choice3 < 1)
					{
						cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
						cin >> Choice3;
					}
					if (Choice3 == 1)
					{
						string Working_Hospital;
						string Cit;
						cout << endl;
						cout << "\t\tSELECT CITY: " << endl;
						for (int i = 0; i < 3; i++)
						{
							cout << "\t\tPRESS " << i + 1 << ", FOR " << City[i] << endl;
						}
						int Choice4;
						cout << "\t\tENTER:";
						cin >> Choice4;
						while (Choice4 > 3 || Choice4 < 1)
						{
							cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
							cin >> Choice4;
						}
						if (Choice4 == 1)
						{
							Cit = City[Choice4 - 1];
							cout << "\t\t\tSELECT HOSPITAL: " << endl;
							for (int i = 0; i < 5; i++)
							{
								cout << "\t\t\tPRESS " << i + 1 << ", FOR " << Locations[i].Hospital << endl;
							}
							int Choice5;
							cout << "\t\t\tENTER:";
							cin >> Choice5;
							while (Choice5 > 5 || Choice5 < 1)
							{
								cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
								cin >> Choice5;
							}
							Working_Hospital = Locations[Choice5 - 1].Hospital;
						}
						else if (Choice4 == 2)
						{
							Cit = City[Choice4 - 1];
							cout << "\t\t\tSELECT HOSPITAL: " << endl;
							for (int i = 5; i < 10; i++)
							{
								cout << "\t\t\tPRESS " << i - 4 << ", FOR " << Locations[i].Hospital << endl;
							}
							int Choice5;
							cout << "\t\t\tENTER:";
							cin >> Choice5;
							while (Choice5 > 5 || Choice5 < 1)
							{
								cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
								cin >> Choice5;
							}
							Working_Hospital = Locations[Choice5 + 4].Hospital;
						}
						else if (Choice4 == 3)
						{
							Cit = City[Choice4 - 1];
							cout << "\t\t\tSELECT HOSPITAL: " << endl;
							for (int i = 10; i < 15; i++)
							{
								cout << "\t\t\tPRESS " << i - 9 << ", FOR " << Locations[i].Hospital << endl;
							}
							int Choice5;
							cout << "\t\t\tENTER:";
							cin >> Choice5;
							while (Choice5 > 5 || Choice5 < 1)
							{
								cout << "\t\t\tINVALID CHOICE, ENTER AGAIN: ";
								cin >> Choice5;
							}
							Working_Hospital = Locations[Choice5 + 9].Hospital;
						}

						Doctors[ID].Set_City(Cit);
						Doctors[ID].Set_WorkingHospital(Working_Hospital);
					}
					else if (Choice3 == 2)
					{
						cin.ignore();
						string Phone_No;
						cout << "\t\tENTER YOUR PHONE NO: ";
						getline(cin, Phone_No);
						bool Check = false;
						for (int i = 0; i < Phone_No.length(); i++)
						{
							if (Phone_No[i] < '0' || Phone_No[i] > '9')
							{
								Check = true;
							}
						}
						if (Check)
						{
							cout << "\t\tSORRY, ONLY NUMBERS TO BE ENTERED" << endl;
							cout << "\t\tENTER YOUR PHONE NO: ";
							getline(cin, Phone_No);
						}
						Doctors[ID].Set_Phone_No(Phone_No);
					}
					else if (Choice3 == 3)
					{
						int Experience;
						cout << "\t\tENTER YOUR EXPERIENCE: ";
						cin >> Experience;
						while (Experience > 80 || Experience < 0)
						{
							cout << "\t\tENTER POSSIBLE NUMBER,ENTER AGAIN: ";
							cin >> Experience;
						}
						Doctors[ID].Set_Experience(Experience);
					}
					else if (Choice3 == 4)
					{
						int Start_Time;
						int End_Time;
						cout << "\t\tENTER YOUR STARTING TIME (24hrs clock): ";
						cin >> Start_Time;
						while (Start_Time > 23 || Start_Time < 0)
						{
							cout << "\t\tINVALID TIME, ENTER AGAIN: ";
							cin >> Start_Time;
						}
						cout << "\t\tENTER YOUR END TIME (24hrs clock): ";
						cin >> End_Time;
						while (End_Time > 24 || End_Time < Start_Time)
						{
							cout << "\t\tINVALID TIME(Should be Greater then start time), ENTER AGAIN: ";
							cin >> End_Time;
						}
						Doctors[ID].Set_StartTime(Start_Time);
						Doctors[ID].Set_EndTime(End_Time);
					}
				}
				if (Choice2 == 8)
				{
					cout << "Dr.NAME\t\tPATIENT_NAME\tPATIENT_RATING\tPATIENT-REVIEW\tYOUR-REVIEW" << endl;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if ( List_Of_Appointments[i].Doctor_App.Get_Cnic() == Doctors[Id_Doctor].Get_Cnic() && List_Of_Appointments[i].Get_Status()=="COMPLETED")
						{
							cout << List_Of_Appointments[i].Doctor_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Fb.Get_Rating() << "\t\t";
							cout << List_Of_Appointments[i].Fb.Get_pReview() << "\t";
							cout << List_Of_Appointments[i].Fb.Get_dReview() << endl;
						}
					}

				}
				if (Choice2 == 9)
				{
					cout << "\t\t\tYOUR ACCOUNT BALANCE: " << Doctors[Id_Doctor].Balance << endl;
				}
				if (Choice2 == 10)
				{
					Menu2 = 1;
				}

				ofstream File;
				File.open("patients.txt");
				for (int i = 0; i < Number_of_Patients; i++)
				{
					string Write = Patients[i].Get_Cnic();
					Write += '\t';
					Write += Patients[i].Get_Password();
					Write += '\t';
					Write += Patients[i].Get_Name();
					Write += '\t';
					Write += Patients[i].Get_Phone();
					Write += '\t';
					Write += to_string(Patients[i].Get_Balance());
					File << Write << endl;
				}
				File.close();

				File.open("doctors.txt");
				for (int i = 0; i < Number_of_Doctors; i++)
				{
					string Write = Doctors[i].Get_Email();
					Write += '\t';
					Write += Doctors[i].Get_Cnic();
					Write += '\t';
					Write += Doctors[i].Get_Password();
					Write += '\t';
					Write += Doctors[i].Get_Name();
					Write += '\t';
					Write += Doctors[i].Get_Spaciallization();
					Write += '\t';
					Write += Doctors[i].Get_City();
					Write += '\t';
					Write += Doctors[i].Get_WorkingHospital();
					Write += '\t';
					Write += to_string(Doctors[i].Get_StartTime());
					Write += '\t';
					Write += to_string(Doctors[i].Get_EndTime());
					Write += '\t';
					Write += to_string(Doctors[i].Get_Experience());
					Write += '\t';
					Write += Doctors[i].Get_Phone_No();
					Write += '\t';
					Write += to_string(Doctors[i].Rating);
					Write += '\t';
					Write += to_string(Doctors[i].Number_Of_Patients);
					Write += '\t';
					Write += to_string(Doctors[i].Balance);
					Write += '\t';
					Write += Doctors[i].Availablity;
					Write += '\t';
					Write += to_string(Doctors[i].Video_Rates);
					Write += '\t';
					Write += to_string(Doctors[i].Person_Rates);
					Write += '\t';
					Write += Doctors[i].Get_Spaciallization2();

					File << Write << endl;
				}
				File.close();

				File.open("appointments.txt");
				for (int i = 0; i < Number_of_Appointments; i++)
				{
					string Write = List_Of_Appointments[i].Doctor_App.Get_Cnic();
					Write += '\t';
					Write += List_Of_Appointments[i].Doctor_App.Get_Name();
					Write += '\t';
					Write += List_Of_Appointments[i].Patient_App.Get_Cnic();
					Write += '\t';
					Write += List_Of_Appointments[i].Patient_App.Get_Name();
					Write += '\t';
					Write += List_Of_Appointments[i].Get_Location();
					Write += '\t';
					Write += List_Of_Appointments[i].Get_Type();
					Write += '\t';
					Write += to_string(List_Of_Appointments[i].Get_AppDay());
					Write += '\t';
					Write += to_string(List_Of_Appointments[i].Get_BookDay());
					Write += '\t';
					Write += List_Of_Appointments[i].Get_Time_Slot();
					Write += '\t';
					Write += List_Of_Appointments[i].Get_Status();
					Write += '\t';
					Write += to_string(List_Of_Appointments[i].Pay.Get_Amount());
					Write += '\t';
					Write += List_Of_Appointments[i].Pay.Get_Gateway();
					Write += '\t';
					Write += to_string(List_Of_Appointments[i].Fb.Get_Rating());
					Write += '\t';
					Write += List_Of_Appointments[i].Fb.Get_pReview();
					Write += '\t';
					Write += List_Of_Appointments[i].Fb.Get_dReview();
					Write += '\t';
					Write += List_Of_Appointments[i].Spaciallization;

					File << Write << endl;
				}
				File.close();
			}
		}
	
		else if (Choice == 6)
		{
			string Username;
			string Password;
			int Id;

			//USERNAME AUTHENTIFICATION
			bool Repeat = false;
			while (Repeat != true)
			{
				cin.ignore();
				Username = "";
				cout << "\t\tENTER CNIC: ";
				getline(cin, Username);

				bool Check = false;
				for (int i = 0; i < Number_of_Patients; i++)
				{
					if (Patients[i].Get_Cnic() == Username)
					{
						Check = true;
					}
				}
				if (Check)
				{
					Repeat = true;
				}
				else
				{
					cout << "\t\tNO USERNAME FOUND, ENTER AGAIN" << endl;
					cout << "\t\tPRESS 1, TO EXIT" << endl;
					cout << "\t\tPRESS ANY KEY, TO TRY AGAIN" << endl;
					cout << "\t\tENTER: ";
					int Key;
					cin >> Key;
					if (Key == 1)
					{
						goto L1;
					}
				}

			}
			//PASSWORD AUTHENTIFICATION
			Repeat = false;
			while (Repeat != true)
			{
				cout << "\t\tENTER THE PASSWORD: ";
				getline(cin, Password);

				bool Check = false;
				for (int i = 0; i < Number_of_Patients; i++)
				{
					if (Patients[i].Get_Cnic() == Username)
					{
						if (Patients[i].Get_Password() == Password)
						{
							Check = true;
							cout << "\t\tLOGIN WAS SUCCESSFUL" << endl;
							Id = i;
						}
					}
				}
				if (Check)
				{
					Repeat = true;
				}
				else
				{
					cout << "\t\tINCORRECT PASSWORD, TRY AGAIN" << endl;
				}
			}

			int Menu2 = 0;
			while (Menu2 != 1)
			{
				Admin_Members = 0;
				Number_of_Patients = 0;
				Number_of_Doctors = 0;
				Number_of_Appointments = 0;

				/*READING ADMIN FILE*/
				fstream Admin_File;
				string File = "admins.txt";
				Admin_File.open(File);
				int FilePointer = 1;
				string Word;
				while (Admin_File >> Word)
				{
					if (FilePointer % 2 != 0)
					{
						Admin_Panel[Admin_Members].Set_Username(Word);
					}
					if (FilePointer % 2 == 0)
					{
						Admin_Panel[Admin_Members].Set_Password(Word);
						Admin_Members++;
					}
					FilePointer++;
				}
				Admin_File.close();

				/*READING PATIENTS FILE*/
				fstream Pat_File;
				File = "patients.txt";
				Pat_File.open(File);
				FilePointer = 0;
				int FileLine = 0;
				while (Pat_File >> Word)
				{
					if (FilePointer == 5)
					{
						FilePointer = 0;
					}
					if (FilePointer == 0)
					{
						Patients[Number_of_Patients].Set_Cnic(Word);
					}
					if (FilePointer == 1)
					{
						Patients[Number_of_Patients].Set_Password(Word);
					}
					if (FilePointer == 2)
					{
						Patients[Number_of_Patients].Set_Name(Word);
					}
					if (FilePointer == 3)
					{
						Patients[Number_of_Patients].Set_Phone_No(Word);
					}
					if (FilePointer == 4)
					{
						Patients[Number_of_Patients].Set_Balance(stoi(Word));
						Number_of_Patients++;
					}
					FilePointer++;
				}
				Pat_File.close();

				/*READING DOCTORS FILE*/
				fstream Doc_File;
				File = "doctors.txt";
				Doc_File.open(File);
				FilePointer = 0;
				FileLine = 0;
				while (Doc_File >> Word)
				{
					if (FilePointer > 17)
					{
						FilePointer = 0;
					}
					if (FilePointer == 0)
					{
						Doctors[Number_of_Doctors].Set_Email(Word);
					}
					if (FilePointer == 1)
					{
						Doctors[Number_of_Doctors].Set_Cnic(Word);
					}
					if (FilePointer == 2)
					{
						Doctors[Number_of_Doctors].Set_Password(Word);
					}
					if (FilePointer == 3)
					{
						Doctors[Number_of_Doctors].Set_Name(Word);
					}
					if (FilePointer == 4)
					{
						Doctors[Number_of_Doctors].Set_Spaciallization(Word);
					}
					if (FilePointer == 5)
					{
						Doctors[Number_of_Doctors].Set_City(Word);
					}
					if (FilePointer == 6)
					{
						Doctors[Number_of_Doctors].Set_WorkingHospital(Word);
					}
					if (FilePointer == 7)
					{
						Doctors[Number_of_Doctors].Set_StartTime(stoi(Word));
					}
					if (FilePointer == 8)
					{
						Doctors[Number_of_Doctors].Set_EndTime(stoi(Word));
					}
					if (FilePointer == 9)
					{
						Doctors[Number_of_Doctors].Set_Experience(stoi(Word));
					}
					if (FilePointer == 10)
					{
						Doctors[Number_of_Doctors].Set_Phone_No(Word);
					}
					if (FilePointer == 11)
					{
						Doctors[Number_of_Doctors].Rating = stoi(Word);
					}
					if (FilePointer == 12)
					{
						Doctors[Number_of_Doctors].Number_Of_Patients = stoi(Word);
					}
					if (FilePointer == 13)
					{
						Doctors[Number_of_Doctors].Balance = stoi(Word);
					}
					if (FilePointer == 14)
					{
						Doctors[Number_of_Doctors].Availablity = Word;
					}
					if (FilePointer == 15)
					{
						Doctors[Number_of_Doctors].Video_Rates = stoi(Word);
					}
					if (FilePointer == 16)
					{
						Doctors[Number_of_Doctors].Person_Rates = stoi(Word);
					}
					if (FilePointer == 17)
					{
						Doctors[Number_of_Doctors].Set_Spaciallization2(Word);
						Number_of_Doctors++;
					}
					FilePointer++;
				}
				Doc_File.close();

				fstream App_File;
				File = "appointments.txt";
				App_File.open(File);
				FilePointer = 0;
				while (App_File >> Word)
				{
					if (FilePointer > 15)
					{
						FilePointer = 0;
					}

					if (FilePointer == 0)
					{
						for (int i = 0; i < Number_of_Doctors; i++)
						{
							if (Doctors[i].Get_Cnic() == Word)
							{
								List_Of_Appointments[Number_of_Appointments].Doctor_App = Doctors[i];
							}
						}
					}
					if (FilePointer == 2)
					{
						for (int i = 0; i < Number_of_Patients; i++)
						{
							if (Patients[i].Get_Cnic() == Word)
							{
								List_Of_Appointments[Number_of_Appointments].Patient_App = Patients[i];
							}
						}
					}
					if (FilePointer == 4)
					{
						List_Of_Appointments[Number_of_Appointments].Set_Location(Word);
					}
					if (FilePointer == 5)
					{
						List_Of_Appointments[Number_of_Appointments].Set_Type(Word);
					}
					if (FilePointer == 6)
					{
						List_Of_Appointments[Number_of_Appointments].Set_AppDay(stoi(Word));
					}
					if (FilePointer == 7)
					{
						List_Of_Appointments[Number_of_Appointments].Set_BookDay(stoi(Word));
					}
					if (FilePointer == 8)
					{
						List_Of_Appointments[Number_of_Appointments].Set_Time_Slot(Word);
					}
					if (FilePointer == 9)
					{
						List_Of_Appointments[Number_of_Appointments].Set_Status(Word);
					}
					if (FilePointer == 10)
					{
						List_Of_Appointments[Number_of_Appointments].Pay.Set_Amount(stoi(Word));
					}
					if (FilePointer == 11)
					{
						List_Of_Appointments[Number_of_Appointments].Pay.Set_Gateway(Word);
					}
					if (FilePointer == 12)
					{
						List_Of_Appointments[Number_of_Appointments].Fb.Set_Rating(stoi(Word));
					}
					if (FilePointer == 13)
					{
						List_Of_Appointments[Number_of_Appointments].Fb.Set_pReview(Word);
					}
					if (FilePointer == 14)
					{
						List_Of_Appointments[Number_of_Appointments].Fb.Set_dReview(Word);
					}
					if (FilePointer == 15)
					{
						List_Of_Appointments[Number_of_Appointments].Spaciallization = Word;
						Number_of_Appointments++;
					}

					FilePointer++;
				}
				App_File.close();

				cout << "\t\t||--------------- MENU ---------------||" << endl;
				cout << "\t\t|| PRESS 1, TO VIEW DOCTORS" << endl;
				cout << "\t\t|| PRESS 2, TO CHECK DOCTORS AVAILABILITY" << endl;
				cout << "\t\t|| PRESS 3, TO BOOK AN APPOINTMENT" << endl;				
				cout << "\t\t|| PRESS 4, TO VIEW APPOINTMENTS ON PENDING" << endl;
				cout << "\t\t|| PRESS 5, TO VIEW APPOINTMENTS APPROVED" << endl;
				cout << "\t\t|| PRESS 6, TO VIEW APPOINTMENTS CANCELLED OR CALLED-OFF" << endl;
				cout << "\t\t|| PRESS 7, TO GIVE FEEDBACK ON COMPLETED APPOINTMENT" << endl;
				cout << "\t\t|| PRESS 8, TO CHANGE APPOINTMENT TIME" << endl;
				cout << "\t\t|| PRESS 9, TO CANCEL THE APPOINTMENT" << endl;
				cout << "\t\t|| PRESS 10, TO RESET PASSWORD" << endl;
				cout << "\t\t|| PRESS 11, TO RECHARGE ACCOUNT " << endl;
				cout << "\t\t|| PRESS 12, TO VIEW BALANCE " << endl;
				cout << "\t\t|| PRESS 13, TO LOGOUT " << endl;

				cout << "\t\t|| ENTER: ";
				int Choice2;
				cin >> Choice2;
				while (Choice2 > 13 || Choice2 < 1)
				{
					cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
					cin >> Choice2;
				}
				if (Choice2 == 1)
				{
					cout << endl;
					cout << "\t\t|| PRESS 1, TO VIEW DOCTORS BY SPACIALITY" << endl;
					cout << "\t\t|| PRESS 2, TO VIEW DOCTORS BY CITY" << endl;
					cout << "\t\t|| PRESS 3, TO VIEW DOCTORS BY HOSPITAL" << endl;				
					cout << "\t\t|| ENTER: ";
					int Choice3;
					cin >> Choice3;
					while (Choice3 > 3 || Choice3 < 1)
					{
						cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
						cin >> Choice3;
					}
					if (Choice3 == 1)
					{
						string Spaciallization;
						cout << "\t\tSELECT SPACIALIZATION: " << endl;
						for (int i = 0; i < 8; i++)
						{
							cout << "\t\tPRESS " << i + 1 << ", FOR " << Spaciallities[i] << endl;
						}
						int Choice4;
						cout << "\t\tENTER:";
						cin >> Choice4;
						while (Choice4 > 8 || Choice4 < 1)
						{
							cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
							cin >> Choice4;
						}
						Spaciallization = Spaciallities[Choice4 - 1];

						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\t\tDOCTORS DETAILS" << endl;
						for (int i = 0; i < Number_of_Doctors; i++)
						{
							if (Spaciallization == Doctors[i].Get_Spaciallization() || Spaciallization == Doctors[i].Get_Spaciallization2())
							{
								cout << "|-------------------------------------------------------------" << endl;
								cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
								cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
								cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
								cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
								cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
								cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
								cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
								cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
								cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
								cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
								cout << "|-------------------------------------------------------------" << endl;
							}
						}
					}
					if (Choice3 == 2)
					{
						cout << "\t\tSELECT CITY: " << endl;
						for (int i = 0; i < 3; i++)
						{
							cout << "\t\tPRESS " << i + 1 << ", FOR " << City[i] << endl;
						}
						int Choice4;
						cout << "\t\tENTER:";
						cin >> Choice4;
						while (Choice4 > 3 || Choice4 < 1)
						{
							cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
							cin >> Choice4;
						}
						string Cit = City[Choice4 - 1];
						
						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\t\tDOCTORS DETAILS" << endl;
						for (int i = 0; i < Number_of_Doctors; i++)
						{
							if (Cit==Doctors[i].Get_City())
							{
								cout << "|-------------------------------------------------------------" << endl;
								cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
								cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
								cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
								cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
								cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
								cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
								cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
								cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
								cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
								cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
								cout << "|-------------------------------------------------------------" << endl;
							}
						}
					}
					if (Choice3 == 3)
					{
						for (int i = 0; i < Number_of_Hospitals; i++)
						{
							cout << "\t\tPRESS " << i + 1 << ", FOR " << Locations[i].Hospital << endl;
						}
						int Choice4;
						cout << "\t\tENTER:";
						cin >> Choice4;
						while (Choice4 > Number_of_Hospitals || Choice4 < 1)
						{
							cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
							cin >> Choice4;
						}
						string Hospital = Locations[Choice4 - 1].Hospital;

						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\t\tDOCTORS DETAILS" << endl;
						for (int i = 0; i < Number_of_Doctors; i++)
						{
							if (Hospital == Doctors[i].Get_WorkingHospital())
							{
								cout << "|-------------------------------------------------------------" << endl;
								cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
								cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
								cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
								cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
								cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
								cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
								cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
								cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
								cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
								cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
								cout << "|-------------------------------------------------------------" << endl;
							}
						}
					}
				}
				else if (Choice2 == 2)
				{
					cout << "|-------------------------------------------------------------" << endl;
					cout << "|\t\tDOCTORS DETAILS" << endl;
					for (int i = 0; i < Number_of_Doctors; i++)
					{
						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\tDOCTOR ID: " << 1000 + i << endl;
						cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
						cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
						cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
						cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
						cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
						cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
						cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
						cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
						cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
						cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
						cout << "|-------------------------------------------------------------" << endl;
					}
					int ID;
					cout << "\t\tENTER THE ID OF DOCTOR YOU WANT TO SELECT: ";
					cin >> ID;
					bool Authenticate = false;
					for (int i = 0; i < Number_of_Doctors; i++)
					{
						if ((1000 + i) == ID)
						{
							Authenticate = true;
							cout << "\t\tAUTHENTIFICATION SUCCESSFUL" << endl;
						}
					}

					if (Authenticate)
					{
						ID = ID - 1000;
						cout << "\t\tAVAILABILITY: " << Doctors[ID].Availablity << endl;
						cout << "\t\tIN PERSON CHARGES: " << Doctors[ID].Person_Rates<<"$" << endl;
						cout << "\t\tIN VIDEO CHARGES: " << Doctors[ID].Video_Rates << "$" << endl;
					}
					else
					{
						cout << "\t\tDOCTOR NOT FOUND" << endl;
					}
				}
				else if (Choice2 == 3)
				{
					cout << endl;
					cout << "\t\t|| PRESS 1, TO SELECT DOCTOR BY SPACIALITY" << endl;
					cout << "\t\t|| PRESS 2, TO SELECT DOCTOR BY CITY" << endl;
					cout << "\t\t|| PRESS 3, TO SELECT DOCTORS BY HOSPITAL" << endl;
					cout << "\t\t|| ENTER: ";
					int Choice3;
					cin >> Choice3;
					while (Choice3 > 3 || Choice3 < 1)
					{
						cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
						cin >> Choice3;
					}
					int ID = 0;
					bool ID_Found = false;
					bool Doc_Avail = false;
					if (Choice3 == 1)
					{
						string Spaciallization;
						cout << "\t\tSELECT SPACIALIZATION: " << endl;
						for (int i = 0; i < 8; i++)
						{
							cout << "\t\tPRESS " << i + 1 << ", FOR " << Spaciallities[i] << endl;
						}
						int Choice4;
						cout << "\t\tENTER:";
						cin >> Choice4;
						while (Choice4 > 8 || Choice4 < 1)
						{
							cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
							cin >> Choice4;
						}
						Spaciallization = Spaciallities[Choice4 - 1];

						int Array[100];
						int Array_Index = 0;
						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\t\tDOCTORS DETAILS" << endl;
						for (int i = 0; i < Number_of_Doctors; i++)
						{
							if (Spaciallization == Doctors[i].Get_Spaciallization() || Spaciallization == Doctors[i].Get_Spaciallization2())
							{
								cout << "|-------------------------------------------------------------" << endl;
								cout << "|\tDOCTOR ID: " << 1000 + i << endl;
								cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
								cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
								cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
								cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
								cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
								cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
								cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
								cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
								cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
								cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
								cout << "|-------------------------------------------------------------" << endl;
								Array[Array_Index] = 1000 + i;
								Array_Index++;
								Doc_Avail = true;
							}
						}
						if (Doc_Avail)
						{
							cout << "\t\tENTER THE ID OF DOCTOR: ";
							cin >> ID;
							for (int i = 0; i < Array_Index; i++)
							{
								if (ID == Array[i])
								{
									ID_Found = true;
								}
							}
						}
					}
					if (Choice3 == 2)
					{
						cout << "\t\tSELECT CITY: " << endl;
						for (int i = 0; i < 3; i++)
						{
							cout << "\t\tPRESS " << i + 1 << ", FOR " << City[i] << endl;
						}
						int Choice4;
						cout << "\t\tENTER:";
						cin >> Choice4;
						while (Choice4 > 3 || Choice4 < 1)
						{
							cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
							cin >> Choice4;
						}
						string Cit = City[Choice4 - 1];
						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\t\tDOCTORS DETAILS" << endl;
						int Array[100];
						int Array_Index = 0;
						for (int i = 0; i < Number_of_Doctors; i++)
						{
							if (Cit == Doctors[i].Get_City())
							{
								cout << "|-------------------------------------------------------------" << endl;
								cout << "|\tDOCTOR ID: " << 1000 + i << endl;
								cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
								cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
								cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
								cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
								cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
								cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
								cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
								cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
								cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
								cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
								cout << "|-------------------------------------------------------------" << endl;
								Array[Array_Index] = 1000 + i;
								Array_Index++;
								Doc_Avail = true;
							}
						}
						if (Doc_Avail)
						{
							cout << "\t\tENTER THE ID OF DOCTOR: ";
							cin >> ID;
							for (int i = 0; i < Array_Index; i++)
							{
								if (ID == Array[i])
								{
									ID_Found = true;
								}
							}
						}
					}
					if (Choice3 == 3)
					{
						for (int i = 0; i < Number_of_Hospitals; i++)
						{
							cout << "\t\tPRESS " << i + 1 << ", FOR " << Locations[i].Hospital << endl;
						}
						int Choice4;
						cout << "\t\tENTER:";
						cin >> Choice4;
						while (Choice4 > Number_of_Hospitals || Choice4 < 1)
						{
							cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
							cin >> Choice4;
						}
						string Hospital = Locations[Choice4 - 1].Hospital;
						cout << "|-------------------------------------------------------------" << endl;
						cout << "|\t\tDOCTORS DETAILS" << endl;
						int Array[100];
						int Array_Index = 0;
						for (int i = 0; i < Number_of_Doctors; i++)
						{
							if (Hospital == Doctors[i].Get_WorkingHospital())
							{
								cout << "|-------------------------------------------------------------" << endl;
								cout << "|\tDOCTOR ID: " << 1000 + i << endl;
								cout << "|\tDOCTOR_NAME: " << Doctors[i].Get_Name() << endl;
								cout << "|\tSPACIALIZATION-1: " << Doctors[i].Get_Spaciallization() << endl;
								cout << "|\tSPACIALIZATION-2: " << Doctors[i].Get_Spaciallization2() << endl;
								cout << "|\tWORKING HOSPITAL: " << Doctors[i].Get_WorkingHospital() << endl;
								cout << "|\tCITY: " << Doctors[i].Get_City() << endl;
								cout << "|\tEMAIL: " << Doctors[i].Get_Email() << endl;
								cout << "|\tPHONE-NO: " << Doctors[i].Get_Phone_No() << endl;
								cout << "|\tAVAILABILITY: " << Doctors[i].Availablity << endl;
								cout << "|\tIn-Person Charges: " << Doctors[i].Person_Rates << endl;
								cout << "|\tVideo Charges: " << Doctors[i].Video_Rates << endl;
								cout << "|-------------------------------------------------------------" << endl;
								Array[Array_Index] = 1000 + i;
								Array_Index++;
								Doc_Avail = true;
							}
						}
						if (Doc_Avail)
						{
							cout << "\t\tENTER THE ID OF DOCTOR: ";
							cin >> ID;
							for (int i = 0; i < Array_Index; i++)
							{
								if (ID == Array[i])
								{
									ID_Found = true;
								}
							}
						}
					}
					
					if (!ID_Found || !Doc_Avail)
					{
						cout << endl;
						cout << "\t\tTHE DOCTOR WAS NOT AVAILABLE OR ID NOT FOUND, PLEASE TRY LATER" << endl;
					}
					else
					{
						cout << endl;
						ID = ID - 1000;
						if (Doctors[ID].Availablity == "AVAILABLE")
						{
							string Location;
							string Type;
							int Booked_Day;
							int App_Day=0;
							int Time_Slot;
							string Status;
							Appointments App;
							App.Set_Status("PENDING");
							for (int i = 0; i < Number_of_Patients; i++)
							{
								if (Patients[i].Get_Cnic() == Username)
								{
									App.Patient_App = Patients[i];
								}
							}

							string Spaciallization;
							if (Doctors[ID].Get_Spaciallization2() != "NONE")
							{
								cout << "\t\tCHOOSE THE SPACIALLITY" << endl;
								cout << "\t\tPRESS 1, FOR " << Doctors[ID].Get_Spaciallization() << endl;
								cout << "\t\tPRESS 2, FOR " << Doctors[ID].Get_Spaciallization2() << endl;
								cout << "\t\tENTER: ";
								int CH;
								cin >> CH;
								while (CH > 2 || CH < 1)
								{
									cout << "\t\t|| INVALID CHOICE: ";
									cin >> CH;
								}
								if (CH == 1)
								{
									Spaciallization = Doctors[ID].Get_Spaciallization();
								}
								else
								{
									Spaciallization = Doctors[ID].Get_Spaciallization2();
								}
							}
							else
							{
								Spaciallization = Doctors[ID].Get_Spaciallization();
							}

							App.Spaciallization = Spaciallization;
							App.Doctor_App = Doctors[ID];
							App.Set_Location(Doctors[ID].Get_WorkingHospital());
							cout << "\t\tCHOOSE TYPE OF APPOINTMENT" << endl;
							cout << "\t\tPRESS 1, FOR VIDEO APPOINTMENT" << endl;
							cout << "\t\tPRESS 2, FOR IN_PERSON APPOINTMENTS" << endl;
							cout << "\t\tENTER: ";
							int A;
							cin >> A;
							while (A > 2 || A < 1)
							{
								cout << "\t\t|| INVALID CHOICE: ";
								cin >> A;
							}
							if (A == 1)
							{
								App.Set_Type("VIDEO");
								App.Pay.Set_Amount(Doctors[ID].Video_Rates);
							}
							else
							{
								App.Set_Type("IN-PERSON");
								App.Pay.Set_Amount(Doctors[ID].Person_Rates);
							}

							cout << "\t\tENTER THE DAY OF DATE TODAY (ie 24, if 24-2-2002): ";
							cin >> Booked_Day;
							while (Booked_Day>31 || Booked_Day < 1)
							{
								cout << "\t\t|| INVALID DATE: ";
								cin >> Booked_Day;
							}
							App.Set_BookDay(Booked_Day);

							if (Booked_Day != 31)
							{
								//SETTING APPOINTMENT DATE
								int Date = 0;
								while (Booked_Day != 31)
								{
									cout << "\t\tPRESS " << Date + 1 << ",\tFOR " << Booked_Day + 1 << "-JUNE-2022" << endl;
									Date++;
									Booked_Day++;
								}
								int Key1;
								cout << "\t\tENTER: ";
								cin >> Key1;
								while (Key1 > Date || Key1 < 1)
								{
									cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
									cin >> Key1;
								}
								Date = 0;
								Booked_Day = App.Get_BookDay();
								while (Booked_Day != 31)
								{
									if (Key1 == Date + 1)
									{
										App.Set_AppDay(Booked_Day+1);
									}

									Date++;
									Booked_Day++;
								}
								//END

								//APPOINTMENT TIME SETTING
								int Start_Time = Doctors[ID].Get_StartTime();
								int End_Time = Doctors[ID].Get_EndTime();
								int Slot_Index = 0;
								while (Start_Time != End_Time + 1)
								{
									string NEW = to_string(Start_Time);
									NEW += ":00-";
									int X = Start_Time + 1;
									NEW += to_string(X);
									NEW += ":00";
									cout << "\t\tPRESS " << Slot_Index + 1 << ", FOR " << Start_Time << ":00-" << Start_Time + 1 << ":00" << endl;
									Slot_Index++;
									Start_Time++;
								}
								int Key;
								cout << "\t\tENTER: ";
								cin >> Key;
								while (Key > Slot_Index || Key < 1)
								{
									cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
									cin >> Key;
								}
								cout << endl;
								Start_Time = Doctors[ID].Get_StartTime();
								End_Time = Doctors[ID].Get_EndTime();
								Slot_Index = 0;
								while (Start_Time != End_Time + 1)
								{
									string NEW = to_string(Start_Time);
									NEW += ":00-";
									int X = Start_Time + 1;
									NEW += to_string(X);
									NEW += ":00";
									if (Key == Slot_Index + 1)
									{
										App.Set_Time_Slot(NEW);
									}
									Slot_Index++;
									Start_Time++;
								}
								//END
								bool Overlap = false;
								for (int i = 0; i < Number_of_Appointments; i++)
								{
									if ( List_Of_Appointments[i].Doctor_App.Get_Cnic() == App.Doctor_App.Get_Cnic() )
									{
										if (List_Of_Appointments[i].Get_AppDay() == App.Get_AppDay() && List_Of_Appointments[i].Get_Time_Slot() == App.Get_Time_Slot())
										{
											cout << "\t\tDOCTOR HAS AN APPOINTMENT BOOKED AT THIS TIME, SELECT ANOTHER TIMESLOT" << endl;
											Overlap = true;
										}
									}
									if (List_Of_Appointments[i].Patient_App.Get_Cnic() == App.Patient_App.Get_Cnic())
									{
										if (List_Of_Appointments[i].Get_AppDay() == App.Get_AppDay() && List_Of_Appointments[i].Get_Time_Slot() == App.Get_Time_Slot())
										{
											cout << "\t\tYOU ALREADY HAVE AN APPOINTMENT BOOKED AT THIS TIME, SELECT ANOTHER TIMESLOT" << endl;
											Overlap = true;
										}
									}
								}
								if (!Overlap)
								{
									if (App.Patient_App.Get_Balance() < App.Pay.Get_Amount())
									{
										cout << "YOUR ACCOUNT HAS INSUFFICENT BALANCE, PLEASE RECHARGE FIRST" << endl;
									}
									else
									{
										cout << "\n\t\tPAYMENT:";
										cout << "\t\tCHOOSE THE PAYMENT GATEWAY " << endl;
										cout << "\t\tPRESS 1, FOR JAZZ CASH " << endl;
										cout << "\t\tPRESS 2, FOR EASY PAISA " << endl;
										cout << "\t\tPRESS 3, FOR PAY-PAK " << endl;
										cout << "\t\tPRESS 4, FOR UNION-PAY " << endl;
										cout << "\t\tPRESS 5, FOR BANK-TRANSFER " << endl;
										cout << "\t\tENTER: ";
										int Gate;
										cin >> Gate;
										while (Gate > 5 || Gate < 1)
										{
											cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
											cin >> Gate;
										}
										if (Gate == 1)
										{
											App.Pay.Set_Gateway("JAZZ-CASH");
										}
										if (Gate == 2)
										{
											App.Pay.Set_Gateway("EASY-PAISA");
										}
										if (Gate == 3)
										{
											App.Pay.Set_Gateway("PAY-PAK");
										}
										if (Gate == 4)
										{
											App.Pay.Set_Gateway("UNION-PAY");
										}
										if (Gate == 5)
										{
											App.Pay.Set_Gateway("BANK-TRANSFER");
										}

										for (int i = 0; i < Number_of_Patients; i++)
										{
											if (Patients[i].Get_Cnic() == Username)
											{
												Patients[i].Set_Balance(Patients[i].Get_Balance() - App.Pay.Get_Amount());
											}
										}
										Doctors[ID].Balance = Doctors[ID].Balance + App.Pay.Get_Amount();

										ofstream File;
										File.open("doctors.txt");
										for (int i = 0; i < Number_of_Doctors; i++)
										{
											string Write = Doctors[i].Get_Email();
											Write += '\t';
											Write += Doctors[i].Get_Cnic();
											Write += '\t';
											Write += Doctors[i].Get_Password();
											Write += '\t';
											Write += Doctors[i].Get_Name();
											Write += '\t';
											Write += Doctors[i].Get_Spaciallization();
											Write += '\t';
											Write += Doctors[i].Get_City();
											Write += '\t';
											Write += Doctors[i].Get_WorkingHospital();
											Write += '\t';
											Write += to_string(Doctors[i].Get_StartTime());
											Write += '\t';
											Write += to_string(Doctors[i].Get_EndTime());
											Write += '\t';
											Write += to_string(Doctors[i].Get_Experience());
											Write += '\t';
											Write += Doctors[i].Get_Phone_No();
											Write += '\t';
											Write += to_string(Doctors[i].Rating);
											Write += '\t';
											Write += to_string(Doctors[i].Number_Of_Patients);
											Write += '\t';
											Write += to_string(Doctors[i].Balance);
											Write += '\t';
											Write += Doctors[i].Availablity;
											Write += '\t';
											Write += to_string(Doctors[i].Video_Rates);
											Write += '\t';
											Write += to_string(Doctors[i].Person_Rates);
											Write += '\t';
											Write += Doctors[i].Get_Spaciallization2();
											File << Write << endl;
										}
										File.close();

										File.open("patients.txt");
										for (int i = 0; i < Number_of_Patients; i++)
										{
											string Write = Patients[i].Get_Cnic();
											Write += '\t';
											Write += Patients[i].Get_Password();
											Write += '\t';
											Write += Patients[i].Get_Name();
											Write += '\t';
											Write += Patients[i].Get_Phone();
											Write += '\t';
											Write += to_string(Patients[i].Get_Balance());
											File << Write << endl;
										}
										File.close();

										File.open("transactions.txt", std::ios_base::app);
										string Write = App.Doctor_App.Get_Cnic();
										Write += '\t';
										Write += App.Patient_App.Get_Cnic();
										Write += '\t';
										Write += to_string(App.Pay.Get_Amount());
										Write += '\t';
										Write += App.Pay.Get_Gateway();
										File << Write << endl;
										File.close();

										File.open("appointments.txt", std::ios_base::app);
										Write = App.Doctor_App.Get_Cnic();
										Write += '\t';
										Write += App.Doctor_App.Get_Name();
										Write += '\t';
										Write += App.Patient_App.Get_Cnic();
										Write += '\t';
										Write += App.Patient_App.Get_Name();
										Write += '\t';
										Write += App.Get_Location();
										Write += '\t';
										Write += App.Get_Type();
										Write += '\t';
										Write += to_string(App.Get_AppDay());
										Write += '\t';
										Write += to_string(App.Get_BookDay());
										Write += '\t';
										Write += App.Get_Time_Slot();
										Write += '\t';
										Write += App.Get_Status();
										Write += '\t';
										Write += to_string(App.Pay.Get_Amount());
										Write += '\t';
										Write += App.Pay.Get_Gateway();
										Write += '\t';
										Write += to_string(0);
										Write += '\t';
										Write += "NO-FEEDBACK";
										Write += '\t';
										Write += "NO-FEEDBACK";
										Write += '\t';
										Write += App.Spaciallization;

										File << Write << endl;
								
										File.close();
										cout << endl;
										cout << "\t\tYOUR APPOINTMENT WAS BOOKED SUCCESSFULLY" << endl;
										cout << endl;

									}
								}
							}
							else
							{
								cout << "\t\tSORRY APPOINTMENTS ARE CLOSED FOR THIS MONTH" << endl;
							}
						}
						else
						{
							cout << "\t\tDOCTOR IS NOT TAKING APPOINTMENTS AT THE MOMENT" << endl;
						}
					

					}
				}
				else if (Choice2 == 4)
				{
					cout << "|------------------------------APPOINTMENTS-----------------------------------|" << endl;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Patient_App.Get_Cnic() == Patients[Id].Get_Cnic() && List_Of_Appointments[i].Get_Status() == "PENDING")
						{
							cout << "|----------------------------------------------------------------|" << endl;
							cout << "|- BOOKING DATE: " << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022" << endl;
							cout << "|- DATED: " << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022" << endl;
							cout << "|- TIME: " << List_Of_Appointments[i].Get_Time_Slot() << endl;
							cout << "|- STATUS: " << List_Of_Appointments[i].Get_Status() << endl;
							cout << "|- TYPE: " << List_Of_Appointments[i].Get_Type() << endl;
							cout << "|- FOR: " << List_Of_Appointments[i].Spaciallization << endl;
							cout << "|- LOCATION: " << List_Of_Appointments[i].Get_Location() << endl;
							cout << "|- PATIENT NAME: " << List_Of_Appointments[i].Patient_App.Get_Name() << endl;
							cout << "|- PAID AMOUNT: " << List_Of_Appointments[i].Pay.Get_Amount() << endl;
							cout << "|----------------------------------------------------------------|" << endl;
						}
					}

				}
				else if (Choice2 == 5)
				{
					cout << "|------------------------------APPOINTMENTS-----------------------------------|" << endl;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Patient_App.Get_Cnic() == Patients[Id].Get_Cnic() && List_Of_Appointments[i].Get_Status() == "APPROVED")
						{
							cout << "|----------------------------------------------------------------|" << endl;
							cout << "|- BOOKING DATE: " << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022" << endl;
							cout << "|- DATED: " << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022" << endl;
							cout << "|- TIME: " << List_Of_Appointments[i].Get_Time_Slot() << endl;
							cout << "|- STATUS: " << List_Of_Appointments[i].Get_Status() << endl;
							cout << "|- TYPE: " << List_Of_Appointments[i].Get_Type() << endl;
							cout << "|- FOR: " << List_Of_Appointments[i].Spaciallization << endl;
							cout << "|- LOCATION: " << List_Of_Appointments[i].Get_Location() << endl;
							cout << "|- PATIENT NAME: " << List_Of_Appointments[i].Patient_App.Get_Name() << endl;
							cout << "|- PAID AMOUNT: " << List_Of_Appointments[i].Pay.Get_Amount() << endl;
							cout << "|----------------------------------------------------------------|" << endl;
						}
					}

				}
				else if (Choice2 == 6)
				{
					cout << "|------------------------------APPOINTMENTS-----------------------------------|" << endl;
					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Patient_App.Get_Cnic() == Patients[Id].Get_Cnic() && List_Of_Appointments[i].Get_Status() == "CANCELLED" ||
							List_Of_Appointments[i].Get_Status() == "CALLED-OFF" || List_Of_Appointments[i].Get_Status() == "DISAPPROVED")
						{
							cout << "|----------------------------------------------------------------|" << endl;
							cout << "|- BOOKING DATE: " << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022" << endl;
							cout << "|- DATED: " << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022" << endl;
							cout << "|- TIME: " << List_Of_Appointments[i].Get_Time_Slot() << endl;
							cout << "|- STATUS: " << List_Of_Appointments[i].Get_Status() << endl;
							cout << "|- TYPE: " << List_Of_Appointments[i].Get_Type() << endl;
							cout << "|- FOR: " << List_Of_Appointments[i].Spaciallization << endl;
							cout << "|- LOCATION: " << List_Of_Appointments[i].Get_Location() << endl;
							cout << "|- PATIENT NAME: " << List_Of_Appointments[i].Patient_App.Get_Name() << endl;
							cout << "|- PAID AMOUNT: " << List_Of_Appointments[i].Pay.Get_Amount() << endl;
							cout << "|----------------------------------------------------------------|" << endl;
						}
					}
				}
				else if (Choice2 == 7)
				{
					int* Array = new int[Number_of_Appointments];
					int Index = 0;
					cout << endl;
					cout << "APT-ID\tDOCTOR-CNIC\tDr.NAME\t\tPATIENT_CNIC\tPATIENT_NAME\tBOOKED_DATE\tAPPOINTMENT\tTIME\t\tSTATUS" << endl;

					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Get_Status() == "COMPLETED" && List_Of_Appointments[i].Patient_App.Get_Cnic() == Patients[Id].Get_Cnic())
						{
							cout << 1000 + i << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_Time_Slot() << "\t";
							cout << List_Of_Appointments[i].Get_Status() << endl;
							Array[Index] = 1000 + i;
							Index++;
						}
					}
					if (Index != 0)
					{
						int ID;
						cout << "\t\tENTER APPOINTMENT ID: ";
						cin >> ID;
						bool found = false;
						for (int i = 0; i < Index; i++)
						{
							if (ID == Array[i])
							{
								found = true;
							}
						}
						if (!found)
						{
							cout << "\t\tYOU ENTERED AN INCORRECT ID, TRY AGAIN LATER" << endl;
						}
						else
						{
							ID = ID - 1000;
							int Rating;
							cout << "GIVE A RATING TO YOUR DOCTOR (1-5): ";
							cin >> Rating;
							while (Rating > 5 || Rating < 1)
							{
								cout << "\t\tRATING ONLY BETWEEN 1-5, ENTER AGAIN: ";
								cin >> Rating;
							}
							cout << "\t\tPRESS 1, FOR SATISFIED WITH DOCTOR" << endl;
							cout << "\t\tPRESS 2, FOR NOT-SATISFIED WITH DOCTOR" << endl;
							cout << "\t\tENTER: ";
							int CH;
							cin >> CH;
							while (CH > 2 || CH < 1)
							{
								cout << "\t\tINVALID CHOICE, ENTER AGAIN: ";
								cin >> CH;
							}
							if (CH == 1)
							{
								List_Of_Appointments[ID].Fb.Set_pReview("SATISFIED");
							}
							else
							{
								List_Of_Appointments[ID].Fb.Set_pReview("NOT-SATISFIED");
							}
							List_Of_Appointments[ID].Fb.Set_Rating(Rating);
							ofstream File;
							File.open("patients.txt");
							for (int i = 0; i < Number_of_Patients; i++)
							{
								string Write = Patients[i].Get_Cnic();
								Write += '\t';
								Write += Patients[i].Get_Password();
								Write += '\t';
								Write += Patients[i].Get_Name();
								Write += '\t';
								Write += Patients[i].Get_Phone();
								Write += '\t';
								Write += to_string(Patients[i].Get_Balance());
								File << Write << endl;
							}
							File.close();

							File.open("doctors.txt");
							for (int i = 0; i < Number_of_Doctors; i++)
							{
								string Write = Doctors[i].Get_Email();
								Write += '\t';
								Write += Doctors[i].Get_Cnic();
								Write += '\t';
								Write += Doctors[i].Get_Password();
								Write += '\t';
								Write += Doctors[i].Get_Name();
								Write += '\t';
								Write += Doctors[i].Get_Spaciallization();
								Write += '\t';
								Write += Doctors[i].Get_City();
								Write += '\t';
								Write += Doctors[i].Get_WorkingHospital();
								Write += '\t';
								Write += to_string(Doctors[i].Get_StartTime());
								Write += '\t';
								Write += to_string(Doctors[i].Get_EndTime());
								Write += '\t';
								Write += to_string(Doctors[i].Get_Experience());
								Write += '\t';
								Write += Doctors[i].Get_Phone_No();
								Write += '\t';
								Write += to_string(Doctors[i].Rating);
								Write += '\t';
								Write += to_string(Doctors[i].Number_Of_Patients);
								Write += '\t';
								Write += to_string(Doctors[i].Balance);
								Write += '\t';
								Write += Doctors[i].Availablity;
								Write += '\t';
								Write += to_string(Doctors[i].Video_Rates);
								Write += '\t';
								Write += to_string(Doctors[i].Person_Rates);
								Write += '\t';
								Write += Doctors[i].Get_Spaciallization2();

								File << Write << endl;
							}
							File.close();

							File.open("appointments.txt");
							for (int i = 0; i < Number_of_Appointments; i++)
							{
								string Write = List_Of_Appointments[i].Doctor_App.Get_Cnic();
								Write += '\t';
								Write += List_Of_Appointments[i].Doctor_App.Get_Name();
								Write += '\t';
								Write += List_Of_Appointments[i].Patient_App.Get_Cnic();
								Write += '\t';
								Write += List_Of_Appointments[i].Patient_App.Get_Name();
								Write += '\t';
								Write += List_Of_Appointments[i].Get_Location();
								Write += '\t';
								Write += List_Of_Appointments[i].Get_Type();
								Write += '\t';
								Write += to_string(List_Of_Appointments[i].Get_AppDay());
								Write += '\t';
								Write += to_string(List_Of_Appointments[i].Get_BookDay());
								Write += '\t';
								Write += List_Of_Appointments[i].Get_Time_Slot();
								Write += '\t';
								Write += List_Of_Appointments[i].Get_Status();
								Write += '\t';
								Write += to_string(List_Of_Appointments[i].Pay.Get_Amount());
								Write += '\t';
								Write += List_Of_Appointments[i].Pay.Get_Gateway();
								Write += '\t';
								Write += to_string(List_Of_Appointments[i].Fb.Get_Rating());
								Write += '\t';
								Write += List_Of_Appointments[i].Fb.Get_pReview();
								Write += '\t';
								Write += List_Of_Appointments[i].Fb.Get_dReview();
								Write += '\t';
								Write += List_Of_Appointments[i].Spaciallization;

								File << Write << endl;
							}
							File.close();

						}
					}
				}
				else if (Choice2 == 8)
				{
					int* Array = new int[Number_of_Appointments];
					int Index = 0;
					cout << endl;
					cout << "APT-ID\tDOCTOR-CNIC\tDr.NAME\t\tPATIENT_CNIC\tPATIENT_NAME\tBOOKED_DATE\tAPPOINTMENT\tTIME\t\tSTATUS" << endl;

					for (int i = 0; i < Number_of_Appointments; i++)
					{
						if (List_Of_Appointments[i].Get_Status() == "APPROVED" || List_Of_Appointments[i].Get_Status() == "PENDING" && List_Of_Appointments[i].Patient_App.Get_Cnic() == Patients[Id].Get_Cnic())
						{
							cout << 1000 + i << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Doctor_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Cnic() << "\t";
							cout << List_Of_Appointments[i].Patient_App.Get_Name() << "\t";
							cout << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022\t";
							cout << List_Of_Appointments[i].Get_Time_Slot() << "\t";
							cout << List_Of_Appointments[i].Get_Status() << endl;
							Array[Index] = 1000 + i;
							Index++;
						}
					}
					if (Index != 0)
					{
						int ID;
						cout << "\t\tENTER APPOINTMENT ID: ";
						cin >> ID;
						bool found = false;
						for (int i = 0; i < Index; i++)
						{
							if (ID == Array[i])
							{
								found = true;
							}
						}
						if (!found)
						{
							cout << "\t\tYOU ENTERED AN INCORRECT ID, TRY AGAIN LATER" << endl;
						}
						else
						{
							Appointments App;
							int Booked_Day;
							int App_Day;
							cout << "\t\tENTER THE DAY OF DATE TODAY (ie 24, if 24-2-2002): ";
							cin >> Booked_Day;
							while (Booked_Day > 31 || Booked_Day < 1)
							{
								cout << "\t\t|| INVALID DATE: ";
								cin >> Booked_Day;
							}
							ID = ID - 1000;
							List_Of_Appointments[ID].Set_BookDay(Booked_Day);
							int NEW = Booked_Day;
							if (Booked_Day != 31)
							{
								//SETTING APPOINTMENT DATE
								int Date = 0;
								while (Booked_Day != 31)
								{
									cout << "\t\tPRESS " << Date + 1 << ",\tFOR " << Booked_Day + 1 << "-JUNE-2022" << endl;
									Date++;
									Booked_Day++;
								}
								int Key1;
								cout << "\t\tENTER: ";
								cin >> Key1;
								while (Key1 > Date || Key1 < 1)
								{
									cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
									cin >> Key1;
								}
								Date = 0;
								Booked_Day = NEW;
								while (Booked_Day != 31)
								{
									if (Key1 == Date + 1)
									{
										App_Day = Booked_Day + 1;
									}

									Date++;
									Booked_Day++;
								}
								//END
								List_Of_Appointments[ID].Set_AppDay(App_Day);

								//APPOINTMENT TIME SETTING
								int Start_Time = List_Of_Appointments[ID].Doctor_App.Get_StartTime();
								int End_Time = List_Of_Appointments[ID].Doctor_App.Get_EndTime();
								int Slot_Index = 0;
								while (Start_Time != End_Time + 1)
								{
									string NEW = to_string(Start_Time);
									NEW += ":00-";
									int X = Start_Time + 1;
									NEW += to_string(X);
									NEW += ":00";
									cout << "\t\tPRESS " << Slot_Index + 1 << ", FOR " << Start_Time << ":00-" << Start_Time + 1 << ":00" << endl;
									Slot_Index++;
									Start_Time++;
								}
								int Key;
								cout << "\t\tENTER: ";
								cin >> Key;
								while (Key > Slot_Index || Key < 1)
								{
									cout << "\t\t|| INVALID CHOICE, ENTER AGAIN: ";
									cin >> Key;
								}
								cout << endl;
								Start_Time = List_Of_Appointments[ID].Doctor_App.Get_StartTime();
								End_Time = List_Of_Appointments[ID].Doctor_App.Get_EndTime();
								Slot_Index = 0;
								while (Start_Time != End_Time + 1)
								{
									string NEW = to_string(Start_Time);
									NEW += ":00-";
									int X = Start_Time + 1;
									NEW += to_string(X);
									NEW += ":00";
									if (Key == Slot_Index + 1)
									{
										
										List_Of_Appointments[ID].Set_Time_Slot(NEW);
									}
									Slot_Index++;
									Start_Time++;
								}
								//END
								bool Overlap = false;
								for (int i = 0; i < Number_of_Appointments; i++)
								{
									if (List_Of_Appointments[i].Doctor_App.Get_Cnic() == App.Doctor_App.Get_Cnic())
									{
										if (List_Of_Appointments[i].Get_AppDay() == App.Get_AppDay() && List_Of_Appointments[i].Get_Time_Slot() == App.Get_Time_Slot())
										{
											cout << "\t\tDOCTOR HAS AN APPOINTMENT BOOKED AT THIS TIME, SELECT ANOTHER TIMESLOT" << endl;
											Overlap = true;
										}
									}
									if (List_Of_Appointments[i].Patient_App.Get_Cnic() == App.Patient_App.Get_Cnic())
									{
										if (List_Of_Appointments[i].Get_AppDay() == App.Get_AppDay() && List_Of_Appointments[i].Get_Time_Slot() == App.Get_Time_Slot())
										{
											cout << "\t\tYOU ALREADY HAVE AN APPOINTMENT BOOKED AT THIS TIME, SELECT ANOTHER TIMESLOT" << endl;
											Overlap = true;
										}
									}
								}
								if (!Overlap)
								{
									cout << "\t\tAPPOINTMENT UPDATED" << endl;
									ofstream File;
									File.open("patients.txt");
									for (int i = 0; i < Number_of_Patients; i++)
									{
										string Write = Patients[i].Get_Cnic();
										Write += '\t';
										Write += Patients[i].Get_Password();
										Write += '\t';
										Write += Patients[i].Get_Name();
										Write += '\t';
										Write += Patients[i].Get_Phone();
										Write += '\t';
										Write += to_string(Patients[i].Get_Balance());
										File << Write << endl;
									}
									File.close();

									File.open("doctors.txt");
									for (int i = 0; i < Number_of_Doctors; i++)
									{
										string Write = Doctors[i].Get_Email();
										Write += '\t';
										Write += Doctors[i].Get_Cnic();
										Write += '\t';
										Write += Doctors[i].Get_Password();
										Write += '\t';
										Write += Doctors[i].Get_Name();
										Write += '\t';
										Write += Doctors[i].Get_Spaciallization();
										Write += '\t';
										Write += Doctors[i].Get_City();
										Write += '\t';
										Write += Doctors[i].Get_WorkingHospital();
										Write += '\t';
										Write += to_string(Doctors[i].Get_StartTime());
										Write += '\t';
										Write += to_string(Doctors[i].Get_EndTime());
										Write += '\t';
										Write += to_string(Doctors[i].Get_Experience());
										Write += '\t';
										Write += Doctors[i].Get_Phone_No();
										Write += '\t';
										Write += to_string(Doctors[i].Rating);
										Write += '\t';
										Write += to_string(Doctors[i].Number_Of_Patients);
										Write += '\t';
										Write += to_string(Doctors[i].Balance);
										Write += '\t';
										Write += Doctors[i].Availablity;
										Write += '\t';
										Write += to_string(Doctors[i].Video_Rates);
										Write += '\t';
										Write += to_string(Doctors[i].Person_Rates);
										Write += '\t';
										Write += Doctors[i].Get_Spaciallization2();

										File << Write << endl;
									}
									File.close();

									File.open("appointments.txt");
									for (int i = 0; i < Number_of_Appointments; i++)
									{
										string Write = List_Of_Appointments[i].Doctor_App.Get_Cnic();
										Write += '\t';
										Write += List_Of_Appointments[i].Doctor_App.Get_Name();
										Write += '\t';
										Write += List_Of_Appointments[i].Patient_App.Get_Cnic();
										Write += '\t';
										Write += List_Of_Appointments[i].Patient_App.Get_Name();
										Write += '\t';
										Write += List_Of_Appointments[i].Get_Location();
										Write += '\t';
										Write += List_Of_Appointments[i].Get_Type();
										Write += '\t';
										Write += to_string(List_Of_Appointments[i].Get_AppDay());
										Write += '\t';
										Write += to_string(List_Of_Appointments[i].Get_BookDay());
										Write += '\t';
										Write += List_Of_Appointments[i].Get_Time_Slot();
										Write += '\t';
										Write += List_Of_Appointments[i].Get_Status();
										Write += '\t';
										Write += to_string(List_Of_Appointments[i].Pay.Get_Amount());
										Write += '\t';
										Write += List_Of_Appointments[i].Pay.Get_Gateway();
										Write += '\t';
										Write += to_string(List_Of_Appointments[i].Fb.Get_Rating());
										Write += '\t';
										Write += List_Of_Appointments[i].Fb.Get_pReview();
										Write += '\t';
										Write += List_Of_Appointments[i].Fb.Get_dReview();
										Write += '\t';
										Write += List_Of_Appointments[i].Spaciallization;
										File << Write << endl;
									}
									File.close();

								}
							}
						}
					}
				}
				else if (Choice2 == 9)
				{
						int* Array = new int[Number_of_Appointments];
						int Index = 0;
						cout << endl;
						cout << "APT-ID\tDOCTOR-CNIC\tDr.NAME\t\tPATIENT_CNIC\tPATIENT_NAME\tBOOKED_DATE\tAPPOINTMENT\tTIME\t\tSTATUS" << endl;

						for (int i = 0; i < Number_of_Appointments; i++)
						{
							if (List_Of_Appointments[i].Get_Status() == "APPROVED" || List_Of_Appointments[i].Get_Status() == "PENDING" && List_Of_Appointments[i].Patient_App.Get_Cnic() == Patients[Id].Get_Cnic())
							{
								cout << 1000 + i << "\t";
								cout << List_Of_Appointments[i].Doctor_App.Get_Cnic() << "\t";
								cout << List_Of_Appointments[i].Doctor_App.Get_Name() << "\t";
								cout << List_Of_Appointments[i].Patient_App.Get_Cnic() << "\t";
								cout << List_Of_Appointments[i].Patient_App.Get_Name() << "\t";
								cout << List_Of_Appointments[i].Get_BookDay() << "-JUNE-2022\t";
								cout << List_Of_Appointments[i].Get_AppDay() << "-JUNE-2022\t";
								cout << List_Of_Appointments[i].Get_Time_Slot() << "\t";
								cout << List_Of_Appointments[i].Get_Status() << endl;
								Array[Index] = 1000 + i;
								Index++;
							}
						}
						if (Index != 0)
						{
							int ID;
							cout << "\t\tENTER APPOINTMENT ID: ";
							cin >> ID;
							bool found = false;
							for (int i = 0; i < Index; i++)
							{
								if (ID == Array[i])
								{
									found = true;
								}
							}
							if (!found)
							{
								cout << "\t\tYOU ENTERED AN INCORRECT ID, TRY AGAIN LATER" << endl;
							}
							else
							{
								int Date;
								cout << "\t\tENTER THE DAY OF DATE TODAY (ie 24, if 24-2-2002): ";
								cin >> Date;
								while (Date > 31 || Date < 1)
								{
									cout << "\t\t|| INVALID DATE: ";
									cin >> Date;
								}
								ID = ID - 1000;
								cout << "|\n\t\tYOUR APPOINTMENT WAS CANCELLED" << endl;
								List_Of_Appointments[ID].Set_Status("CANCELLED");
								if (Date == List_Of_Appointments[ID].Get_BookDay())
								{
									Patients[Id].Set_Balance(Patients[Id].Get_Balance() + List_Of_Appointments[ID].Pay.Get_Amount());
									for (int i = 0; i < Number_of_Doctors; i++)
									{
										if (Doctors[i].Get_Cnic() == List_Of_Appointments[ID].Doctor_App.Get_Cnic())
										{
											Doctors[i].Balance = Doctors[i].Balance - List_Of_Appointments[ID].Pay.Get_Amount();
										}

									}
									ofstream File;
									File.open("transactions.txt", std::ios_base::app);
									string Write = List_Of_Appointments[ID].Doctor_App.Get_Cnic();
									Write += '\t';
									Write += List_Of_Appointments[ID].Patient_App.Get_Cnic();
									Write += '\t';
									Write += to_string(List_Of_Appointments[ID].Pay.Get_Amount());
									Write += '\t';
									Write += List_Of_Appointments[ID].Pay.Get_Gateway();
									File << Write << endl;
									File.close();
									cout << "\t\tFULL AMOUNT PAID WAS RETURNED TO YOUR ACCOUNT" << endl;
								}
								else if (Date == List_Of_Appointments[ID].Get_BookDay()+1)
								{
									Patients[Id].Set_Balance(Patients[Id].Get_Balance() + (0.6*List_Of_Appointments[ID].Pay.Get_Amount()));
									for (int i = 0; i < Number_of_Doctors; i++)
									{
										if (Doctors[i].Get_Cnic() == List_Of_Appointments[ID].Doctor_App.Get_Cnic())
										{
											Doctors[i].Balance = Doctors[i].Balance - (0.6*List_Of_Appointments[ID].Pay.Get_Amount());
										}

									}
									ofstream File;
									File.open("transactions.txt", std::ios_base::app);
									string Write = List_Of_Appointments[ID].Doctor_App.Get_Cnic();
									Write += '\t';
									Write += List_Of_Appointments[ID].Patient_App.Get_Cnic();
									Write += '\t';
									Write += to_string(0.6*List_Of_Appointments[ID].Pay.Get_Amount());
									Write += '\t';
									Write += List_Of_Appointments[ID].Pay.Get_Gateway();
									File << Write << endl;
									File.close();
									cout << "\t\t60% AMOUNT PAID WAS RETURNED TO YOUR ACCOUNT" << endl;
								}
								else if (Date == List_Of_Appointments[ID].Get_BookDay() + 2)
								{
									Patients[Id].Set_Balance(Patients[Id].Get_Balance() + (0.3 * List_Of_Appointments[ID].Pay.Get_Amount()));
									for (int i = 0; i < Number_of_Doctors; i++)
									{
										if (Doctors[i].Get_Cnic() == List_Of_Appointments[ID].Doctor_App.Get_Cnic())
										{
											Doctors[i].Balance = Doctors[i].Balance - (0.3 * List_Of_Appointments[ID].Pay.Get_Amount());
										}

									}
									ofstream File;
									File.open("transactions.txt", std::ios_base::app);
									string Write = List_Of_Appointments[ID].Doctor_App.Get_Cnic();
									Write += '\t';
									Write += List_Of_Appointments[ID].Patient_App.Get_Cnic();
									Write += '\t';
									Write += to_string(0.3 * List_Of_Appointments[ID].Pay.Get_Amount());
									Write += '\t';
									Write += List_Of_Appointments[ID].Pay.Get_Gateway();
									File << Write << endl;
									File.close();
									cout << "\t\t30% AMOUNT PAID WAS RETURNED TO YOUR ACCOUNT" << endl;
								}
								else
								{
									cout << "\t\tNO AMOUNT TO BE RETURNED" << endl;
								}

								ofstream File;
								File.open("patients.txt");
								for (int i = 0; i < Number_of_Patients; i++)
								{
									string Write = Patients[i].Get_Cnic();
									Write += '\t';
									Write += Patients[i].Get_Password();
									Write += '\t';
									Write += Patients[i].Get_Name();
									Write += '\t';
									Write += Patients[i].Get_Phone();
									Write += '\t';
									Write += to_string(Patients[i].Get_Balance());
									File << Write << endl;
								}
								File.close();

								File.open("doctors.txt");
								for (int i = 0; i < Number_of_Doctors; i++)
								{
									string Write = Doctors[i].Get_Email();
									Write += '\t';
									Write += Doctors[i].Get_Cnic();
									Write += '\t';
									Write += Doctors[i].Get_Password();
									Write += '\t';
									Write += Doctors[i].Get_Name();
									Write += '\t';
									Write += Doctors[i].Get_Spaciallization();
									Write += '\t';
									Write += Doctors[i].Get_City();
									Write += '\t';
									Write += Doctors[i].Get_WorkingHospital();
									Write += '\t';
									Write += to_string(Doctors[i].Get_StartTime());
									Write += '\t';
									Write += to_string(Doctors[i].Get_EndTime());
									Write += '\t';
									Write += to_string(Doctors[i].Get_Experience());
									Write += '\t';
									Write += Doctors[i].Get_Phone_No();
									Write += '\t';
									Write += to_string(Doctors[i].Rating);
									Write += '\t';
									Write += to_string(Doctors[i].Number_Of_Patients);
									Write += '\t';
									Write += to_string(Doctors[i].Balance);
									Write += '\t';
									Write += Doctors[i].Availablity;
									Write += '\t';
									Write += to_string(Doctors[i].Video_Rates);
									Write += '\t';
									Write += to_string(Doctors[i].Person_Rates);
									Write += '\t';
									Write += Doctors[i].Get_Spaciallization2();

									File << Write << endl;
								}
								File.close();

								File.open("appointments.txt");
								for (int i = 0; i < Number_of_Appointments; i++)
								{
									string Write = List_Of_Appointments[i].Doctor_App.Get_Cnic();
									Write += '\t';
									Write += List_Of_Appointments[i].Doctor_App.Get_Name();
									Write += '\t';
									Write += List_Of_Appointments[i].Patient_App.Get_Cnic();
									Write += '\t';
									Write += List_Of_Appointments[i].Patient_App.Get_Name();
									Write += '\t';
									Write += List_Of_Appointments[i].Get_Location();
									Write += '\t';
									Write += List_Of_Appointments[i].Get_Type();
									Write += '\t';
									Write += to_string(List_Of_Appointments[i].Get_AppDay());
									Write += '\t';
									Write += to_string(List_Of_Appointments[i].Get_BookDay());
									Write += '\t';
									Write += List_Of_Appointments[i].Get_Time_Slot();
									Write += '\t';
									Write += List_Of_Appointments[i].Get_Status();
									Write += '\t';
									Write += to_string(List_Of_Appointments[i].Pay.Get_Amount());
									Write += '\t';
									Write += List_Of_Appointments[i].Pay.Get_Gateway();
									Write += '\t';
									Write += to_string(List_Of_Appointments[i].Fb.Get_Rating());
									Write += '\t';
									Write += List_Of_Appointments[i].Fb.Get_pReview();
									Write += '\t';
									Write += List_Of_Appointments[i].Fb.Get_dReview();
									Write += '\t';
									Write += List_Of_Appointments[i].Spaciallization;
									File << Write << endl;
								}
								File.close();

							}
						}
				}
				else if (Choice2 == 10)
				{
					string Password;
					cin.ignore();
					cout << "\t\tENTER YOUR NEW PASSWORD: ";
					getline(cin, Password);
					int Symbols = 0;
					int Caps = 0;
					int Smalls = 0;
					int Integers = 0;
					int Lenght = 1;
					for (int i = 0; Password[i] != '\0'; i++)
					{
						Lenght++;
						if (Password[i] >= 'a' && Password[i] <= 'z')
						{
							Smalls++;
						}
						else if (Password[i] >= 'A' && Password[i] <= 'Z')
						{
							Caps++;
						}
						else if (Password[i] >= '0' && Password[i] <= '9')
						{
							Integers++;
						}
						else
						{
							Symbols++;
						}
					}
					int Password_Check = 1;
					if (Symbols >= 1 && Caps >= 1 && Smalls >= 1 && Integers >= 1 && Lenght > 8)
					{
						Password_Check = 0;
					}
					while (Password_Check != 0)
					{
						Symbols = 0;
						Caps = 0;
						Smalls = 0;
						Integers = 0;
						Lenght = 1;
						cout << "\t\t|| ENTER YOUR PASSWORD (>8 ,Symbols, Capital , Small and a Number): ";
						getline(cin, Password);
						for (int i = 0; Password[i] != '\0'; i++)
						{
							Lenght++;
							if (Password[i] >= 'a' && Password[i] <= 'z')
							{
								Smalls++;
							}
							else if (Password[i] >= 'A' && Password[i] <= 'Z')
							{
								Caps++;
							}
							else if (Password[i] >= '0' && Password[i] <= '9')
							{
								Integers++;
							}
							else
							{
								Symbols++;
							}
						}
						if (Symbols >= 1 && Caps >= 1 && Smalls >= 1 && Integers >= 1 && Lenght > 8)
						{
							Password_Check = 0;
						}
					}
					Patients[Id].Set_Password(Password);
					ofstream File;
					File.open("patients.txt");
					for (int i = 0; i < Number_of_Patients; i++)
					{
						string Write = Patients[i].Get_Cnic();
						Write += '\t';
						Write += Patients[i].Get_Password();
						Write += '\t';
						Write += Patients[i].Get_Name();
						Write += '\t';
						Write += Patients[i].Get_Phone();
						Write += '\t';
						Write += to_string(Patients[i].Get_Balance());
						File << Write << endl;
					}
					File.close();
					cout << "PASSWORD WAS CHANGED SUCCESDDFULLY" << endl;
				}
				else if (Choice2 == 11)
				{
					int Balance;
					cout << "\t\tENTER THE AMOUNT YOU WANT TO DEPOSIT: ";
					cin >> Balance;
					Patients[Id].Set_Balance(Patients[Id].Get_Balance()+Balance);
					
					cout << "\t\tBALANCE WAS DEPOSITED" << endl;
					ofstream File;
					File.open("patients.txt");
					for (int i = 0; i < Number_of_Patients; i++)
					{
						string Write = Patients[i].Get_Cnic();
						Write += '\t';
						Write += Patients[i].Get_Password();
						Write += '\t';
						Write += Patients[i].Get_Name();
						Write += '\t';
						Write += Patients[i].Get_Phone();
						Write += '\t';
						Write += to_string(Patients[i].Get_Balance());
						File << Write << endl;
					}
					File.close();
				}
				else if (Choice2 == 12)
				{
					cout << "\t\tYOUR CURRENT BALANCE IS: " << Patients[Id].Get_Balance() << endl;
				}
				else if (Choice2==13)
				{
					Menu2 = 1;
				}
		
			
				
			
			}


		
		}

		else
		{
			Menu = 1;
		}
	}


	return 0;
}