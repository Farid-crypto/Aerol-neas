#include <iostream>
#include <string>
using namespace std;

// Declarar nuestras clases hermosas
class Avion {
private:
    string modelo;
    int capacidad;

public:
    Avion();
    Avion(string, int);

    void setModelo(string);
    string getModelo();

    void setCapacidad(int);
    int getCapacidad();

    void muestraAvion();
};

class Aerolinea {
private:
    string nombre;
    string pais;
    string terminal;
    Avion avion;

public:
    Aerolinea();
    Aerolinea(string, string, string, Avion);

    void setNombre(string);
    string getNombre();

    void setPais(string);
    string getPais();

    void setTerminal(string);
    string getTerminal();

    void setAvion(Avion);
    Avion getAvion();

    void muestraAerolinea();
};

class Equipaje {
private:
    int maletas;
    double peso;

public:
    Equipaje();
    Equipaje(int, double);

    void setMaletas(int);
    int getMaletas();

    void setPeso(double);
    double getPeso();

    void muestraEquipaje();
};

class Pasajero {
private:
    string nombre;
    string apellido;
    string pasaporte;
    int kmsAcumulados;
    Equipaje equipaje;

public:
    Pasajero();
    Pasajero(string, string, string, int, Equipaje);

    void setNombre(string);
    string getNombre();

    void setApellido(string);
    string getApellido();

    void setPasaporte(string);
    string getPasaporte();

    void setKmsAcumulados(int);
    int getKmsAcumulados();

    void setEquipaje(Equipaje);
    Equipaje getEquipaje();

    void muestraPasajero();
};

class Horario {
private:
    string fecha;
    string hora;

public:
    Horario();
    Horario(string, string);

    void setFecha(string);
    string getFecha();

    void setHora(string);
    string getHora();

    void muestraHorario();
};

class Vuelo {
private:
    string numeroVuelo;
    string origen;
    string destino;
    Aerolinea aerolinea;
    Horario horario;

public:
    Vuelo();
    Vuelo(string, string, string, Aerolinea, Horario);

    void setNumeroVuelo(string);
    string getNumeroVuelo();

    void setOrigen(string);
    string getOrigen();

    void setDestino(string);
    string getDestino();

    void setAerolinea(Aerolinea);
    Aerolinea getAerolinea();

    void setHorario(Horario);
    Horario getHorario();

    void muestraVuelo();
};

class Asiento {
private:
    int asiento;
    string seccion;
    bool disponible;

public:
    Asiento();
    Asiento(int, string, bool);

    void setAsiento(int);
    int getAsiento();

    void setSeccion(string);
    string getSeccion();

    void setDisponible(bool);
    bool getDisponible();

    void muestraAsiento();
};

class Reservacion {
private:
    string folio;
    Pasajero pasajero;
    Vuelo vuelo;
    Asiento asiento;
    double total;
    bool activa;
    bool checkIn;

public:
    Reservacion();
    Reservacion(string, Pasajero, Vuelo, Asiento, double, bool, bool);

    void setFolio(string);
    string getFolio();

    void setPasajero(Pasajero);
    Pasajero getPasajero();

    void setVuelo(Vuelo);
    Vuelo getVuelo();

    void setAsiento(Asiento);
    Asiento getAsiento();

    void setTotal(double);
    double getTotal();

    void setActiva(bool);
    bool getActiva();

    void setCheckIn(bool);
    bool getCheckIn();

    void hacerCheckIn();
    void muestraReservacion();
};

// Definir metodos de las clases
Avion::Avion() {
    modelo = "Modelo pendiente";
    capacidad = 0;
}

Avion::Avion(string _modelo, int _capacidad) {
    modelo = _modelo;
    capacidad = _capacidad;
}

void Avion::setModelo(string _modelo) {
    modelo = _modelo;
}

string Avion::getModelo() {
    return modelo;
}

void Avion::setCapacidad(int _capacidad) {
    capacidad = _capacidad;
}

int Avion::getCapacidad() {
    return capacidad;
}

void Avion::muestraAvion() {
    cout << "Modelo: " << modelo << endl;
    cout << "Capacidad: " << capacidad << " pasajeros" << endl;
}

Aerolinea::Aerolinea() {
    nombre = "Aerolinea sin nombre";
    pais = "Pais pendiente";
    terminal = "Terminal por asignar";
    avion = Avion();
}

Aerolinea::Aerolinea(string _nombre, string _pais, string _terminal, Avion _avion) {
    nombre = _nombre;
    pais = _pais;
    terminal = _terminal;
    avion = _avion;
}

void Aerolinea::setNombre(string _nombre) {
    nombre = _nombre;
}

string Aerolinea::getNombre() {
    return nombre;
}

void Aerolinea::setPais(string _pais) {
    pais = _pais;
}

string Aerolinea::getPais() {
    return pais;
}

void Aerolinea::setTerminal(string _terminal) {
    terminal = _terminal;
}

string Aerolinea::getTerminal() {
    return terminal;
}

void Aerolinea::setAvion(Avion _avion) {
    avion = _avion;
}

Avion Aerolinea::getAvion() {
    return avion;
}

void Aerolinea::muestraAerolinea() {
    cout << endl << "****************************" << endl;
    cout << "Datos de la aerolinea" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Pais: " << pais << endl;
    cout << "Terminal: " << terminal << endl;
    cout << "Avion asignado:" << endl;
    avion.muestraAvion();
}

Equipaje::Equipaje() {
    maletas = 0;
    peso = 0;
}

Equipaje::Equipaje(int _maletas, double _peso) {
    maletas = _maletas;
    peso = _peso;
}

void Equipaje::setMaletas(int _maletas) {
    maletas = _maletas;
}

int Equipaje::getMaletas() {
    return maletas;
}

void Equipaje::setPeso(double _peso) {
    peso = _peso;
}

double Equipaje::getPeso() {
    return peso;
}

void Equipaje::muestraEquipaje() {
    cout << "Maletas: " << maletas << endl;
    cout << "Peso: " << peso << " kg" << endl;
}

Pasajero::Pasajero() {
    nombre = "Pasajero sin nombre";
    apellido = "Apellido pendiente";
    pasaporte = "SIN_PASAPORTE";
    kmsAcumulados = 0;
    equipaje = Equipaje();
}

Pasajero::Pasajero(string _nombre, string _apellido, string _pasaporte, int _kmsAcumulados, Equipaje _equipaje) {
    nombre = _nombre;
    apellido = _apellido;
    pasaporte = _pasaporte;
    kmsAcumulados = _kmsAcumulados;
    equipaje = _equipaje;
}

void Pasajero::setNombre(string _nombre) {
    nombre = _nombre;
}

string Pasajero::getNombre() {
    return nombre;
}

void Pasajero::setApellido(string _apellido) {
    apellido = _apellido;
}

string Pasajero::getApellido() {
    return apellido;
}

void Pasajero::setPasaporte(string _pasaporte) {
    pasaporte = _pasaporte;
}

string Pasajero::getPasaporte() {
    return pasaporte;
}

void Pasajero::setKmsAcumulados(int _kmsAcumulados) {
    kmsAcumulados = _kmsAcumulados;
}

int Pasajero::getKmsAcumulados() {
    return kmsAcumulados;
}

void Pasajero::setEquipaje(Equipaje _equipaje) {
    equipaje = _equipaje;
}

Equipaje Pasajero::getEquipaje() {
    return equipaje;
}

void Pasajero::muestraPasajero() {
    cout << endl << "****************************" << endl;
    cout << "Datos del pasajero" << endl;
    cout << "Nombre: " << nombre << " " << apellido << endl;
    cout << "Pasaporte: " << pasaporte << endl;
    cout << "Kilometros acumulados: " << kmsAcumulados << endl;
    cout << "Equipaje:" << endl;
    equipaje.muestraEquipaje();
}

Horario::Horario() {
    fecha = "Fecha pendiente";
    hora = "Hora pendiente";
}

Horario::Horario(string _fecha, string _hora) {
    fecha = _fecha;
    hora = _hora;
}

void Horario::setFecha(string _fecha) {
    fecha = _fecha;
}

string Horario::getFecha() {
    return fecha;
}

void Horario::setHora(string _hora) {
    hora = _hora;
}

string Horario::getHora() {
    return hora;
}

void Horario::muestraHorario() {
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora << endl;
}

Vuelo::Vuelo() {
    numeroVuelo = "SIN_VUELO";
    origen = "Origen pendiente";
    destino = "Destino pendiente";
    aerolinea = Aerolinea();
    horario = Horario();
}

Vuelo::Vuelo(string _numeroVuelo, string _origen, string _destino, Aerolinea _aerolinea, Horario _horario) {
    numeroVuelo = _numeroVuelo;
    origen = _origen;
    destino = _destino;
    aerolinea = _aerolinea;
    horario = _horario;
}

void Vuelo::setNumeroVuelo(string _numeroVuelo) {
    numeroVuelo = _numeroVuelo;
}

string Vuelo::getNumeroVuelo() {
    return numeroVuelo;
}

void Vuelo::setOrigen(string _origen) {
    origen = _origen;
}

string Vuelo::getOrigen() {
    return origen;
}

void Vuelo::setDestino(string _destino) {
    destino = _destino;
}

string Vuelo::getDestino() {
    return destino;
}

void Vuelo::setAerolinea(Aerolinea _aerolinea) {
    aerolinea = _aerolinea;
}

Aerolinea Vuelo::getAerolinea() {
    return aerolinea;
}

void Vuelo::setHorario(Horario _horario) {
    horario = _horario;
}

Horario Vuelo::getHorario() {
    return horario;
}

void Vuelo::muestraVuelo() {
    cout << endl << "****************************" << endl;
    cout << "Datos del vuelo" << endl;
    cout << "Numero de vuelo: " << numeroVuelo << endl;
    cout << "Origen: " << origen << endl;
    cout << "Destino: " << destino << endl;
    cout << "Horario:" << endl;
    horario.muestraHorario();
    cout << "Aerolinea:" << endl;
    aerolinea.muestraAerolinea();
}

Asiento::Asiento() {
    asiento = 0;
    seccion = "Seccion pendiente";
    disponible = true;
}

Asiento::Asiento(int _asiento, string _seccion, bool _disponible) {
    asiento = _asiento;
    seccion = _seccion;
    disponible = _disponible;
}

void Asiento::setAsiento(int _asiento) {
    asiento = _asiento;
}

int Asiento::getAsiento() {
    return asiento;
}

void Asiento::setSeccion(string _seccion) {
    seccion = _seccion;
}

string Asiento::getSeccion() {
    return seccion;
}

void Asiento::setDisponible(bool _disponible) {
    disponible = _disponible;
}

bool Asiento::getDisponible() {
    return disponible;
}

void Asiento::muestraAsiento() {
    cout << "Asiento: " << asiento << endl;
    cout << "Seccion: " << seccion << endl;

    if (disponible == true) {
        cout << "Disponible: Si" << endl;
    }
    else {
        cout << "Disponible: No" << endl;
    }
}

Reservacion::Reservacion() {
    folio = "SIN_RESERVACION";
    pasajero = Pasajero();
    vuelo = Vuelo();
    asiento = Asiento();
    total = 0;
    activa = false;
    checkIn = false;
}

Reservacion::Reservacion(string _folio, Pasajero _pasajero, Vuelo _vuelo, Asiento _asiento, double _total, bool _activa, bool _checkIn) {
    folio = _folio;
    pasajero = _pasajero;
    vuelo = _vuelo;
    asiento = _asiento;
    total = _total;
    activa = _activa;
    checkIn = _checkIn;
}

void Reservacion::setFolio(string _folio) {
    folio = _folio;
}

string Reservacion::getFolio() {
    return folio;
}

void Reservacion::setPasajero(Pasajero _pasajero) {
    pasajero = _pasajero;
}

Pasajero Reservacion::getPasajero() {
    return pasajero;
}

void Reservacion::setVuelo(Vuelo _vuelo) {
    vuelo = _vuelo;
}

Vuelo Reservacion::getVuelo() {
    return vuelo;
}

void Reservacion::setAsiento(Asiento _asiento) {
    asiento = _asiento;
}

Asiento Reservacion::getAsiento() {
    return asiento;
}

void Reservacion::setTotal(double _total) {
    total = _total;
}

double Reservacion::getTotal() {
    return total;
}

void Reservacion::setActiva(bool _activa) {
    activa = _activa;
}

bool Reservacion::getActiva() {
    return activa;
}

void Reservacion::setCheckIn(bool _checkIn) {
    checkIn = _checkIn;
}

bool Reservacion::getCheckIn() {
    return checkIn;
}

void Reservacion::hacerCheckIn() {
    checkIn = true;
    cout << endl << "Listo, check in completado." << endl;
}

void Reservacion::muestraReservacion() {
    cout << endl << "****************************" << endl;
    cout << "Datos de la reservacion" << endl;
    cout << "Folio: " << folio << endl;
    cout << "Total: $" << total << endl;

    if (activa == true) {
        cout << "Estado: Activa" << endl;
    }
    else {
        cout << "Estado: Cancelada" << endl;
    }

    if (checkIn == true) {
        cout << "Check in: Completado" << endl;
    }
    else {
        cout << "Check in: No has hecho el check in" << endl;
    }

    pasajero.muestraPasajero();
    vuelo.muestraVuelo();
    cout << endl << "Asiento reservado:" << endl;
    asiento.muestraAsiento();
}

// Metodos funcionales adicionales
bool login() {
    string usuario;
    string contrasena;
    bool autorizado;

    autorizado = false;

    cout << endl << "Sistema de vuelos ABCC" << endl;
    cout << "Usuario: ";
    cin >> usuario;
    cout << "Contrasena: ";
    cin >> contrasena;

    if (usuario == "Farid") {
        if (contrasena == "1950") {
            autorizado = true;
        }
    }
    else if (usuario == "Blenda") {
        if (contrasena == "1940") {
            autorizado = true;
        }
    }
    else if (usuario == "Juan") {
        if (contrasena == "5820") {
            autorizado = true;
        }
    }

    if (autorizado == true) {
        cout << endl << "Usuario autorizado." << endl;
        return true;
    }
    else {
        cout << endl << "Usuario no autorizado." << endl;
        return false;
    }
}

int buscaAerolinea(Aerolinea arreglo[10], string nombre) {
    for (int i = 0; i < 10; i++) {
        if (arreglo[i].getNombre() == nombre) {
            return i;
        }
    }
    return -1;
}

int buscaPasajero(Pasajero arreglo[10], string pasaporte) {
    for (int i = 0; i < 10; i++) {
        if (arreglo[i].getPasaporte() == pasaporte) {
            return i;
        }
    }
    return -1;
}

int buscaVuelo(Vuelo arreglo[10], string numeroVuelo) {
    for (int i = 0; i < 10; i++) {
        if (arreglo[i].getNumeroVuelo() == numeroVuelo) {
            return i;
        }
    }
    return -1;
}

int buscaAsiento(Asiento arreglo[20], int asiento) {
    for (int i = 0; i < 20; i++) {
        if (arreglo[i].getAsiento() == asiento) {
            return i;
        }
    }
    return -1;
}

int buscaReservacion(Reservacion arreglo[20], string folio) {
    for (int i = 0; i < 20; i++) {
        if (arreglo[i].getFolio() == folio) {
            return i;
        }
    }
    return -1;
}

int lugarReservacion(Reservacion arreglo[20]) {
    for (int i = 0; i < 20; i++) {
        if (arreglo[i].getFolio() == "SIN_RESERVACION") {
            return i;
        }
    }
    return -1;
}

int lugarVuelo(Vuelo arreglo[10]) {
    for (int i = 0; i < 10; i++) {
        if (arreglo[i].getNumeroVuelo() == "SIN_VUELO") {
            return i;
        }
    }
    return -1;
}

double totalConDescuento(Pasajero pasajero, double totalBase) {
    double totalFinal;

    totalFinal = totalBase;

    if (pasajero.getKmsAcumulados() > 50000) {
        totalFinal = totalBase * 0.90;
    }

    return totalFinal;
}

void mostrarAerolineas(Aerolinea arreglo[10]) {
    cout << endl << "Aerolineas registradas:" << endl;

    for (int i = 0; i < 10; i++) {
        if (arreglo[i].getNombre() != "Aerolinea sin nombre") {
            arreglo[i].muestraAerolinea();
        }
    }
}

void mostrarPasajeros(Pasajero arreglo[10]) {
    cout << endl << "Pasajeros registrados:" << endl;

    for (int i = 0; i < 10; i++) {
        if (arreglo[i].getPasaporte() != "SIN_PASAPORTE") {
            arreglo[i].muestraPasajero();
        }
    }
}

void mostrarVuelos(Vuelo arreglo[10]) {
    cout << endl << "Vuelos registrados:" << endl;

    for (int i = 0; i < 10; i++) {
        if (arreglo[i].getNumeroVuelo() != "SIN_VUELO") {
            arreglo[i].muestraVuelo();
        }
    }
}

void mostrarAsientos(Asiento arreglo[20]) {
    cout << endl << "Asientos registrados:" << endl;

    for (int i = 0; i < 20; i++) {
        if (arreglo[i].getAsiento() != 0) {
            cout << endl;
            arreglo[i].muestraAsiento();
        }
    }
}

void mostrarReservaciones(Reservacion arreglo[20]) {
    cout << endl << "Reservaciones registradas:" << endl;

    for (int i = 0; i < 20; i++) {
        if (arreglo[i].getFolio() != "SIN_RESERVACION") {
            arreglo[i].muestraReservacion();
        }
    }
}

void vuelosPorAerolinea(Vuelo vuelos[10], string aerolinea) {
    int encontrados;
    encontrados = 0;

    cout << endl << "Vuelos de la aerolinea " << aerolinea << ":" << endl;

    for (int i = 0; i < 10; i++) {
        if (vuelos[i].getNumeroVuelo() != "SIN_VUELO") {
            if (vuelos[i].getAerolinea().getNombre() == aerolinea) {
                vuelos[i].muestraVuelo();
                encontrados++;
            }
        }
    }

    if (encontrados == 0) {
        cout << "No se encontraron vuelos para esa aerolinea." << endl;
    }
}

void vuelosPorHorario(Vuelo vuelos[10], string fecha, string hora) {
    int encontrados;
    encontrados = 0;

    cout << endl << "Vuelos encontrados por fecha y hora:" << endl;

    for (int i = 0; i < 10; i++) {
        if (vuelos[i].getNumeroVuelo() != "SIN_VUELO") {
            if (vuelos[i].getHorario().getFecha() == fecha) {
                if (vuelos[i].getHorario().getHora() == hora) {
                    vuelos[i].muestraVuelo();
                    encontrados++;
                }
            }
        }
    }

    if (encontrados == 0) {
        cout << "No se encontraron vuelos con ese horario." << endl;
    }
}

void consultaVueloEspecial(Vuelo vuelos[10], string destino, string fecha, string aerolinea) {
    int encontrados;
    encontrados = 0;

    cout << endl << "Consulta por destino, fecha y aerolinea:" << endl;

    for (int i = 0; i < 10; i++) {
        if (vuelos[i].getNumeroVuelo() != "SIN_VUELO") {
            if (vuelos[i].getDestino() == destino) {
                if (vuelos[i].getHorario().getFecha() == fecha) {
                    if (vuelos[i].getAerolinea().getNombre() == aerolinea) {
                        vuelos[i].muestraVuelo();
                        encontrados++;
                    }
                }
            }
        }
    }

    if (encontrados == 0) {
        cout << "No se encontro un vuelo con esos datos." << endl;
    }
}

void pasajerosPorVuelo(Reservacion reservaciones[20], string numeroVuelo) {
    int encontrados;
    encontrados = 0;

    cout << endl << "Pasajeros del vuelo " << numeroVuelo << ":" << endl;

    for (int i = 0; i < 20; i++) {
        if (reservaciones[i].getFolio() != "SIN_RESERVACION") {
            if (reservaciones[i].getActiva() == true) {
                if (reservaciones[i].getVuelo().getNumeroVuelo() == numeroVuelo) {
                    reservaciones[i].getPasajero().muestraPasajero();
                    encontrados++;
                }
            }
        }
    }

    if (encontrados == 0) {
        cout << "No hay pasajeros con reservacion activa en ese vuelo." << endl;
    }
}

// Programa principal
int main() {
    Avion aviones[10];
    Aerolinea aerolineas[10];
    Equipaje equipajes[10];
    Pasajero pasajeros[10];
    Horario horarios[10];
    Vuelo vuelos[10];
    Asiento asientos[20];
    Reservacion reservaciones[20];

    int opcion;
    int pos;
    int pos2;
    int pos3;
    int libre;
    int asientoPedido;
    double totalBase;
    double totalFinal;
    string numeroVuelo;
    string origen;
    string destino;
    string fecha;
    string hora;
    string aerolineaBuscada;
    string pasaporte;
    string folio;

    aviones[0] = Avion("Boeing737", 180);
    aviones[1] = Avion("AirbusA320", 170);
    aviones[2] = Avion("Embraer190", 100);

    aerolineas[0] = Aerolinea("Aeromexico", "Mexico", "Terminal2", aviones[0]);
    aerolineas[1] = Aerolinea("VivaAerobus", "Mexico", "Terminal1", aviones[1]);
    aerolineas[2] = Aerolinea("AmericanAirlines", "EstadosUnidos", "Terminal1", aviones[2]);

    equipajes[0] = Equipaje(1, 18.5);
    equipajes[1] = Equipaje(2, 24.0);
    equipajes[2] = Equipaje(1, 12.0);

    pasajeros[0] = Pasajero("Farid", "Presbitero", "MX5630", 111111, equipajes[0]);
    pasajeros[1] = Pasajero("Carlos", "MontesDeOca", "RC8459", 32890, equipajes[1]);
    pasajeros[2] = Pasajero("Carlos", "DeLaFuente", "GDL0043", 523, equipajes[2]);

    horarios[0] = Horario("16/11/2026", "10:16");
    horarios[1] = Horario("24/12/2026", "23:04");
    horarios[2] = Horario("01/01/2028", "14:20");

    vuelos[0] = Vuelo("PDUYTP", "CDMX", "GDL", aerolineas[0], horarios[0]);
    vuelos[1] = Vuelo("EY1M5S", "MTY", "AIFA", aerolineas[1], horarios[1]);
    vuelos[2] = Vuelo("AM965", "NY", "Cancun", aerolineas[2], horarios[2]);

    asientos[0] = Asiento(12, "Ventana", true);
    asientos[1] = Asiento(14, "Pasillo", false);
    asientos[2] = Asiento(18, "Centro", true);
    asientos[3] = Asiento(21, "Ventana", true);

    reservaciones[0] = Reservacion("R1", pasajeros[1], vuelos[1], asientos[2], 1800, true, false);
    asientos[2].setDisponible(false);

    if (login() == false) {
        return 0;
    }

    opcion = 1;

    do {
        cout << endl << "========== MENU PRINCIPAL ==========" << endl;
        cout << "1. Mostrar aerolineas" << endl;
        cout << "2. Mostrar pasajeros" << endl;
        cout << "3. Mostrar vuelos" << endl;
        cout << "4. Agregar vuelo nocturno" << endl;
        cout << "5. Mostrar vuelos por aerolinea" << endl;
        cout << "6. Mostrar vuelos por fecha y hora" << endl;
        cout << "7. Consultar vuelo por destino, fecha y aerolinea" << endl;
        cout << "8. Reservar asiento" << endl;
        cout << "9. Mostrar pasajeros de un vuelo" << endl;
        cout << "10. Consultar kilometros acumulados de un pasajero" << endl;
        cout << "11. Cancelar reservacion por folio" << endl;
        cout << "12. Cancelar reservacion de pasajero en vuelo" << endl;
        cout << "13. Hacer check in" << endl;
        cout << "14. Mostrar reservaciones" << endl;
        cout << "15. Mostrar asientos" << endl;
        cout << "16. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarAerolineas(aerolineas);
                break;

            case 2:
                mostrarPasajeros(pasajeros);
                break;

            case 3:
                mostrarVuelos(vuelos);
                break;

            case 4:
                libre = lugarVuelo(vuelos);

                if (libre >= 0) {
                    cout << endl << "Agregar vuelo nocturno" << endl;
                    cout << "Numero de vuelo: ";
                    cin >> numeroVuelo;
                    cout << "Origen: ";
                    cin >> origen;
                    cout << "Destino: ";
                    cin >> destino;
                    cout << "Fecha dd/mm/aaaa: ";
                    cin >> fecha;
                    cout << "Hora hh:mm: ";
                    cin >> hora;
                    cout << "Aerolinea: ";
                    cin >> aerolineaBuscada;

                    pos = buscaAerolinea(aerolineas, aerolineaBuscada);

                    if (pos >= 0) {
                        vuelos[libre] = Vuelo(numeroVuelo, origen, destino, aerolineas[pos], Horario(fecha, hora));

                        int esNocturno;
                        esNocturno = 0;

                        if (hora >= "20:00") {
                            esNocturno = 1;
                        }
                        if (hora <= "05:59") {
                            esNocturno = 1;
                        }

                        if (esNocturno == 1) {
                            cout << endl << "Vuelo nocturno agregado correctamente." << endl;
                        }
                        else {
                            cout << endl << "El vuelo se agrego, pero la hora no parece nocturna." << endl;
                        }
                    }
                    else {
                        cout << endl << "No existe esa aerolinea." << endl;
                    }
                }
                else {
                    cout << endl << "No hay espacio para mas vuelos." << endl;
                }
                break;

            case 5:
                cout << endl << "Aerolinea a consultar: ";
                cin >> aerolineaBuscada;
                vuelosPorAerolinea(vuelos, aerolineaBuscada);
                break;

            case 6:
                cout << endl << "Fecha dd/mm/aaaa: ";
                cin >> fecha;
                cout << "Hora hh:mm: ";
                cin >> hora;
                vuelosPorHorario(vuelos, fecha, hora);
                break;

            case 7:
                cout << endl << "Destino: ";
                cin >> destino;
                cout << "Fecha dd/mm/aaaa: ";
                cin >> fecha;
                cout << "Aerolinea: ";
                cin >> aerolineaBuscada;
                consultaVueloEspecial(vuelos, destino, fecha, aerolineaBuscada);
                break;

            case 8:
                libre = lugarReservacion(reservaciones);

                if (libre >= 0) {
                    cout << endl << "Reservar asiento" << endl;
                    cout << "Folio de reservacion: ";
                    cin >> folio;
                    cout << "Pasaporte del pasajero: ";
                    cin >> pasaporte;
                    cout << "Numero de vuelo: ";
                    cin >> numeroVuelo;
                    cout << "Asiento: ";
                    cin >> asientoPedido;
                    cout << "Total base: ";
                    cin >> totalBase;

                    pos = buscaPasajero(pasajeros, pasaporte);
                    pos2 = buscaVuelo(vuelos, numeroVuelo);
                    pos3 = buscaAsiento(asientos, asientoPedido);

                    if (pos >= 0) {
                        if (pos2 >= 0) {
                            if (pos3 >= 0) {
                                if (asientos[pos3].getDisponible() == true) {
                                    totalFinal = totalConDescuento(pasajeros[pos], totalBase);

                                    if (pasajeros[pos].getKmsAcumulados() > 50000) {
                                        cout << endl << "El pasajero tiene mas de 50000 km. Descuento aplicado." << endl;
                                    }
                                    else {
                                        cout << endl << "El pasajero no alcanza descuento por kilometros." << endl;
                                    }

                                    asientos[pos3].setDisponible(false);
                                    reservaciones[libre] = Reservacion(folio, pasajeros[pos], vuelos[pos2], asientos[pos3], totalFinal, true, false);
                                    cout << "Reservacion realizada correctamente." << endl;
                                    cout << "Total final: $" << totalFinal << endl;
                                }
                                else {
                                    cout << endl << "El asiento no esta disponible." << endl;
                                }
                            }
                            else {
                                cout << endl << "No se encontro el asiento." << endl;
                            }
                        }
                        else {
                            cout << endl << "No se encontro el vuelo." << endl;
                        }
                    }
                    else {
                        cout << endl << "No se encontro el pasajero." << endl;
                    }
                }
                else {
                    cout << endl << "No hay espacio para mas reservaciones." << endl;
                }
                break;

            case 9:
                cout << endl << "Numero de vuelo: ";
                cin >> numeroVuelo;
                pasajerosPorVuelo(reservaciones, numeroVuelo);
                break;

            case 10:
                cout << endl << "Pasaporte del pasajero: ";
                cin >> pasaporte;
                pos = buscaPasajero(pasajeros, pasaporte);

                if (pos >= 0) {
                    cout << "Kilometros acumulados: " << pasajeros[pos].getKmsAcumulados() << endl;
                }
                else {
                    cout << "No se encontro el pasajero." << endl;
                }
                break;

            case 11:
                cout << endl << "Folio a cancelar: ";
                cin >> folio;
                pos = buscaReservacion(reservaciones, folio);

                if (pos >= 0) {
                    reservaciones[pos].setActiva(false);
                    cout << "Reservacion cancelada correctamente." << endl;
                }
                else {
                    cout << "No se encontro la reservacion." << endl;
                }
                break;

            case 12:
                cout << endl << "Pasaporte del pasajero: ";
                cin >> pasaporte;
                cout << "Numero de vuelo: ";
                cin >> numeroVuelo;
                pos = -1;

                for (int i = 0; i < 20; i++) {
                    if (reservaciones[i].getFolio() != "SIN_RESERVACION") {
                        if (reservaciones[i].getPasajero().getPasaporte() == pasaporte) {
                            if (reservaciones[i].getVuelo().getNumeroVuelo() == numeroVuelo) {
                                pos = i;
                            }
                        }
                    }
                }

                if (pos >= 0) {
                    reservaciones[pos].setActiva(false);
                    cout << "Reservacion del pasajero en ese vuelo cancelada correctamente." << endl;
                }
                else {
                    cout << "No se encontro esa reservacion." << endl;
                }
                break;

            case 13:
                cout << endl << "Folio para check in: ";
                cin >> folio;
                pos = buscaReservacion(reservaciones, folio);

                if (pos >= 0) {
                    if (reservaciones[pos].getActiva() == true) {
                        reservaciones[pos].hacerCheckIn();
                    }
                    else {
                        cout << "No se puede hacer check in en una reservacion cancelada." << endl;
                    }
                }
                else {
                    cout << "No se encontro la reservacion." << endl;
                }
                break;

            case 14:
                mostrarReservaciones(reservaciones);
                break;

            case 15:
                mostrarAsientos(asientos);
                break;

            case 16:
                cout << endl << "Saliendo del sistema." << endl;
                break;

            default:
                cout << endl << "Opcion no valida." << endl;
        }

    } while (opcion != 16);

    return 0;
}
