#include<iostream>
#include<cmath>
#include<string.h>
#include<math.h>
#include<cstdlib>
#define MAX 1000
 using namespace std;
 void decimalToBinary();
 void decimalToOctal();
 void decimalToHex();
 void binaryToDecimal();
 void binarytoOctal();
 void binaryToHex();
 void octalToDecimal();
 void OctalToBinary();
 void octalToHex();
 void hexToBinary();
 void hexToDecimal();
 void hexToOctal();
using namespace std;
long long OctalToBinary(int octalNumber)
{
    int decNum = 0, i = 0;
    long long binaryNumber = 0;

    while(octalNumber != 0)
    {
        decNum += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    while (decNum != 0)
    {
        binaryNumber += (decNum % 2) * i;
        decNum /= 2;
        i *= 10;
    }

    return binaryNumber;
}
int octalToDecimal(int octalNumber)
{
    int decNum = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decNum += rem * pow(8, i);
        ++i;
    }
    return decNum;
}
int BinarytoOctal(long long b)
{
    int o = 0, d = 0, i = 0;

    while(b != 0)
    {
        d += (b%10) * pow(2,i);
        ++i;
        b/=10;
    }

    i = 1;

    while (d != 0)
    {
        o += (d % 8* i);
        d /= 8;
        i *= 10;
    }

    return o;
}
int binaryToDecimal(int n)
{
    int num = n;
    int dec_val = 0;
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;

        dec_val += last_digit*base;

        base = base*2;
    }

    return dec_val;
}
string decimalToBinary(double num, int k_prec)
{
    string binary = "";


    int Intg = num;
    double fractional = num - Intg;
    while (Intg)
    {
        int rem = Intg % 2;

        binary.push_back(rem +'0');

        Intg /= 2;
    }


    binary.push_back('.');

    while (k_prec--)
    {

        fractional *= 2;
        int fract_bit = fractional;

        if (fract_bit == 1)
        {
            fractional -= fract_bit;
            binary.push_back(1 + '0');
        }
        else
            binary.push_back(0 + '0');
    }

    return binary;
}
string decimalToOctal(double num, int k_prec)
{
    string octal = "";


    int Intg = num;
    double fractional = num - Intg;
    while (Intg)
    {
        int rem = Intg % 8;

        octal.push_back(rem +'0');

        Intg /= 8;
    }


    octal.push_back('.');

    while (k_prec--)
    {

        fractional *= 8;
        int fract_bit = fractional;

        if (fract_bit == 1)
        {
            fractional -= fract_bit;
            octal.push_back(1 + '0');
        }
        else
            octal.push_back(0 + '0');
    }

    return octal;
}
 int main()
 {
     cout<<"                           ************************************************************                       "<<endl;
     cout<<"                           *                     NUMBER CONVERSION                    *                       "<<endl;
     cout<<"                           *                         CALCULATOR                       *                       "<<endl;
     cout<<"                           ************************************************************                       "<<endl;
     int a=1;


         cout<<"1. DECMAL TO OTHER NUMBERS."<<endl;
         cout<<"2. BINARY TO OTHER NUMBERS."<<endl;
         cout<<"3. OCTAL TO OTHER NUMBERS."<<endl;
         cout<<"4. HEXADECIAML TO OTHER NUMBERS."<<endl;
         cout<<"5. EXIT."<<endl<<endl;
         cout<<"Please Enter Your Choice: "<<endl;
         while(a==1 && a<6)
         {

         cin>>a;
         switch(a)
         {
         case 1:
            {
                int b=1;


                    cout<<"1. Decimal to Binary."<<endl;
                    cout<<"2. Decimal to Octal."<<endl;
                    cout<<"3. Decimal to Hexadecimal."<<endl;
                    cout<<"4. Exit."<<endl;
                    cout<<"Please Enter Your Choice: "<<endl;
                    while(b==1 && b<5)
                    {

                    cin>>b;
                    switch(b)
                    {
                    case 1:
                        {
                            decimalToBinary();
                          break;
                        }
                    case 2:
                        {
                            decimalToOctal();
                            break;
                        }
                    case 3:
                        {
                            decimalToHex();
                            break;
                        }
                    case 4:
                        {
                            break;
                        }
                    }
                }
                break;
            }
                    case 2:
                        {

                            int m=1;

                                cout<<"1.Binary to Decimal."<<endl;
                                cout<<"2.Binary to Octal."<<endl;
                                cout<<"3.Binary to Hexadecimal."<<endl;
                                cout<<"4.Exit."<<endl;
                                cout<<"Please Enter Your Choice: "<<endl;
                                while(m==1 && m<5)
                            {
                                cin>>m;
                                switch(m)
                                {
                                case 1:
                                    {
                                        binaryToDecimal();
                                        break;
                                    }
                                case 2:
                                    {
                                        binarytoOctal();
                                        break;
                                    }
                                case 3:
                                    {
                                        binaryToHex();
                                        break;
                                    }
                                case 4:
                                    {
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                                case 3:
                                    {
                                        int p=1;

                                          cout<<"1.Octal to Decimal."<<endl;
                                        cout<<"2.Octal to Binary."<<endl;
                                        cout<<"3.Octal to Hexadecimal."<<endl;
                                        cout<<"4.Exit."<<endl;
                                        cout<<"Please your Enter HYour Choice: "<<endl;
                                        cin>>p;
                                        while(p==1 && p<5)
                                        {
                                        switch(p)
                                        {
                                            case 1:
                                    {
                                        octalToDecimal();
                                        break;
                                    }
                                            case 2:
                                                {
                                              OctalToBinary();

                                        break;
                                                }


                                            case 3:
                                                {

                                        octalToHex();
                                        break;
                                                }
                                            case 4:
                                                {
                                                    break;
                                                }

                                              }
                                           }
                                   break;
                             }
                                            case 4:
                                                {
                                                  int t=1;

                                                      cout<<"1.Hexadecimal to Decimal: "<<endl;
                                                      cout<<"2.Hexadecimal to Binary: "<<endl;
                                                      cout<<"3.Hexadecimal to Octal: "<<endl;
                                                      cout<<"4.Exit. "<<endl;
                                                      cout<<"Please Enter your choice: "<<endl;
                                                      while(t==1 && t<5)
                                                  {
                                                      cin>>t;
                                                      switch(t)
                                                      {
                                                      case 1:
                                                        {
                                                           hexToDecimal();
                                                            break;
                                                        }
                                                      case 2:
                                                        {
                                                            hexToBinary();
                                                            break;
                                                        }
                                                      case 3:
                                                        {
                                                            hexToOctal();
                                                            break;
                                                        }
                                                      case 4:
                                                        {
                                                            break;
                                                        }
                                                      }
                                                  }
                                                }
                                                break;



         }

     }

 }
  //Binary to others.
 void binaryToDecimal(){
     int b, mod, sum=0, i=1;
     cout<<"Enter the Binary number: "<<endl;
     cin>>b;
     do
     {
         mod= b%10;
         b=b/10;
         sum= sum+mod*i;
         i=i*2;
     }
     while(b>0);
     cout<<"Decimal number is: "<<sum<<endl;

 }
 void binarytoOctal(){
     long long int no;
     int r, sum=0, sum1=0, sum2=0, sum3=0, sum4=0, i;
     int j=1;
     cout<<"Enter the Binary number: "<<endl;
     cin>>no;
     for(int i=0; i<3; i++){
        r=no%10;
        sum=sum+j*r;
        j=j*2;
        no=no/10;
     }
     j=1;
     if(i>=3){
        for(int i=3; i<6; i++){
            r=no%10;
            sum1=sum1+j*r;
            j=j*2;
            no=no/10;
        }
     }
          j=1;
     if(i>=6){
        for(int i=6; i<9; i++){
            r=no%10;
            sum1=sum2+j*r;
            j=j*2;
            no=no/10;
        }
     }
          j=1;
     if(i>=9){
        for(int i=9; i<12; i++){
            r=no%10;
            sum1=sum3+j*r;
            j=j*2;
            no=no/10;
        }
     }
          j=1;
     if(i>=12){
        for(int i=12; i<15; i++){
            r=no%10;
            sum1=sum4+j*r;
            j=j*2;
            no=no/10;
        }
     }
     cout<<"\nOctal number is: "<<sum4<<sum3<<sum2<<sum1<<sum<<endl;

 }
 void binaryToHex(){
      int hex[1000];
  int i = 1, j = 0, rem, dec = 0, binaryNumber;
	cout << " Enter a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber > 0)
  {
   rem = binaryNumber % 2;
   dec = dec + rem * i;
   i = i * 2;
   binaryNumber = binaryNumber / 10;
  }
   i = 0;
  while (dec != 0)
  {
   hex[i] = dec % 16;
   dec = dec / 16;
   i++;
  }
  cout<<" The hexadecimal value is : ";
  for (j = i - 1; j >= 0; j--)
  {
   if (hex[j] > 9)
   {
    cout<<(char)(hex[j] + 55)<<"\n";
   }
   else
   {
    cout<<hex[j]<<"\n";
   }
  }
 }

//Decimal to others.
 void decimalToBinary(){
     int B[100],d,i=0;
     cout<<"Enter Decimal number:";
      cin>>d;

// Storing remainders in the array

while(d!= 0){

       B[i]=d%2;

        d=d/2;

         i++;

}

cout<<"\nBinary number is: ";
for(int k=i-1; k>=0; k--){
    cout<<B[k]<<endl;
}


 }
 void decimalToOctal(){
     int d, r, sum=0, i=1;
     cout<<"Enter the decimal number: "<<endl;
     cin>>d;
     do{
        r= d%8;
        sum=sum+i*r;
        d=d/8;
        i=i*10;
     }while(d>0);
     cout<<"\nOctal number is: "<<sum<<endl;
 }
 void decimalToHex(){
         int num, temp, i = 1, j, r;

    char hex[50];

    cout << " Enter a decimal number : ";

    cin >> num;

    temp = num;

    while (temp != 0)

    {

        r = temp % 16;

        if (r < 10)

            hex[i++] = r + 48;

        else

            hex[i++] = r + 55;

        temp = temp / 16;

    }

    cout << "\nHexadecimal equivalent of " << num << " is : ";

    for (j = i; j > 0; j--)

        cout << hex[j]<<endl;

 }
 //Octal to others.
void OctalToBinary(){
    char octalNumber[MAX];

    long int i=0;

    cout<<"Enter any octal number: ";
    cin>>octalNumber;

    cout<<"Equivalent binary value: ";
    while(octalNumber[i])
    {
        switch(octalNumber[i])
    {
             case '0': cout<<"000";
             break;
             case '1': cout<<"001";
         break;
             case '2': cout<<"010";
         break;
             case '3': cout<<"011";
         break;
             case '4': cout<<"100";
         break;
             case '5': cout<<"101";
         break;
             case '6': cout<<"110";
         break;
             case '7': cout<<"111";
         break;
             default:  cout<<"nInvalid octal digit "<<octalNumber[i];

        }
        i++;
    }


}
void octalToDecimal(){
        long int octal,decimal =0;
    int i=0;

    cout<<"Enter octal number: ";
    cin>>octal;
    cout<<endl;
    while(octal!=0)
    {
         decimal = decimal + (octal % 10) * pow(8,i++);
         octal = octal/10;
    }

    cout<<"The decimal value is : "<<decimal<<endl;
}
void octalToHex(){

    int a[20],b[20],c[20],rev[20];
    int h,i,j,k,l,x,fra,flag,rem,num1,num3;
    float rem1,num2,num4,dno;
    char s[20];
    x=fra=flag=rem=0;
    rem1=0.0;
    cout<<"Enter the octal number : ";
    cin>>s;
    for(i=0,j=0,k=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        {
            flag=1;
        }
        else if(flag==0)
            a[j++]=s[i]-48;
        else if(flag==1)
            b[k++]=s[i]-48;
    }
    x=j;
    fra=k;
    for(j=0,i=x-1;j<x;j++,i--)
    {
        rem = rem +(a[j] * pow(8,i));
    }
    for(k=0,i=1;k<fra;k++,i++)
    {
        rem1 = rem1 +(b[k] / pow(8,i));
    }
    rem1=rem+rem1;
    dno=rem1;
    num1=(int)dno;
    num2=dno-num1;

    i=0;
    while(num1!=0)
    {
        rem=num1 % 16;
        rev[i] = rem;
        num1=num1 /16;
        i++;
    }
    j=0;
    while(num2!=0.0)
    {
        num2=num2 * 16;
        num3=(int)num2;
        num4=num2-num3;
        num2=num4;
        a[j]=num3;
        j++;
        if(j==4)
        {
            break;
        }
    }
    l=i;
    cout<<"\n The hexadecimal number is  : ";
    for(i=l-1;i>=0;i--)
    {
        if(rev[i]==10)
           cout<<"A";
        else if(rev[i]==11)
           cout<<"B";
        else if(rev[i]==12)
           cout<<"C";
        else if(rev[i]==13)
           cout<<"D";
        else if(rev[i]==14)
           cout<<"E";
        else if(rev[i]==15)
           cout<<"F";
        else
        cout<<rev[i];
    }
    h=j;
    cout<<".";
    for(k=0;k<h;k++)
    {
        if(a[k]==10)
           cout<<"A";
        else if(a[k]==11)
           cout<<"B";
        else if(a[k]==12)
           cout<<"C";
        else if(a[k]==13)
           cout<<"D";
        else if(a[k]==14)
           cout<<"E";
        else if(a[k]==15)
           cout<<"F";
        else
        cout<<a[k];
    }
}
//Hexadecimal to others.
void hexToBinary(){
        char binaryNumber[MAX],hexaDecimal[MAX];
    long int i=0;

    cout<<"Enter the hexadecimal number: ";
    cin>>hexaDecimal;

    cout<<"\nThe binary number is : ";
    while(hexaDecimal[i])
    {
         switch(hexaDecimal[i])
         {
             case '0': cout<<"0000"; break;
             case '1': cout<<"0001"; break;
             case '2': cout<<"0010"; break;
             case '3': cout<<"0011"; break;
             case '4': cout<<"0100"; break;
             case '5': cout<<"0101"; break;
             case '6': cout<<"0110"; break;
             case '7': cout<<"0111"; break;
             case '8': cout<<"1000"; break;
             case '9': cout<<"1001"; break;
             case 'A': cout<<"1010"; break;
             case 'B': cout<<"1011"; break;
             case 'C': cout<<"1100"; break;
             case 'D': cout<<"1101"; break;
             case 'E': cout<<"1110"; break;
             case 'F': cout<<"1111"; break;
             case 'a': cout<<"1010"; break;
             case 'b': cout<<"1011"; break;
             case 'c': cout<<"1100"; break;
             case 'd': cout<<"1101"; break;
             case 'e': cout<<"1110"; break;
             case 'f': cout<<"1111"; break;
             default:  cout<<"nInvalid hexadecimal digit "<<hexaDecimal[i];
         }
         i++;
    }
}
void hexToDecimal(){
    char num[20];

        int i, r, len, hex = 0;

        cout << "Enter hexadecimal number : ";

        cin >> num;

        len = strlen(num);

        for (i = 0; num[i] != '\0'; i++)

        {

            len--;

            if(num[i] >= '0' && num[i] <= '9')

                r = num[i] - 48;

            else if(num[i] >= 'a' && num[i] <= 'f')

                    r = num[i] - 87;

                 else if(num[i] >= 'A' && num[i] <= 'F')

                        r = num[i] - 55;

            hex += r * pow(16,len);

        }

        cout << "\nDecimal number is : " << hex<<endl;

}
void hexToOctal(){
    char hex[17];
    long long octal, bin, place;
    int i = 0, rem, val;
    cout<<"Enter any hexadecimal number: ";
    cin>>hex;

    octal = 0ll;
    bin = 0ll;
    place = 0ll;

    /* Hexadecimal to binary conversion */
    for(i=0; hex[i]!='\0'; i++)
    {
        bin = bin * place;

        switch(hex[i])
        {
            case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                cout<<"Invalid hexadecimal input.";
        }

        place = 10000;
    }

    place = 1;

    /* Binary to octal conversion */
    while(bin > 0)
    {
        rem = bin % 1000;

        switch(rem)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }


    cout<<"Octal number is: "<<octal<<endl;
}

