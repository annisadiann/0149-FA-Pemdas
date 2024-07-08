#include <iostream>
using namespace std;
class MataKuliah
{
private: // isi dengan access modifier yang dibutuhkan
	float presensi;
	// tambahkan dengan variabel lain yang dibutuhkan dibawah ini
	float activity;
	float exercise;
	float tugasakhir;
public:
	MataKuliah()
	{
		presensi = 0.0;
		// isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
		activity = 00;
		exercise = 00;
		tugasakhir = 00;
	}
	virtual void namaMataKuliah() { return; }
	// tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
	/*virtual void namaMataKuliah(){
	cout <<"Pilih Mata Kuliah"<<endl;
	*/
	virtual void inputNilai() { return; }
	/*virtual void inputNilai(){
	cout <<"Masukan nilai"<<endl;
	*/
	virtual void hitungNilaiAkhir() { return; }
	/*virtual void hitungNilaiAkhir(){
	cout <<"  "<<endl;
	*/
	virtual void cekKelulusan() { return; }
	/*virtual void cekKelulusan(){
	cout <<"pesan kelulusan berdasarkan nilai akhir yang dihitung"<<endl;
	*/
	void setPresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}
	// tambahkan setter dan getter lain yang dibutuhkan dibawah ini
	void setActivity(float nilai)
	{
		this->activity = nilai;
	}
	float getActivity()
	{
		return activity;
	}
	void setExercise(float nilai)
	{
		this->exercise = nilai;
	}
	float getExercise()
	{
		return exercise;
	}
	void setTugasakhir(float nilai)
	{
		this->tugasakhir = nilai;
	}
	float getTugasakhir()
	{
		return tugasakhir;
	}
};

