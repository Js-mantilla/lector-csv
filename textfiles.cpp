// Programa que lee un archivo CSV para texto
// Creado por Cesar Aceros
// Inspirado en: https://www.codespeedy.com/read-data-from-csv-file-in-cpp/
//


#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
void parseCSV()
{
	ifstream data("Book1.csv"); //abre y lee los archivos del book1.csv
	string line;       // crea una variable que almacena datos
	vector<vector<string>> parsedCsv;  //crea un vector el cual almacena los datos de la variable anterior
	int rowcount=0; //define una constante rowcount=0
	int colcount=0; //define una constante colcount=0
	while (getline(data,line))//ciclo while que raliza la funcion de el archivo data("Book1.csv") y ingresa esos datos de la avariable anterior
	{
		stringstream lineStream(line);
		string cell; 
		vector<string> parsedRow;
		colcount=0; //constante colcount=0
		while (getline(lineStream,cell,','))//ciclo while que raliza la funcion de revisar cada renglon y edintificar cada ',' y guarda esa informacion
		{
			parsedRow.push_back(cell); 
			colcount++; //es un contador (colcount=colcount+1)
		}
		rowcount++;//es un rowcount (rowcount=rowciunt+1)
		parsedCsv.push_back(parsedRow);



	}
	for(int i=0; i<rowcount; i++){ //un ciclo for que avanza en la matrix en i=0 hasta i<rowcount  de manera de i=i+1
		for(int j=0; j<colcount;j++){//un ciclo for que avanza en la matrix en j=0 hasta i<rowcount  de manera de j=j+1
		cout <<parsedCsv[i][j]<<" - "; //muestra en el terminal la operacion  parsedCsv[i][j] que ahora cada espacio esta separado por " - " 
		}
		cout<< '\n'; //realiza un salto de linea en terminal
	}
}
int main()
{
	parseCSV();
	return 0;
}
