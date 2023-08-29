#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ x_paint;
	private: System::Windows::Forms::Label^ y_paint;
	private: System::Windows::Forms::Label^ one_paint;
	private: System::Windows::Forms::Label^ common_vertex;
	private: System::Windows::Forms::Label^ top_vertex;
	private: System::Windows::Forms::Label^ bottom_vertex;
	private: System::Windows::Forms::Label^ lengthLabel;









	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ x_transf;
	private: System::Windows::Forms::Label^ y_transf;
	private: System::Windows::Forms::Label^ one_transf;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ xcp_vertex;
	private: System::Windows::Forms::TextBox^ ycp_vertex;
	private: System::Windows::Forms::TextBox^ onecp_vertex;
	private: System::Windows::Forms::TextBox^ onetp_vertex;
	private: System::Windows::Forms::TextBox^ ytp_vertex;
	private: System::Windows::Forms::TextBox^ xtp_vertex;
	private: System::Windows::Forms::TextBox^ onebp_vertex;
	private: System::Windows::Forms::TextBox^ ybp_vertex;
	private: System::Windows::Forms::TextBox^ xbp_vertex;
	private: System::Windows::Forms::TextBox^ onebt_vertex;

	private: System::Windows::Forms::TextBox^ ybt_vertex;

	private: System::Windows::Forms::TextBox^ xbt_vertex;

	private: System::Windows::Forms::TextBox^ onett_vertex;

	private: System::Windows::Forms::TextBox^ ytt_vertex;

	private: System::Windows::Forms::TextBox^ xtt_vertex;

	private: System::Windows::Forms::TextBox^ onect_vertex;

	private: System::Windows::Forms::TextBox^ yct_vertex;

	private: System::Windows::Forms::TextBox^ xct_vertex;

	private: System::Windows::Forms::TextBox^ lengthField;
	private: System::Windows::Forms::TextBox^ angleField;
	private: System::Windows::Forms::Button^ ok_p_button;
	private: System::Windows::Forms::Button^ count_angle_button;
	private: System::Windows::Forms::Button^ transferButton;
	private: System::Windows::Forms::Button^ scaleButton;
	private: System::Windows::Forms::Button^ rotateButton;









	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->x_paint = (gcnew System::Windows::Forms::Label());
			this->y_paint = (gcnew System::Windows::Forms::Label());
			this->one_paint = (gcnew System::Windows::Forms::Label());
			this->common_vertex = (gcnew System::Windows::Forms::Label());
			this->top_vertex = (gcnew System::Windows::Forms::Label());
			this->bottom_vertex = (gcnew System::Windows::Forms::Label());
			this->lengthLabel = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->x_transf = (gcnew System::Windows::Forms::Label());
			this->y_transf = (gcnew System::Windows::Forms::Label());
			this->one_transf = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->xcp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->ycp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->onecp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->onetp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->ytp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->xtp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->onebp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->ybp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->xbp_vertex = (gcnew System::Windows::Forms::TextBox());
			this->onebt_vertex = (gcnew System::Windows::Forms::TextBox());
			this->ybt_vertex = (gcnew System::Windows::Forms::TextBox());
			this->xbt_vertex = (gcnew System::Windows::Forms::TextBox());
			this->onett_vertex = (gcnew System::Windows::Forms::TextBox());
			this->ytt_vertex = (gcnew System::Windows::Forms::TextBox());
			this->xtt_vertex = (gcnew System::Windows::Forms::TextBox());
			this->onect_vertex = (gcnew System::Windows::Forms::TextBox());
			this->yct_vertex = (gcnew System::Windows::Forms::TextBox());
			this->xct_vertex = (gcnew System::Windows::Forms::TextBox());
			this->lengthField = (gcnew System::Windows::Forms::TextBox());
			this->angleField = (gcnew System::Windows::Forms::TextBox());
			this->ok_p_button = (gcnew System::Windows::Forms::Button());
			this->count_angle_button = (gcnew System::Windows::Forms::Button());
			this->transferButton = (gcnew System::Windows::Forms::Button());
			this->scaleButton = (gcnew System::Windows::Forms::Button());
			this->rotateButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(26, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(625, 490);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(809, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Painting matrix";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// x_paint
			// 
			this->x_paint->AutoSize = true;
			this->x_paint->Location = System::Drawing::Point(783, 62);
			this->x_paint->Name = L"x_paint";
			this->x_paint->Size = System::Drawing::Size(14, 13);
			this->x_paint->TabIndex = 2;
			this->x_paint->Text = L"X";
			// 
			// y_paint
			// 
			this->y_paint->AutoSize = true;
			this->y_paint->Location = System::Drawing::Point(850, 62);
			this->y_paint->Name = L"y_paint";
			this->y_paint->Size = System::Drawing::Size(14, 13);
			this->y_paint->TabIndex = 3;
			this->y_paint->Text = L"Y";
			// 
			// one_paint
			// 
			this->one_paint->AutoSize = true;
			this->one_paint->Location = System::Drawing::Point(918, 62);
			this->one_paint->Name = L"one_paint";
			this->one_paint->Size = System::Drawing::Size(13, 13);
			this->one_paint->TabIndex = 4;
			this->one_paint->Text = L"1";
			// 
			// common_vertex
			// 
			this->common_vertex->AutoSize = true;
			this->common_vertex->Location = System::Drawing::Point(668, 94);
			this->common_vertex->Name = L"common_vertex";
			this->common_vertex->Size = System::Drawing::Size(79, 13);
			this->common_vertex->TabIndex = 5;
			this->common_vertex->Text = L"common vertex";
			// 
			// top_vertex
			// 
			this->top_vertex->AutoSize = true;
			this->top_vertex->Location = System::Drawing::Point(682, 129);
			this->top_vertex->Name = L"top_vertex";
			this->top_vertex->Size = System::Drawing::Size(54, 13);
			this->top_vertex->TabIndex = 6;
			this->top_vertex->Text = L"top vertex";
			// 
			// bottom_vertex
			// 
			this->bottom_vertex->AutoSize = true;
			this->bottom_vertex->Location = System::Drawing::Point(676, 168);
			this->bottom_vertex->Name = L"bottom_vertex";
			this->bottom_vertex->Size = System::Drawing::Size(71, 13);
			this->bottom_vertex->TabIndex = 7;
			this->bottom_vertex->Text = L"bottom vertex";
			// 
			// lengthLabel
			// 
			this->lengthLabel->AutoSize = true;
			this->lengthLabel->Location = System::Drawing::Point(688, 215);
			this->lengthLabel->Name = L"lengthLabel";
			this->lengthLabel->Size = System::Drawing::Size(59, 13);
			this->lengthLabel->TabIndex = 8;
			this->lengthLabel->Text = L"Length, pix";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(798, 293);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Transformation matrix";
			// 
			// x_transf
			// 
			this->x_transf->AutoSize = true;
			this->x_transf->Location = System::Drawing::Point(783, 330);
			this->x_transf->Name = L"x_transf";
			this->x_transf->Size = System::Drawing::Size(14, 13);
			this->x_transf->TabIndex = 10;
			this->x_transf->Text = L"X";
			// 
			// y_transf
			// 
			this->y_transf->AutoSize = true;
			this->y_transf->Location = System::Drawing::Point(850, 330);
			this->y_transf->Name = L"y_transf";
			this->y_transf->Size = System::Drawing::Size(14, 13);
			this->y_transf->TabIndex = 11;
			this->y_transf->Text = L"Y";
			// 
			// one_transf
			// 
			this->one_transf->AutoSize = true;
			this->one_transf->Location = System::Drawing::Point(918, 330);
			this->one_transf->Name = L"one_transf";
			this->one_transf->Size = System::Drawing::Size(13, 13);
			this->one_transf->TabIndex = 12;
			this->one_transf->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(668, 364);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Angle, deg";
			// 
			// xcp_vertex
			// 
			this->xcp_vertex->Location = System::Drawing::Point(765, 91);
			this->xcp_vertex->Name = L"xcp_vertex";
			this->xcp_vertex->Size = System::Drawing::Size(49, 20);
			this->xcp_vertex->TabIndex = 14;
			// 
			// ycp_vertex
			// 
			this->ycp_vertex->Location = System::Drawing::Point(835, 91);
			this->ycp_vertex->Name = L"ycp_vertex";
			this->ycp_vertex->Size = System::Drawing::Size(49, 20);
			this->ycp_vertex->TabIndex = 15;
			// 
			// onecp_vertex
			// 
			this->onecp_vertex->Location = System::Drawing::Point(901, 91);
			this->onecp_vertex->Name = L"onecp_vertex";
			this->onecp_vertex->Size = System::Drawing::Size(49, 20);
			this->onecp_vertex->TabIndex = 16;
			// 
			// onetp_vertex
			// 
			this->onetp_vertex->Location = System::Drawing::Point(901, 129);
			this->onetp_vertex->Name = L"onetp_vertex";
			this->onetp_vertex->Size = System::Drawing::Size(49, 20);
			this->onetp_vertex->TabIndex = 19;
			// 
			// ytp_vertex
			// 
			this->ytp_vertex->Location = System::Drawing::Point(835, 129);
			this->ytp_vertex->Name = L"ytp_vertex";
			this->ytp_vertex->Size = System::Drawing::Size(49, 20);
			this->ytp_vertex->TabIndex = 18;
			// 
			// xtp_vertex
			// 
			this->xtp_vertex->Location = System::Drawing::Point(765, 129);
			this->xtp_vertex->Name = L"xtp_vertex";
			this->xtp_vertex->Size = System::Drawing::Size(49, 20);
			this->xtp_vertex->TabIndex = 17;
			// 
			// onebp_vertex
			// 
			this->onebp_vertex->Location = System::Drawing::Point(901, 168);
			this->onebp_vertex->Name = L"onebp_vertex";
			this->onebp_vertex->Size = System::Drawing::Size(49, 20);
			this->onebp_vertex->TabIndex = 22;
			// 
			// ybp_vertex
			// 
			this->ybp_vertex->Location = System::Drawing::Point(835, 168);
			this->ybp_vertex->Name = L"ybp_vertex";
			this->ybp_vertex->Size = System::Drawing::Size(49, 20);
			this->ybp_vertex->TabIndex = 21;
			// 
			// xbp_vertex
			// 
			this->xbp_vertex->Location = System::Drawing::Point(765, 168);
			this->xbp_vertex->Name = L"xbp_vertex";
			this->xbp_vertex->Size = System::Drawing::Size(49, 20);
			this->xbp_vertex->TabIndex = 20;
			// 
			// onebt_vertex
			// 
			this->onebt_vertex->Location = System::Drawing::Point(901, 434);
			this->onebt_vertex->Name = L"onebt_vertex";
			this->onebt_vertex->Size = System::Drawing::Size(49, 20);
			this->onebt_vertex->TabIndex = 31;
			// 
			// ybt_vertex
			// 
			this->ybt_vertex->Location = System::Drawing::Point(835, 434);
			this->ybt_vertex->Name = L"ybt_vertex";
			this->ybt_vertex->Size = System::Drawing::Size(49, 20);
			this->ybt_vertex->TabIndex = 30;
			// 
			// xbt_vertex
			// 
			this->xbt_vertex->Location = System::Drawing::Point(765, 434);
			this->xbt_vertex->Name = L"xbt_vertex";
			this->xbt_vertex->Size = System::Drawing::Size(49, 20);
			this->xbt_vertex->TabIndex = 29;
			// 
			// onett_vertex
			// 
			this->onett_vertex->Location = System::Drawing::Point(901, 395);
			this->onett_vertex->Name = L"onett_vertex";
			this->onett_vertex->Size = System::Drawing::Size(49, 20);
			this->onett_vertex->TabIndex = 28;
			// 
			// ytt_vertex
			// 
			this->ytt_vertex->Location = System::Drawing::Point(835, 395);
			this->ytt_vertex->Name = L"ytt_vertex";
			this->ytt_vertex->Size = System::Drawing::Size(49, 20);
			this->ytt_vertex->TabIndex = 27;
			// 
			// xtt_vertex
			// 
			this->xtt_vertex->Location = System::Drawing::Point(765, 395);
			this->xtt_vertex->Name = L"xtt_vertex";
			this->xtt_vertex->Size = System::Drawing::Size(49, 20);
			this->xtt_vertex->TabIndex = 26;
			// 
			// onect_vertex
			// 
			this->onect_vertex->Location = System::Drawing::Point(901, 357);
			this->onect_vertex->Name = L"onect_vertex";
			this->onect_vertex->Size = System::Drawing::Size(49, 20);
			this->onect_vertex->TabIndex = 25;
			// 
			// yct_vertex
			// 
			this->yct_vertex->Location = System::Drawing::Point(835, 357);
			this->yct_vertex->Name = L"yct_vertex";
			this->yct_vertex->Size = System::Drawing::Size(49, 20);
			this->yct_vertex->TabIndex = 24;
			// 
			// xct_vertex
			// 
			this->xct_vertex->Location = System::Drawing::Point(765, 357);
			this->xct_vertex->Name = L"xct_vertex";
			this->xct_vertex->Size = System::Drawing::Size(49, 20);
			this->xct_vertex->TabIndex = 23;
			// 
			// lengthField
			// 
			this->lengthField->Location = System::Drawing::Point(765, 215);
			this->lengthField->Name = L"lengthField";
			this->lengthField->Size = System::Drawing::Size(100, 20);
			this->lengthField->TabIndex = 32;
			// 
			// angleField
			// 
			this->angleField->Location = System::Drawing::Point(671, 380);
			this->angleField->Name = L"angleField";
			this->angleField->Size = System::Drawing::Size(62, 20);
			this->angleField->TabIndex = 33;
			// 
			// ok_p_button
			// 
			this->ok_p_button->Location = System::Drawing::Point(887, 212);
			this->ok_p_button->Name = L"ok_p_button";
			this->ok_p_button->Size = System::Drawing::Size(75, 23);
			this->ok_p_button->TabIndex = 34;
			this->ok_p_button->Text = L"OK";
			this->ok_p_button->UseVisualStyleBackColor = true;
			// 
			// count_angle_button
			// 
			this->count_angle_button->Location = System::Drawing::Point(671, 406);
			this->count_angle_button->Name = L"count_angle_button";
			this->count_angle_button->Size = System::Drawing::Size(75, 23);
			this->count_angle_button->TabIndex = 35;
			this->count_angle_button->Text = L"Count";
			this->count_angle_button->UseVisualStyleBackColor = true;
			// 
			// transferButton
			// 
			this->transferButton->Location = System::Drawing::Point(691, 491);
			this->transferButton->Name = L"transferButton";
			this->transferButton->Size = System::Drawing::Size(75, 23);
			this->transferButton->TabIndex = 36;
			this->transferButton->Text = L"Transfer";
			this->transferButton->UseVisualStyleBackColor = true;
			// 
			// scaleButton
			// 
			this->scaleButton->Location = System::Drawing::Point(786, 491);
			this->scaleButton->Name = L"scaleButton";
			this->scaleButton->Size = System::Drawing::Size(75, 23);
			this->scaleButton->TabIndex = 37;
			this->scaleButton->Text = L"Scale";
			this->scaleButton->UseVisualStyleBackColor = true;
			// 
			// rotateButton
			// 
			this->rotateButton->Location = System::Drawing::Point(887, 491);
			this->rotateButton->Name = L"rotateButton";
			this->rotateButton->Size = System::Drawing::Size(75, 23);
			this->rotateButton->TabIndex = 38;
			this->rotateButton->Text = L"Rotate";
			this->rotateButton->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 632);
			this->Controls->Add(this->rotateButton);
			this->Controls->Add(this->scaleButton);
			this->Controls->Add(this->transferButton);
			this->Controls->Add(this->count_angle_button);
			this->Controls->Add(this->ok_p_button);
			this->Controls->Add(this->angleField);
			this->Controls->Add(this->lengthField);
			this->Controls->Add(this->onebt_vertex);
			this->Controls->Add(this->ybt_vertex);
			this->Controls->Add(this->xbt_vertex);
			this->Controls->Add(this->onett_vertex);
			this->Controls->Add(this->ytt_vertex);
			this->Controls->Add(this->xtt_vertex);
			this->Controls->Add(this->onect_vertex);
			this->Controls->Add(this->yct_vertex);
			this->Controls->Add(this->xct_vertex);
			this->Controls->Add(this->onebp_vertex);
			this->Controls->Add(this->ybp_vertex);
			this->Controls->Add(this->xbp_vertex);
			this->Controls->Add(this->onetp_vertex);
			this->Controls->Add(this->ytp_vertex);
			this->Controls->Add(this->xtp_vertex);
			this->Controls->Add(this->onecp_vertex);
			this->Controls->Add(this->ycp_vertex);
			this->Controls->Add(this->xcp_vertex);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->one_transf);
			this->Controls->Add(this->y_transf);
			this->Controls->Add(this->x_transf);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lengthLabel);
			this->Controls->Add(this->bottom_vertex);
			this->Controls->Add(this->top_vertex);
			this->Controls->Add(this->common_vertex);
			this->Controls->Add(this->one_paint);
			this->Controls->Add(this->y_paint);
			this->Controls->Add(this->x_paint);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

}
