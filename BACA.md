[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Rain-Detection-System-with-I2C-communication)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Rain-Detection-System-with-I2C-communication
<strong>Proyek Tunggal: Sistem Deteksi Hujan dengan komunikasi I2C</strong><br><br>
Perangkat ini dapat bekerja dengan baik dengan atau tanpa air. Saat dalam kondisi basah, sensor akan menyalakan LED dan mengirimkan respons sesuai situasi. Saat kering, sensor akan mematikan LED dan mengirimkan respons sesuai dengan situasi. Proyek ini dibuat untuk meningkatkan kualitas sistem pada alat pendeteksi hujan. Inovasi yang diterapkan dalam proyek ini adalah komunikasi I2C.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | • Arduino Mega 2560<br>• Arduino Nano V3 |
| Editor Kode | Arduino IDE |
| Driver | USB-Serial CH340 |
| Protokol Komunikasi | Inter Integrated Circuit (I2C) |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | Wire (bawaan) |
| Aktuator | LED (x1) |
| Sensor | MH-RD: Modul Sensor Tetesan Air Hujan (x1) |
| Komponen Lainnya | • Kabel Mikro USB - USB tipe A (x1)<br>• Kabel Mini USB - USB tipe A (x1)<br>• Kabel jumper (1 set) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://www.arduino.cc/en/software
   ```

   </td></tr></table><br>
   
2. USB-Serial CH340

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_Driver
   ```

   </td></tr></table>
   
<br><br>

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Ilustrasi</th>
<th width="420">Pengkabelan</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Rain-Detection-System-with-I2C-communication/assets/54527592/f474d486-14e1-4321-9a9b-60f5914a4f9a" alt="Pictorial-Diagram"></td>
<td><img src="https://github.com/devancakra/Rain-Detection-System-with-I2C-communication/assets/54527592/76672494-36a6-47e1-b88e-5da3fe424cd6" alt="Wiring"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Diagram Blok</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Rain-Detection-System-with-I2C-communication/assets/54527592/2726b9ce-2f5f-4e73-bfdd-d17210123b15" alt="Block-Diagram"></td>
</tr>
</table>

<br><br>

## Pengetahuan Dasar
Pada dasarnya, sebuah perangkat dapat dikomunikasikan dengan perangkat lain baik secara nirkabel maupun dengan kabel. Komunikasi antar perangkat keras yang umum digunakan adalah ``` Komunikasi Serial ```. Dapat diketahui bahwa ada tiga jenis ``` Komunikasi Serial ```, yang meliputi: ``` UART (Universal Asynchronous Receiver-Transmitter) ```, ``` SPI (Serial Peripheral Interface) ```, dan ``` I2C (Inter Integrated Circuit) ```. ``` I2C (Inter Integrated Circuit) ``` adalah standar komunikasi serial dua arah yang menggunakan dua saluran untuk mengirim data ``` (OUTPUT dari Master ke Slave) ``` dan menerima data ``` (INPUT dari Slave ke Master) ```. I2C menggunakan dua jalur dua arah: ``` Serial Data (SDA) ``` dan ``` Serial Clock (SCL) ``` untuk mentransfer data dan menyinkronkan komunikasi antar perangkat. Setiap perangkat yang terhubung ke ``` Bus I2C ``` memiliki alamat unik yang mengidentifikasinya selama komunikasi. ``` Protokol I2C ``` memungkinkan beberapa perangkat untuk berbagi bus yang sama, dan setiap perangkat dapat bertindak sebagai ``` master ``` atau ``` slave ```. ``` Master ``` adalah perangkat utama yang memiliki otoritas penuh atas kontrol Slave, sedangkan ``` Slave ``` adalah perangkat sekunder yang berada di bawah otoritas perangkat Master.

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek dengan cara klik ``` File ``` -> ``` Open ``` : 

   <table><tr><td width="810">
   
      • ``` I2C_Master.ino ```
      
      • ``` I2C_Slave.ino ```

   </td></tr></table><br>
   
2. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th>
         
      i
         
      </th><th width="780">
            
      Cara mengatur board ``` Arduino Mega 2560 ```
   
      </th></tr>
      <tr><td colspan="2">

      Klik ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Mega or Mega 2560 ```
              
      </td></tr>
   </table><br><table>
      <tr><th>
         
      ii
         
      </th><th width="775">

      Cara mengatur board ``` Arduino Nano ```
            
      </th></tr>
      <tr><td colspan="2">

      Klik ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Nano ```
            
      </td></tr>
   </table><br>

3. ``` Ubah Prosesor ``` di Arduino IDE

   <table>
      <tr><th>
         
      i
         
      </th><th width="780">
            
      Cara mengubah prosesor board ``` Arduino Mega 2560 ```
   
      </th></tr>
      <tr><td colspan="2">

      Tidak ada yang perlu diubah (Lewati)
              
      </td></tr>
   </table><br><table>
      <tr><th>
         
      ii
         
      </th><th width="775">

     Cara mengubah prosesor board ``` Arduino Nano ```
            
      </th></tr>
      <tr><td colspan="2">

      Klik ``` Tools ``` -> ``` Processor ``` -> ``` ATmega328P (Old Bootloader) ```
            
      </td></tr>
   </table><br>
   
4. ``` Instal Pustaka ``` di Arduino IDE

   <table><tr><td width="810">
      
      Unduh semua file zip pustaka. Kemudian tempelkan di: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```

   </td></tr></table><br>

5. ``` Pengaturan Port ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` Port ``` -> Pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```

   </td></tr></table><br>

6. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

7. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>

8. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` yang lainnya ```.

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>

2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
   
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<table>
<tr>
<th width="840">Perangkat Deteksi Hujan</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Rain-Detection-System-with-I2C-communication/assets/54527592/7a13e91f-c49e-4131-8d9b-66d21eea0293" alt="hardware"></td>
</tr>
</table>
<table>
<tr>
<th width="840" colspan="2">Serial Monitor</th>
</tr>
<tr>
<td width="420"><img src="https://github.com/devancakra/Rain-Detection-System-with-I2C-communication/assets/54527592/b066934c-585d-43f2-9ba5-50645f8104c9" alt="serialmonitor-1"></td>
<td width="420"><img src="https://github.com/devancakra/Rain-Detection-System-with-I2C-communication/assets/54527592/f4a00e7e-144e-4bc1-8372-b72581203c4b" alt="serialmonitor-2"></td>
</tr>
</table>

<br><br>

## Penafian
Aplikasi ini dibuat dengan menyertakan sumber-sumber dari pihak ketiga. Pihak ketiga di sini adalah penyedia layanan, yang layanannya berupa pustaka, kerangka kerja, dan lain-lain. Saya ucapkan terima kasih banyak atas layanannya. Telah terbukti sangat membantu dan dapat diimplementasikan.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
