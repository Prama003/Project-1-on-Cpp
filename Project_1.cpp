#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    private:
        string RollNo;
        string Name;
        string Grade;
    public:
        Student():RollNo(""),Name(""),Grade(""){}
    
    void setRollNo(string rollNo)
    {
        RollNo= rollNo;
    } 
    void setName(string name)
    {
        Name=name;
    }
    void setGrade(string grade)
    {
        Grade=grade;
    }
    string getRollNo()
    {
        return RollNo;
    }
    string getName()
    {
        return Name;
    }
    string getGrade()
    {
        return Grade;
    }
};
int main()
{
    Student s;
    bool exit=false;
    while(!exit)
    {
        system("cls");
        int val;
        cout<<"student report card"<<endl;
        cout<<"1.report card"<<endl;
        cout<<"2.exit"<<endl;
        cout<<"enter choice"<<endl;
        cin>>val;
        if(val==1)
        {
            system("cls");
            string rollNo, name;
            cout<<"enter rollno of the student";
            cin>>rollNo;
            s.setRollNo(rollNo);
            cout<<"enter the name"<<endl;
            cin>>name;
            s.setName(name);
            int phy,maths,comp,total,avg;
            cout<<"enter physics"<<endl;
            cin>>phy;
            cout<<"enter maths"<<endl;
            cin>>maths;
            cout<<"enter comp"<<endl;
            cin>>comp;
            system("cls");
            cout<<"student report card"<<endl;
            total=phy+maths+comp;
            cout<<"total marks"<<total<<endl;
            avg=total/3;
            cout<<"average marks of the student"<<avg<<endl;
            if(avg>=90 && avg<=100)
            {
                s.setGrade("A");
            }
            if(avg>=80 && avg<90)
            {
                s.setGrade("B");
            }
            if(avg>=70 && avg<80)
            {
                s.setGrade("C");
            }
            if(avg>=60 && avg<70)
            {
                s.setGrade("D");
            }
            if(avg>=50 && avg<60)
            {
                s.setGrade("F");
            }
            cout<<"grade of the student"<<s.getGrade()<<endl;
            ofstream out("D:/Students.txt",ios::app);
            out<<"\t"<<s.getRollNo()<<":"<<s.getName()<<":"<<s.getGrade()<<endl;
            out.close();
            cout<<"\t Report card is saved to the file"<<endl;
            
        }
        else if(val==2)
        {
            system("cls");
            exit=true;
            cout<<"\t Good Luck"<<endl;
        }

    }
    return 0;
}