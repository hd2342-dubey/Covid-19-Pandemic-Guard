#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <string.h>
#include <iomanip>
#include <conio.h>

#include <stdlib.h>
//#include <bits/stdc++.h>

using namespace std;

class hospital
{
public:
    string Name, gender, result, vaccine_name, hospital_name, need_oxygen, sector, covid_test;
    char vaccine_centre[30];
    int pin, age, ab, ob, amount_oxygen, house_number, vaccine_dose;
    int num;
    long long int phone, adharCard;
    bool first_dose;

    void input()
    {
        cout << "Enter your Name : ";
        cin >> Name;
        cout << endl;
        cout << "Enter your Gender : ";
        cin >> gender;
        cout << endl;
        cout << "Enter your Age : ";
        cin >> age;
        cout << endl;
        cout << "Enter your phone no.:";
        cin >> phone;
        int ph = phone;
        int count_num = 0;
        while (ph != 0)
        {
            ph = ph / 10;
            ++count_num;
        }
        if (count_num != 10)
        {
            cout << "wrong phone no. entered" << endl;
            cin >> phone;
        }

        cout << endl;
        cout << "Enter your pin:";
        cin >> pin;
        cout << endl;
        cout << "Enter your house number and sector:";
        cin >> house_number >> sector;
        cout << endl;
        cout << "Enter your adharcard no.:";
        cin >> adharCard;
        cout << endl;
        covid_test = "NO";
    }

    string Input_Vaccine(string vv)
    {
        cout << "Enter your Name : ";
        cin >> Name;
        cout << endl;
        cout << "Enter your Gender : ";
        cin >> gender;
        cout << endl;
        cout << "Enter your Age : ";
        cin >> age;
        cout << endl;
        cout << "Enter your phone no.:";
        cin >> phone;
        int ph = phone;
        int count_num = 0;
        while (ph != 0)
        {
            ph = ph / 10;
            ++count_num;
        }
        if (count_num != 10)
        {
            cout << "wrong phone no. entered" << endl;
            cin >> phone;
        }

        cout << endl;
        cout << "Enter your pin:";
        cin >> pin;
        cout << endl;
        cout << "Enter your house number and sector:";
        cin >> house_number >> sector;
        cout << endl;
        cout << "Enter your adharcard no.:";
        cin >> adharCard;
        cout << endl;
        cin >> vaccine_name;

        return Name;
    }

    void input2()
    {
        cout << endl;
        cout << "Enter COVID-19 Result of " << Name;
        cout << endl;
        cin >> result;
    }
    void input_count(int alpha)
    {
        num = alpha;
    }
    void output()
    {

        //if (temp == Name)
        //{
        // cout << num << " " << Name << "," << gender << "," << result << endl;
        cout << "       Identity no.      " << num << endl
             << "       NAME            " << Name << endl
             << "       GENDER          " << gender << endl
             << "        AGE             " << age << endl
             << "       PHONE NO.       " << phone << endl
             << "       PIN             " << pin << endl
             << "       LOCALITY        " << house_number << " " << sector << endl
             << "       ADHAR CARD NO.  " << adharCard << endl;

        // else
        //{
        //     cout << "Error : Wrong Name entered please try again !" << endl;
        // }
    }

    void personaldetail()
    {
        cout << endl;
        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error in Opening! File Not Found!!" << endl;
            return;
        }
        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                cout << "       Identity no.      " << num << endl
                     << "       NAME            " << Name << endl
                     << "       GENDER          " << gender << endl
                     << "       PHONE NO.       " << phone << endl
                     << "        AGE             " << age << endl
                     << "       PIN             " << pin << endl
                     << "       LOCALITY        " << house_number << " " << sector << endl
                     << "       ADHAR CARD NO.  " << adharCard << endl
                     << " REGISTERED FOR COVID-19 TEST?" << covid_test << endl;
                // cout << num << " " << Name << "," << gender << "," << vaccine_centre << "," << vaccine_name << endl;
            }
        }
        infile.close();
    }

    void Output_Covid_Vaccine()
    {
        ifstream infile;
        infile.open("Covid_Vaccine_Detail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error in Opening! File Not Found!!" << endl;
            return;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                cout << endl;
                cout << "       Identity no.      " << num << endl
                     << "       NAME            " << Name << endl
                     << "       GENDER          " << gender << endl
                     << "       PHONE NO.       " << phone << endl
                     << "       AGE             " << age << endl
                     << "       PIN             " << pin << endl
                     << "       LOCALITY        " << house_number << " " << sector << endl
                     << "       ADHAR CARD NO.  " << adharCard << endl
                     << "       VACCINE CENTRE  " << vaccine_centre << endl
                     << "       VACCINE NAME    " << vaccine_name << endl
                     << "       VACCINE DOSE     " << vaccine_dose << endl;
                // cout << num << " " << Name << "," << gender << "," << vaccine_centre << "," << vaccine_name << endl;
            }
        }
        infile.close();
    }
    void output2()
    {
        cout << endl;
        cout << "       Identity no.      " << num << endl
             << "       NAME            " << Name << endl
             << "       GENDER          " << gender << endl
             << "        AGE             " << age << endl
             << "       PHONE NO.       " << phone << endl
             << "       PIN             " << pin << endl
             << "       LOCALITY        " << house_number << " " << sector << endl
             << "       ADHAR CARD NO.  " << adharCard << endl;
        // << "       VACCINE NAME    " << vaccine_name << endl;
        if (!result.empty())
        {
            cout << " COVID-19 RESULT " << result << endl
                 << endl;
        }
        else
        {
            cout << endl;
        }
        // cout << num << " " << Name << "," << gender << "," << result << " "  << endl;
    }
    void output3()
    {
        if (result == "positive")
        {
            cout << endl;
            cout << "       Identity no.      " << num << endl
                 << "       NAME            " << Name << endl
                 << "       GENDER          " << gender << endl
                 << "       AGE             " << age << endl
                 << "       PHONE NO.       " << phone << endl
                 << "       PIN             " << pin << endl
                 << "       LOCALITY        " << house_number << " " << sector << endl
                 << "       ADHAR CARD NO.  " << adharCard << endl
                 << "       COVID-19 RESULT " << result << endl;
        }
    }
    void output4()
    {
        cout << endl;
        if (result == "negative")
        {
            cout << "       Identity no.      " << num << endl
                 << "       NAME            " << Name << endl
                 << "       GENDER          " << gender << endl
                 << "        AGE             " << age << endl
                 << "       PHONE NO.       " << phone << endl
                 << "       PIN             " << pin << endl
                 << "       LOCALITY        " << house_number << " " << sector << endl
                 << "       ADHAR CARD NO.  " << adharCard << endl
                 << "       COVID-19 RESULT " << result << endl;
        }
    }
    void output5()
    {
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        if (result == "\0")
        {
            cout << "       Identity no.    " << num << endl
                 << "       NAME            " << Name << endl
                 << "       GENDER          " << gender << endl
                 << "       AGE            " << age << endl
                 << "       PHONE NO.       " << phone << endl
                 << "       PIN             " << pin << endl
                 << "       LOCALITY        " << house_number << " " << sector << endl
                 << "       ADHAR CARD NO.  " << adharCard << endl
                 << "       COVID-19 RESULT "
                 << "NOT declared" << endl;
        }
    }

    void admin_readrecord()
    {
        //cout << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;

        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                output2();
            }
        }
        infile.close();
    }
    void edit_record()
    {
        //cout << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;
        int n;
        fstream edit_rec_file;
        edit_rec_file.open("PersonalDetail.txt", ios::in | ios::binary);
        if (!edit_rec_file)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return;
        }
        edit_rec_file.seekg(0, ios::end);
        int count = edit_rec_file.tellg() / sizeof(*this);
        //   cout << "\nThere are " << count << " record in the file" << endl;
        cout << "Enter Identity no. to edit: ";
        cin >> n;
        edit_rec_file.seekg((n - 1) * sizeof(*this));
        edit_rec_file.read(reinterpret_cast<char *>(this), sizeof(*this));
        cout << "The Id " << n << " has following data" << endl;
        output();
        edit_rec_file.close();
        edit_rec_file.open("PersonalDetail.txt", ios::out | ios::in | ios::binary);
        edit_rec_file.seekp((n - 1) * sizeof(*this));
        cout << "ENTER COVID-19 RESULT " << endl;
        input2();
        edit_rec_file.write(reinterpret_cast<char *>(this), sizeof(*this));
    }
    void symptomps()
    {
        cout << endl;
        cout << "Most common symptoms: " << '\n'
             << "fever" << '\n'
             << "dry cough" << '\n'
             << "tiredness" << '\n'
             << '\n'
             << "Less common symptoms: " << '\n'
             << "aches and pains" << '\n'
             << "sore throat" << '\n'
             << "diarrhoea" << '\n'
             << "conjunctivitis" << '\n'
             << "headache" << '\n'
             << "loss of taste or smell " << '\n'
             << "a rash on skin, or discolouration of fingers or toes" << '\n'
             << '\n'
             << "Serious symptoms:" << '\n'
             << "difficulty breathing or shortness of breath" << '\n'
             << "chest pain or pressure" << '\n'
             << "loss of speech or movement" << endl
             << '\n';
    }
    void stats()
    {
        bool flag23 = false;

        bool p = true;
        while (p == true)
        {
            cout << "which data you want Data of positive, negative or not declared patient(none) ?";
            string s;
            cin >> s;
            if (s == "positive")
            {
                flag23 = true;
                ifstream infile;
                infile.open("covidtest_file.txt", ios::binary);
                if (!infile)
                {
                    cout << "Error: file cannot be Opened or File Not Found !" << endl;
                    return;
                }
                cout << "Data of Covid-19(Positive) Patients : " << endl;
                while (!infile.eof())
                {
                    if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                    {

                        output3();
                    }
                }
                infile.close();
            }

            else if (s == "negative")
            {
                flag23 = true;
                ifstream infile;
                infile.open("covidtest_file.txt", ios::binary);
                if (!infile)
                {
                    cout << "Error: file cannot be Opened or File Not Found !" << endl;
                    return;
                }
                cout << "Data of Covid-19 (negative) patients :" << endl;
                ;
                while (!infile.eof())
                {
                    if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                    {
                        output4();
                    }
                }
                infile.close();
            }
            else
            {
                flag23 = true;
                ifstream infile;
                infile.open("covidtest_file.txt", ios::binary);
                if (!infile)
                {
                    cout << "Error: file cannot be Opened or File Not Found !" << endl;
                    return;
                }
                if (s == "none")
                    cout << "Data of patients whose Covid-19 result not yet declared :" << endl;
                while (!infile.eof())
                {
                    if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                    {
                        output5();
                    }
                }
                infile.close();
            }

            if (flag23 == false)
            {
                cout << "NO PATIENTS" << endl;
            }
            cout << "Do you want to check another data type yes or no " << endl;
            string ask;
            cin >> ask;
            if (ask == "yes")
            {
                p = true;
            }
            else
            {
                p = false;
            }
        }
    }
    void CovidTest()
    {
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        bool flag12 = false;
        string s;
        cout << "Do you want Covid-19 test ?" << endl;
        cout << "Type yes or no" << endl;
        cin >> s;
        cout << endl;
        if (s == "yes")
        {
            char alpha;
            fstream newcount;
            newcount.open("count.txt");
            string value_of_cont_string;
            getline(newcount, value_of_cont_string);
            ofstream outfile;
            outfile.open("covidtest_file.txt", ios::binary | ios::app);
            //  input();
            ifstream infile;
            cout << "Enter your name" << endl;
            string name;
            cin >> name;
            infile.open("PersonalDetail.txt", ios::binary);
            if (!infile)
            {
                cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            }

            while (!infile.eof())
            {
                if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                {
                    if (name == Name)
                    {
                        covid_test = "YES";
                        outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
                        flag12 = true;
                    }
                }
            }
            infile.close();

            if (flag12 == false)
            {
                cout << "YOUR REGISTRATION DETAILS ARE NOT AVAILABLE" << endl;
            }

            //cout << " PLEASE REMEMBER YOUR IDENTITY NO.: ";
            alpha = value_of_cont_string[0];
            int gh = alpha - 32;
            //  input_count(gh);

            //cout << gh << endl;
            newcount.close();
            // fstream newcount;
            newcount.open("count.txt", std::ofstream::out | std::ofstream::trunc);
            newcount << ++alpha;
            outfile.close();
        }
    }
    void input_vaccinecentre(string naam, char centre1[], int n)
    {
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;

        fstream edit_rec_file;
        edit_rec_file.open("Covid_Vaccine_Detail.txt", ios::in | ios::binary);
        if (!edit_rec_file)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return;
        }
        edit_rec_file.seekg(0, ios::end);
        int count = edit_rec_file.tellg() / sizeof(*this);
        // cout << "\n There are " << count << " record in the file" << endl;
        //   cout << "Enter Identity no. to edit: ";

        // edit_rec_file.seekg((n - 1) * sizeof(*this));
        // edit_rec_file.read(reinterpret_cast<char *>(this), sizeof(*this));
        // cout << "The Id " << n << " has following data" << endl;
        // output();
        edit_rec_file.close();
        edit_rec_file.open("Covid_Vaccine_Detail.txt", ios::out | ios::in | ios::binary);
        edit_rec_file.seekp((n - 1) * sizeof(*this));
        // cout << "Enter data to Modify " << endl;

        strcpy(vaccine_centre, centre1);
        vaccine_dose = 1;
        first_dose = true;
        edit_rec_file.write(reinterpret_cast<char *>(this), sizeof(*this));

        edit_rec_file.close();
        cout << " Your are registered for 1st dose\nNow you can go to your vaccine centre tomorrow between 10:00AM to 2:00PM or 3:00PM to 6:00 PM" << endl;
        cout << " Date for your 2nd Dose after 60 days" << endl;
    }
    void input_vaccinecentre2(string naam, char centre1[], int n)
    {
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;

        fstream edit_rec_file;
        edit_rec_file.open("Covid_Vaccine_Detail.txt", ios::in | ios::binary);
        if (!edit_rec_file)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return;
        }
        edit_rec_file.seekg(0, ios::end);
        int count = edit_rec_file.tellg() / sizeof(*this);
        // cout << "\n There are " << count << " record in the file" << endl;
        //   cout << "Enter Identity no. to edit: ";

        // edit_rec_file.seekg((n - 1) * sizeof(*this));
        // edit_rec_file.read(reinterpret_cast<char *>(this), sizeof(*this));
        // cout << "The Id " << n << " has following data" << endl;
        // output();
        edit_rec_file.close();
        edit_rec_file.open("Covid_Vaccine_Detail.txt", ios::out | ios::in | ios::binary);
        edit_rec_file.seekp((n - 1) * sizeof(*this));
        // cout << "Enter data to Modify " << endl;

        strcpy(vaccine_centre, centre1);
        vaccine_dose = 2;

        edit_rec_file.write(reinterpret_cast<char *>(this), sizeof(*this));

        edit_rec_file.close();
        cout << "CONGRATULATIONS! YOU ARE DONE WITH THE VACCINATION PROCESS " << endl;
    }

    void covid_vaccine()
    {
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        cout << "IT'S YOUR 1ST DOSE OR 2ND DOSE?" << endl;
        cout << "ENTER '1' FOR 1ST DOSE AND '2' FOR 2ND DOSE" << endl;

        string s;
        cin >> s;
        if (s == "2")
        {

            seconddose_fun();
            return;
        }

        bool flags = false;

        if (s == "1")
        {

            cout << "Enter the vaccine name ?" << endl;
            cout << "Press 1 for COVAXIN, 2 for COVISHIELD" << endl;
            int v;
            cin >> v;
            switch (v)
            {
            case 1:
            {
                char alpha2;
                ofstream outfile;
                outfile.open("Covid_Vaccine_Detail.txt", ios::binary | ios::app);
                cout << "Enter your Name" << endl;

                string name;
                cin >> name;
                cout << "Enter your Aadharcard no." << endl;
                long long int acn;
                cin >> acn;
                //  string name = Input_Vaccine("COVAXINE");
                {

                    ifstream infile;
                    infile.open("covidtest_file.txt", ios::binary);
                    if (!infile)
                    {
                        cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
                    }

                    while (!infile.eof())
                    {
                        if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                        {
                            if (name == Name and result == "negative" and acn == adharCard)
                            {

                                vaccine_name = "COVAXINE";
                                fstream newcount;
                                newcount.open("Count_2.txt");
                                string value_of_cont_string;
                                getline(newcount, value_of_cont_string);
                                // cout << " Warning remember the value of your count " << endl;
                                alpha2 = value_of_cont_string[0];
                                int gh = alpha2 - 32;
                                //   input_count(gh);

                                outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
                                outfile.close();
                                // cout << gh << endl;
                                newcount.close();
                                // fstream newcount;
                                newcount.open("Count_2.txt", std::ofstream::out | std::ofstream::trunc);
                                newcount << ++alpha2;
                                newcount.close();
                                char centre1[18] = "Punjab university";
                                char centre2[5] = "CCET";
                                char centre3[7] = "PGI-16";
                                char centre4[8] = "GMCH-32";
                                cout << "Vaccine Centers are as follow: " << endl

                                     << "Press 1 Punjab university" << endl
                                     << "Press 2 CCET" << endl
                                     << "Press 3 PGI" << endl
                                     << "Press 4 for GMCH-32" << endl;

                                int n = forgot_num_Vaccine(name);
                                //cout << r << endl;

                                cout << n << endl;
                                int b;
                                cin >> b;

                                switch (b)
                                {
                                case 1:
                                    input_vaccinecentre(name, centre1, n);
                                    break;

                                case 2:
                                    input_vaccinecentre(name, centre2, n);
                                    break;
                                case 3:
                                    input_vaccinecentre(name, centre3, n);
                                    break;
                                case 4:
                                    input_vaccinecentre(name, centre4, n);
                                    break;
                                }
                                infile.close();
                                return;
                            }
                            else if (name == Name && (result == "positive" || result == "not declared") && acn == adharCard)
                            {
                                cout << "result " << result << endl;
                                infile.close();

                                return;
                            }
                            else if (name == Name && acn == adharCard)
                            {
                                cout << "result not declared" << endl;
                                return;
                            }
                        }
                    }
                    infile.close();
                    infile.open("PersonalDetail.txt", ios::binary);
                    if (!infile)
                    {
                        cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
                    }

                    while (!infile.eof())
                    {
                        if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                        {
                            if (name == Name && age >= 18 and acn == adharCard)
                            {

                                vaccine_name = "COVAXINE";
                                fstream newcount;
                                newcount.open("Count_2.txt");
                                string value_of_cont_string;
                                getline(newcount, value_of_cont_string);
                                // cout << " Warning remember the value of your count " << endl;
                                alpha2 = value_of_cont_string[0];
                                int gh = alpha2 - 32;
                                // input_count(gh);

                                outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
                                outfile.close();
                                // cout << gh << endl;
                                newcount.close();
                                // fstream newcount;
                                newcount.open("Count_2.txt", std::ofstream::out | std::ofstream::trunc);
                                newcount << ++alpha2;
                                newcount.close();

                                char centre1[18] = "Punjab university";
                                char centre2[5] = "CCET";
                                char centre3[7] = "PGI-16";
                                char centre4[8] = "GMCH-32";
                                cout << "Vaccine Centers are as follow: " << endl

                                     << "Press 1 Punjab university" << endl
                                     << "Press 2 CCET" << endl
                                     << "Press 3 PGI" << endl
                                     << "Press 4 for GMCH-32" << endl;

                                int n = forgot_num_Vaccine(name);
                                //cout << r << endl;

                                // cout << n << endl;
                                int b;
                                cin >> b;

                                switch (b)
                                {
                                case 1:
                                    input_vaccinecentre(name, centre1, n);
                                    break;

                                case 2:
                                    input_vaccinecentre(name, centre2, n);
                                    break;
                                case 3:
                                    input_vaccinecentre(name, centre3, n);
                                    break;
                                case 4:
                                    input_vaccinecentre(name, centre4, n);
                                    break;
                                }
                                infile.close();
                                break;
                            }

                            else if (name == Name && age < 18 and acn == adharCard)
                            {
                                cout << "underage" << endl;
                                break;
                            }
                        }
                    }
                }
            }
            break;
            case 2:
            {
                cout << endl
                     << endl
                     << endl
                     << endl
                     << endl
                     << endl
                     << endl
                     << endl;
                char alpha2;
                ofstream outfile;
                outfile.open("Covid_Vaccine_Detail.txt", ios::binary | ios::app);
                cout << "Enter your Name" << endl;

                string name;
                cin >> name;
                cout << "Enter your Aadharcard no." << endl;
                long long int acn;
                cin >> acn;
                //  string name = Input_Vaccine("COVAXINE");
                {

                    bool flag = false;
                    ifstream infile;
                    infile.open("covidtest_file.txt", ios::binary);
                    if (!infile)
                    {
                        cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
                        cout << "1" << endl;
                    }

                    while (!infile.eof())
                    {
                        if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                        {
                            if (name == Name && result == "negative" && acn == adharCard)
                            {

                                vaccine_name = "COVISHIELD";
                                fstream newcount;
                                newcount.open("Count_2.txt");
                                string value_of_cont_string;
                                getline(newcount, value_of_cont_string);
                                cout << " Warning remember the value of your count " << endl;
                                alpha2 = value_of_cont_string[0];
                                int gh = alpha2 - 32;
                                // input_count(gh);

                                outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
                                outfile.close();
                                cout << gh << endl;
                                newcount.close();
                                // fstream newcount;
                                newcount.open("Count_2.txt", std::ofstream::out | std::ofstream::trunc);
                                newcount << ++alpha2;
                                newcount.close();

                                char centre1[18] = "Punjab university";
                                char centre2[5] = "CCET";
                                char centre3[7] = "PGI-16";
                                char centre4[8] = "GMCH-32";
                                cout << "Vaccine Centers are as follow: " << endl

                                     << "Press 1 Punjab university" << endl
                                     << "Press 2 CCET" << endl
                                     << " Press 3 PGI" << endl
                                     << "Press 4 for GMCH-32" << endl;

                                int n = forgot_num_Vaccine(name);
                                //cout << r << endl;

                                //cout << n << endl;
                                int b;
                                cin >> b;

                                switch (b)
                                {
                                case 1:
                                    input_vaccinecentre(name, centre1, n);
                                    break;

                                case 2:
                                    input_vaccinecentre(name, centre2, n);
                                    break;
                                case 3:
                                    input_vaccinecentre(name, centre3, n);
                                    break;
                                case 4:
                                    input_vaccinecentre(name, centre4, n);
                                    break;
                                }
                                infile.close();
                                return;
                            }
                            else if (name == Name && (result == "positive" || result == "not declared") && acn == adharCard)
                            {
                                cout << "result " << result << endl;
                                infile.close();

                                return;
                            }
                            else if (name == Name && acn == adharCard)
                            {
                                cout << "result not declared" << endl;
                                return;
                            }
                        }
                    }
                    infile.close();
                    infile.open("PersonalDetail.txt", ios::binary);
                    if (!infile)
                    {
                        cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
                    }

                    while (!infile.eof())
                    {
                        if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                        {
                            if (name == Name && age >= 18 && acn == adharCard)
                            {
                                vaccine_name = "COVISHIELD";
                                fstream newcount;
                                newcount.open("Count_2.txt");
                                string value_of_cont_string;
                                getline(newcount, value_of_cont_string);
                                // cout << " Warning remember the value of your count " << endl;
                                alpha2 = value_of_cont_string[0];
                                int gh = alpha2 - 32;
                                // input_count(gh);

                                outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
                                outfile.close();
                                // cout << gh << endl;
                                newcount.close();
                                // fstream newcount;
                                newcount.open("Count_2.txt", std::ofstream::out | std::ofstream::trunc);
                                newcount << ++alpha2;
                                newcount.close();

                                char centre1[18] = "Punjab university";
                                char centre2[5] = "CCET";
                                char centre3[7] = "PGI-16";
                                char centre4[8] = "GMCH-32";
                                cout << "Vaccine Centers are as follow: " << endl

                                     << "Press 1 Punjab university" << endl
                                     << "Press 2 CCET" << endl
                                     << " Press 3 PGI" << endl
                                     << "Press 4 for GMCH-32" << endl;

                                int n = forgot_num_Vaccine(name);
                                //cout << r << endl;

                                cout << n << endl;
                                int b;
                                cin >> b;

                                switch (b)
                                {
                                case 1:
                                    input_vaccinecentre(name, centre1, n);
                                    break;

                                case 2:
                                    input_vaccinecentre(name, centre2, n);
                                    break;
                                case 3:
                                    input_vaccinecentre(name, centre3, n);
                                    break;
                                case 4:
                                    input_vaccinecentre(name, centre4, n);
                                    break;
                                }
                                infile.close();
                                break;
                            }

                            else if (name == Name && age < 18 && acn == adharCard)
                            {
                                cout << "YOU ARE UNDERAGE" << endl;
                                break;
                            }
                        }
                    }
                }
            }
            break;
            }
        }
    }

    void seconddose_fun()
    {
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;

        fstream outfile;
        outfile.open("Covid_Vaccine_Detail.txt", ios::binary);
        cout << "Enter your Name" << endl
             << "Enter your ac" << endl;
        string name;
        cin >> name;
        long long int acn;
        cin >> acn;
        bool flag23 = false;
        while (!outfile.eof())
        {
            if (outfile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (name == Name && acn == adharCard)
                {

                    flag23 = true;
                    // input_count(gh);
                    vaccine_dose = 2;

                    outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
                    outfile.close();

                    // fstream newcount;

                    char centre1[18] = "Punjab university";
                    char centre2[5] = "CCET";
                    char centre3[7] = "PGI-16";
                    char centre4[8] = "GMCH-32";
                    cout << "Vaccine Centers are as follow: " << endl

                         << "Press 1 Punjab university" << endl
                         << "Press 2 CCET" << endl
                         << " Press 3 PGI" << endl
                         << "Press 4 for GMCH-32" << endl;

                    int n = forgot_num_Vaccine(name);
                    //cout << r << endl;

                    cout << n << endl;
                    int b;
                    cin >> b;

                    switch (b)
                    {
                    case 1:
                        input_vaccinecentre2(name, centre1, n);
                        break;

                    case 2:
                        input_vaccinecentre2(name, centre2, n);
                        break;
                    case 3:
                        input_vaccinecentre2(name, centre3, n);
                        break;
                    case 4:
                        input_vaccinecentre2(name, centre4, n);
                        break;
                    }
                    outfile.close();
                    break;
                }
            }
        }

        if (flag23 == false)
        {
            cout << "1st dose not done" << endl;
        }
    }

    void vaccine_certificate()
    {
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        cout << "enter your name" << endl;
        string name;
        cin >> name;
        cout << "enter your adhar card no." << endl;
        long long int acn;
        cin >> acn;
        bool flag23 = false;
        ifstream outfile;
        outfile.open("Covid_Vaccine_Detail.txt", ios::binary);
        while (!outfile.eof())
        {
            if (outfile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {

                if (name == Name && acn == adharCard && first_dose == true)
                {
                    flag23 = true;
                    cout << "                                                          ---------------------------------------------------------------------------------------------" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |                      CERTIFICATE FOR COVID-19 VACCINATION                                 |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |              NAME : " << Name << "                                                                 |" << endl;
                    cout << "                                                          |             GENDER: " << gender << "                                                                  |" << endl;
                    cout << "                                                          |              AGE  : " << age << "                                                                    |" << endl;
                    cout << "                                                          |             ADHAR CARD NO.:  " << adharCard << "                                             |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |           VACCINATION DETAILS:                                                            |" << endl;
                    cout << "                                                          |           VACCINE NAME:  " << vaccine_name << "                                                         |" << endl;
                    cout << "                                                          |           VACCINE DOSE:  " << vaccine_dose << "                                                                |" << endl;
                    cout << "                                                          |           VACCINE CENTRE:" << vaccine_centre << "                                                             |" << endl;
                    cout << "                                                          |           DATE OF VACCINE: 27 JULY 2021                                                   |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |                                                                                           |" << endl;
                    cout << "                                                          |                                                                     SIGNATURE:            |" << endl;
                    cout << "                                                          |                                                                       CHD ADMINISTRATION  |" << endl;
                    cout << "                                                          --------------------------------------------------------------------------------------------" << endl;
                }
            }
        }
        if (flag23 == false)
        {
            cout << "1st dose not done" << endl;
        }
    }
    void MedicalReport()
    {
        int n;
        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);
        if (!infile)
        {
            cout << "\nError in opening! File Not Found!!" << endl;
            return;
        }
        infile.seekg(0, ios::end);
        int count2 = infile.tellg() / sizeof(*this);
        // cout << "\n There are " << count2 << " record in the file";
        cout << "\n Enter your Identity no. to Search: ";
        cin >> n;
        infile.seekg((n - 1) * sizeof(*this));
        infile.read(reinterpret_cast<char *>(this), sizeof(*this));
        if (result == "positive")
        {
            output3();
        }
        else if (result == "negative")
        {
            output4();
        }
        else
        {
            output5();
        }
    }

    int forgot_num_Vaccine(string naam)
    {
        // string naam;
        // cout << "Enter your Name : ";
        // cin >> naam;
        bool flag = false;

        ifstream infile;
        infile.open("Covid_Vaccine_Detail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return 0;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (naam == Name)
                {
                    //cout << num << endl;
                    return num;
                    flag = true;
                    break;
                }
            }
        }

        if (flag == false)
        {
            cout << "Not found ! either your name is not present or you may've misspelled" << endl;
        }
        infile.close();
    }

    int forgot_num2(string naam)
    {
        // string naam;
        // cout << "Enter your Name : ";
        // cin >> naam;
        bool flag = false;

        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return 0;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (naam == Name)
                {
                    //cout << num << endl;
                    return num;
                    flag = true;
                    break;
                }
            }
        }

        if (flag == false)
        {
            cout << "Not found ! either your name is not present or you may've misspelled" << endl;
        }
        infile.close();
    }
    // make sure to add more checks
    int forgot_num()
    {
        string naam;
        cout << "Enter your Name : ";
        cin >> naam;
        bool flag = false;
        cout << "Enter your adharcard no." << endl;
        long long int p;
        cin >> p;

        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return 0;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (naam == Name && p == adharCard)
                {

                    int ans = num;
                    return ans;
                    flag = true;
                    break;
                }
            }
        }

        if (flag == false)
        {
            cout << "Not found ! either your name is not present or you may've misspelled" << endl;
        }
        infile.close();
    }
    void input_hospital()
    {
        cout << "hospital name" << endl;
        cin >> hospital_name;
        cout << "Enter the no. of available beds" << endl;
        cin >> ab;
        cout << "Enter the no. of occupied beds" << endl;
        cin >> ob;
        cout << "amount of oxygen cylender" << endl;
        cin >> amount_oxygen;
    }
    void output_hospital()
    {
        ifstream infile;
        infile.open("hospitalbeds.txt", ios::binary);
        if (!infile)
        {
            cout << "Error in Opening! File Not Found!!" << endl;
            return;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                cout << hospital_name << " " << ab << " " << ob << " " << amount_oxygen << endl;
            }
        }
        infile.close();
    }
    void edit_hospitaldetail(int n)
    {

        fstream iofile;
        iofile.open("hospitalbeds.txt", ios::in | ios::binary);
        if (!iofile)
        {
            cout << "\nError in opening! File Not Found!!" << endl;
            return;
        }
        iofile.seekg(0, ios::end);
        int count = iofile.tellg() / sizeof(*this);
        // cout << "\n There are " << count << " record in the file";
        // cout << "\n Enter Identity no. to edit: ";
        //cin >> n;
        iofile.seekg((n - 1) * sizeof(*this));
        iofile.read(reinterpret_cast<char *>(this), sizeof(*this));
        // cout << "The Id " << n << " has following data" << endl;
        cout << hospital_name << " " << ab << " " << ob << endl;
        iofile.close();
        iofile.open("hospitalbeds.txt", ios::out | ios::in | ios::binary);
        iofile.seekp((n - 1) * sizeof(*this));
        //  cout << "\nEnter data to Modify " << endl;
        ab--;
        ob++;

        iofile.write(reinterpret_cast<char *>(this), sizeof(*this));
        iofile.close();
    }

    void edit_hospitaldetail2(int n)
    {

        fstream iofile;
        iofile.open("hospitalbeds.txt", ios::in | ios::binary);
        if (!iofile)
        {
            cout << "\nError in opening! File Not Found!!" << endl;
            return;
        }
        iofile.seekg(0, ios::end);
        int count = iofile.tellg() / sizeof(*this);
        // cout << "\n There are " << count << " record in the file";
        // cout << "\n Enter Identity no. to edit: ";
        //cin >> n;
        iofile.seekg((n - 1) * sizeof(*this));
        iofile.read(reinterpret_cast<char *>(this), sizeof(*this));
        // cout << "The Id " << n << " has following data" << endl;
        cout << hospital_name << " " << ab << " " << ob << endl;
        iofile.close();
        iofile.open("hospitalbeds.txt", ios::out | ios::in | ios::binary);
        iofile.seekp((n - 1) * sizeof(*this));
        //  cout << "\nEnter data to Modify " << endl;
        ab--;
        ob++;
        amount_oxygen--;

        iofile.write(reinterpret_cast<char *>(this), sizeof(*this));
        iofile.close();
    }

    void edit_hospitaldetail3(string n)
    {
        ifstream infile;
        infile.open("hospitalbeds.txt", ios::binary);
        if (!infile)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (n == hospital_name)
                {
                    ab++;
                    ob--;
                }
            }
        }

        infile.close();
    }

    void hospitalinformtation()
    {
        ofstream outfile;
        outfile.open("hospitalbeds.txt", ios::binary | ios::app);
        input_hospital();
        outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
        outfile.close();
    }

    void Covid_detail()
    {

        ifstream infile;
        infile.open("covidtest_file.txt", ios::binary);
        if (!infile)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {

                cout << "       Identity no.      " << num << endl
                     << "       NAME            " << Name << endl
                     << "       GENDER          " << gender << endl
                     << "       PHONE NO.       " << phone << endl
                     << "       PIN             " << pin << endl
                     << "       LOCALITY        " << house_number << " " << sector << endl
                     << "       ADHAR CARD NO.  " << adharCard << endl;
                if (result.empty())
                {
                    cout << "       covid-19 result : NOT declared " << endl;
                }
                else
                {
                    cout << " covid-19 result :" << result << endl;
                }
            }

            infile.close();
        }
    }

    void input_hopsital(string name, string hospital, int n, string value)
    {

        fstream edit_rec_file;
        edit_rec_file.open("PersonalDetail.txt", ios::in | ios::binary);
        if (!edit_rec_file)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return;
        }
        edit_rec_file.seekg(0, ios::end);
        int count = edit_rec_file.tellg() / sizeof(*this);
        //    cout << "\n There are " << count << " record in the file" << endl;
        //   cout << "Enter Identity no. to edit: ";

        edit_rec_file.seekg((n - 1) * sizeof(*this));
        edit_rec_file.read(reinterpret_cast<char *>(this), sizeof(*this));
        // cout << "The Id " << n << " has following data" << endl;
        // output();
        edit_rec_file.close();
        edit_rec_file.open("PersonalDetail.txt", ios::out | ios::in | ios::binary);
        edit_rec_file.seekp((n - 1) * sizeof(*this));
        // cout << "Enter data to Modify " << endl;
        hospital_name = hospital;
        need_oxygen = value;

        edit_rec_file.write(reinterpret_cast<char *>(this), sizeof(*this));
        edit_rec_file.close();
    }
    void admin_hospitalgiven()
    {
        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error in Opening! File Not Found!!" << endl;
            return;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (!hospital_name.empty())
                {
                    cout << "         Identity no.            " << num << endl
                         << "         NAME                    " << Name << endl
                         << "         GENDER                  " << gender << endl
                         << "         AGE                     " << age << endl
                         << "         PHONE NO.               " << phone << endl
                         << "         PIN                     " << pin << endl
                         << "         LOCALITY                " << house_number << " " << sector << endl
                         << "         HOSPITAL NAME           " << hospital_name << endl
                         << "         BOOKED OXYGEN CYLINDER  " << need_oxygen << endl;
                    //  cout << num << " " << Name << "," << gender << "," << hospital_name << " " << need_oxygen << endl;
                }
            }
        }
        infile.close();
    }
    void hospitalbed(string name)
    {

        output_hospital();
        int n = forgot_num2(name);

        cout << "OXYGEN NEEDED\n Type yes or no" << endl;
        string yes_no;
        cin >> yes_no;

        if (yes_no == "no")
        {
            cout << "Enter 1 for PGI-12" << endl
                 << "Enter 2 for Gmch-32" << endl
                 << "Enter 3 for civil hospial-22" << endl
                 << "Enter 4 for Government multi speciality hospital -16" << endl
                 << "Enter 5 for Government multi speciality hospital -48" << endl
                 << "Enter 6 for Government dispensary -24" << endl;
            string hospital1 = "PGI-12";
            string hospital2 = "Gmch-32";
            string hospital3 = "Civil_hospial-22";
            string hospital4 = "Government_multi_speciality_hospital_-16  ";
            string hospital5 = "Government_multi_speciality_hospital_-48";
            string hospital6 = "Government_dispensary_-24 ";
            int b;
            cin >> b;

            switch (b)
            {
            case 1:
                input_hopsital(name, hospital1, n, yes_no);
                edit_hospitaldetail(1);
                break;

            case 2:
                input_hopsital(name, hospital2, n, yes_no);
                edit_hospitaldetail(2);
                break;
            case 3:
                input_hopsital(name, hospital3, n, yes_no);
                edit_hospitaldetail(3);
                break;
            case 4:
                input_hopsital(name, hospital4, n, yes_no);
                edit_hospitaldetail(4);
                break;
            case 5:
                input_hopsital(name, hospital5, n, yes_no);
                edit_hospitaldetail(5);
                break;
            case 6:
                input_hopsital(name, hospital6, n, yes_no);
                edit_hospitaldetail(6);
                break;
            }
        }
        else
        {
            cout << "Enter 1 for PGI-12" << endl
                 << "Enter 2 for Gmch-32" << endl
                 << "Enter 3 for civil hospial-22" << endl
                 << "Enter 4 for Government multi speciality hospital -16" << endl
                 << "Enter 5 for Government multi speciality hospital -48" << endl
                 << "Enter 6 for Government dispensary -24" << endl;
            string hospital1 = "PGI-12";
            string hospital2 = "Gmch-32";
            string hospital3 = "Civil_hospial-22";
            string hospital4 = "Government_multi_speciality_hospital_-16  ";
            string hospital5 = "Government_multi_speciality_hospital_-48";
            string hospital6 = "Government_dispensary_-24 ";
            int b;
            cin >> b;

            switch (b)
            {
            case 1:
                input_hopsital(name, hospital1, n, yes_no);
                edit_hospitaldetail2(1);
                break;

            case 2:
                input_hopsital(name, hospital2, n, yes_no);
                edit_hospitaldetail2(2);
                break;
            case 3:
                input_hopsital(name, hospital3, n, yes_no);
                edit_hospitaldetail2(3);
                break;
            case 4:
                input_hopsital(name, hospital4, n, yes_no);
                edit_hospitaldetail2(4);
                break;
            case 5:
                input_hopsital(name, hospital5, n, yes_no);
                edit_hospitaldetail2(5);
                break;
            case 6:
                input_hopsital(name, hospital6, n, yes_no);
                edit_hospitaldetail2(6);
                break;
            }
        }
    }

    void HospitalsAvailabilty()
    {
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        bool falgg1234 = false;
        string s2;
        string name;
        cout << "Enter your Name : ";
        cin >> name;
        cout << endl;
        cout << "ARE YOU TESTED FOR COVID-19 ?" << endl
             << "ENTER YES OR NO" << endl;
        cin >> s2;
        if (s2 == "yes" || s2 == "YES")
        {
            //bool falgg = false;
            ifstream infile;
            infile.open("PersonalDetail.txt", ios::binary);
            if (!infile)
            {
                cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
                return;
            }

            while (!infile.eof())
            {
                if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
                {
                    if (name == Name)
                    {
                        //flagg1234 = true;
                        if (result == "positive")
                        {

                            hospitalbed(name);
                        }
                        else if (result == "negative")
                        {
                            cout << "YOUR COVID-19 REPORT IS NEGATIVE SO WE CAN'T PROVIDE YOU BED";

                            return;
                        }
                        else
                        {
                            cout << "RESULT AWAITED" << endl;

                            return;
                        }
                    }
                }
            }

            infile.close();
        }
        else
        {
            string t;
            cout << "if you want to have covid test" << endl;
            cin >> t;
            if (t == "yes")
            {
                CovidTest();
            }
            else
            {
                return;
            }
        }
    }
    void guidline()
    {
        cout << "Please follow the Covid-19 protocols and guidline to save you and others form Covid-19 outbreak" << endl;
        cout << "1.) Wear a mask" << endl
             << "2.)Stay 6 feet away from others" << endl
             << "3.)Get Vaccinated" << endl
             << "4.)Avoid crowds and poorly ventilated spaces" << endl
             << "5.)Wash your hands often" << endl
             << "6.)Cover coughs and sneezes" << endl
             << "7.)Clean and disinfect" << endl
             << "8.)Monitor your health daily" << endl;
    }
    void input_newuser()
    {

        char alpha;
        fstream newcount;
        newcount.open("count3.txt");
        string value_of_cont_string;
        getline(newcount, value_of_cont_string);
        ofstream outfile;
        outfile.open("PersonalDetail.txt", ios::binary | ios::app);
        input();

        cout << " YOUR IDENTITY NO. IS: " << endl;
        alpha = value_of_cont_string[0];
        int gh = alpha - 32;
        input_count(gh);
        outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
        cout << gh << endl;
        newcount.close();
        // fstream newcount;
        newcount.open("count3.txt", std::ofstream::out | std::ofstream::trunc);
        newcount << ++alpha;
        outfile.close();
    }
    bool login_user()
    {
        string naam;
        int p;
        cout << "Enter your Name : " << endl;
        cin >> naam;

        cout << "Enter your Identity no." << endl;
        cin >> p;

        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (naam == Name && p == num)
                {

                    return true;
                }
            }
        }
        infile.close();
        return false;
    }

    string edit_record123()
    {
        int n;
        fstream edit_rec_file;
        edit_rec_file.open("PersonalDetail.txt", ios::in | ios::binary);
        if (!edit_rec_file)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
        }
        edit_rec_file.seekg(0, ios::end);
        int count = edit_rec_file.tellg() / sizeof(*this);
        //  cout << "\nThere are " << count << " record in the file" << endl;
        cout << "Enter Identity no. to edit: ";
        cin >> n;
        //string naam123;

        // cout << "enter name";
        // cin >> naam123;

        edit_rec_file.seekg((n - 1) * sizeof(*this));
        edit_rec_file.read(reinterpret_cast<char *>(this), sizeof(*this));
        cout << "The Id " << n << " has following data" << endl;
        output();
        edit_rec_file.close();
        edit_rec_file.open("PersonalDetail.txt", ios::out | ios::in | ios::binary);
        edit_rec_file.seekp((n - 1) * sizeof(*this));
        //cout << "Enter data to Modify " << endl;
        string hospital_n = hospital_name;
        hospital_name.clear();
        need_oxygen.clear();
        edit_rec_file.write(reinterpret_cast<char *>(this), sizeof(*this));
        edit_rec_file.close();
        return hospital_n;
    }
    void output_vaccinecentredetail()
    {
        cout << "CCET -26" << endl
             << "PUNJAB UNIVERSITY" << endl
             << "PGI-16" << endl
             << "GMCH-32" << endl;
    }
    void feedback()
    {
        cout << "We are always ready to collect your valable feedback" << endl;
        cout << "Don't worry this feedback is compleatly anonymus and will not be given to anyone include administrator";
        cout << "please Enter you Message :" << endl;
        string feed;
        cin.ignore();
        getline(cin, feed);
        ofstream FeedBack("feedback.txt");
        if (FeedBack.is_open())
        {
            FeedBack << feed;
            FeedBack.close();
        }
        else
            cout << "Error: Unable to open file";
    }
    void essential_services()
    {

        string naam;
        cout << "Enter your Name : ";
        cin >> naam;
        bool flag = false;

        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error: Flie cannot be Opened or File Not Found!" << endl;
            return;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (naam == Name and result == "positive")
                {

                    cout << "Hello " << naam << " ! you are quarantine due to covid-19 donot worry we are here to help you :) " << endl;
                    cout << "We have all the essential services for you" << endl;
                    cout << "press 1 to order food online " << endl;
                    cout << "press 2 for food services like milk, vegitables or fruits, bread and other related product";
                    cout << "Please be informed of price details: " << endl;
                    cout << "50 Rupees for essential services delivery to you door step in addition to your order amount";
                    cout << "150 rupees for food delivery from nearby Hotels, Resturants etc" << endl;

                    cout << "please contact on any of these phone no's :" << endl
                         << endl;
                    cout << " 635463XXXXX , 1765456XXXXX, 786345XXXXX" << endl
                         << endl;
                    cout << "please be informed that you have to share you details like Name, phone no, adress etc";
                    flag = true;
                    break;
                }
            }
        }

        if (flag == false)
        {
            cout << "Not found ! either your name is not present or you are not Covid-19 positive" << endl;
            cout << "We are really sorry but this service is only provided to the Covid-19 patients" << endl;
        }
        infile.close();
    }

    void hospitaldata_user()
    {
        string name;
        cout << "Enter your name" << endl;
        cin >> name;
        long long int acn;
        cout << "Enter your Aadharcard No." << endl;
        cin >> acn;
        bool flag23 = false;
        ifstream infile;
        infile.open("PersonalDetail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error in Opening! File Not Found!!" << endl;
            return;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (!hospital_name.empty() && acn == adharCard && name == Name)
                {
                    flag23 = true;
                    cout << "       Identity no.      " << num << endl
                         << "       NAME            " << Name << endl
                         << "       GENDER          " << gender << endl
                         << "        AGE             " << age << endl
                         << "     PHONE NO.               " << phone << endl
                         << "     PIN                     " << pin << endl
                         << "     LOCALITY                " << house_number << " " << sector << endl
                         << "     HOSPITAL NAME           " << hospital_name << endl
                         << "     BOOKED OXYGEN CYLINDER  " << need_oxygen << endl;
                    //  cout << num << " " << Name << "," << gender << "," << hospital_name << " " << need_oxygen << endl;
                }
            }
        }

        if (flag23 == false)
        {
            cout << "not registered for hospital" << endl;
        }
        infile.close();
    }

    void vaccinedetail_user()
    {
        string name;
        cout << "enter your name" << endl;
        cin >> name;
        long long int acn;
        cout << "enter your adhar card" << endl;
        cin >> acn;
        bool flag23 = false;
        ifstream infile;
        infile.open("Covid_Vaccine_Detail.txt", ios::binary);
        if (!infile)
        {
            cout << "Error in Opening! File Not Found!!" << endl;
            return;
        }

        while (!infile.eof())
        {
            if (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
            {
                if (name == Name && acn == adharCard)
                {
                    flag23 = true;
                    cout << "       Identity no.      " << num << endl
                         << "       NAME            " << Name << endl
                         << "       GENDER          " << gender << endl
                         << "       PHONE NO.       " << phone << endl
                         << "        AGE            " << age << endl
                         << "       PIN             " << pin << endl
                         << "       LOCALITY        " << house_number << " " << sector << endl
                         << "       ADHAR CARD NO.  " << adharCard << endl
                         << "       VACCINE CENTRE  " << vaccine_centre << endl
                         << "       VACCINE NAME    " << vaccine_name << endl
                         << "       VACCINE DOSE     " << vaccine_dose << endl;
                    // cout << num << " " << Name << "," << gender << "," << vaccine_centre << "," << vaccine_name << endl;
                }
            }
        }
        if (flag23 == false)
        {
            cout << "not registered for vaccine" << endl;
        }
        infile.close();
    }
};

int main()
{

    system("cls");

    system("Color F4");
    string username, pass2;
    ifstream readpass;
    readpass.open("password.txt");
    getline(readpass, pass2);
    readpass.close();
    int tries1 = 3;
    int tries2 = 3;
    cout << endl
         << endl
         << endl
         << endl;

    hospital obj;

    //cout << "Press 1 for Admin interface acess and press 2 for User interface acess" << '\n';
    bool s = true;
    while (s == true)
    {
        system("Color F4");

        cout << "                                                         ---------------------------------------------------------------------------------------------" << endl;
        cout << "                                                         |                                                                                           |" << endl;
        cout << "                                                         |                         * Welcome to Covid-19 help center  *                              |" << endl;
        cout << "                                                         |                                                                                           |" << endl;
        cout << "                                                         --------------------------------------------------------------------------------------------" << endl;
        bool ta = true;
        bool ga = true;
        bool ca = true;
        cout << '\n'
             << "                                                         Press 1 for Admin interface acess" << endl <<"                                                         Press 2 for User interface acess" << endl <<  "                                                         Press 3 to exit program" << '\n';
        int x; 
        cin >> x;
        string pass1;
        switch (x)
        {
        case 1:

            system("cls");

            system("Color D0");
            ga = true;
            while (tries1 != -1 && ga == true)
            {
                pass1.clear();
                if (tries1 == 0)
                {
                    cout << "Sorry you've Entered 3 wrong tries try again later";
                    s = false;
                    exit(0);
                }
                cout << "Enter user Name : ";
                cin >> username;
                cout << "Enter PassWord : ";
                char c;
                while ((c = _getch()))
                {
                    if (c == '/')
                    {
                        break;
                    }
                    pass1.push_back(c);
                    cout << '*';
                }
                //cin >> pass1;

                if (username == "ahd" and pass1 == pass2)
                {
                    tries1 = 3;
                    while (ga == true)
                    {

                        cout << endl;
                        cout << "                                          ---------------------------------------------------------------------------------------------" << endl;
                        cout << "                                          |                                                                                           |" << endl;
                        cout << "                                          |                            * Welcome to Admin panel *                                     |" << endl;
                        cout << "                                          |                                                                                           |" << endl;
                        cout << "                                          ---------------------------------------------------------------------------------------------" << endl;
                        cout << "                                          Enter 1 for view records" << endl
                             << "                                          Enter 2 for declaring result of Covid-19 test" << endl
                             << "                                          Enter 3 to view statistics of patients" << endl
                             << "                                          Enter 4 to enter hospital" << endl
                             << "                                          Enter 5 to view people who got hospital" << endl
                             << "                                          Enter 6 to view Covid vaccine Status" << endl
                             << "                                          Enter 7 to print hospital file data" << endl

                             << "                                          Enter 8 Covid detail" << endl
                             << "                                          Enter 9 to go back" << endl;

                        int r;
                        cin >> r;

                        switch (r)
                        {
                        case 1:

                            system("Color E0");
                            system("cls");
                            obj.admin_readrecord();
                            break;

                        case 2:
                            system("Color D7");
                            system("cls");
                            obj.edit_record();
                            break;
                        case 3:
                            system("Color B0");
                            system("cls");
                            obj.stats();
                            break;
                        case 4:
                            system("Color D7");
                            system("cls");
                            obj.hospitalinformtation();
                            break;
                        case 5:
                            system("Color A7");
                            system("cls");
                            obj.admin_hospitalgiven();
                            break;
                        case 6:
                            system("Color F2");
                            system("cls");
                            obj.Output_Covid_Vaccine();
                            break;

                        case 7:
                            system("Color F8");
                            system("cls");
                            cout << "HOSPITAL NAME        AVAILABLE BEDS           OCCUPIED BEDS       OXYGEN CYLINDERS" << endl;
                            obj.output_hospital();
                            break;

                        case 8:
                            system("Color E0");
                            system("cls");
                            obj.Covid_detail();
                            break;

                        case 9:
                            system("Color C7");
                            system("cls");
                            ga = false;
                            break;
                        }
                    }
                }
                else
                {
                    cout << "Wrong Username or Password please try again" << endl;
                    tries1--;
                    cout << tries1 << " tries left" << endl;
                }
            }
            break;

        case 2:
            system("cls");
            system("Color B0");
            int ans, r;
            bool ans1;
            while (ca == true)
            {
                cout << "                                                         Enter 1 for Existing user (Login)" << endl
                     << "                                                         Enter 2 for new user(Sign UP)" << endl
                     << "                                                         Enter 3 if you forgot your Identity no." << endl
                     << "                                                         Enter 4 to go back" << endl;
                int rt;
                cin >> rt;
                switch (rt)
                {

                case 1:
                    system("Color 8F");
                    system("cls");

                    ans1 = obj.login_user();
                    while (ans1 == false && tries2 != -1)
                    {
                        if (tries2 == 0)
                        {
                            cout << "Sorry you've Entered 3 wrong tries try again later";

                            exit(0);
                        }
                        cout << "wrong login details for existing user" << endl;
                        cout << "remaining tries: " << tries2 << endl;
                        tries2--;
                        ans1 = obj.login_user();
                    }
                    tries2 = 3;
                    ta = true;
                    while (ta == true)
                    {

                        cout << "                                                ---------------------------------------------------------------------------------------------" << endl;
                        cout << "                                                |                                                                                           |" << endl;
                        cout << "                                                |                             * Welcome to user pannel *                                    |" << endl;
                        cout << "                                                |                                                                                           |" << endl;
                        cout << "                                                ---------------------------------------------------------------------------------------------" << endl;

                        cout << "                                                Enter 1 for view symptoms of Covid-19" << endl
                             << "                                                Enter 2 for Covid 19 check up or test" << endl
                             << "                                                Enter 3 to view medical report" << endl
                             << "                                                Enter 4 to book hospital" << endl
                             << "                                                Enter 5 to vaccine regester" << endl
                             << "                                                Enter 6 to check out bed from hospital" << endl
                             << "                                                Enter 7 to view phone no. for medical help" << endl
                             << "                                                Enter 8 to view hospital for emergency" << endl
                             << "                                                Enter 9 to view all covid centre nearby" << endl
                             << "                                                Enter 10 to view your details" << endl
                             << "                                                Enter 11 to view guideliness for those who are covid positve" << endl
                             << "                                                Enter 12 to download your certificate" << endl
                             << "                                                Enter 13 to fill feedback form" << endl
                             << "                                                Enter 14 to get essenetial services" << endl
                             << "                                                Enter 15 to know your hospital details" << endl
                             << "                                                Enter 16 to know your vaccine details" << endl
                             << "                                                Enter 17 to go back" << endl;
                        int q;
                        cin >> q;
                        string d;
                        switch (q)
                        {
                        case 1:
                            system("Color E8");
                            system("cls");
                            obj.symptomps();
                            break;
                        case 2:
                            system("Color 0F ");
                            system("cls");
                            obj.CovidTest();
                            break;
                        case 3:
                            system("Color 97");
                            system("cls");
                            obj.MedicalReport();
                            break;

                        case 4:
                            system("Color F8");
                            system("cls");
                            obj.HospitalsAvailabilty();
                            break;

                        case 5:
                            system("Color 07");
                            system("cls");
                            obj.covid_vaccine();
                            break;
                        case 6:
                            system("Color EC");
                            system("cls");
                            d = obj.edit_record123();
                            obj.edit_hospitaldetail3(d);
                            break;
                        case 7:
                            system("Color 9F");
                            system("cls");
                            cout << "For   PGI  :9439483948" << endl;
                            cout << "For GMCH-32:6434383408" << endl;
                            cout << "For GMCH-16:7434383408" << endl;
                            cout << "For MANIMAJRA-13:6434383408" << endl;

                            break;
                        case 8:
                            system("Color AF");
                            system("cls");
                            obj.output_hospital();

                            cout << "If you need hospital(emergency)  call on this no. 01722601023 or 01722747585 " << endl;
                            cout << " For ambulance-09592220130  or 07368088573" << endl;

                            break;

                        case 9:
                            system("Color B7");
                            system("cls");
                            obj.output_vaccinecentredetail();
                            break;
                        case 10:
                            system("Color F2");
                            system("cls");
                            obj.personaldetail();
                            break;
                        case 11:
                            system("Color F8");
                            system("cls");
                            obj.guidline();
                            break;
                        case 12:
                            system("Color F4");
                            system("cls");
                            obj.vaccine_certificate();
                            break;
                        case 13:
                            system("Color A7");
                            system("cls");
                            obj.feedback();
                            break;
                        case 14:
                            system("Color 47");
                            system("cls");
                            obj.essential_services();
                            break;
                        case 15:
                            system("Color C7");
                            system("cls");
                            obj.hospitaldata_user();
                            break;
                        case 16:
                            system("Color FD");
                            system("cls");
                            obj.vaccinedetail_user();
                            break;
                        case 17:
                            system("Color E0");
                            system("cls");
                            ta = false;
                            break;
                        }
                    }
                    break;

                case 2:
                    system("Color 87");
                    system("cls");
                    obj.input_newuser();
                    cout << "your data has been recorded please login" << endl;
                    break;

                case 3:
                    system("Color A0");
                    system("cls");
                    ans = obj.forgot_num();

                    cout << ans << endl;

                    break;
                case 4:
                    system("Color F5");
                    system("cls");
                    ca = false;
                    break;
                }
            }
            break;
        case 3:
            system("Color DF");
            system("cls");
            cout << "THANK YOU !" << endl;
            s = false;
            exit(0);
            //break;
        default:
            system("Color B7");
            system("cls");
            cout << "Sorry wrong input" << endl;
            //s = false;
            //exit(0);
        }
    }
}