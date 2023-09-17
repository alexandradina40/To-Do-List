//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ADDClick(TObject *Sender)
{
	String TaskText=AddTaskEdit->Text;     // punem in TaskText ce avem in edit
	TaskListBox->Items->Add(TaskText);     // punem in box ce avem in TaskText
	AddTaskEdit->Text="";                  // stergem ce aveam in edit

}
//---------------------------------------------------------------------------
void __fastcall TForm1::TaskListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index=Item->Index;                // gasim indexul Item ului
	TaskListBox->Items->Delete(index);    //il stergem din ListBox
}
//---------------------------------------------------------------------------
