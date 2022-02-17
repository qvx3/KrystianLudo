#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Forms_Chinczyk {

	/// <summary>
	/// Summary for HelpAbout
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class HelpAbout : public System::Windows::Forms::Form
	{
	public:
		HelpAbout(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HelpAbout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpAbout::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(351, 409);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(9, 483);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Author: Krystian Slawinski";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(115, 569);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Press Space or Alt+Q to go back";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label3->Location = System::Drawing::Point(12, 516);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Website: http://qvx.cba.pl/English/";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label4->Location = System::Drawing::Point(9, 445);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(316, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Politechnika Koszalinska, kierunek Elektronika i Telekomunikacja";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 465);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Semestr III 2020/2021";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label6->Location = System::Drawing::Point(146, 465);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Prowadzacy: dr inz. Lukasz Chrobak";
			// 
			// HelpAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 598);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"HelpAbout";
			this->Text = L"About...";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &HelpAbout::HelpAbout_KeyPress);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &HelpAbout::HelpAbout_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void HelpAbout_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{

	
				 // Wyswietlenie okna w trybie DIALOGOWYM

				 // W zdarzeniu ukryty jest kod klawiatury
				 if ( e->KeyChar == (char) Keys ::Space )
				 {
					 this ->killWindow() ;

					 


				 }

}


private: System::Void HelpAbout_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
{

	// Wymagane do kombinacji klawiszy Alt+Q

				 if ( e ->Alt && e->KeyCode == Keys ::Q )
				 {
					 this ->killWindow() ;

				 }

}

	// [ Jakby Wszystko zasuwa na typach enum! ]
	


private : void killWindow()
{
	
		// Rezultatem okna jest OK
		this ->DialogResult = System ::Windows ::Forms ::DialogResult ::OK ;

		// OK dla sendera jest zamknieciem tego okienka
}








	};
}
