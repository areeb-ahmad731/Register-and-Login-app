//---------------------------------------------------------------------------

#include <fmx.h>
#include<fstream>
#pragma hdrstop

#include "registrationform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
Tmyregistrationform *myregistrationform;
//---------------------------------------------------------------------------
__fastcall Tmyregistrationform::Tmyregistrationform(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmyregistrationform::SaveButtonClick(TObject *Sender)
{
	   fstream myfile;
	   myfile.open("registeredusers.txt",ios::app);
	   if(myfile.is_open()){
	   AnsiString name=nameEdit->Text;
	   AnsiString age=AgeEdit->Text;
	   AnsiString username=UsernameEdit->Text;
	   AnsiString password=PasswordEdit->Text;
	   myfile<<name<<","<<age<<","<<username<<","<<password<<"\n";
	   myfile.close();
	   this->Close();
	   }
}
//---------------------------------------------------------------------------
