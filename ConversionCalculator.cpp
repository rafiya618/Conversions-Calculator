#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void BinaryToDecimal();
void BinaryToOctal();
void BinaryToHexa();
void DecimalToBinary();
void DecimalToOctal();
void DecimalToHexa();
void OctalToBinary();
void OctalToDecimal();
void OctalToHexa();
void HexaToBinary();
void HexaToDecimal();
void HexaToOctal();
int main(){
   int flag=0,choice;
   do{
    cout<<endl;
    cout<<"**************************"<<endl;
    cout<<"| CONVERSIONS CALCULATOR |"<<endl;
    cout<<"**************************"<<endl;
    cout<<">>BINARY CONVERSIONS<<"<<endl;
    cout<<"1) Binary(base 2) To Decimal(base 10) Conversion. "<<endl;
    cout<<"2) Binary(base 2) To Octal(base 8) Conversion. "<<endl;
    cout<<"3) Binary(base 2) To Hexa decimal(base 16) Conversion. "<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<">>DECIMAL CONVERSIONS<<"<<endl;
    cout<<"4) Decimal(base 10) To Binary(base 2) Conversion."<<endl;
    cout<<"5) Decimal(base 10) To Octal(base 8) Conversion."<<endl;
    cout<<"6) Decimal(base 10) To hexa decimal(base 16) Conversion."<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<">>OCTAL CONVERSIONS<<"<<endl;
    cout<<"7) Octal(base 8) To Binary(base 2) Conversion."<<endl;
    cout<<"8) Octal(base 8) To Decimal(base 10) Conversion."<<endl;
    cout<<"9) Octal(base 8) To hexa decimal(base 16) Conversion."<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<">>HEXA DECIMAL CONVERSIONS<<"<<endl;
    cout<<"10) Hexa decimal(base 16) To Binary(base 2) Conversion."<<endl;
    cout<<"11) Hexa decimal(base 16) To Decimal(base 10) Conversion."<<endl;
    cout<<"12) Hexa decimal(base 16) To Octal(base 8) Conversion."<<endl;
    cout<<">>>>Your Choice: ";
    cin>>choice;
    switch(choice){
        case 1: BinaryToDecimal(); 
        break;
        case 2: BinaryToOctal();
        break;
        case 3: BinaryToHexa();
        break;
        case 4: DecimalToBinary();
        break;
        case 5: DecimalToOctal();
        break;
        case 6: DecimalToHexa();
        break;
        case 7: OctalToBinary();
        break;
        case 8: OctalToDecimal();
        break;
        case 9: OctalToHexa();
        break;
        case 10: HexaToBinary();
        break;
        case 11: HexaToDecimal();
        break;
        case 12: HexaToOctal();
        break;
        default: flag=1;
    }
   }while(flag==0);

}
void BinaryToDecimal()
{
    int binary, decimal=0,prod=1,ans;
    cout<<"Enter a binary Number: ";
    cin>>binary;
    while(binary>0){
        ans=binary%10;
        decimal=(ans*prod)+decimal;
        binary=binary/10;
        prod*=2;
    }
    cout<<"\nDecimal form is: "<<decimal;

}
void BinaryToOctal()
{
     int array[100];
    int binary, count, sum,prod,i=0,ans;
    cout<<"Enter binary number: ";
    cin>>binary;
    cout<<endl;
    while(binary>0)
    {
     count=0;
     sum=0;
     prod=1;
    while(count<3)
    {
        ans=binary%10;
        sum=(ans*prod)+sum;
        prod*=2;
        count++;
        binary=binary/10;
    }
        array[i]=sum;
        i++;
    }
    cout<<"Octal form is:"<<endl;
    for(int j=i-1; j>=0;j--){
        cout<<array[j];
    }
}
void BinaryToHexa()
{
    int array[100];
    int binary, count, sum,prod,i=0,ans;
    cout<<"Enter binary number: ";
    cin>>binary;
    cout<<endl;
    while(binary>0)
    {
     count=0;
     sum=0;
     prod=1;
    while(count<4)
    {
        ans=binary%10;
        sum=(ans*prod)+sum;
        prod*=2;
        count++;
        binary=binary/10;
    
        array[i]=sum;
        i++;
    }
    cout<<"\nHexa decimal form is:"<<endl;
    for(int j=i-1; j>=0;j--){
        if(array[j]==10)
         cout<<"A";
         else if(array[j]==11)
        cout<<"B";
         else if(array[j]==12)
        cout<<"C";
         else if(array[j]==13)
        cout<<"D";
         else if(array[j]==14)
        cout<<"E";
         else if(array[j]==15)
        cout<<"F";
        else
        cout<<array[j];
    }
}
}
void DecimalToBinary()
{
    int decimal, i=0;
cout<<"Enter a decimal number: ";
cin>>decimal;
int binary[100];
while(decimal>0){
    binary[i]=decimal%2;
    decimal=decimal/2;
    i++;
}
cout<<"\nBinary form is: ";
for(int j=i-1;j>=0;j--){
    cout<<binary[j];
}
}
void DecimalToOctal()
{
    int decimal, i=0;
cout<<"Enter a number in decimal form: ";
cin>>decimal;
int octal[100];
while(decimal>0){
    octal[i]=decimal%8;
    decimal=decimal/8;
    i++;
}
cout<<"\nOctal form is: ";
for(int j=i-1;j>=0;j--){
    cout<<octal[j];
}
}
void DecimalToHexa(){
    int decimal, i=0;
cout<<"Enter a decimal number: ";
cin>>decimal;
int hexa[100];
while(decimal>0){
    hexa[i]=decimal%16;
    decimal=decimal/16;
    i++;
}
cout<<"\nHexa decimal form is: ";
    for(int j=i-1; j>=0;j--){
        if(hexa[j]==10)
         cout<<"A";
         else if(hexa[j]==11)
        cout<<"B";
         else if(hexa[j]==12)
        cout<<"C";
         else if(hexa[j]==13)
        cout<<"D";
         else if(hexa[j]==14)
        cout<<"E";
         else if(hexa[j]==15)
        cout<<"F";
        else
        cout<<hexa[j];
    }
}
void OctalToBinary()
{
    int octal,remainder,i=0;
    int binary[100];
    cout<<"\nEnter an Octal number:";
    cin>>octal;
    while(octal>0)
    {
    remainder=octal%10;
    while(remainder>0){
    binary[i]=remainder%2;    
    remainder=remainder/2;
     i++;
    }
    octal=octal/10;
    }
    cout<<"\nBinary form is:  ";
    for(int j=i-1;j>=0;j--)
    cout<<binary[j];
}
void OctalToDecimal()
{
    int octal,remainder,i=0;
    int binary[100];
    cout<<"\nEnter an Octal number:";
    cin>>octal;
    while(octal>0)
    {
    remainder=octal%10;
    while(remainder>0){
    binary[i]=remainder%2;    
    remainder=remainder/2;
     i++;
    }
    octal=octal/10;
    }
    int decimal_loop=0;
    int prod=1, sum=0;
    while(decimal_loop<i){
    sum=(binary[decimal_loop]*prod)+sum;
    prod*=2;
    decimal_loop=decimal_loop+1;
    }
    cout<<"\nDecimal Form is: "<<sum;
}
void OctalToHexa()
{
    int octal,remainder,i=0;
    int binary[100];
    cout<<"\nEnter an Octal number:";
    cin>>octal;
    while(octal>0)
    {
    remainder=octal%10;
    while(remainder>0){
    binary[i]=remainder%2;    
    remainder=remainder/2;
     i++;
    }
    octal=octal/10;
    }
    int array[100];      
    int count=i-1,j=0;
    while(count>=0){
    array[j]=binary[count];  
    count--;
    j++;
    }
    int k,sum[100], index=j-1,prod,sum_i=0;
    while(index>=0){
        sum[sum_i]=0, prod=1,k=0;
    while(k<4&&index>=0){
      sum[sum_i]=(array[index]*prod)+sum[sum_i];
      index=index-1;
      prod*=2;
      k+=1;
    }
    sum_i++;
    }
    cout<<"\nHexa decimal form is:";
    for(int sum_j=sum_i-1; sum_j>=0;sum_j--){
      if(sum[sum_j]==10)
         cout<<"A";
         else if(sum[sum_j]==11)
        cout<<"B";
         else if(sum[sum_j]==12)
        cout<<"C";
         else if(sum[sum_j]==13)
        cout<<"D";
         else if(sum[sum_j]==14)
        cout<<"E";
         else if(sum[sum_j]==15)
        cout<<"F";
        else
        cout<<sum[sum_j];
    }
}
void HexaToBinary()
{
    char hexa[100],binary[100];
    cout<<"\nEnter hexa decimal number:"<<endl;
    cin>>hexa;
    int i=0,count=0;
    while(hexa[i]!='\0'){
        count++;
        i++;
    }
    int j, check=0;
    for(j=0;j<count;j++){
        switch(hexa[j]){
            case '0':strcat(binary,"0000");break;
            case '1':strcat(binary,"0001");break;
            case '2':strcat(binary,"0010");break;
            case '3':strcat(binary,"0011");break;
            case '4':strcat(binary,"0100");break;
            case '5':strcat(binary,"0101");break;
            case '6':strcat(binary,"0110");break;
            case '7':strcat(binary,"0111");break;
            case '8':strcat(binary,"1000");break;
            case '9':strcat(binary,"1001");break;
            case 'A':
            case 'a':strcat(binary,"1010");break;
            case 'B':
            case 'b':strcat(binary,"1011");break;
            case'C':
            case 'c':strcat(binary,"1100");break;
            case 'D':
            case 'd':strcat(binary,"1101");break;
            case 'E':
            case 'e':strcat(binary,"1110");break;
            case 'F':
            case 'f':strcat(binary,"1111");break;
            default:check=1;
        }
    }
    if(check==0)
        cout<<"\nBinary form is: "<<binary<<endl;
    else
        cout<<"\nInvalid Input";
}
void HexaToDecimal(){
    char hexa[100],binary[100]={0};
    cout<<"\nEnter hexa decimal number:"<<endl;
    cin>>hexa;
    int i=0,count=0;
    while(hexa[i]!='\0'){
        count++;
        i++;
    }
    int j, check=0;
    for(j=0;j<count;j++){
        switch(hexa[j]){
            case '0':strcat(binary,"0000");break;
            case '1':strcat(binary,"0001");break;
            case '2':strcat(binary,"0010");break;
            case '3':strcat(binary,"0011");break;
            case '4':strcat(binary,"0100");break;
            case '5':strcat(binary,"0101");break;
            case '6':strcat(binary,"0110");break;
            case '7':strcat(binary,"0111");break;
            case '8':strcat(binary,"1000");break;
            case '9':strcat(binary,"1001");break;
            case 'A':
            case 'a':strcat(binary,"1010");break;
            case 'B':
            case 'b':strcat(binary,"1011");break;
            case 'C':               
            case 'c':strcat(binary,"1100");break;
            case 'D':
            case 'd':strcat(binary,"1101");break;
            case 'E':
            case 'e':strcat(binary,"1110");break;
            case 'F':
            case 'f':strcat(binary,"1111");break;
            default:check=1;
        }
    }
   
    if(check==0){
        cout<<binary<<endl;
    }
    else
        cout<<"\nInvalid Input";
    
    int x=stoi(binary);
     int decimal=0,prod=1,ans;
     while(x>0){
        ans=x%10;
        decimal=(ans*prod)+decimal;
        x=x/10;
        prod*=2;
    }
    cout<<"\nDecimal form is: "<<decimal;

}
void HexaToOctal(){
        char hexa[100],binary[100]={0};
    cout<<"\nEnter hexa decimal number:"<<endl;
    cin>>hexa;
    int i=0,count=0;
    while(hexa[i]!='\0'){
        count++;
        i++;
    }
    int j, check=0;
    for(j=0;j<count;j++){
        switch(hexa[j]){
            case '0':strcat(binary,"0000");break;
            case '1':strcat(binary,"0001");break;
            case '2':strcat(binary,"0010");break;
            case '3':strcat(binary,"0011");break;
            case '4':strcat(binary,"0100");break;
            case '5':strcat(binary,"0101");break;
            case '6':strcat(binary,"0110");break;
            case '7':strcat(binary,"0111");break;
            case '8':strcat(binary,"1000");break;
            case '9':strcat(binary,"1001");break;
            case 'A':
            case 'a':strcat(binary,"1010");break;
            case 'B':
            case 'b':strcat(binary,"1011");break;
            case 'C':               
            case 'c':strcat(binary,"1100");break;
            case 'D':
            case 'd':strcat(binary,"1101");break;
            case 'E':
            case 'e':strcat(binary,"1110");break;
            case 'F':
            case 'f':strcat(binary,"1111");break;
            default:check=1;
        }
    }
   
    if(check==0){
        cout<<binary<<endl;
    }
    else
        cout<<"\nInvalid Input";
    
    int x=stoi(binary);
    int octal[100];
    int b_count, sum,prod,index=0,ans;

    while(x>0)
    {
     b_count=0;
     sum=0;
     prod=1;
    while(b_count<3)
    {
        ans=x%10;
        sum=(ans*prod)+sum;
        prod*=2;
        b_count++;
        x=x/10;
    }
        octal[index]=sum;
        index++;
    }
    cout<<"\nOctal form is:"<<endl;
    for(int j=index-1; j>=0;j--){
        cout<<octal[j];
    }
}