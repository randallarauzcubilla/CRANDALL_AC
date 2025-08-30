#pragma once

namespace PROYECTOESTRUCTURA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de InterfazGrafica
	/// </summary>
	public ref class InterfazGrafica : public System::Windows::Forms::Form
	{
	public:
		InterfazGrafica(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~InterfazGrafica()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCargarTXT;
	private: System::Windows::Forms::Label^ txtTitulo;
	private: System::Windows::Forms::PictureBox^ LOGO;
	private: System::Windows::Forms::Label^ txtNombrePrograma;

	private: System::Windows::Forms::Button^ btnEjecutar;
	private: System::Windows::Forms::Button^ btnGenerar;
	private: System::Windows::Forms::RichTextBox^ txtEntrada;






	protected:

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InterfazGrafica::typeid));
			this->btnCargarTXT = (gcnew System::Windows::Forms::Button());
			this->txtTitulo = (gcnew System::Windows::Forms::Label());
			this->LOGO = (gcnew System::Windows::Forms::PictureBox());
			this->txtNombrePrograma = (gcnew System::Windows::Forms::Label());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->txtEntrada = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCargarTXT
			// 
			this->btnCargarTXT->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnCargarTXT->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCargarTXT->ForeColor = System::Drawing::Color::Black;
			this->btnCargarTXT->Location = System::Drawing::Point(594, 192);
			this->btnCargarTXT->Name = L"btnCargarTXT";
			this->btnCargarTXT->Size = System::Drawing::Size(292, 77);
			this->btnCargarTXT->TabIndex = 0;
			this->btnCargarTXT->Text = L"CARGAR .TXT";
			this->btnCargarTXT->UseVisualStyleBackColor = false;
			this->btnCargarTXT->Click += gcnew System::EventHandler(this, &InterfazGrafica::button1_Click);
			// 
			// txtTitulo
			// 
			this->txtTitulo->AutoSize = true;
			this->txtTitulo->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->txtTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTitulo->Location = System::Drawing::Point(482, 41);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(512, 27);
			this->txtTitulo->TabIndex = 1;
			this->txtTitulo->Text = L"Bienvenido(a) al sistema de carga de Archivos.txt";
			this->txtTitulo->Click += gcnew System::EventHandler(this, &InterfazGrafica::label1_Click);
			// 
			// LOGO
			// 
			this->LOGO->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LOGO.Image")));
			this->LOGO->Location = System::Drawing::Point(31, 91);
			this->LOGO->Name = L"LOGO";
			this->LOGO->Size = System::Drawing::Size(421, 519);
			this->LOGO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->LOGO->TabIndex = 2;
			this->LOGO->TabStop = false;
			this->LOGO->Click += gcnew System::EventHandler(this, &InterfazGrafica::pictureBox1_Click);
			// 
			// txtNombrePrograma
			// 
			this->txtNombrePrograma->AutoSize = true;
			this->txtNombrePrograma->BackColor = System::Drawing::SystemColors::Highlight;
			this->txtNombrePrograma->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombrePrograma->Location = System::Drawing::Point(656, 694);
			this->txtNombrePrograma->Name = L"txtNombrePrograma";
			this->txtNombrePrograma->Size = System::Drawing::Size(185, 31);
			this->txtNombrePrograma->TabIndex = 3;
			this->txtNombrePrograma->Text = L"CRANDALL_AC";
			this->txtNombrePrograma->Click += gcnew System::EventHandler(this, &InterfazGrafica::label1_Click_1);
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->BackColor = System::Drawing::SystemColors::HotTrack;
			this->btnEjecutar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjecutar->Location = System::Drawing::Point(594, 366);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(292, 77);
			this->btnEjecutar->TabIndex = 4;
			this->btnEjecutar->Text = L"EJECUTAR TXT";
			this->btnEjecutar->UseVisualStyleBackColor = false;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &InterfazGrafica::btnEjecutar_Click);
			// 
			// btnGenerar
			// 
			this->btnGenerar->BackColor = System::Drawing::Color::Teal;
			this->btnGenerar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerar->Location = System::Drawing::Point(585, 543);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(292, 67);
			this->btnGenerar->TabIndex = 5;
			this->btnGenerar->Text = L"GENERAR .CPP";
			this->btnGenerar->UseVisualStyleBackColor = false;
			// 
			// txtEntrada
			// 
			this->txtEntrada->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEntrada->Location = System::Drawing::Point(980, 100);
			this->txtEntrada->Name = L"txtEntrada";
			this->txtEntrada->Size = System::Drawing::Size(422, 510);
			this->txtEntrada->TabIndex = 6;
			this->txtEntrada->Text = L"";
			// 
			// InterfazGrafica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(1414, 805);
			this->Controls->Add(this->txtEntrada);
			this->Controls->Add(this->btnGenerar);
			this->Controls->Add(this->btnEjecutar);
			this->Controls->Add(this->txtNombrePrograma);
			this->Controls->Add(this->LOGO);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->btnCargarTXT);
			this->Name = L"InterfazGrafica";
			this->Text = L"InterfazGrafica";
			this->Load += gcnew System::EventHandler(this, &InterfazGrafica::InterfazGrafica_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LOGO))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InterfazGrafica_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dialogo = gcnew OpenFileDialog();
		dialogo->Filter = "Archivos de texto (*.txt)|*.txt";

		if (dialogo->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ ruta = dialogo->FileName;
			String^ contenido = System::IO::File::ReadAllText(ruta);
			Console::WriteLine("Contenido del archivo:\n" + contenido);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEjecutar_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
