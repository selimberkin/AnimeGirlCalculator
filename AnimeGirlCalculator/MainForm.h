#pragma once

namespace AnimeGirlCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm için özet
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;

	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(12, 63);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(318, 82);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button2->ForeColor = System::Drawing::Color::DarkOrange;
			this->button2->Location = System::Drawing::Point(12, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button3->ForeColor = System::Drawing::Color::DarkOrange;
			this->button3->Location = System::Drawing::Point(93, 159);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"C";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button4->ForeColor = System::Drawing::Color::DarkOrange;
			this->button4->Location = System::Drawing::Point(174, 159);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"<--";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button8->ForeColor = System::Drawing::Color::DarkOrange;
			this->button8->Location = System::Drawing::Point(12, 271);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 50);
			this->button8->TabIndex = 8;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button9->ForeColor = System::Drawing::Color::DarkOrange;
			this->button9->Location = System::Drawing::Point(12, 327);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 50);
			this->button9->TabIndex = 9;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button10->ForeColor = System::Drawing::Color::DarkOrange;
			this->button10->Location = System::Drawing::Point(12, 383);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 50);
			this->button10->TabIndex = 10;
			this->button10->Text = L"+/-";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button11->ForeColor = System::Drawing::Color::DarkOrange;
			this->button11->Location = System::Drawing::Point(93, 215);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 50);
			this->button11->TabIndex = 11;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button12->ForeColor = System::Drawing::Color::DarkOrange;
			this->button12->Location = System::Drawing::Point(93, 271);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 50);
			this->button12->TabIndex = 12;
			this->button12->Text = L"5";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button13->ForeColor = System::Drawing::Color::DarkOrange;
			this->button13->Location = System::Drawing::Point(93, 327);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 50);
			this->button13->TabIndex = 13;
			this->button13->Text = L"2";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button14->ForeColor = System::Drawing::Color::DarkOrange;
			this->button14->Location = System::Drawing::Point(93, 383);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 50);
			this->button14->TabIndex = 14;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button16->ForeColor = System::Drawing::Color::DarkOrange;
			this->button16->Location = System::Drawing::Point(174, 215);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 50);
			this->button16->TabIndex = 16;
			this->button16->Text = L"9";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button17->ForeColor = System::Drawing::Color::DarkOrange;
			this->button17->Location = System::Drawing::Point(174, 271);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 50);
			this->button17->TabIndex = 17;
			this->button17->Text = L"6";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button18->ForeColor = System::Drawing::Color::DarkOrange;
			this->button18->Location = System::Drawing::Point(174, 327);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 50);
			this->button18->TabIndex = 18;
			this->button18->Text = L"3";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Transparent;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button19->ForeColor = System::Drawing::Color::DarkOrange;
			this->button19->Location = System::Drawing::Point(174, 383);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 50);
			this->button19->TabIndex = 19;
			this->button19->Text = L".";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MainForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button20->ForeColor = System::Drawing::Color::DarkOrange;
			this->button20->Location = System::Drawing::Point(255, 159);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 50);
			this->button20->TabIndex = 20;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MainForm::Operator);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button21->ForeColor = System::Drawing::Color::DarkOrange;
			this->button21->Location = System::Drawing::Point(255, 215);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 50);
			this->button21->TabIndex = 21;
			this->button21->Text = L"X";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MainForm::Operator);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button22->ForeColor = System::Drawing::Color::DarkOrange;
			this->button22->Location = System::Drawing::Point(255, 271);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 50);
			this->button22->TabIndex = 22;
			this->button22->Text = L"-";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MainForm::Operator);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button23->ForeColor = System::Drawing::Color::DarkOrange;
			this->button23->Location = System::Drawing::Point(255, 327);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 50);
			this->button23->TabIndex = 23;
			this->button23->Text = L"+";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MainForm::Operator);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button24->ForeColor = System::Drawing::Color::DarkOrange;
			this->button24->Location = System::Drawing::Point(255, 383);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 50);
			this->button24->TabIndex = 24;
			this->button24->Text = L"=";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MainForm::EqualsButton);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button26->ForeColor = System::Drawing::Color::DarkOrange;
			this->button26->Location = System::Drawing::Point(12, 215);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 50);
			this->button26->TabIndex = 7;
			this->button26->Text = L"7";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox2->Location = System::Drawing::Point(12, 12);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->Size = System::Drawing::Size(318, 45);
			this->textBox2->TabIndex = 25;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(336, 446);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->Text = L"Anime Girl Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first_digit, second_digit, result;
		int one = 1;
		String^ operators;
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "0";
		textBox2->Text = " ";
	}
	
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

	Button^ Numbers = safe_cast<Button^>(sender);

	if (textBox1->Text == "0")
	{
		textBox1->Text = Numbers->Text;
	}
	else 
	{
		textBox1->Text = textBox1->Text + Numbers->Text;
	}
}

private: System::Void Operator(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOpr = safe_cast<Button^>(sender);
	first_digit = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = NumbersOpr->Text;
	textBox2->Text = System::Convert::ToString(first_digit);


}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!textBox1->Text->Contains (".")) {
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void EqualsButton(System::Object^ sender, System::EventArgs^ e) {

	second_digit = Double::Parse(textBox1->Text);

	if (operators == "+")
	{
		result = first_digit + second_digit;
		textBox1->Text = System::Convert::ToString(result);
		textBox2->Text = System::Convert::ToString(first_digit) + "+" + System::Convert::ToString(second_digit);
		
	}
	
	else if (operators == "-")
	{
		result = first_digit - second_digit;
		textBox1->Text = System::Convert::ToString(result);
		textBox2->Text = System::Convert::ToString(first_digit) + "-" + System::Convert::ToString(second_digit);
	}

	else if (operators == "/")
	{
		result = first_digit / second_digit;
		textBox1->Text = System::Convert::ToString(result);
		textBox2->Text = System::Convert::ToString(first_digit) + "/" + System::Convert::ToString(second_digit);
	}

	else 
	{
		result = first_digit * second_digit;
		textBox1->Text = System::Convert::ToString(result);
		textBox2->Text = System::Convert::ToString(first_digit) + "x" + System::Convert::ToString(second_digit);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
	textBox2->Text = " ";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text->Contains("-")) {

		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else {
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text->Length > 0) {

		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length -1,1);
	}
	
}


private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
