[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/cakraawijaya/Rain-Detection-System-via-Serial-Monitor-using-I2C-communication?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Personal%20Experiment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# Rain-Detection-System-via-Serial-Monitor-using-I2C-communication
Hujan adalah fenomena alam yang kerap terjadi di beberapa negara, terutama wilayah tropis seperti Indonesia. Fenomena ini dapat menjadi berkah dan juga dapat menjadi bencana bagi sebagian orang. Pada dasarnya proyek ini dibuat untuk membantu masyarakat dalam hal pendeteksian hujan. Selain itu bertujuan untuk mengedukasi sekaligus memberikan konstribusi yang nyata terhadap perkembangan teknologi. Proyek ini telah dikerjakan dan memakan waktu selama kurang lebih 3 hari. Perangkat ini dapat bekerja dengan baik dengan atau tanpa air. Saat dalam kondisi basah, sensor akan menyalakan LED dan mengirimkan respons sesuai dengan situasi. Saat kering, sensor akan mematikan LED dan mengirimkan respons sesuai dengan situasi. Inovasi yang diterapkan dalam proyek ini adalah komunikasi I2C. Antarmuka sistem dapat diakses melalui Serial Monitor.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | • Arduino Mega 2560<br>• Arduino Nano V3 |
| Editor Kode | Arduino IDE |
| Driver | CH340 USB Driver |
| Protokol Komunikasi | Inter Integrated Circuit (I2C) |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | Wire (bawaan) |
| Aktuator | LED (x1) |
| Sensor | MH-RD: Modul Sensor Tetesan Air Hujan (x1) |
| Komponen Lainnya | • Kabel USB Mikro - USB tipe A (x1)<br>• Kabel USB Mini - USB tipe A (x1)<br>• Kabel jumper (1 set) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://bit.ly/ArduinoIDE_Installer
   ```

   </td></tr></table><br>
   
2. CH340 USB Driver

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_USB_Driver
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
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
<td><img src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Diagram Blok</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
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
   
4. ``` Pengaturan Port ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` Port ``` -> Pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```

   </td></tr></table><br>

5. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

6. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>

7. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` yang lainnya ```.

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
<td><img src="Assets/Documentation/Experiment/Device.jpg" alt="hardware"></td>
</tr>
</table>
<table>
<tr>
<th width="840" colspan="2">Serial Monitor</th>
</tr>
<tr>
<td width="420"><img src="Assets/Documentation/Experiment/Not Raining.jpg" alt="serialmonitor-1"></td>
<td width="420"><img src="Assets/Documentation/Experiment/Rain Warning.jpg" alt="serialmonitor-2"></td>
</tr>
</table>

<br><br>

## Apresiasi
Jika karya ini bermanfaat bagi anda, maka dukunglah karya ini sebagai bentuk apresiasi kepada penulis dengan mengklik tombol ``` ⭐Bintang ``` di bagian atas repositori.

<br><br>

## Penafian
Aplikasi ini merupakan hasil karya saya sendiri dan bukan merupakan hasil plagiat dari penelitian atau karya orang lain, kecuali yang berkaitan dengan layanan pihak ketiga yang meliputi: pustaka, kerangka kerja, dan lain sebagainya.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
