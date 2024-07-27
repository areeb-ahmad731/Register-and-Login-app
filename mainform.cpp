//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "mainform.h"
#include "Loginform.h"
#include "registrationform.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
Tmymainform *mymainform;
//---------------------------------------------------------------------------
__fastcall Tmymainform::Tmymainform(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tmymainform::LoginnavigationButtonClick(TObject *Sender)
{
  myloginform->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tmymainform::RegistrationnavigationButtonClick(TObject *Sender)
{
   myregistrationform->Show();
}
//---------------------------------------------------------------------------
