#include <stdio.h>
#include <stdlib.h>


int main()
{

    char masker[6][30]={"\n1. Masker Kain\n\n","2. Masker Medis\n\n","3. Masker Duckbill\n\n","4. Masker KF94\n\n","5. Masker KN95\n\n","6. Masker N95\n\n"};
    int pilihan,jumlah,total=0,total_bayar,a;


    printf  ("==============================================================\n\n");
    printf  ("--------------Toko Online Masker Makmur Abadi-----------------\n\n");
    printf  ("==============================================================\n");

     for(int i=0; i<6; i++){
        printf("%s",masker[i]);
     }

    printf  ("==============================================================\n");


    ulang:

    printf  ("\n Masukkan Item yang akan dipilih  : ");
    scanf   ("%d", &pilihan);

    if (pilihan == 1)
    {
        printf("\n\t    Masker Kain\n");
        printf("\n Masukkan Jumlah Pembelian Masker : ");
        scanf("%d", &jumlah);
        total = jumlah * 7000;
        total_bayar=total_bayar+total;
        printf("\n Total yang harus dibayar sebesar Rp. %d\n", total);
    }

    else if (pilihan == 2)
    {
        printf("\n\t    Masker Medis\n");
        printf("\n Masukkan Jumlah Pembelian Masker : ");
        scanf("%d", &jumlah);
        total = jumlah * 550;
        total_bayar=total_bayar+total;
        printf("\n Total yang harus dibayar sebesar Rp. %d\n", total);
    }

    else if (pilihan == 3)
    {
        printf("\n\t  Masker Duckbill\n");
        printf("\n Masukkan Jumlah Pembelian Masker : ");
        scanf("%d", &jumlah);
        total = jumlah * 800;
        total_bayar=total_bayar+total;
        printf("\n Total yang harus dibayar sebesar Rp. %d\n", total);
    }

    else if (pilihan == 4)
    {
        printf("\n\t    Masker KF94\n");
        printf("\n Masukkan Jumlah Pembelian Masker : ");
        scanf("%d", &jumlah);
        total = jumlah * 1000;
        total_bayar=total_bayar+total;
        printf("\n Total yang harus dibayar sebesar Rp. %d\n", total);
    }

    else if (pilihan == 5)
    {
        printf("\n\t    Masker KN95\n");
        printf("\n Masukkan Jumlah Pembelian Masker : ");
        scanf("%d", &jumlah);
        total = jumlah * 1000;
        total_bayar=total_bayar+total;
        printf("\n Total yang harus dibayar sebesar Rp. %d\n", total);
    }

    else if (pilihan == 6)
    {
        printf("\n\t    Masker N95\n");
        printf("\n Masukkan Jumlah Pembelian Masker : ");
        scanf("%d", &jumlah);
        total = jumlah * 1800;
        total_bayar=total_bayar+total;
        printf("\n Total yang harus dibayar sebesar Rp. %d\n", total);
    }

    else if (pilihan > 6)
    {
        printf("\n Menu item tidak ditemukan silahkan coba kembali \n");
    }

    int pilih1;
        printf("\n\n Tambah item? 1 (YA) / 2 (TIDAK) : ");
        scanf("%d",&pilih1);

    if(pilih1 == 1 )
    {
    goto ulang;
    }

    else if (pilih1 == 2)
    {
        char nama[50],alamat[100],no_telpon[15],kodepos[10];
        int ongkir=10000;
        getchar();
        printf  ("\n Total Harga Yang Harus di bayar : Rp %d\n",total_bayar);

        printf  ("\n\n=====================================================\n\n");
        printf  ("------------------DATA PENGIRIMAN--------------------\n\n");
        printf  ("=====================================================\n");
        printf  ("\n Nama          : ");gets  (nama);
        printf  ("\n Alamat        : ");gets  (alamat);
        printf  ("\n Nomor Telepon : ");gets  (no_telpon);
        printf  ("\n Kode Pos      : ");gets  (kodepos);

        printf  ("\n=====================================================\n\n");
        printf  ("--------------STRUK BUKTI PEMBELIAN------------------\n\n");
        printf  ("=====================================================\n");
        printf  ("\n Nama Penerima             : %s\n", nama);
        printf  ("\n Alamat Penerima           : %s\n", alamat);
        printf  ("\n Nomor Telepon Penerima    : %s\n", no_telpon);
        printf  ("\n Kode Pos Penerima         : %s\n", kodepos);
        printf  ("\n Ongkir Wilayah Jawa       : %d\n", ongkir);
        printf  ("\n Total Biaya Keseluruhan   : %d\n", total_bayar+ongkir);
   }
return 0;
}
