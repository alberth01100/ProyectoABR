#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
//#include <git2.h>

using namespace std;

int contPerson = 0, contwhiskey = 0, contcerveza = 0, contron = 0, contvodka = 0, conttequila = 0, contcomple = 0, contpisco = 0;
double contMoney = 0;
string NpersonaT, ApersonaT;
float optar, monto;

/*
void abreGit(){
	// Inicializar libgit2
    git_libgit2_init();

    // Abrir el repositorio
    git_repository* repo = nullptr;
    int error = git_repository_open(&repo, "/ruta/del/repositorio");

    if (error == 0) {
        // Agregar todos los archivos al repositorio
        git_index* index = nullptr;
        git_repository_index(&index, repo);
        git_index_add_all(index, nullptr, GIT_INDEX_ADD_DEFAULT, nullptr, nullptr);
        git_index_write(index);

        // Hacer un commit
        git_oid tree_id;
        git_tree* tree = nullptr;
        git_index_write_tree(&tree_id, index);
        git_tree_lookup(&tree, repo, &tree_id);

        git_signature* signature = nullptr;
        git_signature_now(&signature, "Autor", "autor@example.com");

        git_commit* commit = nullptr;
        git_commit_create(&commit, repo, "HEAD", signature, signature, nullptr, "Actualizaci�n del archivo HTML", tree, 0, nullptr);

        // Hacer push de los cambios al repositorio remoto
        git_remote* remote = nullptr;
        git_remote_lookup(&remote, repo, "origin");
        git_remote_connect(remote, GIT_DIRECTION_PUSH);

        const char* refspecs[] = { "refs/heads/main:refs/heads/main" };
        git_remote_push(remote, refspecs, 1, nullptr);

        // Liberar recursos
        git_remote_free(remote);
        git_commit_free(commit);
        git_tree_free(tree);
        git_index_free(index);
        git_signature_free(signature);
        git_repository_free(repo);
    }

    // Finalizar libgit2
    git_libgit2_shutdown();

}*/

int generaHTML(){
	// Datos de la boleta de venta
  int codigoProducto = 1234;
  int cantidad = 2;
  double costoUnitario = 10.5;
  double importeTotal = cantidad * costoUnitario;

  // Nombre del archivo de salida
  std::string nombreArchivo = "C:\\ProyectoABR\\index.html";

  // Crear y abrir el archivo de salida
  std::ofstream archivo("C:\\ProyectoABR\\index.html");

  // Verificar si el archivo se abri� correctamente
  if (!archivo) {
    std::cout << "No se pudo crear el archivo." << std::endl;
    return 1;
  }

  // Escribir el encabezado HTML

  // Escribir los datos en el archivo como una tabla HTML
  //archivo << "<h1>Boleta de Venta</h1>" << std::endl;
  archivo << "<!DOCTYPE html>" << std::endl;
    archivo << "<html>" << std::endl;
    archivo << "<head>" << std::endl;
    archivo << "    <title>Boleta de Venta</title>" << std::endl;
    archivo << "    <!--<script src=\"script.js\"></script>--> " << std::endl;
    archivo << "    <style>" << std::endl;
    archivo << "        body {" << std::endl;
    archivo << "            font-family: Arial, sans-serif;" << std::endl;
    archivo << "            margin: 0;" << std::endl;
    archivo << "            padding: 20px;" << std::endl;
    archivo << "        }" << std::endl;
    archivo << "        .container {" << std::endl;
    archivo << "            max-width: 600px;" << std::endl;
    archivo << "            margin: 0 auto;" << std::endl;
    archivo << "            background-color: #f2f2f2;" << std::endl;
    archivo << "            padding: 20px;" << std::endl;
    archivo << "            border-radius: 5px;" << std::endl;
    archivo << "        }" << std::endl;
    archivo << "        h1 {" << std::endl;
    archivo << "            text-align: center;" << std::endl;
    archivo << "        }" << std::endl;
    archivo << "        .payment-methods {" << std::endl;
    archivo << "            display: flex;" << std::endl;
    archivo << "            justify-content: center;" << std::endl;
    archivo << "            margin-top: 20px;" << std::endl;
    archivo << "        }" << std::endl;
    archivo << "        .payment-methods img {" << std::endl;
    archivo << "            width: 100px;" << std::endl;
    archivo << "            height: auto;" << std::endl;
    archivo << "            margin: 0 10px;" << std::endl;
    archivo << "            cursor: pointer;" << std::endl;
    archivo << "            transition: transform 0.3s ease;" << std::endl;
    archivo << "        }" << std::endl;
    archivo << "        .payment-methods img:hover {" << std::endl;
    archivo << "            transform: scale(1.1);" << std::endl;
    archivo << "        }" << std::endl;
    archivo << "    </style>" << std::endl;
    archivo << "</head>" << std::endl;
    archivo << "<body>" << std::endl;
    archivo << "    <div class=\"container\">" << std::endl;
    archivo << "        <h1>Boleta de Venta</h1>" << std::endl;
    archivo << "        <p>Detalles de la compra:</p>" << std::endl;
    //COMPRA
  archivo << "<table>" << std::endl;
  archivo << "<tr><td>C�digo de Producto:</td><td>" << codigoProducto << "</td></tr>" << std::endl;
  archivo << "<tr><td>Cantidad:</td><td>" << cantidad << "</td></tr>" << std::endl;
  archivo << "<tr><td>Costo Unitario:</td><td>" << costoUnitario << "</td></tr>" << std::endl;
  archivo << "<tr><td>Importe Total:</td><td>" << importeTotal << "</td></tr>" << std::endl;
  archivo << "</table>" << std::endl;
  
  archivo << "<div class= \"payment-methods\">" << std::endl;
  archivo << "<img src=\"ruta_de_la_imagen_yape.png\" alt=\"Yape\">" << std::endl;
  archivo << "<img src=\"ruta_de_la_imagen_plin.png\" alt=\"Plin\">" << std::endl;
  archivo << "</div>" << std::endl;
  archivo << "</div>" << std::endl;
  archivo << "</body>\n</html>" << std::endl;


  // Cerrar el archivo
  archivo.close();

	//system("TYPE archivo.txt>index.html");
	
  std::cout << "El archivo boletaVenta.txt se ha generado exitosamente." << std::endl;

	//GIT
	//system("cd C:\\ProyectoABR");
	// Agregar todos los archivos al repositorio Git
    system("cd C:\\ProyectoABR\ngit add .");
    Sleep(500);

    // Hacer un commit con un mensaje espec�fico
    system("cd C:\\ProyectoABR\ngit commit -m \"Actualizaci�n del archivo HTML\"");
    Sleep(1000);
    
    // Hacer push de los cambios al repositorio remoto
    system("cd C:\\ProyectoABR\ngit push origin main");
    Sleep(2000);
	
  return 0;
}

int abreQR(){
	// Ruta de la imagen a mostrar
  const char* imagePath = "C:\\ProyectoABR\\QR.png";

  // Construye el comando para abrir la imagen
  std::string command = "start ";
  command += imagePath;

  // Ejecuta el comando usando system()
  int result = system(command.c_str());

  // Verifica si la ejecuci�n del comando fue exitosa
  if (result == -1) {
    std::cout << "Error al ejecutar el comando." << std::endl;
    return -1;
  }

  return 0;
}

string leedaton()
{
    string dato;
    cin >> dato;
    return dato;
}

string leedatop()
{
    string dato;
    cin >> dato;
    return dato;
}

void delivery(){
	cout<<"Procesando Delivery: "<<endl;
}


double ventas()
{
    int op, opc;
    double precio = 0;
    do
    {
        cout << "\n\nProductos\n" << endl;
        cout << "Cerveza opcion [1]\n" << endl;
        cout << "Ron opcion [2]\n" << endl;
        cout << "Whiskey opcion [3]\n" << endl;
        cout << "Vodka opcion [4]\n" << endl;
        cout << "Pisco opcion [5]\n" << endl;
        cout << "Tequila [6]\n" << endl;
        cout << "Complementos de Licores [7]\n" << endl;
        cout << "Salir [8] (Recuerde oprimir 8 despues de hacer su eleccion) \n" << endl;
        do
        {
            cout << "Ingrese una opcion" << endl;
            cin >> op;
            if (op < 1 || op > 8)
                cout << "ERROR Ingrese una opcion valida" << endl;
        } while (op < 1 || op > 8);

        switch (op)
        {
        	case 1: {
                cout << "Cusqueña [1]" << endl;
                cout << "Pilsen [2]" << endl;
                cin >> opc;

                if (opc >= 1 && opc <= 2) {
                    switch(opc) {
                        case 1: {
                            precio = 6.5;
                            break;
                        }
                        case 2: {
                            precio = 9;
                            break;
                        }	
                    }
                    contcerveza++;
                } else {
                    cout << "ERROR: NO ES VÁLIDA LA ELECCIÓN" << endl;
                }
                break;
            }
            case 2: { 
                cout << "Ron Flor de caña botella 750ml [1]" << endl;  
                cout << "Ron Flor de caña de botella 1L [2]" << endl;
                cout << "Ron Cartavio Black botella 750ml [3]" << endl;		
                cout << "Ron Cartavio Black botella 1L [4]" << endl;
                cin >> opc;

                if (opc >= 1 && opc <= 4) {
                    switch(opc) {
                        case 1: {
                            precio = 46;
                            break;
                        }
                        case 2: {
                            precio = 53;
                            break;
                        }	
                        case 3: {
                            precio = 25;
                            break;
                        }	
                        case 4: {
                            precio = 30;
                            break;
                        }	
                        contron++;
                    }
                } else {
                    cout << "ERROR: NO ES VÁLIDA LA ELECCIÓN" << endl;
                }
                break;
            }
            case 3: { 
				cout<<"Whisky JOHNNIE WALKER Red Label Botella 750ml [1]"<<endl;  
		cout<<"Whisky JOHNNIE WALKER Black Label Botella 750ml [2]"<<endl;
		cout<<"Whisky BALLANTINES Finest Botella 1L [3]"<<endl;		
		cout<<"Whisky PASSPORT Scotch Botella 700ml [4]"<<endl;
		cout<<"Whisky OLD TIMES Black Botella 750ml [5]"<<endl;
		cin>>opc;
	if(opc>=1 && opc<=5)
	{
		switch(opc){
		case 1:{precio=64.90;}break;
		
		case 2:{ precio=109.00;}break;	
		
		case 3:{ precio=64.90;}break;
		
		case 4:{ precio=31.90;}break;
		
		case 5:{ precio=23.90;}break;
				contwhiskey++;
	               }
	}
	else 
	cout<<"ERROR. NO ES VALIDA LA ELECCION"<<endl;

	break;}	
	
	case 4:{ 
		cout<<"Vodka RUSSKAYA Pink Botella 750ml [1]"<<endl;  
		cout<<"Vodka RUSSKAYA Apple Botella 750ml [2]"<<endl;
		cout<<"Vodka RUSSKAYA Clásico Botella 750ml [3]"<<endl;		
		cin>>opc;
	if(opc>=1&&opc<=3)
	{
		switch(opc){
		case 1:{precio=22.90;}break;
		
		case 2:{ precio=22.90;}break;	
		
		case 3:{ precio=22.90;}break;
           contvodka++;
	               }
	}
	else 
	cout<<"ERROR. NO ES VALIDA LA ELECCION"<<endl;
	
	break;}	
	
case 5:{ 
		cout<<"Pisco SANTIAGO QUEIROLO Quebranta Botella 750ml[1]"<<endl;  
		cout<<"Pisco SANTIAGO QUEIROLO Acholado Botella 750ml [2]"<<endl;
		cout<<"Pisco CUATRO GALLOS Puro Quebranta Botella 700ml [3]"<<endl;		
		cout<<"Pisco TABERNERO Acholado La Botija Botella 700ml [4]"<<endl;
		cin>>opc;
	if(opc>=1&&opc<=4)
	{
		switch(opc){
		case 1:{precio=46.00;}break;
		
		case 2:{ precio=53.00;}break;	
		
		case 3:{ precio=54.50;}break;
		
		case 4:{ precio=35.50;}break;
			contpisco++;
	               }
	}
	else 
	cout<<"ERROR. NO ES VALIDA LA ELECCION"<<endl;
	
	break;}
	
	case 6:{ 
		cout<<"Tequila JOSÉ CUERVO Especial Reposado Botella 750ml [1]"<<endl;  
		cout<<"Tequila JOSÉ CUERVO Especial Silver Botella 750ml [2]"<<endl;
		cout<<"Tequila Añejo HERRADURA Botella 750ml [3]"<<endl;		
		cout<<"Tequila OLMECA Blanco Botella 700ml [4]"<<endl;
		cin>>opc;
	if(opc>=1&&opc<=4)
	{
		switch(opc){
		case 1:{precio=68.90;}break;
		
		case 2:{ precio=68.90;}break;	
		
		case 3:{ precio=339.00;}break;
		
		case 4:{ precio=64.90;}break;
			conttequila++;
	               }
	}
	else 
	cout<<"ERROR. NO ES VALIDA LA ELECCION"<<endl;
	
	break;}	
	
	
	case 7:{ 
		cout<<"Jarabe de Goma VIÑA SANTA Natural Botella 750ml [1]"<<endl;  
		cout<<"Jarabe de Goma PANAKA Granadina Botella 750ml [2]"<<endl;
		cout<<"Jarabe de goma VARGAS Chevalier Botella 750ml [3]"<<endl;		
		cout<<"Jarabe de Goma BURGOS Arabiga Botella 750ml [4]"<<endl;
		cin>>opc;
	if(opc>=1&&opc<=4)
	{
		switch(opc){
		case 1:{precio=11.90;}break;
		
		case 2:{ precio=12.90;}break;	
		
		case 3:{ precio=16.90;}break;
		
		case 4:{ precio=18.90;}break;
			contcomple++;
	               }
	}
	else 
	cout<<"ERROR. NO ES VALIDA LA ELECCION"<<endl;
	
	}break;}
	
	}while(op!=8);

return precio;

	
}

void credito(){
	cout<<"Procesando credito:  "; 
};

void costdelivery();

int menu()// Prototipo y definicion de la funcion menú sin argumentos de tipo entero 
{
	
	setlocale(LC_CTYPE, "Spanish");
	int op, cant, optar, opdeli;
	char tarjeta;
	double price, costdelivery;
	double delivery;
//			      costdelivery
	double Mbruto,Mdscto,Mfinal,dscto; 
	do{
	cout<<"---------MEN�---------"<<endl;
	cout<<"Ingrese [1] para las ventas"<<endl;
	cout<<"Ingrese [2] para el conteo del dia"<<endl; 
	cout<<"Ingrese [3] para salir "<<endl;
	cin>>op;
    }while(op<1||op>3); 
    switch(op){	
    	case 1: {
		cout<<"\nVentas";
     	price=ventas();
     	
     	     	
     	do{
     		cout<<"El cliente pedira delivery"<<endl;
     		cout<<"si [1] y no[2]"<<endl;
     		cin>>opdeli;
     		if(opdeli<1&&opdeli>2)
     		cout<<"Error no es una opcion valida"<<endl; 
		 }while(opdeli<1&&opdeli>2);
     	
     	switch(opdeli){
		  case 1: {
		     //costdelivery= 
			 void delivery();
		  }break;
		  case 2:{
		  cout<<"\n";
		  }break;
		 }
		
     	do{
     	cout<<"Ingrese Una cantidad"<<endl;
		cin>>cant; 
        if(cant<1)
		cout<<"ERROR... NO ES UNA CANTIDAD VALIDA."<<endl;
         }while(cant<1);
        if(cant>=1&&cant<3)
          dscto=0; 
             else
              if(cant>=3&&cant<6)
               dscto=0.05;
                  else
                dscto=0.10;
        
     	Mbruto=price*cant;
     	Mdscto=Mbruto*dscto;
     	Mfinal=Mbruto-Mdscto+costdelivery;
     	cout<<"El Monto bruto es:"<<Mbruto<<endl;
     	cout<<"El Monto de descuento es: "<<Mdscto<<endl;
     	cout<<"El Monto final es: "<<Mfinal<<endl;
     	cout<<"Venta realizada por: "<<NpersonaT<<" "<<ApersonaT<<endl;
     	
     	bool band = false;
		while(!band){
			if(abreQR()!=0){
				cout<<"error"<<endl;
			}
			else
				band = true;
		}
     	band = false;
		while(!band){
			if(generaHTML()!=0){
				cout<<"error"<<endl;
			}
			else
				band = true;
		}
     	 
        do{
        cout<<"¿pagara con tarjeta?"<<endl;
        cout<<"si[1] no[2]"<<endl; 
        cin>>optar;
         }while(optar<1);
         if(optar<1&&optar>=2)
           

           void realizarPago(double monto);
        {
cout << "Pagando en soles" << monto << " con tarjeta de crédito/débito..." << endl;
           cout << "Pago realizado exitosamente." << endl;
                 }
           
        cout<<"Ingrese numero de cuenta";
        cin>>optar; 
        
           cout<<"ERROR Opcion no valida"<<endl;
         }while(optar<1&&optar>2);
         switch(optar)
         {
         	case 1:{
				credito();
				cout<<"Gracias por la compra"<<endl;
				    }break;
			 
			 case 2: {
			 cout<<"Gracias por la compra"<<endl; 
			 }break;
			 
         	
		 }

     	contPerson++;
//     	contMoney=+Mfinal;
     	contMoney += Mfinal;
     	
		
    	case 2: {
		cout<<"\nconteo"<<endl;
		cout<<"El numero de clientes es:"<<contPerson<<endl;
		cout<<"El Dinero obtenido es de: "<<contMoney<<endl;
		cout<<"El Conteo de clientes que compraron cerveza es: "<<contcerveza<<endl;
		cout<<"El Conteo de clientes que compraron Ron es:"<<contron<<endl;
		cout<<"El Conteo de clientes que compraron Whiskey es:"<<contwhiskey<<endl;
		cout<<"El Conteo de clientes que compraron Vodka es:"<<contvodka<<endl;
		cout<<"El Conteo de clientes que compraron Pisco es:"<<contpisco<<endl;
		cout<<"El Conteo de clientes que compraron Tequila es:"<<conttequila<<endl;
		cout<<"El Conteo de clientes que compraron Complementos de licores es:"<<contcomple<<endl;
		}break;
    	case 3: {
		cout<<"\n Gracias por comprar";
		}break;
	}
	return op; 
}
int main()
{
setlocale(LC_CTYPE,"Spanish");
int password, contpass=0,men ;
string  user;
cout<<"--------Bienvenidos al ALCOHOLEGIO-------"<<endl;
do{
cout<<"Ingrese Usuario."<<endl; 
cin>>user; 	
cout<<"Ingrese Contrase�a."<<endl;
cin>>password;
}while(password!=1234);
cout<<"Iniciando Espere por favor..."<<endl;
cout<<"Registre su Nombre y apellido"<<endl;
NpersonaT=leedaton();
ApersonaT=leedatop();
do{
men=menu();
}while(men!=3);


       
}
