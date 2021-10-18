#include<iostream>
using namespace std;
    class str
    {
    string a,b,c,r,s1,s2,s3,ss;
    int i,j,k,l,n;
    public:
    void length()
    {	
        l=0;
        cout<<"Enter the word=\n";
        cin>>a;
        for(i=0;a[i]!='\0';i++)
        {
         l++;
        }
        cout<<"Length of given word is= "<<l;
    }
    void concat()
    {	
        cout<<"Enter first word= ";
        cin>>b;
        cout<<"Enter second word=";
        cin>>c;
        n=0;
        for(i=0;b[i]!='\0';i++)
        {
            r[n]=b[i];
            n++;
        }
        for(j=0;c[j]!='\0';++j)
        {
            r[n]=c[j];
            n++;
        }
        cout<<"Result= ";
        for(i=0;r[i]!='\0';i++)
        {
          cout<<r[i];
        }
    }
    void  copy()
    {
        cout<<"Enter the word= ";
        cin>>s1;
        s2=s1;
        cout<<"The copied word is: "<<s2;
    }
    void rev()
    {
        cout<<"Enter your word= ";
        cin>>s3;
        l=0,k=0;
        for(i=0;s3[i]!='\0';i++)
        {
          l++;
        }
        for(i=l-1;i>=0;i--,k++)
        {
            ss[k]=s3[i];
        }
        cout<<"The Reverse of the word is= ";
        for(i=0;i<k;i++)
        cout<<ss[i];
    }
};
   int main()
{
    str s;
    char res;
    int str;
    do
    {
        cout<<"Menu\n";
        cout<<"1)Length\n2)Concatination\n3)Reverse\n4)Copy\nSelect (1-4)= ";
        cin>>str;
        switch(str)
        {
            case 1 :s.length(); break;
            case 2 :s.concat();	break;
            case 3 :s.rev();	break;
            case 4 :s.copy();	break;
            default:cout<<"\n wrong selection..!!\n";
        }
         cout<<"\nGo to main menu(Y/N)=";
    cin>>res;
    }while(res=='Y'||res=='y');
    return 0;
}