# Calculator
a C++ based program of calculator

## Getting Started
Ikuti instruksi dibawah ini untuk dapat menjalankan aplikasi kami di komputer lokal anda

### Prerequisites
* Windows Operating System (Recommended)
* Visual Studio with .NET desktop development and Desktop development with C++ installed

### Panduan
Program ini dibuat dan dikompilasi dengan menggunakan Visual Studio dengan bahasa C++ dan menggunakan .NET Framework, sehingga menghasilkan hasil akhir executable yang hanya bisa berjalan pada sistem operasi Windows. Penggunaan program pada sistem operasi lain membutuhkan emulator program Windows, seperti Wine pada Linux.

### Building and Running the Program
* Buka Visual Studio, klik Open a project or solution dan pilih Calculator.sln yang ada di folder Calculator. Atau bisa juga ke direktori Calculator, klik kiri pada Calculator.sln, pilih Open with dan pilih Visual Studio.
* Tekan tab Project, lalu tekan Calculator Properties.
* Tekan opsi Linker yang ada di sebelah kiri Properties, kemudian tekan System. Set SubSystem menjadi Windows (/SUBSYSTEM:WINDOWS). Setelah itu tekan Advanced lalu ketik "main" tanpa tanda kutip pada box Entry Point
* Setelah itu tutup box Properties dan tekan tombol F5 untuk mem-build dan run aplikasi
