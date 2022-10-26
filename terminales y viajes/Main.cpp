#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <conio.h>
using namespace std;

const int terms_num = 50; // el tamaño de terminales
struct terminales{
	vector<string> codigo, nombre, ciudad, pais;
	vector<float> superficie;
	vector<int> cant_terminales, dest_nacionales, dest_internacionales;
}terminales[terms_num];
vector<int> terms_ocupadas;
vector<int> vector_terms_ocupadas;

// interfas del usuario.
void menu_terminales();
void consultar_terminal();
void dar_alta_terminal();
void dar_baja_terminal();

// procesos internos
void read_file(string fileName, vector<string> &file_lines);
void write_file_terminales();
int code_id(string code);
int search_vector(int id, string code);
void add_terminal(string code, string nombre, string ciudad, string pais, float superficie, 
	int cant_terminales, int dest_nacionales, int dest_internacionales);
void terminales_comprehension();
vector<string> terminales_txt;

int main(){
	
	read_file("terminales.txt", terminales_txt);
	terminales_comprehension();
	
	menu_terminales();
	
	write_file_terminales();
	
	getch();
	return 0;
}

// Interfas de usuario:

void menu_terminales(){
	string opcion1 = "";
	system("cls");
	cout << "-----------------\n";
	cout << "1. Consultar terminal\n2. Dar de alta una terminal\n3. Dar de baja terminal\n4. Mostrar terminales\n";
	cout << "-----------------\n";
	getline (cin, opcion1);
	if (opcion1 == "1"){
		consultar_terminal();
	}else if (opcion1 == "2"){
		dar_alta_terminal();
	}else if (opcion1 == "3"){
		dar_baja_terminal();
	}else if (opcion1 == "4"){
		write_file_terminales();
		exit(1);
	}else{
		cout << "opcion erronea.";
		getch();
		menu_terminales();
	}
}

void consultar_terminal(){
	string codigo = "";
	system ("cls");
	cout << "-----------------\n";
	cout << "Ingrese el codigo de la terminal: ";
	getline(cin, codigo);
	cout << "-----------------\n\n";
	
	for (int i = 0; i < codigo.length(); i++) codigo[i] = toupper(codigo[i]);
	
	int id = code_id(codigo);
	int vector_id = search_vector(id, codigo);
	
	if (vector_id >= terms_num){
		cout << "no se ha podido encontrar la terminal.\n";
		getch();
		menu_terminales();
	}
	
	cout << "-----------------\n";
	cout << "Codigo: " << terminales[id].codigo[vector_id] << endl;
	cout << "Nombre: " << terminales[id].nombre[vector_id] << " de " << terminales[id].ciudad[vector_id] << endl;
	cout << "Ciudad: " << terminales[id].ciudad[vector_id] << endl;
	cout << "Pais: " << terminales[id].pais[vector_id] << endl;
	cout << "Superficie: " << terminales[id].superficie[vector_id] << endl;
	cout << "Cantidad de terminales: " << terminales[id].cant_terminales[vector_id] << endl;
	cout << "Destinos nacionales: " << terminales[id].dest_nacionales[vector_id] << endl;
	cout << "Destinos internacionales: " << terminales[id].dest_internacionales[vector_id] << endl;
	cout << "-----------------\n";
	getch();
	menu_terminales();
}

void dar_alta_terminal(){
	string ciudad, pais, codigo;
	float superficie;
	int cant_terminales, dest_nacionales, dest_internacionales;
	
	system ("cls");
	cout << "-----------------\n";
	cout << "Ingrese la ciudad de la terminal: ";
	getline(cin, ciudad);
	cout << "Ingrese el pais de la terminal: ";
	getline(cin, pais);
	cout << "Ingrese la superficie: ";
	cin >> superficie;
	cout << "Ingrese la cantidad de terminales: ";
	cin >> cant_terminales;
	cout << "Ingrese la cantidad de destinos nacionales: ";
	cin >> dest_nacionales;
	cout << "Ingrese la cantidad de destinos internacionales: ";
	cin >> dest_internacionales;
	cout << "-----------------\n";
	cin.ignore();
	bool codigo_listo = false;
	do{
		cout << "Ingrese un codigo de 3 letras con el que se identificara dicha terminal: ";
		getline(cin, codigo);
		
		int cont1 = 0;
		for (int i = 0; i < codigo.length(); i++){
			codigo[i] = toupper(codigo[i]);
			if (codigo[i] >= 65 && codigo[i] <= 90){
				cont1++;
			}
		}
		
		int id_p1 = code_id(codigo);
		int vector_p1 = search_vector(id_p1, codigo);
		
		if (codigo.length() != 3)
			cout << "El codigo solo puede contener 3 letras.\n";
		else if (cont1 != 3)
			cout << "Solo se permite el uso de letras.\n";
		else if (vector_p1 < terms_num)
			cout << "El codigo ya se encuentra en uso.\n";
		else
			codigo_listo = true;
	}while(!codigo_listo);
	
	add_terminal(codigo, "Terminal", ciudad, pais, superficie, cant_terminales, dest_nacionales, dest_internacionales);
	
	system ("cls");
	cout << "-----------------\n";
	cout << "Se ha completado con exito la operacion\n";
	getch();
	menu_terminales();
}

void dar_baja_terminal(){
	string code1 = "", seguro = "";
	system("cls");
	cout << "-----------------\n";
	cout << "ingrese el codigo de la terminal a eliminar: ";
	getline(cin, code1);
	cout << "-----------------\n";
	for (int i = 0; i < code1.length(); i++) code1[i] = toupper(code1[i]);
	int id1 = code_id(code1);
	int vector1 = search_vector(id1, code1);
	if (vector1 > terms_num){
		cout << "no se ha encontrado dicha terminal\n";
		getch(); menu_terminales();
	}
	cout << "Esta usted seguro (S/N):";
	getline(cin, seguro);
	for (int i = 0; i < seguro.length(); i++) seguro[i] = toupper(seguro[i]);
	if (seguro != "S" && seguro != "SI")
		menu_terminales();
	
	cout << id1 << " : " << vector1 << endl;
	int p1 = 0;
	
	terminales[id1].codigo.erase(terminales[id1].codigo.begin()+vector1);
	terminales[13].codigo.erase(terminales[13].codigo.begin()+0);
	//terminales[id1].codigo.erase(terminales[id1].codigo.begin()+vector1);
	terminales[id1].nombre.erase(terminales[id1].nombre.begin()+vector1);
	terminales[id1].ciudad.erase(terminales[id1].ciudad.begin()+vector1);
	terminales[id1].pais.erase(terminales[id1].pais.begin()+vector1);
	terminales[id1].superficie.erase(terminales[id1].superficie.begin()+vector1);
	terminales[id1].cant_terminales.erase(terminales[id1].cant_terminales.begin()+vector1);
	terminales[id1].dest_nacionales.erase(terminales[id1].dest_nacionales.begin()+vector1);
	terminales[id1].dest_internacionales.erase(terminales[id1].dest_internacionales.begin()+vector1);
	
	//int id2 = code_id(code1);
	//int vector2 = search_vector(id1, code1);
	//cout << id2 << " : " << vector2 << endl;
	
	//cout << "codigo: " << terminales[13].codigo[0] << endl;
	
	/*for (int i = 0; i < terms_ocupadas.size(); i++){
		if (terms_ocupadas[i] == id1 && vector_terms_ocupadas[i] == vector1){
			terms_ocupadas.erase(terms_ocupadas.begin()+i);
			vector_terms_ocupadas.erase(terms_ocupadas.begin()+i);
		}
	}*/
	
	
	getch();
	menu_terminales();
}

// procesos internos

void read_file(string fileName, vector<string> &file_lines){
	ifstream File;
	File.open(fileName, ios::in);
	
	if (File.fail()){
		cout << "Error";
		exit(1);
	}
	
	while(!File.eof()){
		string text1;
		getline(File, text1);
		file_lines.push_back(text1);
	}
	File.close();
}

void write_file_terminales(){
	ofstream File;
	File.open("terminales.txt", ios::out);
	
	if (File.fail()){
		cout << "Error";
		exit(1);
	}
	
	for (int i = 0; i < terms_ocupadas.size(); i++){
		if (i != 0)
			File << endl;
		int n1 = terms_ocupadas[i];
		int n2 = vector_terms_ocupadas[i];
		//if (terminales[n1].codigo[n2] == "BRA") cout << n1 << " " << n2 << endl;
		File << terminales[n1].codigo[n2] << " " << terminales[n1].nombre[n2] << " de ";
		File << terminales[n1].ciudad[n2] << " " << terminales[n1].pais[n2] << " " << terminales[n1].superficie[n2];
		File << " " << terminales[n1].cant_terminales[n2] << " " << terminales[n1].dest_nacionales[n2];
		File << " " << terminales[n1].dest_internacionales[n2];
	}
	
	File.close();
	
}

// comprende y almacena en datos el texto de terminales.txt
void terminales_comprehension(){
	// este bucle se ejecuta la cantidad de renglones del txt
	for (int i = 0; i < terminales_txt.size(); i++){
		// paso de strin a char
		int line_size = terminales_txt[i].length() + 1;
		char line[line_size];
		strcpy(line, terminales_txt[i].c_str());
		
		string codigo1, nombre1, ciudad1, pais1, superficie1, 
			cant_terminales, dest_nacionales, dest_internacionales;
		
		string dato1 = "";
		int cont_espacios = 0;
		
		// este bucle lee cada caracter del renglon
		for (int j = 0; j < line_size; j++){
			if (line[j] == ' ' || j+1 == line_size){
				switch(cont_espacios){
					case 0:
						codigo1 = dato1;
					case 1:
						nombre1 = dato1;
					case 3:
						ciudad1 = dato1;
					case 4:
						pais1 = dato1;
					case 5:
						superficie1 = dato1;
					case 6:
						cant_terminales = dato1;
					case 7:
						dest_nacionales = dato1;
					case 8:
						dest_internacionales = dato1;
				}
				dato1 = "";
				cont_espacios++;
			}else
				dato1 += line[j];
		}
		
		add_terminal(codigo1, nombre1, ciudad1, pais1, stof(superficie1), stoi(cant_terminales), 
			stoi(dest_nacionales), stoi(dest_internacionales));
	}
}

// pasa un codigo por la funcion hash
int code_id(string code){
	int code_size = code.length();
	char code_char[code_size];
	strcpy(code_char, code.c_str());
	
	int suma = 0;
	for (int i = 0; i < code_size; i++)
		suma += (int) code_char[i];
	
	return suma % terms_num;
}

void add_terminal(string code, string nombre, string ciudad, string pais, float superficie, 
	int cant_terminales, int dest_nacionales, int dest_internacionales){
	// busco el lugar de la lista donde estaria estos datos
	int id = code_id(code);
	
	// lo añade a la lista de datos si ocupados
	terms_ocupadas.push_back(id);
	vector_terms_ocupadas.push_back(terminales[id].codigo.size());
	
	// Añade todos los datos a la estructura
	terminales[id].codigo.push_back(code);
	terminales[id].nombre.push_back(nombre);
	terminales[id].ciudad.push_back(ciudad);
	terminales[id].pais.push_back(pais);
	terminales[id].superficie.push_back(superficie);
	terminales[id].cant_terminales.push_back(cant_terminales);
	terminales[id].dest_nacionales.push_back(dest_nacionales);
	terminales[id].dest_internacionales.push_back(dest_internacionales);
}

// busca el vector dentro del hash al que pertenece el dato.
int search_vector(int id, string code){
	int final = terms_num + 1;
	for (int i = 0; i < terminales[id].codigo.size(); i++){
		if (terminales[id].codigo[i] == code)
			final = i;
	}
	return final;
}
