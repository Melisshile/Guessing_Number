//---------------------------------------------------------------------------

#ifndef Main_unitH
#define Main_unitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TMain_Form : public TForm
{
__published:	// IDE-managed Components
	TPanel *title_panel;
	TButton *Run_btn;
	TLabel *input_lbl;
	TEdit *guess_edit;
	TPanel *dis_guess_panel;
	TLabel *dis_guess_lbl;
	TPanel *results_panel;
	TButton *reset_btn;
	TPanel *att_pan_dis;
	void __fastcall Run_btnClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall reset_btnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMain_Form(TComponent* Owner);
	//randomNumber method
	void randomNumber();
	//decision method
    void decision();
};
//---------------------------------------------------------------------------
extern PACKAGE TMain_Form *Main_Form;
//---------------------------------------------------------------------------
#endif
