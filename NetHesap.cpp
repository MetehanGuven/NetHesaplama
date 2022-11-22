#include <iostream>
using namespace std;
struct Dersler
{
	double Turkce, Matematik, Tarih, Fen;
};

int main()
{
	Dersler dogru;
	Dersler yanlis;
	Dersler net;
	double toplamNet;
	cout << "---------- SINAVA HOSGELDINIZ ----------" << endl;
	cout << " ---- Turkce ---- " << endl;
	cout << " Dogru sayiniz: ";
	cin >> dogru.Turkce;
	cout << " Yanlis sayiniz: ";
	cin >> yanlis.Turkce;
	net.Turkce = dogru.Turkce - 0.25 * yanlis.Turkce;
	cout << " Turkce netiniz: " << net.Turkce << endl;
	cout << " ---- Matematik ---- " << endl;
	cout << " Dogru sayiniz: ";
	cin >> dogru.Matematik;
	cout << " Yanlis sayiniz: ";
	cin >> yanlis.Matematik;
	net.Matematik = dogru.Matematik - 0.25 * yanlis.Matematik;
	cout << " Matematik netiniz: " << net.Matematik << endl;
	cout << " ---- Tarih ---- " << endl;
	cout << " Dogru sayiniz: ";
	cin >> dogru.Tarih;
	cout << " Yanlis sayiniz: ";
	cin >> yanlis.Tarih;
	net.Tarih = dogru.Tarih - 0.25 * yanlis.Tarih;
	cout << " Tarih netiniz: " << net.Tarih << endl;
	cout << " ---- Fen Bilgisi ---- " << endl;
	cout << " Dogru sayiniz: ";
	cin >> dogru.Fen;
	cout << " Yanlis sayiniz: ";
	cin >> yanlis.Fen;
	net.Fen = dogru.Fen - 0.25 * yanlis.Fen;
	cout << " Fen Bilgisi netiniz: " << net.Fen << endl;
	toplamNet = net.Fen + net.Matematik + net.Tarih + net.Turkce;
	cout << " \n Toplam netiniz: " << toplamNet;


	return 0;
}
