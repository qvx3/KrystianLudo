








/////////////////////

#include "msclr\marshal_cppstd.h"

// Podlaczenie kodu z gra
#include "Plansza.h"

// Proud to present Q&D sound engine
#include "Sox.h"

// Konsola, string
#include < iostream >

// system()
#include < cstdlib >


using namespace std ;

/////////////////////












#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Forms_Chinczyk {

	/// <summary>
	/// Summary for Frontend
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Frontend : public System::Windows::Forms::Form
	{
	public:
		Frontend(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			plansza = new Plansza ( false ) ;

			sox = new Sox () ;



		}










	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Frontend()
		{
			if (components)
			{
				delete components;
			}
				

			// Tradycyjnie zwolnij pamiec
			 if ( plansza )
			 {
				 delete plansza ;
			 }
			 plansza = nullptr ;




			if ( sox )
			{
				delete sox ;

			}

			sox = nullptr ;


		}










	private: System::Windows::Forms::RichTextBox^  player4;
	protected: 
	private: System::Windows::Forms::RichTextBox^  player3;
	private: System::Windows::Forms::RichTextBox^  player2;
	private: System::Windows::Forms::RichTextBox^  player1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  buttonStart;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;














	// Obiekt klasy glownej stworzony dynamicznie
	 
	private : Plansza *plansza ;


	private : Sox *sox ;















#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->player4 = (gcnew System::Windows::Forms::RichTextBox());
			this->player3 = (gcnew System::Windows::Forms::RichTextBox());
			this->player2 = (gcnew System::Windows::Forms::RichTextBox());
			this->player1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// player4
			// 
			this->player4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->player4->Location = System::Drawing::Point(229, 65);
			this->player4->Name = L"player4";
			this->player4->Size = System::Drawing::Size(184, 32);
			this->player4->TabIndex = 80;
			this->player4->Text = L"Player4";
			// 
			// player3
			// 
			this->player3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->player3->Location = System::Drawing::Point(39, 65);
			this->player3->Name = L"player3";
			this->player3->Size = System::Drawing::Size(184, 32);
			this->player3->TabIndex = 79;
			this->player3->Text = L"Player3";
			// 
			// player2
			// 
			this->player2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->player2->Location = System::Drawing::Point(229, 27);
			this->player2->Name = L"player2";
			this->player2->Size = System::Drawing::Size(184, 32);
			this->player2->TabIndex = 78;
			this->player2->Text = L"Player2";
			// 
			// player1
			// 
			this->player1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->player1->Location = System::Drawing::Point(39, 27);
			this->player1->Name = L"player1";
			this->player1->Size = System::Drawing::Size(184, 32);
			this->player1->TabIndex = 77;
			this->player1->Text = L"Player1";
			this->player1->TextChanged += gcnew System::EventHandler(this, &Frontend::player1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(470, 100);
			this->groupBox1->TabIndex = 81;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Liczba graczy";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(337, 44);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(31, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Frontend::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Enabled = false;
			this->radioButton3->Location = System::Drawing::Point(253, 44);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(31, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Location = System::Drawing::Point(163, 44);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(31, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->Location = System::Drawing::Point(85, 44);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(31, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->player3);
			this->groupBox2->Controls->Add(this->player1);
			this->groupBox2->Controls->Add(this->player4);
			this->groupBox2->Controls->Add(this->player2);
			this->groupBox2->Location = System::Drawing::Point(12, 118);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(470, 118);
			this->groupBox2->TabIndex = 82;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Nazwy graczy";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Frontend::groupBox2_Enter);
			// 
			// buttonStart
			// 
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonStart->Location = System::Drawing::Point(175, 242);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(121, 23);
			this->buttonStart->TabIndex = 81;
			this->buttonStart->Text = L"START";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &Frontend::buttonStart_Click);
			// 
			// Frontend
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 279);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Frontend";
			this->Text = L"Gra w chinczyka (Ludo Game)";
			this->Load += gcnew System::EventHandler(this, &Frontend::Frontend_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }





















private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e)
{

	//// Bez przesady z tyloma dzwiekami!


	//this ->sox ->Play ( " ..\\..\\Effects\\ShotGunFire.wav " ) ;
	//this ->sox ->Play ( "..\\sfx\\classic chord.wav" ) ;


	// Niejakie skroty kodu ponizej
	System::String^ Player1 = this ->player1 ->Text ;

	System::String^ Player2 = this ->player2 ->Text ;

	System::String^ Player3 = this ->player3 ->Text ;

	System::String^ Player4 = this ->player4 ->Text ;


	// Bardzo wazna linijka dla konwersji Managed -> Unmanaged
    msclr::interop::marshal_context context;


	std::string player1 = context.marshal_as<std::string>(Player1);

	std::string player2 = context.marshal_as<std::string>(Player2);

	std::string player3 = context.marshal_as<std::string>(Player3);

	std::string player4 = context.marshal_as<std::string>(Player4);


	// Uzywam narzedzi, ktore sa mi lepiej znane

	this ->plansza ->saveGracz ( player1 , player2 , player3 , player4 ) ;


	Close () ;



}







private: System::Void Frontend_Load(System::Object^  sender, System::EventArgs^  e)
{
	
	this ->sox ->Play ( "..\\sfx\\Windows XP Startup.ogg" ) ;
}












private: System::Void player1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

};
}
