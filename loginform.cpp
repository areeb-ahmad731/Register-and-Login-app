//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#pragma hdrstop

#include "loginform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
Tmyloginform *myloginform;

//---------------------------------------------------------------------------
__fastcall Tmyloginform::Tmyloginform(TComponent* Owner)
	: TForm(Owner)
{
}
std::vector<std::string>parsecommadelimitedstring(std::string line){
 std::vector<std::string>result;
 std::stringstream s_stream(line);
 while(s_stream.good()){
 std::string substr;
 getline(s_stream,substr,',');
 result.push_back(substr);
 }
 return result;
}
//const char* converttocharpointer(AnsiString ansiStr){
//return ansiStr.c_str();
//}
//---------------------------------------------------------------------------
void __fastcall Tmyloginform::LoginButtonClick(TObject *Sender)
{
   fstream myfile;
   myfile.open("registeredusers.txt",ios::in);
   if(myfile.is_open()){
   std::string line;
   while(getline(myfile,line)){
	std::vector<std::string>parsedline=parsecommadelimitedstring(line);
   const char* username=parsedline.at(2).c_str();
   AnsiString editusername=UsernameEdit->Text;
   const char*usernamestring= editusername.c_str();

   if(std::strcmp(username,usernamestring)==0){
	const char* password=parsedline.at(3).c_str();
	  AnsiString editpassword=PasswordEdit->Text;
		const char*passwordstring= editpassword.c_str();
		if(std::strcmp(password,passwordstring)==0){
		messagelabel->Text="success" ;
		}
		else{
		  messagelabel->Text="wrong password!!";
		}
   }}
   }
   }


//---------------------------------------------------------------------------
