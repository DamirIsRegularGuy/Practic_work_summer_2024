//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistrationForm *RegistrationForm;
//---------------------------------------------------------------------------
__fastcall TRegistrationForm::TRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TRegistrationForm::Button1Click(TObject *Sender)
{
if (ComboBox1->Text == "Админ" && Edit1->Text.IsEmpty())
    {
		ShowMessage("Для данного пользователя необходим пароль!!!");
        return;
    }

    // Ваш код для обработки данных регистрации...

    // Закрываем форму регистрации с результатом mrOk
	this->ModalResult = mrOk;  // Устанавливаем результат закрытия формы как успешный
}
//---------------------------------------------------------------------------

