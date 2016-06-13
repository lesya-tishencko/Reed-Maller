#pragma once

#include "stego.h"

namespace PictureProject {
	enum current_method {r1 = 0, r2 = 1, r1over = 2, r2over = 3};

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonLoad;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonPutIn;
	private: System::Windows::Forms::Button^  buttonSetKey;
	private: System::Windows::Forms::TextBox^  keyTextBox;

	protected:

	protected:




	private: System::Windows::Forms::Button^  buttonSetText;
	private: System::Windows::Forms::TextBox^  setTextBox;
	private: System::Windows::Forms::PictureBox^  mainPictureBox;
	private: System::Windows::Forms::Button^  buttonExtract;





	private: System::Windows::Forms::TextBox^  getTextBox;
	private: System::Windows::Forms::OpenFileDialog^  loadDialog;
	private: System::Windows::Forms::SaveFileDialog^  saveDialog;
	private: System::Windows::Forms::ListBox^  argListBox;
	private: System::Windows::Forms::Label^  infoString;
	private: System::Windows::Forms::Button^  buttonLoadFile;
	private: System::Windows::Forms::Button^  buttonSaveFile;




	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonPutIn = (gcnew System::Windows::Forms::Button());
			this->buttonSetKey = (gcnew System::Windows::Forms::Button());
			this->keyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->buttonSetText = (gcnew System::Windows::Forms::Button());
			this->setTextBox = (gcnew System::Windows::Forms::TextBox());
			this->mainPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->buttonExtract = (gcnew System::Windows::Forms::Button());
			this->getTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loadDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->argListBox = (gcnew System::Windows::Forms::ListBox());
			this->infoString = (gcnew System::Windows::Forms::Label());
			this->buttonLoadFile = (gcnew System::Windows::Forms::Button());
			this->buttonSaveFile = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonLoad
			// 
			this->buttonLoad->Location = System::Drawing::Point(124, 12);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(155, 23);
			this->buttonLoad->TabIndex = 0;
			this->buttonLoad->Text = L"Загрузить изображение";
			this->buttonLoad->UseVisualStyleBackColor = true;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &MainForm::buttonLoad_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(285, 12);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(155, 23);
			this->buttonSave->TabIndex = 1;
			this->buttonSave->Text = L"Сохранить изображение";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &MainForm::buttonSave_Click);
			// 
			// buttonPutIn
			// 
			this->buttonPutIn->Location = System::Drawing::Point(446, 12);
			this->buttonPutIn->Name = L"buttonPutIn";
			this->buttonPutIn->Size = System::Drawing::Size(155, 23);
			this->buttonPutIn->TabIndex = 2;
			this->buttonPutIn->Text = L"Вложить сообщение";
			this->buttonPutIn->UseVisualStyleBackColor = true;
			this->buttonPutIn->Click += gcnew System::EventHandler(this, &MainForm::buttonPutIn_Click);
			// 
			// buttonSetKey
			// 
			this->buttonSetKey->Location = System::Drawing::Point(447, 52);
			this->buttonSetKey->Name = L"buttonSetKey";
			this->buttonSetKey->Size = System::Drawing::Size(155, 34);
			this->buttonSetKey->TabIndex = 3;
			this->buttonSetKey->Text = L"Задать ключ (целое положительное число)";
			this->buttonSetKey->UseVisualStyleBackColor = true;
			this->buttonSetKey->Click += gcnew System::EventHandler(this, &MainForm::buttonSetKey_Click);
			// 
			// keyTextBox
			// 
			this->keyTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->keyTextBox->Location = System::Drawing::Point(447, 92);
			this->keyTextBox->Name = L"keyTextBox";
			this->keyTextBox->Size = System::Drawing::Size(155, 26);
			this->keyTextBox->TabIndex = 4;
			// 
			// buttonSetText
			// 
			this->buttonSetText->Location = System::Drawing::Point(446, 145);
			this->buttonSetText->Name = L"buttonSetText";
			this->buttonSetText->Size = System::Drawing::Size(155, 23);
			this->buttonSetText->TabIndex = 5;
			this->buttonSetText->Text = L"Задать сообщение";
			this->buttonSetText->UseVisualStyleBackColor = true;
			this->buttonSetText->Click += gcnew System::EventHandler(this, &MainForm::buttonSetText_Click);
			// 
			// setTextBox
			// 
			this->setTextBox->Location = System::Drawing::Point(446, 174);
			this->setTextBox->Multiline = true;
			this->setTextBox->Name = L"setTextBox";
			this->setTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->setTextBox->Size = System::Drawing::Size(155, 207);
			this->setTextBox->TabIndex = 6;
			// 
			// mainPictureBox
			// 
			this->mainPictureBox->Location = System::Drawing::Point(12, 52);
			this->mainPictureBox->Name = L"mainPictureBox";
			this->mainPictureBox->Size = System::Drawing::Size(428, 329);
			this->mainPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mainPictureBox->TabIndex = 7;
			this->mainPictureBox->TabStop = false;
			// 
			// buttonExtract
			// 
			this->buttonExtract->Location = System::Drawing::Point(607, 12);
			this->buttonExtract->Name = L"buttonExtract";
			this->buttonExtract->Size = System::Drawing::Size(155, 23);
			this->buttonExtract->TabIndex = 8;
			this->buttonExtract->Text = L"Извлечь сообщение";
			this->buttonExtract->UseVisualStyleBackColor = true;
			this->buttonExtract->Click += gcnew System::EventHandler(this, &MainForm::buttonExtract_Click);
			// 
			// getTextBox
			// 
			this->getTextBox->Location = System::Drawing::Point(608, 60);
			this->getTextBox->Multiline = true;
			this->getTextBox->Name = L"getTextBox";
			this->getTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->getTextBox->Size = System::Drawing::Size(155, 207);
			this->getTextBox->TabIndex = 9;
			// 
			// argListBox
			// 
			this->argListBox->FormattingEnabled = true;
			this->argListBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"RM(m - 2, m)", L"RM(m - 3, m)", L"RM(m - 2, m) с избыточностью",
					L"RM(m - 3, m) с избыточностью"
			});
			this->argListBox->Location = System::Drawing::Point(12, 16);
			this->argListBox->Name = L"argListBox";
			this->argListBox->Size = System::Drawing::Size(106, 17);
			this->argListBox->TabIndex = 10;
			this->argListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::argListBox_SelectedIndexChanged);
			// 
			// infoString
			// 
			this->infoString->AutoSize = true;
			this->infoString->Location = System::Drawing::Point(9, 390);
			this->infoString->Name = L"infoString";
			this->infoString->Size = System::Drawing::Size(0, 13);
			this->infoString->TabIndex = 11;
			// 
			// buttonLoadFile
			// 
			this->buttonLoadFile->Location = System::Drawing::Point(446, 385);
			this->buttonLoadFile->Name = L"buttonLoadFile";
			this->buttonLoadFile->Size = System::Drawing::Size(155, 23);
			this->buttonLoadFile->TabIndex = 12;
			this->buttonLoadFile->Text = L"Загрузить файл";
			this->buttonLoadFile->UseVisualStyleBackColor = true;
			this->buttonLoadFile->Click += gcnew System::EventHandler(this, &MainForm::buttonLoadFile_Click);
			// 
			// buttonSaveFile
			// 
			this->buttonSaveFile->Location = System::Drawing::Point(607, 275);
			this->buttonSaveFile->Name = L"buttonSaveFile";
			this->buttonSaveFile->Size = System::Drawing::Size(156, 23);
			this->buttonSaveFile->TabIndex = 13;
			this->buttonSaveFile->Text = L"Сохранить файл";
			this->buttonSaveFile->UseVisualStyleBackColor = true;
			this->buttonSaveFile->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveFile_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(773, 412);
			this->Controls->Add(this->buttonSaveFile);
			this->Controls->Add(this->buttonLoadFile);
			this->Controls->Add(this->infoString);
			this->Controls->Add(this->argListBox);
			this->Controls->Add(this->getTextBox);
			this->Controls->Add(this->buttonExtract);
			this->Controls->Add(this->mainPictureBox);
			this->Controls->Add(this->setTextBox);
			this->Controls->Add(this->buttonSetText);
			this->Controls->Add(this->keyTextBox);
			this->Controls->Add(this->buttonSetKey);
			this->Controls->Add(this->buttonPutIn);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->buttonLoad);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Picture transformation";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::String^ text;
			 int key = 0;
			 Bitmap^ image;
			 Bitmap^ modifyed_image;
			 current_method method;


	private: System::Void buttonLoad_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ FileName;
		loadDialog->Title = "Select picture ";
		loadDialog->Multiselect = false;
		if (loadDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileName = loadDialog->FileName->ToString();
			image = gcnew Bitmap(FileName);
		}
		mainPictureBox->Image = image;
		mainPictureBox->Refresh();
		this->Refresh();
	}

	private: std::string modifyMessage() {
		std::string newText;
		if (text) {
			for each (char var in text) {
				newText += (char)var;
			}
		}
		return newText;
	}

	private: translator set_text() {
		std::string messageBase = modifyMessage();
		translator transText = translator(messageBase);
		return transText;
	}

	private: translator get_text(Eigen::VectorXi & vect) {
		translator transText = translator(vect);
		return transText;
	}

	private: System::Void buttonSetText_Click(System::Object^  sender, System::EventArgs^  e) {
		if (buttonSetText->Text == "Задать сообщение") {
			buttonSetText->Text = "Изменить текст";
			text = setTextBox->Text;
			setTextBox->ReadOnly = true;
		}
		else {
			buttonSetText->Text = "Задать сообщение";
			text = "";
			setTextBox->ReadOnly = false;
		}
	}

	private: Eigen::VectorXi createPictureBase() {
		Eigen::VectorXi pictureBase;
		if (image) {
			pictureBase = Eigen::VectorXi(0);
			for (int x = 0; x < image->Width; x++)
				for (int y = 0; y < image->Height; y++) {
					unsigned A_comp = image->GetPixel(x, y).A;
					unsigned R_comp = image->GetPixel(x, y).R;
					unsigned G_comp = image->GetPixel(x, y).G;
					unsigned B_comp = image->GetPixel(x, y).B;
					std::vector<bool> bin = std::vector<bool>();
					std::vector<bool> bin_comp = binary(A_comp, 8);
					bin.push_back(bin_comp[bin_comp.size() - 1]);
					bin_comp = binary(R_comp, 8);
					bin.push_back(bin_comp[bin_comp.size() - 1]);
					bin_comp = binary(G_comp, 8);
					bin.push_back(bin_comp[bin_comp.size() - 1]);
					bin_comp = binary(B_comp, 8);
					bin.push_back(bin_comp[bin_comp.size() - 1]);
					int startInd = pictureBase.size();
					pictureBase.conservativeResize(pictureBase.size() + 4);
					for (int i = startInd; i < pictureBase.size(); i++) {
						pictureBase[i] = bin[i % 4];
					}
				}
		}
		return pictureBase;
	}

	private: System::Void draw(Eigen::VectorXi & content) {
		modifyed_image = gcnew System::Drawing::Bitmap(image->Width, image->Height);
		int indC = 0;
		for (int x = 0; x < image->Width; x++)
			for (int y = 0; y < image->Height; y++) {
				unsigned A_comp = image->GetPixel(x, y).A;
				unsigned R_comp = image->GetPixel(x, y).R;
				unsigned G_comp = image->GetPixel(x, y).G;
				unsigned B_comp = image->GetPixel(x, y).B;
				Eigen::VectorXi curr_comp = Eigen::VectorXi(8);
				std::vector<bool> bin_comp = binary(A_comp, 8);
				for (int i = 0; i < 7; i++)
					curr_comp[i] = bin_comp[i];
				curr_comp[7] = content[indC++];
				unsigned A_value = decimal(curr_comp);
				bin_comp = binary(R_comp, 8);
				for (int i = 0; i < 7; i++)
					curr_comp[i] = bin_comp[i];
				curr_comp[7] = content[indC++];
				unsigned R_value = decimal(curr_comp);
				bin_comp = binary(G_comp, 8);
				for (int i = 0; i < 7; i++)
					curr_comp[i] = bin_comp[i];
				curr_comp[7] = content[indC++];
				unsigned G_value = decimal(curr_comp);
				bin_comp = binary(B_comp, 8);
				for (int i = 0; i < 7; i++)
					curr_comp[i] = bin_comp[i];
				curr_comp[7] = content[indC++];
				unsigned B_value = decimal(curr_comp);
				
				modifyed_image->SetPixel(x, y, System::Drawing::Color::FromArgb(A_value, R_value, G_value, B_value));
			}
		mainPictureBox->Image = modifyed_image;
		mainPictureBox->Refresh();
		setTextBox->Text += " : Вложение выполнено";
		this->Refresh();
	}

	private: System::Void write(Eigen::VectorXi & content) {
		translator message = get_text(content);
		std::string messageBase = message.get_text();
		getTextBox->Text = gcnew System::String(messageBase.c_str());
		getTextBox->Text += " : Сообщение расшифровано";
	}

	private: System::Void buttonPutIn_Click(System::Object^  sender, System::EventArgs^  e) {
		Eigen::VectorXi encMsg(0);
		if (key != 0 && infoString->Text != "") {
			int containerSize = pow(2, key);
			int msgSize = method % 2 == 0 ? 1 + key : 1 + key + (key - 1)*key / 2;
			translator messageBase = set_text();
			Eigen::VectorXi message = messageBase.get_message();
			int postfix = msgSize - message.size() % msgSize;
			message.conservativeResize(message.size() + postfix);
			for (int i = message.size() - postfix; i < message.size(); i++)
				message[i] = 0;
			Eigen::VectorXi content = createPictureBase();
			postfix = containerSize - content.size() % containerSize;
			content.conservativeResize(content.size() + postfix);
			for (int i = content.size() - postfix; i < content.size(); i++)
				content[i] = 0;
			encMsg = content; 
			int indC = 0;
			int indM = 0;
			while (true) {
				Eigen::VectorXi currContent(containerSize);
				for (int i = 0; i < containerSize; i++)
					currContent[i] = content[indC++];
				//std::cout << "cont:" << currContent.transpose() << std::endl;
				Eigen::VectorXi currMsg(msgSize);
				for (int i = 0; i < msgSize; i++) {
					currMsg[i] = message[indM++];
				}
				//std::cout << "msg:" << currMsg.transpose() << std::endl;
				Eigen::VectorXi currEncMsg = method % 2 == 0 ? encrypted_r1_vector(key, currContent, currMsg).get_encrypted_vector() : encrypted_r2_vector(key, currContent, currMsg).get_encrypted_vector();
				
				for (int i = indC - containerSize; i < indC; i++) {
					encMsg[i] = currEncMsg[i % containerSize];
				}
				//std::cout << "enc:" << currEncMsg.transpose() << std::endl;
				if (indC >= content.size()) break;
				if (indM >= message.size()) break;
			}
		}
		std::cout << std::endl;
		draw(encMsg);
	}

	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (saveDialog->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
			modifyed_image->Save(saveDialog->FileName->ToString());
		}
	}

	private: System::Void buttonExtract_Click(System::Object^  sender, System::EventArgs^  e) {
		Eigen::VectorXi decMsg(0);
		if (key != 0 && infoString->Text != "") {
			int containerSize = pow(2, key);
			int msgSize = method % 2 == 0 ? 1 + key : 1 + key + (key - 1)*key / 2;
			Eigen::VectorXi content = createPictureBase();
			int postfix = containerSize - content.size() % containerSize;
			content.conservativeResize(content.size() + postfix);
			for (int i = content.size() - postfix; i < content.size(); i++)
				content[i] = 0;
			int indC = 0;
			while (true) {
				Eigen::VectorXi currContent(containerSize);
				for (int i = 0; i < containerSize; i++) {
					currContent[i] = content[indC++];
				}
				//std::cout << "cont:" << currContent.transpose() << std::endl;
				Eigen::VectorXi currDecMsg;
				switch (method)
				{
				case r1:
					currDecMsg = decrypted_r1_vector(key, currContent).get_decrypted_vector();
					break;
				case r2:
					currDecMsg = decrypted_r2_vector(key, currContent).get_decrypted_vector();
					break;
				case r1over:
					currDecMsg = decrypted_r1_vector_overage(key, currContent).get_decrypted_vector();
					break;
				case r2over:
					currDecMsg = decrypted_r2_vector_overage(key, currContent).get_decrypted_vector();
					break;
				}
				decMsg.conservativeResize(decMsg.size() + msgSize);
				for (int i = decMsg.size() - msgSize; i < decMsg.size(); i++) {
					decMsg[i] = currDecMsg[i % msgSize];
				}
				//std::cout << "dec:" << currDecMsg.transpose() << std::endl;
				if (indC >= content.size()) break;
			}
			std::cout << std::endl;
			write(decMsg);
		}
	}

	private: System::Void buttonSetKey_Click(System::Object^  sender, System::EventArgs^  e) {
		if (buttonSetKey->Text == "Задать ключ (целое положительное число)") {
			buttonSetKey->Text = "Изменить ключ";
			System::String^ keyText = keyTextBox->Text;
			std::string resultStr = "";
			std::string strKey = "";
			for (int i = 0; i < keyText->Length; i++)
				strKey += keyText[i];
			key = atoi(strKey.c_str());
			if (key < 4) {
				key = 0;
				return;
			}
			keyTextBox->ReadOnly = true;
		}
		else {
			buttonSetKey->Text = "Задать ключ (целое положительное число)";
			key = 0;
			keyTextBox->ReadOnly = false;
		}
	}

	private: System::Void argListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		infoString->Text = "Используется метод " + argListBox->SelectedItem;
		method = current_method(argListBox->SelectedIndex);
	}

	private: System::Void buttonLoadFile_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ FileName;
		loadDialog->Title = "Select text file ";
		loadDialog->Multiselect = false;
		if (loadDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileName = loadDialog->FileName->ToString();
			System::IO::StreamReader^ text = System::IO::File::OpenText(FileName);
			setTextBox->Text = text->ReadToEnd();
		}
	}

	private: System::Void buttonSaveFile_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ content = getTextBox->Text;
		saveDialog->Title = "Save text file ";
		if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(saveDialog->FileName->ToString());
			file->Write(content);
			file->Close();
		}
	}
};
}
