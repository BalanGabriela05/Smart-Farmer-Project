#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;
using namespace sf;
int v[61];
struct pozitiiPiese { int apa1, apa2, apa3, cal1, cal2, oaie1, oaie2, porc1, porc2, vaca1, vaca2; } pozitie;
struct rezolvareNivel { bool existaInRezolvare, filledByPlayer; };
rezolvareNivel arie_tabla_12, arie_tabla_13, arie_tabla_14, arie_tabla_21, arie_tabla_221, arie_tabla_222, arie_tabla_223, arie_tabla_224, arie_tabla_231, arie_tabla_232;
rezolvareNivel arie_tabla_233, arie_tabla_234, arie_tabla_241, arie_tabla_242, arie_tabla_243, arie_tabla_244, arie_tabla_25, arie_tabla_31, arie_tabla_321, arie_tabla_322;
rezolvareNivel arie_tabla_323, arie_tabla_324, arie_tabla_331, arie_tabla_332, arie_tabla_333, arie_tabla_334, arie_tabla_341, arie_tabla_342, arie_tabla_343, arie_tabla_344;
rezolvareNivel arie_tabla_35, arie_tabla_42, arie_tabla_43, arie_tabla_44;
struct variabileGarduri { bool selectare, mousePressedOnce, alteVersiuni, preview, afisare, completat; };
variabileGarduri Gard_Lss, Gard_Lsj, Gard_Lds, Gard_Ldj, Gard_mareO, Gard_mareV, Gard_micO, Gard_micV;
Music background_sound;
Font FONTUL;
Color culoare_fundal = Color(1, 155, 180);
Color culoare_text = Color(237, 139, 32);
Texture btn_start,btn_reguli,btn_iesire,btn_inapoi,btn_restart,fundal,btn_nivelurm;
Texture butonstarter,butonmaster,butonjunior,butonexpert,Lvl1,Lvl2,Lvl3,Lvl4,Lvl5,Lvl6,Lvl7,Lvl8,Lvl9,Lvl10,Lvl11,Lvl12,Lvl13,Lvl14,Lvl15,Lvl16,Lvl17,Lvl18,Lvl19,Lvl20;
Texture Lvl21,Lvl22,Lvl23,Lvl24,Lvl25,Lvl26,Lvl27,Lvl28,Lvl29,Lvl30,Lvl31,Lvl32,Lvl33,Lvl34,Lvl35,Lvl36,Lvl37,Lvl38,Lvl39,Lvl40,Lvl41,Lvl42,Lvl43,Lvl44,Lvl45,Lvl46,Lvl47,Lvl48,Lvl49;
Texture Lvl50,Lvl51,Lvl52,Lvl53,Lvl54,Lvl55,Lvl56,Lvl57,Lvl58,Lvl59,Lvl60;
Texture btn_gardLSS,btn_gardLSJ,btn_gardLDS,btn_gardLDJ,btn_gardMareO,btn_gardMareV,btn_gardMicO,btn_gardMicV,gardLSS,gardLSJ,gardLDS,gardLDJ,gardMareO,gardMareV,gardMicO,gardMicV;
Texture gardLss_estompat, gardLsj_estompat, gardLds_estompat, gardLdj_estompat, gardmareO_estompat, gardmareV_estompat, gardmicO_estompat, gardmicV_estompat;
Texture tabla,porc_1,porc_2,vaca_1,vaca_2,oaie_1,oaie_2,cal_1,cal_2,apa;
Texture regula1,regula2,regula3,regula4,mute,unmute;

Sprite apa1, apa2, apa3, cal1, cal2, oaie1, oaie2, porc1, porc2, vaca1, vaca2,
       buton_GardLss, buton_GardLsj, buton_GardLds, buton_GardLdj, buton_GardmareO, buton_GardmareV, buton_GardmicO, buton_GardmicV,
       GardLss_estompat, GardLsj_estompat, GardLds_estompat, GardLdj_estompat, GardmareO_estompat, GardmareV_estompat, GardmicO_estompat, GardmicV_estompat,
       GardLss, GardLsj, GardLds, GardLdj, GardmareO, GardmareV, GardmicO, GardmicV;
Texture imglacat;
      Sprite lacat2,lacat3,lacat4,lacat5,lacat6,lacat7,lacat8,lacat9,lacat10,lacat11,lacat12,lacat13,lacat14,lacat15,lacat16,lacat17,lacat18,lacat19,lacat20,lacat21,lacat22,lacat23,lacat24,lacat25,lacat26,lacat27,lacat28,lacat29;
      Sprite lacat30,lacat31,lacat32,lacat33,lacat34,lacat35,lacat36,lacat37,lacat38,lacat39,lacat40,lacat41,lacat42,lacat43,lacat44,lacat45,lacat46,lacat47,lacat48,lacat49,lacat50,lacat51,lacat52,lacat53,lacat54,lacat55,lacat56;
      Sprite lacat57,lacat58,lacat59,lacat60;
void SetareTexture()
{   if (!fundal.loadFromFile("fundal.png")) { cout << "Eroare: fisierul fundal.png nu a putut fi deschis"; }
    if (!tabla.loadFromFile("tabla.png")) { cout << "Eroare: fisierul tabla.png nu a putut fi deschis"; }
    if (!btn_start.loadFromFile("btn_start.png")) { cout << "Eroare: fisierul btn_start.png nu a putut fi deschis"; }
    if (!btn_reguli.loadFromFile("btn_reguli.png")) { cout << "Eroare: fisierul btn_reguli.png nu a putut fi deschis"; }
    if (!btn_iesire.loadFromFile("btn_iesire.png")) { cout << "Eroare: fisierul btn_iesire.png nu a putut fi deschis"; }
    if (!btn_inapoi.loadFromFile("btn_inapoi.png")) { cout << "Eroare: fisierul btn_inapoi.png nu a putut fi deschis"; }
    if (!btn_restart.loadFromFile("btn_restart.png")) { cout << "Eroare: fisierul btn_restart.png nu a putut fi deschis"; }
    if (!btn_gardLSS.loadFromFile("btn_gardLSS.png")) { cout << "Eroare: fisierul btn_gardLSS.png nu a putut fi deschis"; }
    if (!btn_gardLSJ.loadFromFile("btn_gardLSJ.png")) { cout << "Eroare: fisierul btn_gardLSJ.png nu a putut fi deschis"; }
    if (!btn_gardLDS.loadFromFile("btn_gardLDS.png")) { cout << "Eroare: fisierul btn_gardLDS.png nu a putut fi deschis"; }
    if (!btn_gardLDJ.loadFromFile("btn_gardLDJ.png")) { cout << "Eroare: fisierul btn_gardLDJ.png nu a putut fi deschis"; }
    if (!btn_gardMareO.loadFromFile("btn_gardMareO.png")) { cout << "Eroare: fisierul btn_gardMareO.png nu a putut fi deschis"; }
    if (!btn_gardMareV.loadFromFile("btn_gardMareV.png")) { cout << "Eroare: fisierul btn_gardMareV.png nu a putut fi deschis"; }
    if (!btn_gardMicO.loadFromFile("btn_gardMicO.png")) { cout << "Eroare: fisierul btn_gardMicO.png nu a putut fi deschis"; }
    if (!apa.loadFromFile("apa.png")) { cout << "Error: Could not open apa.png file"; }
    if (!btn_gardMicV.loadFromFile("btn_gardMicV.png")) { cout << "Eroare: fisierul btn_gardMicV.png nu a putut fi deschis"; }
    if (!porc_1.loadFromFile("porc1.png")) { cout << "Eroare: fisierul porc1.png nu a putut fi deschis"; }
    if (!porc_2.loadFromFile("porc2.png")) { cout << "Eroare: fisierul porc2.png nu a putut fi deschis"; }
    if (!vaca_1.loadFromFile("vaca1.png")) { cout << "Eroare: fisierul vaca1.png nu a putut fi deschis"; }
    if (!vaca_2.loadFromFile("vaca2.png")) { cout << "Eroare: fisierul vaca2.png nu a putut fi deschis"; }
    if (!oaie_1.loadFromFile("oaie1.png")) { cout << "Eroare: fisierul oaie1.png nu a putut fi deschis"; }
    if (!oaie_2.loadFromFile("oaie2.png")) { cout << "Eroare: fisierul oaie2.png nu a putut fi deschis"; }
    if (!cal_1.loadFromFile("cal1.png")) { cout << "Eroare: fisierul cal1.png nu a putut fi deschis"; }
    if (!cal_2.loadFromFile("cal2.png")) { cout << "Eroare: fisierul cal2.png nu a putut fi deschis"; }
    if (!butonexpert.loadFromFile("butonexpert.png")) { cout << "Error: Could not open butonexpert.png file"; }
    if (!butonjunior.loadFromFile("butonjunior.png")) { cout << "Error: Could not open butonjunior.png file"; }
    if (!butonmaster.loadFromFile("butonmaster.png")) { cout << "Error: Could not open butonmaster.png file"; }
    if (!butonstarter.loadFromFile("butonstarter.png")) { cout << "Error: Could not open butonstarter.png file"; }
    if (!Lvl1.loadFromFile("Lvl1.png")) { cout << "Eroare: fisierul Lvl1.png nu a putut fi deschis"; }
    if (!Lvl2.loadFromFile("Lvl2.png")) { cout << "Error: Could not open Lvl2.png file"; }
    if (!Lvl3.loadFromFile("Lvl3.png")) { cout << "Error: Could not open Lvl3.png file"; }
    if (!Lvl4.loadFromFile("Lvl4.png")) { cout << "Error: Could not open Lvl4.png file"; }
    if (!Lvl5.loadFromFile("Lvl5.png")) { cout << "Error: Could not open Lvl5.png file"; }
    if (!Lvl6.loadFromFile("Lvl6.png")) { cout << "Error: Could not open Lvl6.png file"; }
    if (!Lvl7.loadFromFile("Lvl7.png")) { cout << "Error: Could not open Lvl7.png file"; }
    if (!Lvl8.loadFromFile("Lvl8.png")) { cout << "Error: Could not open Lvl8.png file"; }
    if (!Lvl9.loadFromFile("Lvl9.png")) { cout << "Error: Could not open Lvl9.png file"; }
    if (!Lvl10.loadFromFile("Lvl10.png")) { cout << "Error: Could not open Lvl10.png file"; }
    if (!Lvl11.loadFromFile("Lvl11.png")) { cout << "Error: Could not open Lvl11.png file"; }
    if (!Lvl12.loadFromFile("Lvl12.png")) { cout << "Error: Could not open Lvl12.png file"; }
    if (!Lvl13.loadFromFile("Lvl13.png")) { cout << "Error: Could not open Lvl13.png file"; }
    if (!Lvl14.loadFromFile("Lvl14.png")) { cout << "Error: Could not open Lvl14.png file"; }
    if (!Lvl15.loadFromFile("Lvl15.png")) { cout << "Error: Could not open Lvl15.png file"; }
    if (!Lvl16.loadFromFile("Lvl16.png")) { cout << "Error: Could not open Lvl16.png file"; }
    if (!Lvl17.loadFromFile("Lvl17.png")) { cout << "Error: Could not open Lvl17.png file"; }
    if (!Lvl18.loadFromFile("Lvl18.png")) { cout << "Error: Could not open Lvl18.png file"; }
    if (!Lvl19.loadFromFile("Lvl19.png")) { cout << "Error: Could not open Lvl19.png file"; }
    if (!Lvl20.loadFromFile("Lvl20.png")) { cout << "Error: Could not open Lvl20.png file"; }
    if (!Lvl21.loadFromFile("Lvl21.png")) { cout << "Error: Could not open Lvl21.png file"; }
    if (!Lvl22.loadFromFile("Lvl22.png")) { cout << "Error: Could not open Lvl22.png file"; }
    if (!Lvl23.loadFromFile("Lvl23.png")) { cout << "Error: Could not open Lvl23.png file"; }
    if (!Lvl24.loadFromFile("Lvl24.png")) { cout << "Error: Could not open Lvl24.png file"; }
    if (!Lvl25.loadFromFile("Lvl25.png")) { cout << "Error: Could not open Lvl25.png file"; }
    if (!Lvl26.loadFromFile("Lvl26.png")) { cout << "Error: Could not open Lvl26.png file"; }
    if (!Lvl27.loadFromFile("Lvl27.png")) { cout << "Error: Could not open Lvl27.png file"; }
    if (!Lvl28.loadFromFile("Lvl28.png")) { cout << "Error: Could not open Lvl28.png file"; }
    if (!Lvl29.loadFromFile("Lvl29.png")) { cout << "Error: Could not open Lvl29.png file"; }
    if (!Lvl30.loadFromFile("Lvl30.png")) { cout << "Error: Could not open Lvl30.png file"; }
    if (!Lvl31.loadFromFile("Lvl31.png")) { cout << "Error: Could not open Lvl31.png file"; }
    if (!Lvl32.loadFromFile("Lvl32.png")) { cout << "Error: Could not open Lvl32.png file"; }
    if (!Lvl33.loadFromFile("Lvl33.png")) { cout << "Error: Could not open Lvl33.png file"; }
    if (!Lvl34.loadFromFile("Lvl34.png")) { cout << "Error: Could not open Lvl34.png file"; }
    if (!Lvl35.loadFromFile("Lvl35.png")) { cout << "Error: Could not open Lvl35.png file"; }
    if (!Lvl36.loadFromFile("Lvl36.png")) { cout << "Error: Could not open Lvl36.png file"; }
    if (!Lvl37.loadFromFile("Lvl37.png")) { cout << "Error: Could not open Lvl37.png file"; }
    if (!Lvl38.loadFromFile("Lvl38.png")) { cout << "Error: Could not open Lvl38.png file"; }
    if (!Lvl39.loadFromFile("Lvl39.png")) { cout << "Error: Could not open Lvl39.png file"; }
    if (!Lvl40.loadFromFile("Lvl40.png")) { cout << "Error: Could not open Lvl40.png file"; }
    if (!Lvl41.loadFromFile("Lvl41.png")) { cout << "Error: Could not open Lvl41.png file"; }
    if (!Lvl42.loadFromFile("Lvl42.png")) { cout << "Error: Could not open Lvl42.png file"; }
    if (!Lvl43.loadFromFile("Lvl43.png")) { cout << "Error: Could not open Lvl43.png file"; }
    if (!Lvl44.loadFromFile("Lvl44.png")) { cout << "Error: Could not open Lvl44.png file"; }
    if (!Lvl45.loadFromFile("Lvl45.png")) { cout << "Error: Could not open Lvl45.png file"; }
    if (!Lvl46.loadFromFile("Lvl46.png")) { cout << "Error: Could not open Lvl46.png file"; }
    if (!Lvl47.loadFromFile("Lvl47.png")) { cout << "Error: Could not open Lvl47.png file"; }
    if (!Lvl48.loadFromFile("Lvl48.png")) { cout << "Error: Could not open Lvl48.png file"; }
    if (!Lvl49.loadFromFile("Lvl49.png")) { cout << "Error: Could not open Lvl49.png file"; }
    if (!Lvl50.loadFromFile("Lvl50.png")) { cout << "Error: Could not open Lvl50.png file"; }
    if (!Lvl51.loadFromFile("Lvl51.png")) { cout << "Error: Could not open Lvl51.png file"; }
    if (!Lvl52.loadFromFile("Lvl52.png")) { cout << "Error: Could not open Lvl52.png file"; }
    if (!Lvl53.loadFromFile("Lvl53.png")) { cout << "Error: Could not open Lvl53.png file"; }
    if (!Lvl54.loadFromFile("Lvl54.png")) { cout << "Error: Could not open Lvl54.png file"; }
    if (!Lvl55.loadFromFile("Lvl55.png")) { cout << "Error: Could not open Lvl55.png file"; }
    if (!Lvl56.loadFromFile("Lvl56.png")) { cout << "Error: Could not open Lvl56.png file"; }
    if (!Lvl57.loadFromFile("Lvl57.png")) { cout << "Error: Could not open Lvl57.png file"; }
    if (!Lvl58.loadFromFile("Lvl58.png")) { cout << "Error: Could not open Lvl58.png file"; }
    if (!Lvl59.loadFromFile("Lvl59.png")) { cout << "Error: Could not open Lvl59.png file"; }
    if (!Lvl60.loadFromFile("Lvl60.png")) { cout << "Error: Could not open Lvl60.png file"; }
    if (!imglacat.loadFromFile("lacat.png")) { cout << "Error: Could not open lacat.png file"; }
    if (!regula1.loadFromFile("regula1.png")) { cout << "Eroare: fisierul regula1.png nu a putut fi deschis"; }
    if (!regula2.loadFromFile("regula2.png")) { cout << "Eroare: fisierul regula2.png nu a putut fi deschis"; }
    if (!regula3.loadFromFile("regula3.png")) { cout << "Eroare: fisierul regula3.png nu a putut fi deschis"; }
    if (!regula4.loadFromFile("regula4.png")) { cout << "Eroare: fisierul regula4.png nu a putut fi deschis"; }
    if (!btn_nivelurm.loadFromFile("btn_nivelurm.png")) { cout << "Eroare: fisierul btn_nivelurm.png nu a putut fi deschis"; }
    if (!gardLss_estompat.loadFromFile("gardLss_estompat.png")) { cout << "Eroare: fisierul gardLss_estompat.png nu a putut fi deschis"; }
    if (!gardLsj_estompat.loadFromFile("gardLsj_estompat.png")) { cout << "Eroare: fisierul gardLsj_estompat.png nu a putut fi deschis"; }
    if (!gardLds_estompat.loadFromFile("gardLds_estompat.png")) { cout << "Eroare: fisierul gardLds_estompat.png nu a putut fi deschis"; }
    if (!gardLdj_estompat.loadFromFile("gardLdj_estompat.png")) { cout << "Eroare: fisierul gardLdj_estompat.png nu a putut fi deschis"; }
    if (!gardmareO_estompat.loadFromFile("gardmareO_estompat.png")) { cout << "Eroare: fisierul gardmareO_estompat.png nu a putut fi deschis"; }
    if (!gardmareV_estompat.loadFromFile("gardmareV_estompat.png")) { cout << "Eroare: fisierul gardmareV_estompat.png nu a putut fi deschis"; }
    if (!gardmicO_estompat.loadFromFile("gardmicO_estompat.png")) { cout << "Eroare: fisierul gardmicO_estompat.png nu a putut fi deschis"; }
    if (!gardmicV_estompat.loadFromFile("gardmicV_estompat.png")) { cout << "Eroare: fisierul gardmicV_estompat.png nu a putut fi deschis"; }
    if (!unmute.loadFromFile("Unmute.png")) { cout << "Eroare: fisierul Unmute.png nu a putut fi deschis"; }
    if (!mute.loadFromFile("Mute.png")) { cout << "Eroare: fisierul Mute.png nu a putut fi deschis"; }
}

void openFonts()
{
    if (!FONTUL.loadFromFile("FONTUL.ttf")) { cout << "Error: Could not open FONTUL font file"; }
}

void openSounds()
{
    if (!background_sound.openFromFile("background_sound.ogg")) { cout << "Error: Could not open background_sound.ogg file"; }

}

void creareMatriceVaci(unsigned int a[5][5])
{
    a[1][1] = 340150;
    a[1][2] = 500150;
    a[1][3] = 665150;
    a[1][4] = 830150;
    a[2][1] = 340310;
    a[2][2] = 500305;
    a[2][3] = 665305;
    a[2][4] = 830300;
    a[3][1] = 330470;
    a[3][2] = 500470;
    a[3][3] = 665480;
    a[3][4] = 820470;
}
void creareMatriceOi(unsigned int a[5][5])
{
    a[1][1] = 340140;
    a[1][2] = 500140;
    a[1][3] = 670140;
    a[1][4] = 830140;
    a[2][1] = 340310;
    a[2][2] = 500310;
    a[2][3] = 670310;
    a[2][4] = 830310;
    a[3][1] = 340480;
    a[3][2] = 500480;
    a[3][3] = 670485;
    a[3][4] = 830490;
}
void creareMatriceCai(unsigned int a[5][5])
{
    a[1][1] = 350130;
    a[1][2] = 510130;
    a[1][3] = 680130;
    a[1][4] = 845135;
    a[2][1] = 350300;
    a[2][2] = 510300;
    a[2][3] = 680300;
    a[2][4] = 845310;
    a[3][1] = 350470;
    a[3][2] = 510470;
    a[3][3] = 682470;
    a[3][4] = 845470;
}
void creareMatricePorci(unsigned int a[5][5])
{
    a[1][1] = 345140;
    a[1][2] = 500140;
    a[1][3] = 680140;
    a[1][4] = 830140;
    a[2][1] = 345310;
    a[2][2] = 500310;
    a[2][3] = 680310;
    a[2][4] = 830310;
    a[3][1] = 345490;
    a[3][2] = 500490;
    a[3][3] = 680480;
    a[3][4] = 830480;
}
void creareMatriceApa(unsigned int a[5][5])
{
    a[1][1] = 325150;
    a[1][2] = 485150;
    a[1][3] = 655150;
    a[1][4] = 815150;
    a[2][1] = 325320;
    a[2][2] = 485320;
    a[2][3] = 655320;
    a[2][4] = 815320;
    a[3][1] = 325500;
    a[3][2] = 485500;
    a[3][3] = 655500;
    a[3][4] = 815500;
}
void getPozitiePieseNivel(unsigned int nivel)
 {
     FILE* pozPiese;
    pozPiese=fopen( "pozPiese.txt", "r");
    unsigned int line_count=1;
    if (pozPiese != NULL)
    {
        char line[33];
        do
        {
            if (line_count ==nivel)
            {
                fscanf(pozPiese, "%d", &pozitie.cal1);
                fscanf(pozPiese, "%d", &pozitie.cal2);
                fscanf(pozPiese, "%d", &pozitie.porc1);
                fscanf(pozPiese, "%d", &pozitie.porc2);
                fscanf(pozPiese, "%d", &pozitie.vaca1);
                fscanf(pozPiese, "%d", &pozitie.vaca2);
                fscanf(pozPiese, "%d", &pozitie.oaie1);
                fscanf(pozPiese, "%d", &pozitie.oaie2);
                fscanf(pozPiese, "%d", &pozitie.apa1);
                fscanf(pozPiese, "%d", &pozitie.apa2);
                fscanf(pozPiese, "%d", &pozitie.apa3);
                fclose(pozPiese);
            }
            line_count++;
        }while (fgets(line, sizeof line, pozPiese) != NULL);
    }
    fclose(pozPiese);

 }

 void getRezolvareNivel(unsigned int nivel)
{
    FILE* rezolvareNivele;
    rezolvareNivele= fopen( "rezolvareNivele.txt", "r");
    unsigned int line_count = 1;
    if (rezolvareNivele != NULL)
    {
        char line[100];
        do
        {
            if (line_count == nivel)
            {
                unsigned int num_arie;
               do
                {
                    fscanf(rezolvareNivele, "%d", &num_arie);
                   if (num_arie==12) arie_tabla_12.existaInRezolvare = true;
                    if (num_arie==13) arie_tabla_13.existaInRezolvare = true;
                    if (num_arie==14) arie_tabla_14.existaInRezolvare = true;
                    if (num_arie==21) arie_tabla_21.existaInRezolvare = true;
                    if (num_arie==221) arie_tabla_221.existaInRezolvare = true;
                    if (num_arie==222) arie_tabla_222.existaInRezolvare = true;
                    if (num_arie==223) arie_tabla_223.existaInRezolvare = true;
                    if (num_arie==224) arie_tabla_224.existaInRezolvare = true;
                    if (num_arie==231) arie_tabla_231.existaInRezolvare = true;
                    if (num_arie==232) arie_tabla_232.existaInRezolvare = true;
                    if (num_arie==233) arie_tabla_233.existaInRezolvare = true;
                    if (num_arie==234) arie_tabla_234.existaInRezolvare = true;
                    if (num_arie==241) arie_tabla_241.existaInRezolvare = true;
                    if (num_arie==242) arie_tabla_242.existaInRezolvare = true;
                    if (num_arie==243) arie_tabla_243.existaInRezolvare = true;
                    if (num_arie==244) arie_tabla_244.existaInRezolvare = true;
                    if (num_arie==25) arie_tabla_25.existaInRezolvare = true;
                    if (num_arie==31) arie_tabla_31.existaInRezolvare = true;
                    if (num_arie==321) arie_tabla_321.existaInRezolvare = true;
                    if (num_arie==322) arie_tabla_322.existaInRezolvare = true;
                    if (num_arie==323) arie_tabla_323.existaInRezolvare = true;
                    if (num_arie==324) arie_tabla_324.existaInRezolvare = true;
                    if (num_arie==331) arie_tabla_331.existaInRezolvare = true;
                    if (num_arie==332) arie_tabla_332.existaInRezolvare = true;
                    if (num_arie==333) arie_tabla_333.existaInRezolvare = true;
                    if (num_arie==334) arie_tabla_334.existaInRezolvare = true;
                    if (num_arie==341) arie_tabla_341.existaInRezolvare = true;
                    if (num_arie==342) arie_tabla_342.existaInRezolvare = true;
                    if (num_arie==343) arie_tabla_343.existaInRezolvare = true;
                    if (num_arie==344) arie_tabla_344.existaInRezolvare = true;
                    if (num_arie==35) arie_tabla_35.existaInRezolvare = true;
                    if (num_arie==42) arie_tabla_42.existaInRezolvare = true;
                    if (num_arie==43) arie_tabla_43.existaInRezolvare = true;
                    if (num_arie==44) arie_tabla_44.existaInRezolvare = true;

                } while (num_arie != 0);
                fclose(rezolvareNivele);
            }
            line_count++;
        } while (fgets(line, sizeof line, rezolvareNivele) != NULL);
    }
        fclose(rezolvareNivele);

}
 void openFiles(unsigned int nivel)
{
    getPozitiePieseNivel(nivel);
     getRezolvareNivel(nivel);
}

void DeschiderePaginaNivele(int *v);

void DeschiderePagina_Nivel(unsigned int nivel,int *v)
{
    RenderWindow Joc(VideoMode(1400, 700), "Smart Farmer", Style::None);
    Joc.setPosition(sf::Vector2i(300, 200));
    openFiles(nivel);

    Text titlu; titlu.setFont(FONTUL); titlu.setString("Smart Farmer"); titlu.setCharacterSize(70); titlu.setFillColor(Color(237, 139, 32));
    titlu.setPosition( 10.f, 2.f);titlu.setOutlineThickness(5);titlu.setOutlineColor(Color(0,0,0));
    Text textnivel; textnivel.setFont(FONTUL); textnivel.setString("Nivel: "); textnivel.setCharacterSize(30); textnivel.setFillColor(Color(237, 139, 32)); textnivel.setPosition(10.f, 80.f);
    Sprite fundalul;  fundalul.setTexture(fundal);
    textnivel.setOutlineThickness(5);textnivel.setOutlineColor(Color(0,0,0));

    //setari
    Sprite Restart; Restart.setTexture(btn_restart); Restart.setPosition(8.f, 642.f);
    Sprite Iesire; Iesire.setTexture(btn_iesire); Iesire.setPosition(1345.f, 8.f);
    Sprite tabla_de_joc; tabla_de_joc.setTexture(tabla); tabla_de_joc.setPosition(300.f, 100.f);

        cal1.setTexture(cal_1);
        cal2.setTexture(cal_2);
        porc1.setTexture(porc_1);
        porc2.setTexture(porc_2);
        vaca1.setTexture(vaca_1);
        vaca2.setTexture(vaca_2);
        oaie1.setTexture(oaie_1);
        oaie2.setTexture(oaie_2);
        apa1.setTexture(apa);
        apa2.setTexture(apa);
        apa3.setTexture(apa);

    cal_1.setSmooth(true);
    cal_2.setSmooth(true);
    porc_1.setSmooth(true);
    porc_2.setSmooth(true);
    vaca_1.setSmooth(true);
    vaca_2.setSmooth(true);
    oaie_1.setSmooth(true);
    oaie_2.setSmooth(true);
    apa.setSmooth(true);
//butoane garduri
    Sprite buton_gardLSS; buton_gardLSS.setTexture(btn_gardLSS); buton_gardLSS.setPosition(1050.f, 100.f);
    Sprite buton_gardLSJ; buton_gardLSJ.setTexture(btn_gardLSJ); buton_gardLSJ.setPosition(1150.f, 335.f);
    Sprite buton_gardLDS; buton_gardLDS.setTexture(btn_gardLDS); buton_gardLDS.setPosition(1080.f, 360.f);
    Sprite buton_gardLDJ; buton_gardLDJ.setTexture(btn_gardLDJ); buton_gardLDJ.setPosition(1040.f, 140.f);
    Sprite buton_gardmareO; buton_gardmareO.setTexture(btn_gardMareO); buton_gardmareO.setPosition(400.f, 671.f);
    Sprite buton_gardmareV; buton_gardmareV.setTexture(btn_gardMareV); buton_gardmareV.setPosition(165.f, 100.f);
    Sprite buton_gardmicO; buton_gardmicO.setTexture(btn_gardMicO); buton_gardmicO.setPosition(400.f, 639.f);
    Sprite buton_gardmicV; buton_gardmicV.setTexture(btn_gardMicV); buton_gardmicV.setPosition(200.f, 100.f);

    //garduri - preview
    Sprite GardLss_estompat; GardLss_estompat.setTexture(gardLss_estompat);
    Sprite GardLsj_estompat; GardLsj_estompat.setTexture(gardLsj_estompat);
    Sprite GardLds_estompat; GardLds_estompat.setTexture(gardLds_estompat);
    Sprite GardLdj_estompat; GardLdj_estompat.setTexture(gardLdj_estompat);
    Sprite GardmareO_estompat; GardmareO_estompat.setTexture(gardmareO_estompat);
    Sprite GardmareV_estompat; GardmareV_estompat.setTexture(gardmareV_estompat);
    Sprite GardmicO_estompat; GardmicO_estompat.setTexture(gardmicO_estompat);
    Sprite GardmicV_estompat; GardmicV_estompat.setTexture(gardmicV_estompat);


    //garduri
    Sprite GardLss; GardLss.setTexture(btn_gardLSS);
    Sprite GardLsj; GardLsj.setTexture(btn_gardLSJ);
    Sprite GardLds; GardLds.setTexture(btn_gardLDS);
    Sprite GardLdj; GardLdj.setTexture(btn_gardLDJ);
    Sprite GardmareO; GardmareO.setTexture(btn_gardMareO);
    Sprite GardmareV; GardmareV.setTexture(btn_gardMareV);
    Sprite GardmicO; GardmicO.setTexture(btn_gardMicO);
    Sprite GardmicV; GardmicV.setTexture(btn_gardMicV);

    //bucati mici - 10
    RectangleShape tabla_12(sf::Vector2f(20.f, 30.f)); tabla_12.setOrigin(-472.f, -133.f); tabla_12.setFillColor(Color::Transparent);
    RectangleShape tabla_13(sf::Vector2f(20.f, 30.f)); tabla_13.setOrigin(-637.f, -133.f); tabla_13.setFillColor(Color::Transparent);
    RectangleShape tabla_14(sf::Vector2f(20.f, 30.f)); tabla_14.setOrigin(-802.f, -133.f); tabla_14.setFillColor(Color::Transparent);
    RectangleShape tabla_21(sf::Vector2f(30.f, 20.f)); tabla_21.setOrigin(-330.f, -271.f); tabla_21.setFillColor(Color::Transparent);
    RectangleShape tabla_25(sf::Vector2f(30.f, 20.f)); tabla_25.setOrigin(-930.f, -271.f); tabla_25.setFillColor(Color::Transparent);
    RectangleShape tabla_31(sf::Vector2f(30.f, 20.f)); tabla_31.setOrigin(-330.f, -437.f); tabla_31.setFillColor(Color::Transparent);
    RectangleShape tabla_35(sf::Vector2f(30.f, 20.f)); tabla_35.setOrigin(-930.f, -437.f); tabla_35.setFillColor(Color::Transparent);
    RectangleShape tabla_42(sf::Vector2f(20.f, 30.f)); tabla_42.setOrigin(-472.f, -570.f); tabla_42.setFillColor(Color::Transparent);
    RectangleShape tabla_43(sf::Vector2f(20.f, 30.f)); tabla_43.setOrigin(-637.f, -570.f); tabla_43.setFillColor(Color::Transparent);
    RectangleShape tabla_44(sf::Vector2f(20.f, 30.f)); tabla_44.setOrigin(-802.f, -570.f); tabla_44.setFillColor(Color::Transparent);

    //bucati cruce - 24
    RectangleShape tabla_221(sf::Vector2f(20.f, 40.f)); tabla_221.setOrigin(-472.f, -230.f); tabla_221.setFillColor(Color::Transparent);
    RectangleShape tabla_222(sf::Vector2f(40.f, 20.f)); tabla_222.setOrigin(-442.f, -270.f); tabla_222.setFillColor(Color::Transparent);
    RectangleShape tabla_223(sf::Vector2f(20.f, 40.f)); tabla_223.setOrigin(-472.f, -290.f); tabla_223.setFillColor(Color::Transparent);
    RectangleShape tabla_224(sf::Vector2f(40.f, 20.f)); tabla_224.setOrigin(-482.f, -270.f); tabla_224.setFillColor(Color::Transparent);

    RectangleShape tabla_231(sf::Vector2f(20.f, 40.f)); tabla_231.setOrigin(-637.f, -230.f); tabla_231.setFillColor(Color::Transparent);
    RectangleShape tabla_232(sf::Vector2f(40.f, 20.f)); tabla_232.setOrigin(-607.f, -270.f); tabla_232.setFillColor(Color::Transparent);
    RectangleShape tabla_233(sf::Vector2f(20.f, 40.f)); tabla_233.setOrigin(-637.f, -290.f); tabla_233.setFillColor(Color::Transparent);
    RectangleShape tabla_234(sf::Vector2f(40.f, 20.f)); tabla_234.setOrigin(-647.f, -270.f); tabla_234.setFillColor(Color::Transparent);

    RectangleShape tabla_241(sf::Vector2f(20.f, 40.f)); tabla_241.setOrigin(-802.f, -230.f); tabla_241.setFillColor(Color::Transparent);
    RectangleShape tabla_242(sf::Vector2f(40.f, 20.f)); tabla_242.setOrigin(-772.f, -270.f); tabla_242.setFillColor(Color::Transparent);
    RectangleShape tabla_243(sf::Vector2f(20.f, 40.f)); tabla_243.setOrigin(-802.f, -290.f); tabla_243.setFillColor(Color::Transparent);
    RectangleShape tabla_244(sf::Vector2f(40.f, 20.f)); tabla_244.setOrigin(-812.f, -270.f); tabla_244.setFillColor(Color::Transparent);

    RectangleShape tabla_321(sf::Vector2f(20.f, 40.f)); tabla_321.setOrigin(-472.f, -400.f); tabla_321.setFillColor(Color::Transparent);
    RectangleShape tabla_322(sf::Vector2f(40.f, 20.f)); tabla_322.setOrigin(-442.f, -439.f); tabla_322.setFillColor(Color::Transparent);
    RectangleShape tabla_323(sf::Vector2f(20.f, 40.f)); tabla_323.setOrigin(-472.f, -459.f); tabla_323.setFillColor(Color::Transparent);
    RectangleShape tabla_324(sf::Vector2f(40.f, 20.f)); tabla_324.setOrigin(-482.f, -439.f); tabla_324.setFillColor(Color::Transparent);

    RectangleShape tabla_331(sf::Vector2f(20.f, 40.f)); tabla_331.setOrigin(-637.f, -400.f); tabla_331.setFillColor(Color::Transparent);
    RectangleShape tabla_332(sf::Vector2f(40.f, 20.f)); tabla_332.setOrigin(-607.f, -439.f); tabla_332.setFillColor(Color::Transparent);
    RectangleShape tabla_333(sf::Vector2f(20.f, 40.f)); tabla_333.setOrigin(-637.f, -459.f); tabla_333.setFillColor(Color::Transparent);
    RectangleShape tabla_334(sf::Vector2f(40.f, 20.f)); tabla_334.setOrigin(-647.f, -439.f); tabla_334.setFillColor(Color::Transparent);

    RectangleShape tabla_341(sf::Vector2f(20.f, 40.f)); tabla_341.setOrigin(-802.f, -400.f); tabla_341.setFillColor(Color::Transparent);
    RectangleShape tabla_342(sf::Vector2f(40.f, 20.f)); tabla_342.setOrigin(-772.f, -439.f); tabla_342.setFillColor(Color::Transparent);
    RectangleShape tabla_343(sf::Vector2f(20.f, 40.f)); tabla_343.setOrigin(-802.f, -459.f); tabla_343.setFillColor(Color::Transparent);
    RectangleShape tabla_344(sf::Vector2f(40.f, 20.f)); tabla_344.setOrigin(-812.f, -439.f); tabla_344.setFillColor(Color::Transparent);

    bool arie_tabla_cruce_22 = 0, arie_tabla_cruce_23 = 0, arie_tabla_cruce_24 = 0;
    bool arie_tabla_cruce_32 = 0, arie_tabla_cruce_33 = 0, arie_tabla_cruce_34 = 0;

    while (Joc.isOpen())
    {
        Event Actiune;
        Vector2i PozitieMouse = Mouse::getPosition(Joc);
        Vector2f PozitieMouseFloat(static_cast<float>(PozitieMouse.x), static_cast<float>(PozitieMouse.y));
        while (Joc.pollEvent(Actiune))
        {
            if (Actiune.type == Event::Closed) Joc.close();
            if (Actiune.type == Event::MouseMoved)
            {
                //garduri
                if (Gard_Lss.selectare && !Gard_Lss.completat)//preview GardLss
                {
                    //pozitie efectiva - 21 222 224 232 233 331
                    if ((tabla_21.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_21.filledByPlayer == 0 &&
                        arie_tabla_222.filledByPlayer == 0 &&
                        arie_tabla_224.filledByPlayer == 0 &&
                        arie_tabla_232.filledByPlayer == 0 &&
                        arie_tabla_233.filledByPlayer == 0 &&
                        arie_tabla_331.filledByPlayer == 0 &&
                        arie_tabla_cruce_22 == 0)
                    {
                        Gard_Lss.preview = 1;
                         GardLss_estompat.setPosition(318.f, 265.f);
                    }
                    //pozitie efectiva - 224 232 234 242 243 341
                    else if ((tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_224.filledByPlayer == 0 &&
                        arie_tabla_232.filledByPlayer == 0 &&
                        arie_tabla_234.filledByPlayer == 0 &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_243.filledByPlayer == 0 &&
                        arie_tabla_341.filledByPlayer == 0 &&
                        arie_tabla_cruce_23 == 0)
                    {
                        Gard_Lss.preview = 1;
                        GardLss_estompat.setPosition(482.f, 265.f);
                    }
                    //pozitie efectiva - 31 322 324 332 333 43
                    else if ((tabla_31.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_43.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_31.filledByPlayer == 0 &&
                        arie_tabla_322.filledByPlayer == 0 &&
                        arie_tabla_324.filledByPlayer == 0 &&
                        arie_tabla_332.filledByPlayer == 0 &&
                        arie_tabla_333.filledByPlayer == 0 &&
                        arie_tabla_43.filledByPlayer == 0 &&
                        arie_tabla_cruce_32 == 0)
                    {
                        Gard_Lss.preview = 1;
                        GardLss_estompat.setPosition(318.f, 428.f);
                    }
                    //pozitie efectiva - 324 332 334 342 343 44
                    else if ((tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_44.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_324.filledByPlayer == 0 &&
                        arie_tabla_332.filledByPlayer == 0 &&
                        arie_tabla_334.filledByPlayer == 0 &&
                        arie_tabla_342.filledByPlayer == 0 &&
                        arie_tabla_343.filledByPlayer == 0 &&
                        arie_tabla_44.filledByPlayer == 0 &&
                        arie_tabla_cruce_33 == 0)
                    {
                        Gard_Lss.preview = 1;
                        GardLss_estompat.setPosition(482.f, 428.f);
                    }
                    else Gard_Lss.preview = 0;
                }

           if (Gard_Lsj.selectare && !Gard_Lsj.completat)//preview GardLsj
                {
                    //pozitie efectiva - 12 221 223 321 322 31
                    if ((tabla_12.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_31.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_12.filledByPlayer == 0 &&
                        arie_tabla_221.filledByPlayer == 0 &&
                        arie_tabla_223.filledByPlayer == 0 &&
                        arie_tabla_321.filledByPlayer == 0 &&
                        arie_tabla_322.filledByPlayer == 0 &&
                        arie_tabla_31.filledByPlayer == 0 &&
                        arie_tabla_cruce_22 == 0)
                    {
                        Gard_Lsj.preview = 1;
                        GardLsj_estompat.setPosition(324.f, 124.f);
                    }
                    //pozitie efectiva - 13 231 233 331 332 32
                    else if ((tabla_13.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_13.filledByPlayer == 0 &&
                        arie_tabla_231.filledByPlayer == 0 &&
                        arie_tabla_233.filledByPlayer == 0 &&
                        arie_tabla_332.filledByPlayer == 0 &&
                        arie_tabla_324.filledByPlayer == 0 &&
                        arie_tabla_cruce_23 == 0)
                    {
                        Gard_Lsj.preview = 1;
                        GardLsj_estompat.setPosition(489.f, 124.f);
                    }
                    //pozitie efectiva - 14 241 243 341 342 334
                    else if ((tabla_14.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_14.filledByPlayer == 0 &&
                        arie_tabla_241.filledByPlayer == 0 &&
                        arie_tabla_243.filledByPlayer == 0 &&
                        arie_tabla_341.filledByPlayer == 0 &&
                        arie_tabla_342.filledByPlayer == 0 &&
                        arie_tabla_334.filledByPlayer == 0 &&
                        arie_tabla_cruce_24 == 0)
                    {
                        Gard_Lsj.preview = 1;
                        GardLsj_estompat.setPosition(654.f, 124.f);
                    }
                    else Gard_Lsj.preview = 0;
                }
                if (Gard_Lds.selectare && !Gard_Lds.completat)//preview GardLds
                {
                    //pozitie efectiva - 25 244 243 341 343 44
                    if ((tabla_25.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_44.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_25.filledByPlayer == 0 &&
                        arie_tabla_244.filledByPlayer == 0 &&
                        arie_tabla_243.filledByPlayer == 0 &&
                        arie_tabla_341.filledByPlayer == 0 &&
                        arie_tabla_343.filledByPlayer == 0 &&
                        arie_tabla_44.filledByPlayer == 0 &&
                        arie_tabla_cruce_34 == 0)
                    {
                        Gard_Lds.preview = 1;
                        GardLds_estompat.setPosition(793.f, 267.f);
                    }
                    //pozitie efectiva - 242 234 233 331 333 43
                    else if ((tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_43.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_234.filledByPlayer == 0 &&
                        arie_tabla_233.filledByPlayer == 0 &&
                        arie_tabla_331.filledByPlayer == 0 &&
                        arie_tabla_333.filledByPlayer == 0 &&
                        arie_tabla_43.filledByPlayer == 0 &&
                        arie_tabla_cruce_33 == 0)
                    {
                        Gard_Lds.preview = 1;
                        GardLds_estompat.setPosition(628.f, 267.f);
                    }
                    //pozitie efectiva - 232 224 223 321 323 42
                    else if((tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_42.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_232.filledByPlayer == 0 &&
                        arie_tabla_224.filledByPlayer == 0 &&
                        arie_tabla_223.filledByPlayer == 0 &&
                        arie_tabla_321.filledByPlayer == 0 &&
                        arie_tabla_323.filledByPlayer == 0 &&
                        arie_tabla_42.filledByPlayer == 0 &&
                        arie_tabla_cruce_32 == 0)
                    {
                        Gard_Lds.preview = 1;
                        GardLds_estompat.setPosition(463.f, 267.f);
                    }
                    else Gard_Lds.preview = 0;
                }
                if (Gard_Ldj.selectare && !Gard_Ldj.completat)//preview GardLdj
                {
                    //pozitie efectiva - 12 221 224 232 234 242
                    if ((tabla_12.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_12.filledByPlayer == 0 &&
                        arie_tabla_221.filledByPlayer == 0 &&
                        arie_tabla_224.filledByPlayer == 0 &&
                        arie_tabla_232.filledByPlayer == 0 &&
                        arie_tabla_234.filledByPlayer == 0 &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_cruce_23 == 0)
                    {
                        Gard_Ldj.preview = 1;
                        GardLdj_estompat.setPosition(466.f, 123.f);
                    }
                    //pozitie efectiva - 13 231 234 242 244 25
                    else if ((tabla_13.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_25.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_13.filledByPlayer == 0 &&
                        arie_tabla_231.filledByPlayer == 0 &&
                        arie_tabla_234.filledByPlayer == 0 &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_244.filledByPlayer == 0 &&
                        arie_tabla_25.filledByPlayer == 0 &&
                        arie_tabla_cruce_24 == 0)
                    {
                        Gard_Ldj.preview = 1;
                        GardLdj_estompat.setPosition(631.f, 123.f);
                    }
                    //pozitie efectiva - 223 321 324 332 334 342
                    else if ((tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_223.filledByPlayer == 0 &&
                        arie_tabla_321.filledByPlayer == 0 &&
                        arie_tabla_324.filledByPlayer == 0 &&
                        arie_tabla_332.filledByPlayer == 0 &&
                        arie_tabla_334.filledByPlayer == 0 &&
                        arie_tabla_342.filledByPlayer == 0 &&
                        arie_tabla_cruce_33 == 0)
                    {
                        Gard_Ldj.preview = 1;
                        GardLdj_estompat.setPosition(466.f, 287.f);
                    }
                    //pozitie efectiva - 233 331 334 342 344 35
                    else if ((tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_35.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_233.filledByPlayer == 0 &&
                        arie_tabla_331.filledByPlayer == 0 &&
                        arie_tabla_334.filledByPlayer == 0 &&
                        arie_tabla_342.filledByPlayer == 0 &&
                        arie_tabla_344.filledByPlayer == 0 &&
                        arie_tabla_35.filledByPlayer == 0 &&
                        arie_tabla_cruce_34 == 0)
                    {
                        Gard_Ldj.preview = 1;
                        GardLdj_estompat.setPosition(631.f, 287.f);
                    }
                    else Gard_Ldj.preview = 0;
                }
                if (Gard_mareO.selectare && !Gard_mareO.completat)//preview GardmareO
                {
                    //pozitie efectiva - 21 222 224 232 234 242
                    if ((tabla_21.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_21.filledByPlayer == 0 &&
                        arie_tabla_222.filledByPlayer == 0 &&
                        arie_tabla_224.filledByPlayer == 0 &&
                        arie_tabla_232.filledByPlayer == 0 &&
                        arie_tabla_234.filledByPlayer == 0 &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_cruce_22 == 0 &&
                        arie_tabla_cruce_23 == 0)
                    {
                        Gard_mareO.preview = 1;
                        GardmareO_estompat.setPosition(319.f, 268.f);
                    }
                    //pozitie efectiva - 25 244 242 234 232 224
                    else if ((tabla_25.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_25.filledByPlayer == 0 &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_244.filledByPlayer == 0 &&
                        arie_tabla_232.filledByPlayer == 0 &&
                        arie_tabla_234.filledByPlayer == 0 &&
                        arie_tabla_224.filledByPlayer == 0 &&
                        arie_tabla_cruce_24 == 0 &&
                        arie_tabla_cruce_23 == 0)
                    {
                        Gard_mareO.preview = 1;
                        GardmareO_estompat.setPosition(484.f, 268.f);
                    }
                    //pozitie efectiva - 31 322 324 332 334 342
                    else if ((tabla_31.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_31.filledByPlayer == 0 &&
                        arie_tabla_322.filledByPlayer == 0 &&
                        arie_tabla_324.filledByPlayer == 0 &&
                        arie_tabla_332.filledByPlayer == 0 &&
                        arie_tabla_334.filledByPlayer == 0 &&
                        arie_tabla_342.filledByPlayer == 0 &&
                        arie_tabla_cruce_32 == 0 &&
                        arie_tabla_cruce_33 == 0)
                    {
                        Gard_mareO.preview = 1;
                        GardmareO_estompat.setPosition(319.f, 433.f);
                    }
                    //pozitie efectiva - 35 344 342 334 332 324
                    else if ((tabla_35.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_35.filledByPlayer == 0 &&
                        arie_tabla_342.filledByPlayer == 0 &&
                        arie_tabla_344.filledByPlayer == 0 &&
                        arie_tabla_334.filledByPlayer == 0 &&
                        arie_tabla_332.filledByPlayer == 0 &&
                        arie_tabla_324.filledByPlayer == 0 &&
                        arie_tabla_cruce_34 == 0 &&
                        arie_tabla_cruce_33 == 0)
                    {
                        Gard_mareO.preview = 1;
                        GardmareO_estompat.setPosition(484.f, 433.f);
                    }
                    else Gard_mareO.preview = 0;
                }
                if (Gard_mareV.selectare && !Gard_mareV.completat)//preview GardmareV
                {
                    //pozitie efectiva - 12 221 223 321 323 42
                    if ((tabla_12.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_42.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_12.filledByPlayer == 0 &&
                        arie_tabla_42.filledByPlayer == 0 &&
                        arie_tabla_221.filledByPlayer == 0 &&
                        arie_tabla_223.filledByPlayer == 0 &&
                        arie_tabla_321.filledByPlayer == 0 &&
                        arie_tabla_323.filledByPlayer == 0 &&
                        arie_tabla_cruce_22 == 0 &&
                        arie_tabla_cruce_32 == 0)
                    {
                        Gard_mareV.preview = 1;
                        GardmareV_estompat.setPosition(467.f, 121.f);
                    }
                    //pozitie efectiva - 13 231 233 331 333 43
                    else if ((tabla_13.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_43.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_13.filledByPlayer == 0 &&
                        arie_tabla_43.filledByPlayer == 0 &&
                        arie_tabla_231.filledByPlayer == 0 &&
                        arie_tabla_233.filledByPlayer == 0 &&
                        arie_tabla_331.filledByPlayer == 0 &&
                        arie_tabla_333.filledByPlayer == 0 &&
                        arie_tabla_cruce_23 == 0 &&
                        arie_tabla_cruce_33 == 0)
                    {
                        Gard_mareV.preview = 1;
                        GardmareV_estompat.setPosition(632.f, 121.f);
                    }
                    //pozitie efectiva - 14 241 243 341 343 44
                    else if ((tabla_14.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_44.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_14.filledByPlayer == 0 &&
                        arie_tabla_44.filledByPlayer == 0 &&
                        arie_tabla_241.filledByPlayer == 0 &&
                        arie_tabla_243.filledByPlayer == 0 &&
                        arie_tabla_341.filledByPlayer == 0 &&
                        arie_tabla_343.filledByPlayer == 0 &&
                        arie_tabla_cruce_24 == 0 &&
                        arie_tabla_cruce_34 == 0)
                    {
                        Gard_mareV.preview = 1;
                        GardmareV_estompat.setPosition(797.f, 121.f);
                    }
                    else Gard_mareV.preview = 0;
                }
                if (Gard_micO.selectare && !Gard_micO.completat)//preview GardmicO
                {
                    //pozitie efectiva - 21 222 224 232
                    if ((tabla_21.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_21.filledByPlayer == 0 &&
                        arie_tabla_222.filledByPlayer == 0 &&
                        arie_tabla_232.filledByPlayer == 0 &&
                        arie_tabla_224.filledByPlayer == 0 &&
                        arie_tabla_cruce_22 == 0)
                    {
                        Gard_micO.preview = 1;
                        GardmicO_estompat.setPosition(317.f, 268.f);
                    }
                    //pozitie efectiva - 224 232 234 242
                    else if ((tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_224.filledByPlayer == 0 &&
                        arie_tabla_234.filledByPlayer == 0 &&
                        arie_tabla_232.filledByPlayer == 0 &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_cruce_23 == 0)
                    {
                        Gard_micO.preview = 1;
                        GardmicO_estompat.setPosition(484.f, 268.f);
                    }
                    //pozitie efectiva - 234 242 244 25
                    else if ((tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_25.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_234.filledByPlayer == 0 &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_244.filledByPlayer == 0 &&
                        arie_tabla_25.filledByPlayer == 0 &&
                        arie_tabla_cruce_24 == 0)
                    {
                        Gard_micO.preview = 1;
                        GardmicO_estompat.setPosition(648.f, 268.f);
                    }
                    //pozitie efectiva - 31 322 324 332
                    else if ((tabla_31.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_31.filledByPlayer == 0 &&
                        arie_tabla_324.filledByPlayer == 0 &&
                        arie_tabla_322.filledByPlayer == 0 &&
                        arie_tabla_332.filledByPlayer == 0 &&
                        arie_tabla_cruce_32 == 0)
                    {
                        Gard_micO.preview = 1;
                        GardmicO_estompat.setPosition(317.f, 433.f);
                    }
                    //pozitie efectiva - 324 332 334 342
                    else if ((tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_324.filledByPlayer == 0 &&
                        arie_tabla_332.filledByPlayer == 0 &&
                        arie_tabla_242.filledByPlayer == 0 &&
                        arie_tabla_334.filledByPlayer == 0 &&
                        arie_tabla_cruce_33 == 0)
                    {
                        Gard_micO.preview = 1;
                        GardmicO_estompat.setPosition(484.f, 433.f);
                    }
                    //pozitie efectiva - 334 342 344 35
                    else if ((tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_35.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_334.filledByPlayer == 0 &&
                        arie_tabla_342.filledByPlayer == 0 &&
                        arie_tabla_344.filledByPlayer == 0 &&
                        arie_tabla_35.filledByPlayer == 0 &&
                        arie_tabla_cruce_34 == 0)
                    {
                        Gard_micO.preview = 1;
                        GardmicO_estompat.setPosition(648.f, 433.f);
                    }
                    else Gard_micO.preview = 0;
                }
                if (Gard_micV.selectare && !Gard_micV.completat)//preview GardmicV
                {
                    //pozitie efectiva - 12 221 223 321
                    if ((tabla_12.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_12.filledByPlayer == 0 &&
                        arie_tabla_221.filledByPlayer == 0 &&
                        arie_tabla_223.filledByPlayer == 0 &&
                        arie_tabla_321.filledByPlayer == 0 &&
                        arie_tabla_cruce_22 == 0)
                    {
                        Gard_micV.preview = 1;
                        GardmicV_estompat.setPosition(467.f, 118.f);
                    }
                    //pozitie efectiva - 42 323 321 223
                    else if((tabla_42.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_42.filledByPlayer == 0 &&
                        arie_tabla_321.filledByPlayer == 0 &&
                        arie_tabla_323.filledByPlayer == 0 &&
                        arie_tabla_223.filledByPlayer == 0 &&
                        arie_tabla_cruce_32 == 0)
                    {
                        Gard_micV.preview = 1;
                        GardmicV_estompat.setPosition(467.f, 280.f);
                    }
                    //pozitie efectiva - 13 231 233 331
                    else if((tabla_13.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_13.filledByPlayer == 0 &&
                        arie_tabla_231.filledByPlayer == 0 &&
                        arie_tabla_233.filledByPlayer == 0 &&
                        arie_tabla_331.filledByPlayer == 0 &&
                        arie_tabla_cruce_23 == 0)
                    {
                        Gard_micV.preview = 1;
                        GardmicV_estompat.setPosition(632.f, 118.f);
                    }
                    //pozitie efectiva - 43 333 331 233
                    else if((tabla_43.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_43.filledByPlayer == 0 &&
                        arie_tabla_331.filledByPlayer == 0 &&
                        arie_tabla_333.filledByPlayer == 0 &&
                        arie_tabla_233.filledByPlayer == 0 &&
                        arie_tabla_cruce_33 == 0)
                    {
                        Gard_micV.preview = 1;
                        GardmicV_estompat.setPosition(632.f, 280.f);
                    }
                    //pozitie efectiva - 14 241 243 341
                    else if((tabla_14.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_14.filledByPlayer == 0 &&
                        arie_tabla_241.filledByPlayer == 0 &&
                        arie_tabla_243.filledByPlayer == 0 &&
                        arie_tabla_341.filledByPlayer == 0 &&
                        arie_tabla_cruce_24 == 0)
                    {
                        Gard_micV.preview = 1;
                        GardmicV_estompat.setPosition(797.f, 118.f);
                    }
                    //pozitie efectiva - 44 343 341 243
                    else if((tabla_44.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat)) &&
                        arie_tabla_44.filledByPlayer == 0 &&
                        arie_tabla_341.filledByPlayer == 0 &&
                        arie_tabla_343.filledByPlayer == 0 &&
                        arie_tabla_243.filledByPlayer == 0 &&
                        arie_tabla_cruce_34 == 0)
                    {
                        Gard_micV.preview = 1;
                        GardmicV_estompat.setPosition(797.f, 280.f);
                    }
                    else Gard_micV.preview = 0;
                }
            }

            if (Actiune.type == Event::MouseButtonPressed)
            {
                //controale
                if (Iesire.getGlobalBounds().contains(PozitieMouseFloat))
                {
                    Joc.close();
                }
                if (Restart.getGlobalBounds().contains(PozitieMouseFloat))
                {

                    Gard_Lss.selectare = 0, Gard_Lss.mousePressedOnce = 0, Gard_Lss.alteVersiuni = 0, Gard_Lss.preview = 0, Gard_Lss.afisare = 0, Gard_Lss.completat = 0;
                    Gard_Lsj.selectare = 0, Gard_Lsj.mousePressedOnce = 0, Gard_Lsj.alteVersiuni = 0, Gard_Lsj.preview = 0, Gard_Lsj.afisare = 0, Gard_Lsj.completat = 0;
                    Gard_Lds.selectare = 0, Gard_Lds.mousePressedOnce = 0, Gard_Lds.alteVersiuni = 0, Gard_Lds.preview = 0, Gard_Lds.afisare = 0, Gard_Lds.completat = 0;
                    Gard_Ldj.selectare = 0, Gard_Ldj.mousePressedOnce = 0, Gard_Ldj.alteVersiuni = 0, Gard_Ldj.preview = 0, Gard_Ldj.afisare = 0, Gard_Ldj.completat = 0;
                    Gard_mareO.selectare = 0, Gard_mareO.mousePressedOnce = 0, Gard_mareO.alteVersiuni = 0, Gard_mareO.preview = 0, Gard_mareO.afisare = 0, Gard_mareO.completat = 0;
                    Gard_mareV.selectare = 0, Gard_mareV.mousePressedOnce = 0, Gard_mareV.alteVersiuni = 0, Gard_mareV.preview = 0, Gard_mareV.afisare = 0, Gard_mareV.completat = 0;
                    Gard_micO.selectare = 0, Gard_micO.mousePressedOnce = 0, Gard_micO.alteVersiuni = 0, Gard_micO.preview = 0, Gard_micO.afisare = 0, Gard_micO.completat = 0;
                    Gard_micV.selectare = 0, Gard_micV.mousePressedOnce = 0, Gard_micV.alteVersiuni = 0, Gard_micV.preview = 0, Gard_micV.afisare = 0, Gard_micV.completat = 0;

                    arie_tabla_12.filledByPlayer = 0;
                    arie_tabla_13.filledByPlayer = 0;
                    arie_tabla_14.filledByPlayer = 0;
                    arie_tabla_21.filledByPlayer = 0;
                    arie_tabla_221.filledByPlayer = 0;
                    arie_tabla_222.filledByPlayer = 0;
                    arie_tabla_223.filledByPlayer = 0;
                    arie_tabla_224.filledByPlayer = 0;
                    arie_tabla_231.filledByPlayer = 0;
                    arie_tabla_232.filledByPlayer = 0;
                    arie_tabla_233.filledByPlayer = 0;
                    arie_tabla_234.filledByPlayer = 0;
                    arie_tabla_241.filledByPlayer = 0;
                    arie_tabla_242.filledByPlayer = 0;
                    arie_tabla_243.filledByPlayer = 0;
                    arie_tabla_244.filledByPlayer = 0;
                    arie_tabla_25.filledByPlayer = 0;
                    arie_tabla_31.filledByPlayer = 0;
                    arie_tabla_321.filledByPlayer = 0;
                    arie_tabla_322.filledByPlayer = 0;
                    arie_tabla_323.filledByPlayer = 0;
                    arie_tabla_324.filledByPlayer = 0;
                    arie_tabla_331.filledByPlayer = 0;
                    arie_tabla_332.filledByPlayer = 0;
                    arie_tabla_333.filledByPlayer = 0;
                    arie_tabla_334.filledByPlayer = 0;
                    arie_tabla_341.filledByPlayer = 0;
                    arie_tabla_342.filledByPlayer = 0;
                    arie_tabla_343.filledByPlayer = 0;
                    arie_tabla_344.filledByPlayer = 0;
                    arie_tabla_35.filledByPlayer = 0;
                    arie_tabla_42.filledByPlayer = 0;
                    arie_tabla_43.filledByPlayer = 0;
                    arie_tabla_44.filledByPlayer = 0;

                    Joc.close(); DeschiderePagina_Nivel(nivel,v);
                }
                //butoane garduri
                if (buton_gardLSS.getGlobalBounds().contains(PozitieMouseFloat) && !Gard_Lss.alteVersiuni)
                {
                    if (Gard_Lss.mousePressedOnce == 0) //prima apasare
                    {
                        Gard_Lss.selectare = 1;
                        Gard_Lsj.selectare = 0;
                        Gard_Lds.selectare = 0;
                        Gard_Ldj.selectare = 0;
                        Gard_mareO.selectare = 0;
                        Gard_mareV.selectare = 0;
                        Gard_micO.selectare = 0;
                        Gard_micV.selectare = 0;
                        Gard_Lss.mousePressedOnce = 1;
                        Gard_Lsj.alteVersiuni = 1, Gard_Lds.alteVersiuni = 1, Gard_Ldj.alteVersiuni = 1;
                    }
                    else //a doua apasare
                    {
                        Gard_Lss.selectare = 0, Gard_Lss.preview = 0, Gard_Lss.afisare = 0, Gard_Lss.completat = 0;
                        Gard_Lss.mousePressedOnce = 0;
                        Gard_Lsj.alteVersiuni = 0, Gard_Lds.alteVersiuni = 0, Gard_Ldj.alteVersiuni = 0;
                    }
                }
                if (buton_gardLSJ.getGlobalBounds().contains(PozitieMouseFloat) && !Gard_Lsj.alteVersiuni)
                {
                    if (Gard_Lsj.mousePressedOnce == 0)
                    {
                        Gard_Lsj.selectare = 1;
                        Gard_Lss.selectare = 0;
                        Gard_Lds.selectare = 0;
                        Gard_Ldj.selectare = 0;
                        Gard_mareO.selectare = 0;
                        Gard_mareV.selectare = 0;
                        Gard_micO.selectare = 0;
                        Gard_micV.selectare = 0;
                        Gard_Lsj.mousePressedOnce = 1;
                        Gard_Lss.alteVersiuni = 1, Gard_Lds.alteVersiuni = 1, Gard_Ldj.alteVersiuni = 1;
                    }
                    else
                    {
                        Gard_Lsj.selectare = 0, Gard_Lsj.preview = 0, Gard_Lsj.afisare = 0, Gard_Lsj.completat = 0;
                        Gard_Lsj.mousePressedOnce = 0;
                        Gard_Lss.alteVersiuni = 0, Gard_Lds.alteVersiuni = 0, Gard_Ldj.alteVersiuni = 0;
                    }
                }
                if (buton_gardLDS.getGlobalBounds().contains(PozitieMouseFloat) && !Gard_Lds.alteVersiuni)
                {
                    if (Gard_Lds.mousePressedOnce == 0)
                    {
                        Gard_Lds.selectare = 1;
                        Gard_Lss.selectare = 0;
                        Gard_Lsj.selectare = 0;
                        Gard_Ldj.selectare = 0;
                        Gard_mareO.selectare = 0;
                        Gard_mareV.selectare = 0;
                        Gard_micO.selectare = 0;
                        Gard_micV.selectare = 0;
                        Gard_Lds.mousePressedOnce = 1;
                        Gard_Lsj.alteVersiuni = 1, Gard_Lss.alteVersiuni = 1, Gard_Ldj.alteVersiuni = 1;
                    }
                    else
                    {
                        Gard_Lds.selectare = 0, Gard_Lds.preview = 0, Gard_Lds.afisare = 0, Gard_Lds.completat = 0;
                        Gard_Lds.mousePressedOnce = 0;
                        Gard_Lsj.alteVersiuni = 0, Gard_Lss.alteVersiuni = 0, Gard_Ldj.alteVersiuni = 0;
                    }
                }
                if (buton_gardLDJ.getGlobalBounds().contains(PozitieMouseFloat) && !Gard_Ldj.alteVersiuni)
                {
                    if (Gard_Ldj.mousePressedOnce == 0)
                    {
                        Gard_Ldj.selectare = 1;
                        Gard_Lss.selectare = 0;
                        Gard_Lsj.selectare = 0;
                        Gard_Lds.selectare = 0;
                        Gard_mareO.selectare = 0;
                        Gard_mareV.selectare = 0;
                        Gard_micO.selectare = 0;
                        Gard_micV.selectare = 0;
                        Gard_Ldj.mousePressedOnce = 1;
                        Gard_Lsj.alteVersiuni = 1, Gard_Lds.alteVersiuni = 1, Gard_Lss.alteVersiuni = 1;
                    }
                    else
                    {
                        Gard_Ldj.selectare = 0, Gard_Ldj.preview = 0, Gard_Ldj.afisare = 0, Gard_Ldj.completat = 0;
                        Gard_Ldj.mousePressedOnce = 0;
                        Gard_Lsj.alteVersiuni = 0, Gard_Lds.alteVersiuni = 0, Gard_Ldj.alteVersiuni = 0;
                    }
                }
                if (buton_gardmareO.getGlobalBounds().contains(PozitieMouseFloat) && !Gard_mareO.alteVersiuni)
                {
                    if (Gard_mareO.mousePressedOnce == 0)
                    {
                        Gard_mareO.selectare = 1;
                        Gard_Lss.selectare = 0;
                        Gard_Lsj.selectare = 0;
                        Gard_Lds.selectare = 0;
                        Gard_Ldj.selectare = 0;
                        Gard_mareV.selectare = 0;
                        Gard_micO.selectare = 0;
                        Gard_micV.selectare = 0;
                        Gard_mareO.mousePressedOnce = 1;
                        Gard_mareV.alteVersiuni = 1;
                    }
                    else
                    {
                        Gard_mareO.selectare = 0, Gard_mareO.preview = 0, Gard_mareO.afisare = 0, Gard_mareO.completat = 0;
                        Gard_mareO.mousePressedOnce = 0;
                        Gard_mareV.alteVersiuni = 0;

                    }
                }
                if (buton_gardmareV.getGlobalBounds().contains(PozitieMouseFloat) && !Gard_mareV.alteVersiuni)
                {
                    if (Gard_mareV.mousePressedOnce == 0)
                    {
                        Gard_mareV.selectare = 1;
                        Gard_Lss.selectare = 0;
                        Gard_Lsj.selectare = 0;
                        Gard_Lds.selectare = 0;
                        Gard_Ldj.selectare = 0;
                        Gard_mareO.selectare = 0;
                        Gard_micO.selectare = 0;
                        Gard_micV.selectare = 0;
                        Gard_mareV.mousePressedOnce = 1;
                        Gard_mareO.alteVersiuni = 1;
                    }
                    else
                    {
                        Gard_mareV.selectare = 0, Gard_mareV.preview = 0, Gard_mareV.afisare = 0, Gard_mareV.completat = 0;
                        Gard_mareV.mousePressedOnce = 0;
                        Gard_mareO.alteVersiuni = 0;
                    }
                }
                if (buton_gardmicO.getGlobalBounds().contains(PozitieMouseFloat) && !Gard_micO.alteVersiuni)
                {
                    if (Gard_micO.mousePressedOnce == 0)
                    {
                        Gard_micO.selectare = 1;
                        Gard_Lss.selectare = 0;
                        Gard_Lsj.selectare = 0;
                        Gard_Lds.selectare = 0;
                        Gard_Ldj.selectare = 0;
                        Gard_mareO.selectare = 0;
                        Gard_mareV.selectare = 0;
                        Gard_micV.selectare = 0;
                        Gard_micO.mousePressedOnce = 1;
                        Gard_micV.alteVersiuni = 1;
                    }
                    else
                    {
                        Gard_micO.selectare = 0, Gard_micO.preview = 0, Gard_micO.afisare = 0, Gard_micO.completat = 0;
                        Gard_micO.mousePressedOnce = 0;
                        Gard_micV.alteVersiuni = 0;
                    }
                }
                if (buton_gardmicV.getGlobalBounds().contains(PozitieMouseFloat) && !Gard_micV.alteVersiuni)
                {
                    if (Gard_micV.mousePressedOnce == 0)
                    {
                        Gard_micV.selectare = 1;
                        Gard_Lss.selectare = 0;
                        Gard_Lsj.selectare = 0;
                        Gard_Lds.selectare = 0;
                        Gard_Ldj.selectare = 0;
                        Gard_mareO.selectare = 0;
                        Gard_mareV.selectare = 0;
                        Gard_micO.selectare = 0;
                        Gard_micV.mousePressedOnce = 1;
                        Gard_micO.alteVersiuni = 1;
                    }
                    else
                    {
                        Gard_micV.selectare = 0, Gard_micV.preview = 0, Gard_micV.afisare = 0, Gard_micV.completat = 0;
                        Gard_micV.mousePressedOnce = 0;
                        Gard_micO.alteVersiuni = 0;
                    }
                }
                //fixare garduri pe tabla de joc
                if (Gard_Lss.preview && !Gard_Lss.completat)//fixare GardLss
                {
                    //pozitie efectiva - 21 222 224 232 233 331
                    if (tabla_21.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_21.filledByPlayer = 1;
                        arie_tabla_222.filledByPlayer = 1;
                        arie_tabla_224.filledByPlayer = 1;
                        arie_tabla_232.filledByPlayer = 1;
                        arie_tabla_233.filledByPlayer = 1;
                        arie_tabla_331.filledByPlayer = 1;
                        arie_tabla_cruce_22 = 1;
                        Gard_Lss.afisare = 1;
                        Gard_Lss.completat = 1;
                        GardLss.setPosition(318.f, 265.f);
                    }
                    //pozitie efectiva - 224 232 234 242 243 341
                    else if (tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_224.filledByPlayer = 1;
                        arie_tabla_232.filledByPlayer = 1;
                        arie_tabla_234.filledByPlayer = 1;
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_243.filledByPlayer = 1;
                        arie_tabla_341.filledByPlayer = 1;
                        arie_tabla_cruce_23 = 1;
                        Gard_Lss.afisare = 1;
                        Gard_Lss.completat = 1;
                        GardLss.setPosition(482.f, 265.f);
                    }
                    //pozitie efectiva - 31 322 324 332 333 43
                    else if (tabla_31.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_43.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_31.filledByPlayer = 1;
                        arie_tabla_322.filledByPlayer = 1;
                        arie_tabla_324.filledByPlayer = 1;
                        arie_tabla_332.filledByPlayer = 1;
                        arie_tabla_333.filledByPlayer = 1;
                        arie_tabla_43.filledByPlayer = 1;
                        arie_tabla_cruce_32 = 1;
                        Gard_Lss.afisare = 1;
                        Gard_Lss.completat = 1;
                        GardLss.setPosition(318.f, 428.f);
                    }
                    //pozitie efectiva - 324 332 334 342 343 44
                    else if (tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_44.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_324.filledByPlayer = 1;
                        arie_tabla_332.filledByPlayer = 1;
                        arie_tabla_334.filledByPlayer = 1;
                        arie_tabla_342.filledByPlayer = 1;
                        arie_tabla_343.filledByPlayer = 1;
                        arie_tabla_44.filledByPlayer = 1;
                        arie_tabla_cruce_33 = 1;
                        Gard_Lss.afisare = 1;
                        Gard_Lss.completat = 1;
                        GardLss.setPosition(482.f, 428.f);
                    }
                }
               if (Gard_Lsj.preview && !Gard_Lsj.completat)//fixare GardLsj
                {
                    //pozitie efectiva - 12 221 223 321 322 31
                    if (tabla_12.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_31.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_12.filledByPlayer = 1;
                        arie_tabla_221.filledByPlayer = 1;
                        arie_tabla_223.filledByPlayer = 1;
                        arie_tabla_321.filledByPlayer = 1;
                        arie_tabla_322.filledByPlayer = 1;
                        arie_tabla_31.filledByPlayer = 1;
                        arie_tabla_cruce_22 = 1;
                        Gard_Lsj.afisare = 1;
                        Gard_Lsj.completat = 1;
                        GardLsj.setPosition(324.f, 124.f);
                    }
                    //pozitie efectiva - 13 231 233 331 332 324
                    else if (tabla_13.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_13.filledByPlayer = 1;
                        arie_tabla_231.filledByPlayer = 1;
                        arie_tabla_233.filledByPlayer = 1;
                        arie_tabla_332.filledByPlayer = 1;
                        arie_tabla_324.filledByPlayer = 1;
                        arie_tabla_cruce_23 = 1;
                        Gard_Lsj.afisare = 1;
                        Gard_Lsj.completat = 1;
                        GardLsj.setPosition(489.f, 124.f);
                    }
                    //pozitie efectiva - 14 241 243 341 342 334
                    else if (tabla_14.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_14.filledByPlayer = 1;
                        arie_tabla_241.filledByPlayer = 1;
                        arie_tabla_243.filledByPlayer = 1;
                        arie_tabla_341.filledByPlayer = 1;
                        arie_tabla_342.filledByPlayer = 1;
                        arie_tabla_334.filledByPlayer = 1;
                        arie_tabla_cruce_24 = 1;
                        Gard_Lsj.afisare = 1;
                        Gard_Lsj.completat = 1;
                        GardLsj.setPosition(654.f, 124.f);
                    }
                }
                if (Gard_Lds.preview && !Gard_Lds.completat)//fixare GardLds
                {
                    //pozitie efectiva - 25 244 243 341 343 44
                    if (tabla_25.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_44.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_25.filledByPlayer = 1;
                        arie_tabla_244.filledByPlayer = 1;
                        arie_tabla_243.filledByPlayer = 1;
                        arie_tabla_341.filledByPlayer = 1;
                        arie_tabla_343.filledByPlayer = 1;
                        arie_tabla_44.filledByPlayer = 1;
                        arie_tabla_cruce_34 = 1;
                        Gard_Lds.afisare = 1;
                        Gard_Lds.completat = 1;
                        GardLds.setPosition(793.f, 267.f);
                    }
                    //pozitie efectiva - 242 234 233 331 333 43
                    else if (tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_43.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_234.filledByPlayer = 1;
                        arie_tabla_233.filledByPlayer = 1;
                        arie_tabla_331.filledByPlayer = 1;
                        arie_tabla_333.filledByPlayer = 1;
                        arie_tabla_43.filledByPlayer = 1;
                        arie_tabla_cruce_33 = 1;
                        Gard_Lds.afisare = 1;
                        Gard_Lds.completat = 1;
                        GardLds.setPosition(628.f, 267.f);
                    }
                    //pozitie efectiva - 232 224 223 321 323 42
                    else if (tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_42.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_232.filledByPlayer = 1;
                        arie_tabla_224.filledByPlayer = 1;
                        arie_tabla_223.filledByPlayer = 1;
                        arie_tabla_321.filledByPlayer = 1;
                        arie_tabla_323.filledByPlayer = 1;
                        arie_tabla_42.filledByPlayer = 1;
                        arie_tabla_cruce_32 = 1;
                        Gard_Lds.afisare = 1;
                        Gard_Lds.completat = 1;
                        GardLds.setPosition(463.f, 267.f);
                    }
                }
                if (Gard_Ldj.preview && !Gard_Ldj.completat)//fixare GardLdj
                {
                    //pozitie efectiva - 12 221 224 232 234 242
                    if (tabla_12.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_12.filledByPlayer = 1;
                        arie_tabla_221.filledByPlayer = 1;
                        arie_tabla_224.filledByPlayer = 1;
                        arie_tabla_232.filledByPlayer = 1;
                        arie_tabla_234.filledByPlayer = 1;
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_cruce_23 = 1;
                        Gard_Ldj.afisare = 1;
                        Gard_Ldj.completat = 1;
                        GardLdj.setPosition(466.f, 123.f);
                    }
                    //pozitie efectiva - 13 231 234 242 244 25
                    else if (tabla_13.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_25.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_13.filledByPlayer = 1;
                        arie_tabla_231.filledByPlayer = 1;
                        arie_tabla_234.filledByPlayer = 1;
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_244.filledByPlayer = 1;
                        arie_tabla_25.filledByPlayer = 1;
                        arie_tabla_cruce_24 = 1;
                        Gard_Ldj.afisare = 1;
                        Gard_Ldj.completat = 1;
                        GardLdj.setPosition(631.f, 123.f);
                    }
                    //pozitie efectiva - 223 321 324 332 334 342
                    else if (tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_223.filledByPlayer = 1;
                        arie_tabla_321.filledByPlayer = 1;
                        arie_tabla_324.filledByPlayer = 1;
                        arie_tabla_332.filledByPlayer = 1;
                        arie_tabla_334.filledByPlayer = 1;
                        arie_tabla_342.filledByPlayer = 1;
                        arie_tabla_cruce_33 = 1;
                        Gard_Ldj.afisare = 1;
                        Gard_Ldj.completat = 1;
                        GardLdj.setPosition(466.f, 287.f);
                    }
                    //pozitie efectiva - 233 331 334 342 344 35
                    else if (tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_35.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_233.filledByPlayer = 1;
                        arie_tabla_331.filledByPlayer = 1;
                        arie_tabla_334.filledByPlayer = 1;
                        arie_tabla_342.filledByPlayer = 1;
                        arie_tabla_344.filledByPlayer = 1;
                        arie_tabla_35.filledByPlayer = 1;
                        arie_tabla_cruce_34 = 1;
                        Gard_Ldj.afisare = 1;
                        Gard_Ldj.completat = 1;
                        GardLdj.setPosition(631.f, 287.f);
                    }
                }
                if (Gard_mareO.preview && !Gard_mareO.completat)//fixare GardmareO
                {
                    //pozitie efectiva - 21 222 224 232 234 242
                    if (tabla_21.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_21.filledByPlayer = 1;
                        arie_tabla_222.filledByPlayer = 1;
                        arie_tabla_224.filledByPlayer = 1;
                        arie_tabla_232.filledByPlayer = 1;
                        arie_tabla_234.filledByPlayer = 1;
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_cruce_22 = 1;
                        arie_tabla_cruce_23 = 1;
                        Gard_mareO.afisare = 1;
                        Gard_mareO.completat = 1;
                        GardmareO.setPosition(319.f, 268.f);
                    }
                    //pozitie efectiva - 25 244 242 234 232 224
                    else if (tabla_25.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_25.filledByPlayer = 1;
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_244.filledByPlayer = 1;
                        arie_tabla_232.filledByPlayer = 1;
                        arie_tabla_234.filledByPlayer = 1;
                        arie_tabla_224.filledByPlayer = 1;
                        arie_tabla_cruce_24 = 1;
                        arie_tabla_cruce_23 = 1;
                        Gard_mareO.afisare = 1;
                        Gard_mareO.completat = 1;
                        GardmareO.setPosition(484.f, 268.f);
                    }
                    //pozitie efectiva - 31 322 324 332 334 342
                    else if (tabla_31.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_31.filledByPlayer = 1;
                        arie_tabla_322.filledByPlayer = 1;
                        arie_tabla_324.filledByPlayer = 1;
                        arie_tabla_332.filledByPlayer = 1;
                        arie_tabla_334.filledByPlayer = 1;
                        arie_tabla_342.filledByPlayer = 1;
                        arie_tabla_cruce_32 = 1;
                        arie_tabla_cruce_33 = 1;
                        Gard_mareO.afisare = 1;
                        Gard_mareO.completat = 1;
                        GardmareO.setPosition(319.f, 433.f);
                    }
                    //pozitie efectiva - 35 344 342 334 332 324
                    else if (tabla_35.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_35.filledByPlayer = 1;
                        arie_tabla_342.filledByPlayer = 1;
                        arie_tabla_344.filledByPlayer = 1;
                        arie_tabla_334.filledByPlayer = 1;
                        arie_tabla_332.filledByPlayer = 1;
                        arie_tabla_324.filledByPlayer = 1;
                        arie_tabla_cruce_34 = 1;
                        arie_tabla_cruce_33 = 1;
                        Gard_mareO.afisare = 1;
                        Gard_mareO.completat = 1;
                        GardmareO.setPosition(484.f, 433.f);
                    }
                }
                if (Gard_mareV.preview && !Gard_mareV.completat)//fixare GardmareV
                {
                    //pozitie efectiva - 12 221 223 321 323 42
                    if (tabla_12.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_42.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_12.filledByPlayer = 1;
                        arie_tabla_42.filledByPlayer = 1;
                        arie_tabla_221.filledByPlayer = 1;
                        arie_tabla_223.filledByPlayer = 1;
                        arie_tabla_321.filledByPlayer = 1;
                        arie_tabla_323.filledByPlayer = 1;
                        arie_tabla_cruce_22 = 1;
                        arie_tabla_cruce_32 = 1;
                        Gard_mareV.afisare = 1;
                        Gard_mareV.completat = 1;
                        GardmareV.setPosition(467.f, 121.f);
                    }
                    //pozitie efectiva - 13 231 233 331 333 43
                    else if (tabla_13.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_43.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_13.filledByPlayer = 1;
                        arie_tabla_43.filledByPlayer = 1;
                        arie_tabla_231.filledByPlayer = 1;
                        arie_tabla_233.filledByPlayer = 1;
                        arie_tabla_331.filledByPlayer = 1;
                        arie_tabla_333.filledByPlayer = 1;
                        arie_tabla_cruce_23 = 1;
                        arie_tabla_cruce_33 = 1;
                        Gard_mareV.afisare = 1;
                        Gard_mareV.completat = 1;
                        GardmareV.setPosition(632.f, 121.f);
                    }
                    //pozitie efectiva - 14 241 243 341 343 44
                    else if (tabla_14.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_44.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_14.filledByPlayer = 1;
                        arie_tabla_44.filledByPlayer = 1;
                        arie_tabla_241.filledByPlayer = 1;
                        arie_tabla_243.filledByPlayer = 1;
                        arie_tabla_341.filledByPlayer = 1;
                        arie_tabla_343.filledByPlayer = 1;
                        arie_tabla_cruce_24 = 1;
                        arie_tabla_cruce_34 = 1;
                        Gard_mareV.afisare = 1;
                        Gard_mareV.completat = 1;
                        GardmareV.setPosition(797.f, 121.f);
                    }
                }
                if (Gard_micO.preview && !Gard_micO.completat)//fixare GardmicO
                {
                    //pozitie efectiva - 21 222 224 232
                    if (tabla_21.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_21.filledByPlayer = 1;
                        arie_tabla_222.filledByPlayer = 1;
                        arie_tabla_232.filledByPlayer = 1;
                        arie_tabla_224.filledByPlayer = 1;
                        arie_tabla_cruce_22 = 1;
                        Gard_micO.afisare = 1;
                        Gard_micO.completat = 1;
                        GardmicO.setPosition(317.f, 268.f);
                    }
                    //pozitie efectiva - 224 232 234 242
                    else if (tabla_224.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_224.filledByPlayer = 1;
                        arie_tabla_234.filledByPlayer = 1;
                        arie_tabla_232.filledByPlayer = 1;
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_cruce_23 = 1;
                        Gard_micO.afisare = 1;
                        Gard_micO.completat = 1;
                        GardmicO.setPosition(484.f, 268.f);
                    }
                    //pozitie efectiva - 234 242 244 25
                    else if (tabla_234.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_25.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_234.filledByPlayer = 1;
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_244.filledByPlayer = 1;
                        arie_tabla_25.filledByPlayer = 1;
                        arie_tabla_cruce_24 = 1;
                        Gard_micO.afisare = 1;
                        Gard_micO.completat = 1;
                        GardmicO.setPosition(648.f, 268.f);
                    }
                    //pozitie efectiva - 31 322 324 332
                    else if (tabla_31.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_31.filledByPlayer = 1;
                        arie_tabla_324.filledByPlayer = 1;
                        arie_tabla_322.filledByPlayer = 1;
                        arie_tabla_332.filledByPlayer = 1;
                        arie_tabla_cruce_32 = 1;
                        Gard_micO.afisare = 1;
                        Gard_micO.completat = 1;
                        GardmicO.setPosition(317.f, 433.f);
                    }
                    //pozitie efectiva - 324 332 334 342
                    else if (tabla_324.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_324.filledByPlayer = 1;
                        arie_tabla_332.filledByPlayer = 1;
                        arie_tabla_242.filledByPlayer = 1;
                        arie_tabla_334.filledByPlayer = 1;
                        arie_tabla_cruce_33 = 1;
                        Gard_micO.afisare = 1;
                        Gard_micO.completat = 1;
                        GardmicO.setPosition(484.f, 433.f);
                    }
                    //pozitie efectiva - 334 342 344 35
                    else if (tabla_334.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_35.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_334.filledByPlayer = 1;
                        arie_tabla_342.filledByPlayer = 1;
                        arie_tabla_344.filledByPlayer = 1;
                        arie_tabla_35.filledByPlayer = 1;
                        arie_tabla_cruce_34 = 1;
                        Gard_micO.afisare = 1;
                        Gard_micO.completat = 1;
                        GardmicO.setPosition(648.f, 433.f);
                    }
                }
                if (Gard_micV.preview && !Gard_micV.completat)//fixare GardmicV
                {
                    //pozitie efectiva - 12 221 223 321
                    if (tabla_12.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_221.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_222.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_223.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_224.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_12.filledByPlayer = 1;
                        arie_tabla_221.filledByPlayer = 1;
                        arie_tabla_223.filledByPlayer = 1;
                        arie_tabla_321.filledByPlayer = 1;
                        arie_tabla_cruce_22 = 1;
                        Gard_micV.afisare = 1;
                        Gard_micV.completat = 1;
                        GardmicV.setPosition(467.f, 118.f);
                    }
                    //pozitie efectiva - 42 323 321 223
                    else if (tabla_42.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_321.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_322.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_323.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_324.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_42.filledByPlayer = 1;
                        arie_tabla_321.filledByPlayer = 1;
                        arie_tabla_323.filledByPlayer = 1;
                        arie_tabla_223.filledByPlayer = 1;
                        arie_tabla_cruce_32 = 1;
                        Gard_micV.afisare = 1;
                        Gard_micV.completat = 1;
                        GardmicV.setPosition(467.f, 280.f);
                    }
                    //pozitie efectiva - 13 231 233 331
                    else if (tabla_13.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_231.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_232.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_233.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_234.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_13.filledByPlayer = 1;
                        arie_tabla_231.filledByPlayer = 1;
                        arie_tabla_233.filledByPlayer = 1;
                        arie_tabla_331.filledByPlayer = 1;
                        arie_tabla_cruce_23 = 1;
                        Gard_micV.afisare = 1;
                        Gard_micV.completat = 1;
                        GardmicV.setPosition(632.f, 118.f);
                    }
                    //pozitie efectiva - 43 333 331 233
                    else if (tabla_43.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_331.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_332.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_333.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_334.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_43.filledByPlayer = 1;
                        arie_tabla_331.filledByPlayer = 1;
                        arie_tabla_333.filledByPlayer = 1;
                        arie_tabla_233.filledByPlayer = 1;
                        arie_tabla_cruce_33 = 1;
                        Gard_micV.afisare = 1;
                        Gard_micV.completat = 1;
                        GardmicV.setPosition(632.f, 280.f);
                    }
                    //pozitie efectiva - 14 241 243 341
                    else if (tabla_14.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_241.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_242.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_243.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_244.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_14.filledByPlayer = 1;
                        arie_tabla_241.filledByPlayer = 1;
                        arie_tabla_243.filledByPlayer = 1;
                        arie_tabla_341.filledByPlayer = 1;
                        arie_tabla_cruce_24 = 1;
                        Gard_micV.afisare = 1;
                        Gard_micV.completat = 1;
                        GardmicV.setPosition(797.f, 118.f);
                    }
                    //pozitie efectiva - 44 343 341 243
                    else if (tabla_44.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_341.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_342.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_343.getGlobalBounds().contains(PozitieMouseFloat) ||
                        tabla_344.getGlobalBounds().contains(PozitieMouseFloat))
                    {
                        arie_tabla_44.filledByPlayer = 1;
                        arie_tabla_341.filledByPlayer = 1;
                        arie_tabla_343.filledByPlayer = 1;
                        arie_tabla_243.filledByPlayer = 1;
                        arie_tabla_cruce_34 = 1;
                        Gard_micV.afisare = 1;
                        Gard_micV.completat = 1;
                        GardmicV.setPosition(797.f, 280.f);
                    }
                }
            }
        }
                Joc.clear(culoare_fundal);
                Joc.draw(fundalul);
                Joc.draw(titlu);
                Joc.draw(Restart);
                Joc.draw(Iesire);
                Joc.draw(textnivel);
                Joc.draw(buton_gardLDJ);
                Joc.draw(buton_gardLDS);
                Joc.draw(buton_gardLSJ);
                Joc.draw(buton_gardLSS);
                Joc.draw(buton_gardmareO);
                Joc.draw(buton_gardmareV);
                Joc.draw(buton_gardmicO);
                Joc.draw(buton_gardmicV);
                Joc.draw(tabla_de_joc);



        unsigned int vaci[5][5];
        unsigned int oi[5][5];
        unsigned int cai[5][5];
        unsigned int porci[5][5];
        unsigned int apa[5][5];
        creareMatriceVaci(vaci);
        creareMatriceOi(oi);
        creareMatriceCai(cai);
        creareMatricePorci(porci);
        creareMatriceApa(apa);
        if (pozitie.cal1 != 0) { cal1.setPosition(cai[pozitie.cal1 / 10][pozitie.cal1 % 10] / 1000 * 1.f - 5.f , cai[pozitie.cal1 / 10][pozitie.cal1 % 10] % 1000 * 1.f + 9.f); Joc.draw(cal1); }
        if (pozitie.cal2 != 0) { cal2.setPosition(cai[pozitie.cal2 / 10][pozitie.cal2 % 10] / 1000 * 1.f - 9.f, cai[pozitie.cal2 / 10][pozitie.cal2 % 10] % 1000 * 1.f - 5.f); Joc.draw(cal2); }
        if (pozitie.porc1 != 0) { porc1.setPosition(porci[pozitie.porc1 / 10][pozitie.porc1 % 10] / 1000 * 1.f, porci[pozitie.porc1 / 10][pozitie.porc1 % 10] % 1000 * 1.f); Joc.draw(porc1); }
        if (pozitie.porc2 != 0) { porc2.setPosition(porci[pozitie.porc2 / 10][pozitie.porc2 % 10] / 1000 * 1.f, porci[pozitie.porc2 / 10][pozitie.porc2 % 10] % 1000 * 1.f); Joc.draw(porc2); }
        if (pozitie.vaca1 != 0) { vaca1.setPosition(vaci[pozitie.vaca1 / 10][pozitie.vaca1 % 10] / 1000 * 1.f, vaci[pozitie.vaca1 / 10][pozitie.vaca1 % 10] % 1000 * 1.f); Joc.draw(vaca1); }
        if (pozitie.vaca2 != 0) { vaca2.setPosition(vaci[pozitie.vaca2 / 10][pozitie.vaca2 % 10] / 1000 * 1.f + 9.f, vaci[pozitie.vaca2 / 10][pozitie.vaca2 % 10] % 1000 * 1.f + 15.f); Joc.draw(vaca2); }
        if (pozitie.oaie1 != 0) { oaie1.setPosition(oi[pozitie.oaie1 / 10][pozitie.oaie1 % 10] / 1000 * 1.f, oi[pozitie.oaie1 / 10][pozitie.oaie1 % 10] % 1000 * 1.f); Joc.draw(oaie1); }
        if (pozitie.oaie2 != 0) { oaie2.setPosition(oi[pozitie.oaie2 / 10][pozitie.oaie2 % 10] / 1000 * 1.f, oi[pozitie.oaie2 / 10][pozitie.oaie2 % 10] % 1000 * 1.f); Joc.draw(oaie2); }
        if (pozitie.apa1 != 0) { apa1.setPosition(apa[pozitie.apa1 / 10][pozitie.apa1 % 10] / 1000 * 1.f, apa[pozitie.apa1 / 10][pozitie.apa1 % 10] % 1000 * 1.f); Joc.draw(apa1); }
        if (pozitie.apa2 != 0) { apa2.setPosition(apa[pozitie.apa2 / 10][pozitie.apa2 % 10] / 1000 * 1.f, apa[pozitie.apa2 / 10][pozitie.apa2 % 10] % 1000 * 1.f); Joc.draw(apa2); }
        if (pozitie.apa3 != 0) { apa3.setPosition(apa[pozitie.apa3 / 10][pozitie.apa3 % 10] / 1000 * 1.f, apa[pozitie.apa3 / 10][pozitie.apa3 % 10] % 1000 * 1.f); Joc.draw(apa3); }

        Joc.draw(tabla_12); Joc.draw(tabla_13); Joc.draw(tabla_14); Joc.draw(tabla_21); Joc.draw(tabla_25);
        Joc.draw(tabla_31); Joc.draw(tabla_35); Joc.draw(tabla_42); Joc.draw(tabla_43); Joc.draw(tabla_44);
        Joc.draw(tabla_221); Joc.draw(tabla_222); Joc.draw(tabla_223); Joc.draw(tabla_224);
        Joc.draw(tabla_231); Joc.draw(tabla_232); Joc.draw(tabla_233); Joc.draw(tabla_234);
        Joc.draw(tabla_241); Joc.draw(tabla_242); Joc.draw(tabla_243); Joc.draw(tabla_244);
        Joc.draw(tabla_321); Joc.draw(tabla_322); Joc.draw(tabla_323); Joc.draw(tabla_324);
        Joc.draw(tabla_331); Joc.draw(tabla_332); Joc.draw(tabla_333); Joc.draw(tabla_334);
        Joc.draw(tabla_341); Joc.draw(tabla_342); Joc.draw(tabla_343); Joc.draw(tabla_344);

        if (Gard_Lss.preview) Joc.draw(GardLss_estompat);
        if (Gard_Lsj.preview) Joc.draw(GardLsj_estompat);
        if (Gard_Lds.preview) Joc.draw(GardLds_estompat);
        if (Gard_Ldj.preview) Joc.draw(GardLdj_estompat);
        if (Gard_mareO.preview) Joc.draw(GardmareO_estompat);
        if (Gard_mareV.preview) Joc.draw(GardmareV_estompat);
        if (Gard_micO.preview) Joc.draw(GardmicO_estompat);
        if (Gard_micV.preview) Joc.draw(GardmicV_estompat);

        if (Gard_Lss.afisare) Joc.draw(GardLss);
        if (Gard_Lsj.afisare) Joc.draw(GardLsj);
        if (Gard_Lds.afisare) Joc.draw(GardLds);
        if (Gard_Ldj.afisare) Joc.draw(GardLdj);
        if (Gard_mareO.afisare) Joc.draw(GardmareO);
        if (Gard_mareV.afisare) Joc.draw(GardmareV);
        if (Gard_micO.afisare) Joc.draw(GardmicO);
        if (Gard_micV.afisare) Joc.draw(GardmicV);

        Text txtnivel; txtnivel.setFont(FONTUL); txtnivel.setCharacterSize(30); txtnivel.setFillColor(Color(0,0,0)); txtnivel.setPosition(115.f, 80.f);
        if (nivel > 9) { txtnivel.setString(nivel / 10 + 48); Joc.draw(txtnivel);txtnivel.setPosition(135.f, 80.f); txtnivel.setString(nivel % 10 + 48); Joc.draw(txtnivel); }
        else { txtnivel.setString(nivel + 48); Joc.draw(txtnivel); }


        Joc.display();

  //verificam rezolvarea nivelului
        if (arie_tabla_12.existaInRezolvare == arie_tabla_12.filledByPlayer &&
            arie_tabla_13.existaInRezolvare == arie_tabla_13.filledByPlayer &&
            arie_tabla_14.existaInRezolvare == arie_tabla_14.filledByPlayer &&
            arie_tabla_21.existaInRezolvare == arie_tabla_21.filledByPlayer &&
            arie_tabla_221.existaInRezolvare == arie_tabla_221.filledByPlayer &&
            arie_tabla_222.existaInRezolvare == arie_tabla_222.filledByPlayer &&
            arie_tabla_223.existaInRezolvare == arie_tabla_223.filledByPlayer &&
            arie_tabla_224.existaInRezolvare == arie_tabla_224.filledByPlayer &&
            arie_tabla_231.existaInRezolvare == arie_tabla_231.filledByPlayer &&
            arie_tabla_232.existaInRezolvare == arie_tabla_232.filledByPlayer &&
            arie_tabla_233.existaInRezolvare == arie_tabla_233.filledByPlayer &&
            arie_tabla_234.existaInRezolvare == arie_tabla_234.filledByPlayer &&
            arie_tabla_241.existaInRezolvare == arie_tabla_241.filledByPlayer &&
            arie_tabla_242.existaInRezolvare == arie_tabla_242.filledByPlayer &&
            arie_tabla_243.existaInRezolvare == arie_tabla_243.filledByPlayer &&
            arie_tabla_244.existaInRezolvare == arie_tabla_244.filledByPlayer &&
            arie_tabla_25.existaInRezolvare == arie_tabla_25.filledByPlayer &&
            arie_tabla_31.existaInRezolvare == arie_tabla_31.filledByPlayer &&
            arie_tabla_321.existaInRezolvare == arie_tabla_321.filledByPlayer &&
            arie_tabla_322.existaInRezolvare == arie_tabla_322.filledByPlayer &&
            arie_tabla_323.existaInRezolvare == arie_tabla_323.filledByPlayer &&
            arie_tabla_324.existaInRezolvare == arie_tabla_324.filledByPlayer &&
            arie_tabla_331.existaInRezolvare == arie_tabla_331.filledByPlayer &&
            arie_tabla_332.existaInRezolvare == arie_tabla_332.filledByPlayer &&
            arie_tabla_333.existaInRezolvare == arie_tabla_333.filledByPlayer &&
            arie_tabla_334.existaInRezolvare == arie_tabla_334.filledByPlayer &&
            arie_tabla_341.existaInRezolvare == arie_tabla_341.filledByPlayer &&
            arie_tabla_342.existaInRezolvare == arie_tabla_342.filledByPlayer &&
            arie_tabla_343.existaInRezolvare == arie_tabla_343.filledByPlayer &&
            arie_tabla_344.existaInRezolvare == arie_tabla_344.filledByPlayer &&
            arie_tabla_35.existaInRezolvare == arie_tabla_35.filledByPlayer &&
            arie_tabla_42.existaInRezolvare == arie_tabla_42.filledByPlayer &&
            arie_tabla_43.existaInRezolvare == arie_tabla_43.filledByPlayer &&
            arie_tabla_44.existaInRezolvare == arie_tabla_44.filledByPlayer)
            {int m=nivel+1;
                 v[m]=1;
    Time delay1 = seconds(0.5);
    sleep(delay1);
    Joc.close();

            RenderWindow Page(VideoMode(600, 400), "Smart Farmer", Style::None);
            Page.setPosition(Vector2i(650, 350));


            Text nivel_castigat;
            Text felicitari;

            Sprite Inapoii;
            Sprite NivelUrm;

            while (Page.isOpen())
            {
                Event Actiune;
                while (Page.pollEvent(Actiune))
                {
                    Vector2i PozitieMouse = Mouse::getPosition(Page);
                    Vector2f PozitieMouseFloat(static_cast<float>(PozitieMouse.x), static_cast<float>(PozitieMouse.y));

                    if (Actiune.type == Event::Closed) Page.close();

                    if (Actiune.type == Event::MouseButtonPressed)
                    {

                        if (Inapoii.getGlobalBounds().contains(PozitieMouseFloat))
                        {Gard_Lss.selectare = 0, Gard_Lss.mousePressedOnce = 0, Gard_Lss.alteVersiuni = 0, Gard_Lss.preview = 0, Gard_Lss.afisare = 0, Gard_Lss.completat = 0;
                    Gard_Lsj.selectare = 0, Gard_Lsj.mousePressedOnce = 0, Gard_Lsj.alteVersiuni = 0, Gard_Lsj.preview = 0, Gard_Lsj.afisare = 0, Gard_Lsj.completat = 0;
                    Gard_Lds.selectare = 0, Gard_Lds.mousePressedOnce = 0, Gard_Lds.alteVersiuni = 0, Gard_Lds.preview = 0, Gard_Lds.afisare = 0, Gard_Lds.completat = 0;
                    Gard_Ldj.selectare = 0, Gard_Ldj.mousePressedOnce = 0, Gard_Ldj.alteVersiuni = 0, Gard_Ldj.preview = 0, Gard_Ldj.afisare = 0, Gard_Ldj.completat = 0;
                    Gard_mareO.selectare = 0, Gard_mareO.mousePressedOnce = 0, Gard_mareO.alteVersiuni = 0, Gard_mareO.preview = 0, Gard_mareO.afisare = 0, Gard_mareO.completat = 0;
                    Gard_mareV.selectare = 0, Gard_mareV.mousePressedOnce = 0, Gard_mareV.alteVersiuni = 0, Gard_mareV.preview = 0, Gard_mareV.afisare = 0, Gard_mareV.completat = 0;
                    Gard_micO.selectare = 0, Gard_micO.mousePressedOnce = 0, Gard_micO.alteVersiuni = 0, Gard_micO.preview = 0, Gard_micO.afisare = 0, Gard_micO.completat = 0;
                    Gard_micV.selectare = 0, Gard_micV.mousePressedOnce = 0, Gard_micV.alteVersiuni = 0, Gard_micV.preview = 0, Gard_micV.afisare = 0, Gard_micV.completat = 0;

                    arie_tabla_12.filledByPlayer = 0;
                    arie_tabla_13.filledByPlayer = 0;
                    arie_tabla_14.filledByPlayer = 0;
                    arie_tabla_21.filledByPlayer = 0;
                    arie_tabla_221.filledByPlayer = 0;
                    arie_tabla_222.filledByPlayer = 0;
                    arie_tabla_223.filledByPlayer = 0;
                    arie_tabla_224.filledByPlayer = 0;
                    arie_tabla_231.filledByPlayer = 0;
                    arie_tabla_232.filledByPlayer = 0;
                    arie_tabla_233.filledByPlayer = 0;
                    arie_tabla_234.filledByPlayer = 0;
                    arie_tabla_241.filledByPlayer = 0;
                    arie_tabla_242.filledByPlayer = 0;
                    arie_tabla_243.filledByPlayer = 0;
                    arie_tabla_244.filledByPlayer = 0;
                    arie_tabla_25.filledByPlayer = 0;
                    arie_tabla_31.filledByPlayer = 0;
                    arie_tabla_321.filledByPlayer = 0;
                    arie_tabla_322.filledByPlayer = 0;
                    arie_tabla_323.filledByPlayer = 0;
                    arie_tabla_324.filledByPlayer = 0;
                    arie_tabla_331.filledByPlayer = 0;
                    arie_tabla_332.filledByPlayer = 0;
                    arie_tabla_333.filledByPlayer = 0;
                    arie_tabla_334.filledByPlayer = 0;
                    arie_tabla_341.filledByPlayer = 0;
                    arie_tabla_342.filledByPlayer = 0;
                    arie_tabla_343.filledByPlayer = 0;
                    arie_tabla_344.filledByPlayer = 0;
                    arie_tabla_35.filledByPlayer = 0;
                    arie_tabla_42.filledByPlayer = 0;
                    arie_tabla_43.filledByPlayer = 0;
                    arie_tabla_44.filledByPlayer = 0;
                     arie_tabla_12.existaInRezolvare = 0;
                            arie_tabla_13.existaInRezolvare = 0;
                            arie_tabla_14.existaInRezolvare = 0;
                            arie_tabla_21.existaInRezolvare = 0;
                            arie_tabla_221.existaInRezolvare = 0;
                            arie_tabla_222.existaInRezolvare = 0;
                            arie_tabla_223.existaInRezolvare = 0;
                            arie_tabla_224.existaInRezolvare = 0;
                            arie_tabla_231.existaInRezolvare = 0;
                            arie_tabla_232.existaInRezolvare = 0;
                            arie_tabla_233.existaInRezolvare = 0;
                            arie_tabla_234.existaInRezolvare = 0;
                            arie_tabla_241.existaInRezolvare = 0;
                            arie_tabla_242.existaInRezolvare = 0;
                            arie_tabla_243.existaInRezolvare = 0;
                            arie_tabla_244.existaInRezolvare = 0;
                            arie_tabla_25.existaInRezolvare = 0;
                            arie_tabla_31.existaInRezolvare = 0;
                            arie_tabla_321.existaInRezolvare = 0;
                            arie_tabla_322.existaInRezolvare = 0;
                            arie_tabla_323.existaInRezolvare = 0;
                            arie_tabla_324.existaInRezolvare = 0;
                            arie_tabla_331.existaInRezolvare = 0;
                            arie_tabla_332.existaInRezolvare = 0;
                            arie_tabla_333.existaInRezolvare = 0;
                            arie_tabla_334.existaInRezolvare = 0;
                            arie_tabla_341.existaInRezolvare = 0;
                            arie_tabla_342.existaInRezolvare = 0;
                            arie_tabla_343.existaInRezolvare = 0;
                            arie_tabla_344.existaInRezolvare = 0;
                            arie_tabla_35.existaInRezolvare = 0;
                            arie_tabla_42.existaInRezolvare = 0;
                            arie_tabla_43.existaInRezolvare = 0;
                            arie_tabla_44.existaInRezolvare = 0;


                            Page.close(); DeschiderePaginaNivele(v);
                        }
                        if (NivelUrm.getGlobalBounds().contains(PozitieMouseFloat))
                        {

                            Gard_Lss.selectare = 0, Gard_Lss.mousePressedOnce = 0, Gard_Lss.alteVersiuni = 0, Gard_Lss.preview = 0, Gard_Lss.afisare = 0, Gard_Lss.completat = 0;
                            Gard_Lsj.selectare = 0, Gard_Lsj.mousePressedOnce = 0, Gard_Lsj.alteVersiuni = 0, Gard_Lsj.preview = 0, Gard_Lsj.afisare = 0, Gard_Lsj.completat = 0;
                            Gard_Lds.selectare = 0, Gard_Lds.mousePressedOnce = 0, Gard_Lds.alteVersiuni = 0, Gard_Lds.preview = 0, Gard_Lds.afisare = 0, Gard_Lds.completat = 0;
                            Gard_Ldj.selectare = 0, Gard_Ldj.mousePressedOnce = 0, Gard_Ldj.alteVersiuni = 0, Gard_Ldj.preview = 0, Gard_Ldj.afisare = 0, Gard_Ldj.completat = 0;
                            Gard_mareO.selectare = 0, Gard_mareO.mousePressedOnce = 0, Gard_mareO.alteVersiuni = 0, Gard_mareO.preview = 0, Gard_mareO.afisare = 0, Gard_mareO.completat = 0;
                            Gard_mareV.selectare = 0, Gard_mareV.mousePressedOnce = 0, Gard_mareV.alteVersiuni = 0, Gard_mareV.preview = 0, Gard_mareV.afisare = 0, Gard_mareV.completat = 0;
                            Gard_micO.selectare = 0, Gard_micO.mousePressedOnce = 0, Gard_micO.alteVersiuni = 0, Gard_micO.preview = 0, Gard_micO.afisare = 0, Gard_micO.completat = 0;
                            Gard_micV.selectare = 0, Gard_micV.mousePressedOnce = 0, Gard_micV.alteVersiuni = 0, Gard_micV.preview = 0, Gard_micV.afisare = 0, Gard_micV.completat = 0;

                            arie_tabla_12.filledByPlayer = 0;
                            arie_tabla_13.filledByPlayer = 0;
                            arie_tabla_14.filledByPlayer = 0;
                            arie_tabla_21.filledByPlayer = 0;
                            arie_tabla_221.filledByPlayer = 0;
                            arie_tabla_222.filledByPlayer = 0;
                            arie_tabla_223.filledByPlayer = 0;
                            arie_tabla_224.filledByPlayer = 0;
                            arie_tabla_231.filledByPlayer = 0;
                            arie_tabla_232.filledByPlayer = 0;
                            arie_tabla_233.filledByPlayer = 0;
                            arie_tabla_234.filledByPlayer = 0;
                            arie_tabla_241.filledByPlayer = 0;
                            arie_tabla_242.filledByPlayer = 0;
                            arie_tabla_243.filledByPlayer = 0;
                            arie_tabla_244.filledByPlayer = 0;
                            arie_tabla_25.filledByPlayer = 0;
                            arie_tabla_31.filledByPlayer = 0;
                            arie_tabla_321.filledByPlayer = 0;
                            arie_tabla_322.filledByPlayer = 0;
                            arie_tabla_323.filledByPlayer = 0;
                            arie_tabla_324.filledByPlayer = 0;
                            arie_tabla_331.filledByPlayer = 0;
                            arie_tabla_332.filledByPlayer = 0;
                            arie_tabla_333.filledByPlayer = 0;
                            arie_tabla_334.filledByPlayer = 0;
                            arie_tabla_341.filledByPlayer = 0;
                            arie_tabla_342.filledByPlayer = 0;
                            arie_tabla_343.filledByPlayer = 0;
                            arie_tabla_344.filledByPlayer = 0;
                            arie_tabla_35.filledByPlayer = 0;
                            arie_tabla_42.filledByPlayer = 0;
                            arie_tabla_43.filledByPlayer = 0;
                            arie_tabla_44.filledByPlayer = 0;

                            arie_tabla_12.existaInRezolvare = 0;
                            arie_tabla_13.existaInRezolvare = 0;
                            arie_tabla_14.existaInRezolvare = 0;
                            arie_tabla_21.existaInRezolvare = 0;
                            arie_tabla_221.existaInRezolvare = 0;
                            arie_tabla_222.existaInRezolvare = 0;
                            arie_tabla_223.existaInRezolvare = 0;
                            arie_tabla_224.existaInRezolvare = 0;
                            arie_tabla_231.existaInRezolvare = 0;
                            arie_tabla_232.existaInRezolvare = 0;
                            arie_tabla_233.existaInRezolvare = 0;
                            arie_tabla_234.existaInRezolvare = 0;
                            arie_tabla_241.existaInRezolvare = 0;
                            arie_tabla_242.existaInRezolvare = 0;
                            arie_tabla_243.existaInRezolvare = 0;
                            arie_tabla_244.existaInRezolvare = 0;
                            arie_tabla_25.existaInRezolvare = 0;
                            arie_tabla_31.existaInRezolvare = 0;
                            arie_tabla_321.existaInRezolvare = 0;
                            arie_tabla_322.existaInRezolvare = 0;
                            arie_tabla_323.existaInRezolvare = 0;
                            arie_tabla_324.existaInRezolvare = 0;
                            arie_tabla_331.existaInRezolvare = 0;
                            arie_tabla_332.existaInRezolvare = 0;
                            arie_tabla_333.existaInRezolvare = 0;
                            arie_tabla_334.existaInRezolvare = 0;
                            arie_tabla_341.existaInRezolvare = 0;
                            arie_tabla_342.existaInRezolvare = 0;
                            arie_tabla_343.existaInRezolvare = 0;
                            arie_tabla_344.existaInRezolvare = 0;
                            arie_tabla_35.existaInRezolvare = 0;
                            arie_tabla_42.existaInRezolvare = 0;
                            arie_tabla_43.existaInRezolvare = 0;
                            arie_tabla_44.existaInRezolvare = 0;

                            Page.close();
                            if(nivel!=60)
                            DeschiderePagina_Nivel(++nivel,v);
                            else DeschiderePagina_Nivel(1,v);

                        }
                    }
                }
            nivel_castigat.setFont(FONTUL); nivel_castigat.setString("Nivel Castigat!"); nivel_castigat.setCharacterSize(70); nivel_castigat.setFillColor(Color(237, 139, 32)); nivel_castigat.setPosition(35.f, 70.f);
            felicitari.setFont(FONTUL); felicitari.setString("Felicitari!"); felicitari.setCharacterSize(60); felicitari.setFillColor(Color(237, 139, 32)); felicitari.setPosition(150.f, 150.f);
            nivel_castigat.setOutlineThickness(5);nivel_castigat.setOutlineColor(Color(0,0,0));felicitari.setOutlineThickness(5);felicitari.setOutlineColor(Color(0,0,0));
            Inapoii.setTexture(btn_inapoi); Inapoii.setPosition(10.f, 340.f);
            NivelUrm.setTexture(btn_nivelurm); NivelUrm.setPosition(540.f, 340.f);

                Page.clear(culoare_fundal);
                Page.draw(nivel_castigat);
                Page.draw(felicitari);
                Page.draw(Inapoii);
                Page.draw(NivelUrm);
                Page.display();


            }

        }

    }
}

void LoadingPagina_Nivel(unsigned int nivel)
{
    RenderWindow Joc(VideoMode(900, 900), "Smart Farmer", Style::None); //declarare fereastra
    Joc.setPosition(sf::Vector2i(500, 100)); //pozitia in functie de ecran
    Time delay1 = seconds(0.5), delay2 = seconds(1);
    Text titlu; titlu.setFont(FONTUL); titlu.setString("Smart Farmer"); titlu.setCharacterSize(70); titlu.setFillColor(Color(237, 139, 32));
    titlu.setPosition( 900/2.0f, 300.f); titlu.setOutlineThickness(5);titlu.setOutlineColor(Color(0,0,0));
    titlu.setOrigin(titlu.getLocalBounds().width / 2.0f, titlu.getLocalBounds().height / 2.0f);
    Text loading; loading.setFont(FONTUL); loading.setString("loading"); loading.setCharacterSize(40); loading.setFillColor(Color(237, 139, 32)); loading.setPosition(360.f, 400.f);
    loading.setOutlineThickness(5);loading.setOutlineColor(Color(0,0,0));
    Text loadingPunct1; loadingPunct1.setFont(FONTUL); loadingPunct1.setString("."); loadingPunct1.setCharacterSize(40); loadingPunct1.setFillColor(Color(237, 139, 32)); loadingPunct1.setPosition(540.f, 400.f);
    Text loadingPunct2; loadingPunct2.setFont(FONTUL); loadingPunct2.setString("."); loadingPunct2.setCharacterSize(40); loadingPunct2.setFillColor(Color(237, 139, 32)); loadingPunct2.setPosition(560.f, 400.f);
    Text loadingPunct3; loadingPunct3.setFont(FONTUL); loadingPunct3.setString("."); loadingPunct3.setCharacterSize(40); loadingPunct3.setFillColor(Color(237, 139, 32)); loadingPunct3.setPosition(580.f, 400.f);
    loadingPunct1.setOutlineThickness(5);loadingPunct1.setOutlineColor(Color(0,0,0));
    loadingPunct2.setOutlineThickness(5);loadingPunct2.setOutlineColor(Color(0,0,0));
    loadingPunct3.setOutlineThickness(5);loadingPunct3.setOutlineColor(Color(0,0,0));
    while (Joc.isOpen())
    {
        Event Actiune;
        while (Joc.pollEvent(Actiune))
        {
            if (Actiune.type==Event::Closed) Joc.close(); //verifica daca actiune de inchidere fereastra a fost facuta
        }

    Joc.clear(culoare_fundal);
    Joc.draw(titlu);
    Joc.draw(loading);
    Joc.display();
    sleep(delay1);
    Joc.clear(culoare_fundal);
    Joc.draw(titlu);
    Joc.draw(loading);
    Joc.draw(loadingPunct1);
    Joc.display();
    sleep(delay1);
    Joc.clear(culoare_fundal);
    Joc.draw(titlu);
    Joc.draw(loading);
    Joc.draw(loadingPunct1);
    Joc.draw(loadingPunct2);
    Joc.display();
    sleep(delay1);
    Joc.clear(culoare_fundal);
    Joc.draw(titlu);
    Joc.draw(loading);
    Joc.draw(loadingPunct1);
    Joc.draw(loadingPunct2);
    Joc.draw(loadingPunct3);
    Joc.display();
    sleep(delay2);
    Joc.close();
    DeschiderePagina_Nivel(nivel,v);
    }
}


void DeschiderePaginaNivele(int *v)
{
RenderWindow Joc(VideoMode(1400, 700), "Smart Farmer", Style::None); //declarare fereastra
    Joc.setPosition(sf::Vector2i(300, 200)); //pozitia in functie de ecran
    Text titlu; titlu.setFont(FONTUL); titlu.setString("Smart Farmer"); titlu.setCharacterSize(70); titlu.setFillColor(Color(237, 139, 32));
    titlu.setPosition( 10.f, 2.f); titlu.setOutlineThickness(5);titlu.setOutlineColor(Color(0,0,0));
    Sprite dificultate_starter; dificultate_starter.setTexture(butonstarter); dificultate_starter.setPosition(20.f, 130.f);
    Sprite dificultate_junior; dificultate_junior.setTexture(butonjunior); dificultate_junior.setPosition(390.f, 130.f);
    Sprite dificultate_expert; dificultate_expert.setTexture(butonexpert); dificultate_expert.setPosition(740.f, 130.f);
    Sprite dificultate_master; dificultate_master.setTexture(butonmaster); dificultate_master.setPosition(1110.f, 130.f);
    Sprite Restart; Restart.setTexture(btn_restart); Restart.setPosition(8.f, 642.f);

    Sprite nivel1; nivel1.setTexture(Lvl1); nivel1.setPosition(10.f, 220.f);
    Sprite nivel2; nivel2.setTexture(Lvl2); nivel2.setPosition(80.f, 220.f);
    Sprite nivel3; nivel3.setTexture(Lvl3); nivel3.setPosition(150.f, 220.f);
    Sprite nivel4; nivel4.setTexture(Lvl4); nivel4.setPosition(220.f, 220.f);
    Sprite nivel5; nivel5.setTexture(Lvl5); nivel5.setPosition(10.f, 300.f);
    Sprite nivel6; nivel6.setTexture(Lvl6); nivel6.setPosition(80.f, 300.f);
    Sprite nivel7; nivel7.setTexture(Lvl7); nivel7.setPosition(150.f, 300.f);
    Sprite nivel8; nivel8.setTexture(Lvl8); nivel8.setPosition(220.f, 300.f);
    Sprite nivel9; nivel9.setTexture(Lvl9); nivel9.setPosition(10.f, 380.f);
    Sprite nivel10; nivel10.setTexture(Lvl10); nivel10.setPosition(80.f, 380.f);
    Sprite nivel11; nivel11.setTexture(Lvl11); nivel11.setPosition(150.f, 380.f);
    Sprite nivel12; nivel12.setTexture(Lvl12); nivel12.setPosition(220.f, 380.f);
    Sprite nivel13; nivel13.setTexture(Lvl13); nivel13.setPosition(380.f, 220.f);
    Sprite nivel14; nivel14.setTexture(Lvl14); nivel14.setPosition(450.f, 220.f);
    Sprite nivel15; nivel15.setTexture(Lvl15); nivel15.setPosition(520.f, 220.f);
    Sprite nivel16; nivel16.setTexture(Lvl16); nivel16.setPosition(590.f, 220.f);
    Sprite nivel17; nivel17.setTexture(Lvl17); nivel17.setPosition(380.f, 300.f);
    Sprite nivel18; nivel18.setTexture(Lvl18); nivel18.setPosition(450.f, 300.f);
    Sprite nivel19; nivel19.setTexture(Lvl19); nivel19.setPosition(520.f, 300.f);
    Sprite nivel20; nivel20.setTexture(Lvl20); nivel20.setPosition(590.f, 300.f);
    Sprite nivel21; nivel21.setTexture(Lvl21); nivel21.setPosition(380.f, 380.f);
    Sprite nivel22; nivel22.setTexture(Lvl22); nivel22.setPosition(450.f, 380.f);
    Sprite nivel23; nivel23.setTexture(Lvl23); nivel23.setPosition(520.f, 380.f);
    Sprite nivel24; nivel24.setTexture(Lvl24); nivel24.setPosition(590.f, 380.f);
    Sprite nivel25; nivel25.setTexture(Lvl25); nivel25.setPosition(735.f, 220.f);
    Sprite nivel26; nivel26.setTexture(Lvl26); nivel26.setPosition(805.f, 220.f);
    Sprite nivel27; nivel27.setTexture(Lvl27); nivel27.setPosition(875.f, 220.f);
    Sprite nivel28; nivel28.setTexture(Lvl28); nivel28.setPosition(945.f, 220.f);
    Sprite nivel29; nivel29.setTexture(Lvl29); nivel29.setPosition(735.f, 300.f);
    Sprite nivel30; nivel30.setTexture(Lvl30); nivel30.setPosition(805.f, 300.f);
    Sprite nivel31; nivel31.setTexture(Lvl31); nivel31.setPosition(875.f, 300.f);
    Sprite nivel32; nivel32.setTexture(Lvl32); nivel32.setPosition(945.f, 300.f);
    Sprite nivel33; nivel33.setTexture(Lvl33); nivel33.setPosition(735.f, 380.f);
    Sprite nivel34; nivel34.setTexture(Lvl34); nivel34.setPosition(805.f, 380.f);
    Sprite nivel35; nivel35.setTexture(Lvl35); nivel35.setPosition(875.f, 380.f);
    Sprite nivel36; nivel36.setTexture(Lvl36); nivel36.setPosition(945.f, 380.f);
    Sprite nivel37; nivel37.setTexture(Lvl37); nivel37.setPosition(1100.f, 220.f);
    Sprite nivel38; nivel38.setTexture(Lvl38); nivel38.setPosition(1170.f, 220.f);
    Sprite nivel39; nivel39.setTexture(Lvl39); nivel39.setPosition(1240.f, 220.f);
    Sprite nivel40; nivel40.setTexture(Lvl40); nivel40.setPosition(1310.f, 220.f);
    Sprite nivel41; nivel41.setTexture(Lvl41); nivel41.setPosition(1100.f, 300.f);
    Sprite nivel42; nivel42.setTexture(Lvl42); nivel42.setPosition(1170.f, 300.f);
    Sprite nivel43; nivel43.setTexture(Lvl43); nivel43.setPosition(1240.f, 300.f);
    Sprite nivel44; nivel44.setTexture(Lvl44); nivel44.setPosition(1310.f, 300.f);
    Sprite nivel45; nivel45.setTexture(Lvl45); nivel45.setPosition(1100.f, 380.f);
    Sprite nivel46; nivel46.setTexture(Lvl46); nivel46.setPosition(1170.f, 380.f);
    Sprite nivel47; nivel47.setTexture(Lvl47); nivel47.setPosition(1240.f, 380.f);
    Sprite nivel48; nivel48.setTexture(Lvl48); nivel48.setPosition(1310.f, 380.f);
    Sprite nivel49; nivel49.setTexture(Lvl49); nivel49.setPosition(1100.f, 460.f);
    Sprite nivel50; nivel50.setTexture(Lvl50); nivel50.setPosition(1170.f, 460.f);
    Sprite nivel51; nivel51.setTexture(Lvl51); nivel51.setPosition(1240.f, 460.f);
    Sprite nivel52; nivel52.setTexture(Lvl52); nivel52.setPosition(1310.f, 460.f);
    Sprite nivel53; nivel53.setTexture(Lvl53); nivel53.setPosition(1100.f, 540.f);
    Sprite nivel54; nivel54.setTexture(Lvl54); nivel54.setPosition(1170.f, 540.f);
    Sprite nivel55; nivel55.setTexture(Lvl55); nivel55.setPosition(1240.f, 540.f);
    Sprite nivel56; nivel56.setTexture(Lvl56); nivel56.setPosition(1310.f, 540.f);
    Sprite nivel57; nivel57.setTexture(Lvl57); nivel57.setPosition(1100.f, 620.f);
    Sprite nivel58; nivel58.setTexture(Lvl58); nivel58.setPosition(1170.f, 620.f);
    Sprite nivel59; nivel59.setTexture(Lvl59); nivel59.setPosition(1240.f, 620.f);
    Sprite nivel60; nivel60.setTexture(Lvl60); nivel60.setPosition(1310.f, 620.f);
     Sprite fundalul;  fundalul.setTexture(fundal);

    lacat2.setTexture(imglacat);lacat2.setPosition(90.f,220.f);
    lacat3.setTexture(imglacat);lacat3.setPosition(160.f,220.f);
    lacat4.setTexture(imglacat);lacat4.setPosition(230.f,220.f);
    lacat5.setTexture(imglacat);lacat5.setPosition(20.f,300.f);
    lacat6.setTexture(imglacat);lacat6.setPosition(90.f,300.f);
    lacat7.setTexture(imglacat);lacat7.setPosition(160.f,300.f);
    lacat8.setTexture(imglacat);lacat8.setPosition(230.f,300.f);
    lacat9.setTexture(imglacat);lacat9.setPosition(20.f,380.f);
    lacat10.setTexture(imglacat);lacat10.setPosition(90.f,380.f);
    lacat11.setTexture(imglacat);lacat11.setPosition(160.f,380.f);
    lacat12.setTexture(imglacat);lacat12.setPosition(230.f,380.f);
    lacat13.setTexture(imglacat);lacat13.setPosition(390.f,220.f);
    lacat14.setTexture(imglacat);lacat14.setPosition(460.f,220.f);
    lacat15.setTexture(imglacat);lacat15.setPosition(530.f,220.f);
    lacat16.setTexture(imglacat);lacat16.setPosition(600.f,220.f);
    lacat17.setTexture(imglacat);lacat17.setPosition(390.f,300.f);
    lacat18.setTexture(imglacat);lacat18.setPosition(460.f,300.f);
    lacat19.setTexture(imglacat);lacat19.setPosition(530.f,300.f);
    lacat20.setTexture(imglacat);lacat20.setPosition(600.f,300.f);
    lacat21.setTexture(imglacat);lacat21.setPosition(390.f,380.f);
    lacat22.setTexture(imglacat);lacat22.setPosition(460.f,380.f);
    lacat23.setTexture(imglacat);lacat23.setPosition(530.f,380.f);
    lacat24.setTexture(imglacat);lacat24.setPosition(600.f,380.f);
    lacat25.setTexture(imglacat);lacat25.setPosition(745.f,220.f);
    lacat26.setTexture(imglacat);lacat26.setPosition(815.f,220.f);
    lacat27.setTexture(imglacat);lacat27.setPosition(885.f,220.f);
    lacat28.setTexture(imglacat);lacat28.setPosition(955.f,220.f);
    lacat29.setTexture(imglacat);lacat29.setPosition(745.f,300.f);
    lacat30.setTexture(imglacat);lacat30.setPosition(815.f,300.f);
    lacat31.setTexture(imglacat);lacat31.setPosition(885.f,300.f);
    lacat32.setTexture(imglacat);lacat32.setPosition(955.f,300.f);
    lacat33.setTexture(imglacat);lacat33.setPosition(745.f,380.f);
    lacat34.setTexture(imglacat);lacat34.setPosition(815.f,380.f);
    lacat35.setTexture(imglacat);lacat35.setPosition(885.f,380.f);
    lacat36.setTexture(imglacat);lacat36.setPosition(955.f,380.f);
    lacat37.setTexture(imglacat);lacat37.setPosition(1110.f,220.f);
    lacat38.setTexture(imglacat);lacat38.setPosition(1180.f,220.f);
    lacat39.setTexture(imglacat);lacat39.setPosition(1250.f,220.f);
    lacat40.setTexture(imglacat);lacat40.setPosition(1320.f,220.f);
    lacat41.setTexture(imglacat);lacat41.setPosition(1110.f,300.f);
    lacat42.setTexture(imglacat);lacat42.setPosition(1180.f,300.f);
    lacat43.setTexture(imglacat);lacat43.setPosition(1250.f,300.f);
    lacat44.setTexture(imglacat);lacat44.setPosition(1320.f,300.f);
    lacat45.setTexture(imglacat);lacat45.setPosition(1110.f,380.f);
    lacat46.setTexture(imglacat);lacat46.setPosition(1180.f,380.f);
    lacat47.setTexture(imglacat);lacat47.setPosition(1250.f,380.f);
    lacat48.setTexture(imglacat);lacat48.setPosition(1320.f,380.f);
    lacat49.setTexture(imglacat);lacat49.setPosition(1110.f,460.f);
    lacat50.setTexture(imglacat);lacat50.setPosition(1180.f,460.f);
    lacat51.setTexture(imglacat);lacat51.setPosition(1250.f,460.f);
    lacat52.setTexture(imglacat);lacat52.setPosition(1320.f,460.f);
    lacat53.setTexture(imglacat);lacat53.setPosition(1110.f,540.f);
    lacat54.setTexture(imglacat);lacat54.setPosition(1180.f,540.f);
    lacat55.setTexture(imglacat);lacat55.setPosition(1250.f,540.f);
    lacat56.setTexture(imglacat);lacat56.setPosition(1320.f,540.f);
    lacat57.setTexture(imglacat);lacat57.setPosition(1110.f,620.f);
    lacat58.setTexture(imglacat);lacat58.setPosition(1180.f,620.f);
    lacat59.setTexture(imglacat);lacat59.setPosition(1250.f,620.f);
    lacat60.setTexture(imglacat);lacat60.setPosition(1320.f,620.f);



    while (Joc.isOpen())
    {
        Event Actiune;
        while (Joc.pollEvent(Actiune))
        {
            if (Actiune.type==Event::Closed) Joc.close();
            if (Actiune.type==Event::MouseMoved)
            {
                Vector2i PozitieMouse = Mouse::getPosition(Joc); //Vector2i=int
                Vector2f PozitieMouseFloat(static_cast<float>(PozitieMouse.x), static_cast<float>(PozitieMouse.y));//Vector2f=float
            }
            if (Actiune.type==Event::MouseButtonPressed)
            {
                Vector2i PozitieMouse = Mouse::getPosition(Joc); //Vector2i=int
                Vector2f PozitieMouseFloat(static_cast<float>(PozitieMouse.x), static_cast<float>(PozitieMouse.y));//Vector2f=float
                if (Restart.getGlobalBounds().contains(PozitieMouseFloat))
                {
                    for(int i=2;i<=60;i++)
                        v[i]=0;
                    Joc.close();
                    DeschiderePaginaNivele(v);
                }
                if ((nivel1.getGlobalBounds().contains(PozitieMouseFloat))&&v[1])
                {
                    Joc.close();
                    LoadingPagina_Nivel(1);
                }
                if ((nivel2.getGlobalBounds().contains(PozitieMouseFloat))&&v[2])
                {
                    Joc.close();
                    LoadingPagina_Nivel(2);
                }
                if ((nivel3.getGlobalBounds().contains(PozitieMouseFloat))&&v[3])
                {
                    Joc.close();
                    LoadingPagina_Nivel(3);
                }
                if( (nivel4.getGlobalBounds().contains(PozitieMouseFloat))&&v[4])
                {
                    Joc.close();
                    LoadingPagina_Nivel(4);
                }
                if ((nivel5.getGlobalBounds().contains(PozitieMouseFloat))&&v[5])
                {
                    Joc.close();
                    LoadingPagina_Nivel(5);
                }
                if ((nivel6.getGlobalBounds().contains(PozitieMouseFloat))&&v[6])
                {
                    Joc.close();
                    LoadingPagina_Nivel(6);
                }
                if ((nivel7.getGlobalBounds().contains(PozitieMouseFloat))&&v[7])
                {
                    Joc.close();
                    LoadingPagina_Nivel(7);
                }
                if ((nivel8.getGlobalBounds().contains(PozitieMouseFloat))&&v[8])
                {
                    Joc.close();
                    LoadingPagina_Nivel(8);
                }
                if ((nivel9.getGlobalBounds().contains(PozitieMouseFloat))&&v[9])
                {
                    Joc.close();
                    LoadingPagina_Nivel(9);
                }
                if ((nivel10.getGlobalBounds().contains(PozitieMouseFloat))&&v[10])
                {
                    Joc.close();
                    LoadingPagina_Nivel(10);
                }
                if ((nivel11.getGlobalBounds().contains(PozitieMouseFloat))&&v[11])
                {
                    Joc.close();
                    LoadingPagina_Nivel(11);
                }
                if ((nivel12.getGlobalBounds().contains(PozitieMouseFloat))&&v[12])
                {
                    Joc.close();
                    LoadingPagina_Nivel(12);
                }
                if( (nivel13.getGlobalBounds().contains(PozitieMouseFloat))&&v[13])
                {
                    Joc.close();
                    LoadingPagina_Nivel(13);
                }
                if ((nivel14.getGlobalBounds().contains(PozitieMouseFloat))&&v[14])
                {
                    Joc.close();
                    LoadingPagina_Nivel(14);
                }
                if ((nivel15.getGlobalBounds().contains(PozitieMouseFloat))&&v[15])
                {
                    Joc.close();
                    LoadingPagina_Nivel(15);
                }
                if ((nivel16.getGlobalBounds().contains(PozitieMouseFloat))&&v[16])
                {
                    Joc.close();
                    LoadingPagina_Nivel(16);
                }
                if ((nivel17.getGlobalBounds().contains(PozitieMouseFloat))&&v[17])
                {
                    Joc.close();
                    LoadingPagina_Nivel(17);
                }
                if ((nivel18.getGlobalBounds().contains(PozitieMouseFloat))&&v[18])
                {
                    Joc.close();
                    LoadingPagina_Nivel(18);
                }
                if( (nivel19.getGlobalBounds().contains(PozitieMouseFloat))&&v[19])
                {
                    Joc.close();
                    LoadingPagina_Nivel(19);
                }
                if ((nivel20.getGlobalBounds().contains(PozitieMouseFloat))&&v[20])
                {
                    Joc.close();
                    LoadingPagina_Nivel(20);
                }
                if ((nivel21.getGlobalBounds().contains(PozitieMouseFloat))&&v[21])
                {
                    Joc.close();
                    LoadingPagina_Nivel(21);
                }
                if( (nivel22.getGlobalBounds().contains(PozitieMouseFloat))&&v[22])
                {
                    Joc.close();
                    LoadingPagina_Nivel(22);
                }
                if ((nivel23.getGlobalBounds().contains(PozitieMouseFloat))&&v[23])
                {
                    Joc.close();
                    LoadingPagina_Nivel(23);
                }
                if ((nivel24.getGlobalBounds().contains(PozitieMouseFloat))&&v[24])
                {
                    Joc.close();
                    LoadingPagina_Nivel(24);
                }
                if ((nivel25.getGlobalBounds().contains(PozitieMouseFloat))&&v[25])
                {
                    Joc.close();
                    LoadingPagina_Nivel(25);
                }
                if ((nivel26.getGlobalBounds().contains(PozitieMouseFloat))&&v[26])
                {
                    Joc.close();
                    LoadingPagina_Nivel(26);
                }
                if ((nivel27.getGlobalBounds().contains(PozitieMouseFloat))&&v[27])
                {
                    Joc.close();
                    LoadingPagina_Nivel(27);
                }
                if ((nivel28.getGlobalBounds().contains(PozitieMouseFloat))&&v[28])
                {
                    Joc.close();
                    LoadingPagina_Nivel(28);
                }
                if ((nivel29.getGlobalBounds().contains(PozitieMouseFloat))&&v[29])
                {
                    Joc.close();
                    LoadingPagina_Nivel(29);
                }
                if ((nivel30.getGlobalBounds().contains(PozitieMouseFloat))&&v[30])
                {
                    Joc.close();
                    LoadingPagina_Nivel(30);
                }
                if ((nivel31.getGlobalBounds().contains(PozitieMouseFloat))&&v[31])
                {
                    Joc.close();
                    LoadingPagina_Nivel(31);
                }
                if ((nivel32.getGlobalBounds().contains(PozitieMouseFloat))&&v[32])
                {
                    Joc.close();
                    LoadingPagina_Nivel(32);
                }
                if ((nivel33.getGlobalBounds().contains(PozitieMouseFloat))&&v[33])
                {
                    Joc.close();
                    LoadingPagina_Nivel(33);
                }
                if ((nivel34.getGlobalBounds().contains(PozitieMouseFloat))&&v[34])
                {
                    Joc.close();
                    LoadingPagina_Nivel(34);
                }
                if ((nivel35.getGlobalBounds().contains(PozitieMouseFloat))&&v[35])
                {
                    Joc.close();
                    LoadingPagina_Nivel(35);
                }
                if ((nivel36.getGlobalBounds().contains(PozitieMouseFloat))&&v[36])
                {
                    Joc.close();
                    LoadingPagina_Nivel(36);
                }
                if ((nivel37.getGlobalBounds().contains(PozitieMouseFloat))&&v[37])
                {
                    Joc.close();
                    LoadingPagina_Nivel(37);
                }
                if ((nivel38.getGlobalBounds().contains(PozitieMouseFloat))&&v[38])
                {
                    Joc.close();
                    LoadingPagina_Nivel(38);
                }
                if ((nivel39.getGlobalBounds().contains(PozitieMouseFloat))&&v[39])
                {
                    Joc.close();
                    LoadingPagina_Nivel(39);
                }
                    if( (nivel40.getGlobalBounds().contains(PozitieMouseFloat))&&v[40])
                {
                    Joc.close();
                    LoadingPagina_Nivel(40);

                }
                    if ((nivel41.getGlobalBounds().contains(PozitieMouseFloat))&&v[41])
                {
                    Joc.close();
                    LoadingPagina_Nivel(41);
                }
                    if ((nivel42.getGlobalBounds().contains(PozitieMouseFloat))&&v[42])
                {
                    Joc.close();
                    LoadingPagina_Nivel(42);
                }
                    if ((nivel43.getGlobalBounds().contains(PozitieMouseFloat))&&v[43])
                {
                    Joc.close();
                    LoadingPagina_Nivel(43);
                }
                    if ((nivel44.getGlobalBounds().contains(PozitieMouseFloat))&&v[44])
                {
                    Joc.close();
                    LoadingPagina_Nivel(44);
                }
                    if ((nivel45.getGlobalBounds().contains(PozitieMouseFloat))&&v[45])
                {
                    Joc.close();
                    LoadingPagina_Nivel(45);
                }
                    if ((nivel46.getGlobalBounds().contains(PozitieMouseFloat))&&v[46])
                {
                    Joc.close();
                    LoadingPagina_Nivel(46);
                }
                    if ((nivel47.getGlobalBounds().contains(PozitieMouseFloat))&&v[47])
                {
                    Joc.close();
                    LoadingPagina_Nivel(47);
                }
                    if ((nivel48.getGlobalBounds().contains(PozitieMouseFloat))&&v[48])
                {
                    Joc.close();
                    LoadingPagina_Nivel(48);
                }
                    if ((nivel49.getGlobalBounds().contains(PozitieMouseFloat))&&v[49])
                {
                    Joc.close();
                    LoadingPagina_Nivel(49);
                }
                  if ((nivel50.getGlobalBounds().contains(PozitieMouseFloat))&&v[50])
                {
                    Joc.close();
                    LoadingPagina_Nivel(50);
                }
                  if ((nivel51.getGlobalBounds().contains(PozitieMouseFloat))&&v[51])
                {
                    Joc.close();
                    LoadingPagina_Nivel(51);
                }
                  if ((nivel52.getGlobalBounds().contains(PozitieMouseFloat))&&v[52])
                {
                    Joc.close();
                    LoadingPagina_Nivel(52);
                }
                  if ((nivel53.getGlobalBounds().contains(PozitieMouseFloat))&&v[53])
                {
                    Joc.close();
                    LoadingPagina_Nivel(53);
                }
                  if ((nivel54.getGlobalBounds().contains(PozitieMouseFloat))&&v[54])
                {
                    Joc.close();
                    LoadingPagina_Nivel(54);
                }
                  if ((nivel55.getGlobalBounds().contains(PozitieMouseFloat))&&v[55])
                {
                    Joc.close();
                    LoadingPagina_Nivel(55);
                }
                  if ((nivel56.getGlobalBounds().contains(PozitieMouseFloat))&&v[56])
                {
                    Joc.close();
                    LoadingPagina_Nivel(56);
                }
                  if ((nivel57.getGlobalBounds().contains(PozitieMouseFloat))&&v[57])
                {
                    Joc.close();
                    LoadingPagina_Nivel(57);
                }
                  if ((nivel58.getGlobalBounds().contains(PozitieMouseFloat))&&v[58])
                {
                    Joc.close();
                    LoadingPagina_Nivel(58);
                }
                   if ((nivel59.getGlobalBounds().contains(PozitieMouseFloat))&&v[59])
                {
                    Joc.close();
                    LoadingPagina_Nivel(59);
                }
                   if ((nivel60.getGlobalBounds().contains(PozitieMouseFloat))&&v[60])
                {
                    Joc.close();
                    LoadingPagina_Nivel(60);
                }
            }
        }


        Joc.clear(culoare_fundal);
        Joc.draw(fundalul);
        Joc.draw(titlu);
        Joc.draw(dificultate_starter);
        Joc.draw(dificultate_junior);
        Joc.draw(dificultate_expert);
        Joc.draw(dificultate_master);
        Joc.draw(nivel1);
        Joc.draw(nivel2);
        Joc.draw(nivel3);
        Joc.draw(nivel4);
        Joc.draw(nivel5);
        Joc.draw(nivel6);
        Joc.draw(nivel7);
        Joc.draw(nivel8);
        Joc.draw(nivel9);
        Joc.draw(nivel10);
        Joc.draw(nivel11);
        Joc.draw(nivel12);
        Joc.draw(nivel13);
        Joc.draw(nivel14);
        Joc.draw(nivel15);
        Joc.draw(nivel16);
        Joc.draw(nivel17);
        Joc.draw(nivel18);
        Joc.draw(nivel19);
        Joc.draw(nivel20);
        Joc.draw(nivel21);
        Joc.draw(nivel22);
        Joc.draw(nivel23);
        Joc.draw(nivel24);
        Joc.draw(nivel25);
        Joc.draw(nivel26);
        Joc.draw(nivel27);
        Joc.draw(nivel28);
        Joc.draw(nivel29);
        Joc.draw(nivel30);
        Joc.draw(nivel31);
        Joc.draw(nivel32);
        Joc.draw(nivel33);
        Joc.draw(nivel34);
        Joc.draw(nivel35);
        Joc.draw(nivel36);
        Joc.draw(nivel37);
        Joc.draw(nivel38);
        Joc.draw(nivel39);
        Joc.draw(nivel40);
        Joc.draw(nivel41);
        Joc.draw(nivel42);
        Joc.draw(nivel43);
        Joc.draw(nivel44);
        Joc.draw(nivel45);
        Joc.draw(nivel46);
        Joc.draw(nivel47);
        Joc.draw(nivel48);
        Joc.draw(nivel49);
        Joc.draw(nivel50);
        Joc.draw(nivel51);
        Joc.draw(nivel52);
        Joc.draw(nivel53);
        Joc.draw(nivel54);
        Joc.draw(nivel55);
        Joc.draw(nivel56);
        Joc.draw(nivel57);
        Joc.draw(nivel58);
        Joc.draw(nivel59);
        Joc.draw(nivel60);
        Joc.draw(Restart);
        for(int i=1; i<=60; i++)
        {
            if(v[i]==0)
            {
                if(i==2)Joc.draw(lacat2);
                else if(i==3)Joc.draw(lacat3);
                else if(i==4)Joc.draw(lacat4);
                else if(i==5)Joc.draw(lacat5);
                else if(i==6)Joc.draw(lacat6);
                else if(i==7)Joc.draw(lacat7);
                else if(i==8)Joc.draw(lacat8);
                else if(i==9)Joc.draw(lacat9);
                else if(i==10)Joc.draw(lacat10);
                else if(i==11)Joc.draw(lacat11);
                else if(i==12)Joc.draw(lacat12);
                else if(i==13)Joc.draw(lacat13);
                else if(i==14)Joc.draw(lacat14);
                else if(i==15)Joc.draw(lacat15);
                else if(i==16)Joc.draw(lacat16);
                else if(i==17)Joc.draw(lacat17);
                else if(i==18)Joc.draw(lacat18);
                else if(i==19)Joc.draw(lacat19);
                else if(i==20)Joc.draw(lacat20);
                else if(i==21)Joc.draw(lacat21);
                else if(i==22)Joc.draw(lacat22);
                else if(i==23)Joc.draw(lacat23);
                else if(i==24)Joc.draw(lacat24);
                else if(i==25)Joc.draw(lacat25);
                else if(i==26)Joc.draw(lacat26);
                else if(i==27)Joc.draw(lacat27);
                else if(i==28)Joc.draw(lacat28);
                else if(i==29)Joc.draw(lacat29);
                else if(i==30)Joc.draw(lacat30);
                else if(i==31)Joc.draw(lacat31);
                else if(i==32)Joc.draw(lacat32);
                else if(i==33)Joc.draw(lacat33);
                else if(i==34)Joc.draw(lacat34);
                else if(i==35)Joc.draw(lacat35);
                else if(i==36)Joc.draw(lacat36);
                else if(i==37)Joc.draw(lacat37);
                else if(i==38)Joc.draw(lacat38);
                else if(i==39)Joc.draw(lacat39);
                else if(i==40)Joc.draw(lacat40);
                else if(i==41)Joc.draw(lacat41);
                else if(i==42)Joc.draw(lacat42);
                else if(i==43)Joc.draw(lacat43);
                else if(i==44)Joc.draw(lacat44);
                else if(i==45)Joc.draw(lacat45);
                else if(i==46)Joc.draw(lacat46);
                else if(i==47)Joc.draw(lacat47);
                else if(i==48)Joc.draw(lacat48);
                else if(i==49)Joc.draw(lacat49);
                else if(i==50)Joc.draw(lacat50);
                else if(i==51)Joc.draw(lacat51);
                else if(i==52)Joc.draw(lacat52);
                else if(i==53)Joc.draw(lacat53);
                else if(i==54)Joc.draw(lacat54);
                else if(i==55)Joc.draw(lacat55);
                else if(i==56)Joc.draw(lacat56);
                else if(i==57)Joc.draw(lacat57);
                else if(i==58)Joc.draw(lacat58);
                else if(i==59)Joc.draw(lacat59);
                else if(i==60)Joc.draw(lacat60);
            }
        }
        Joc.display();

    }
}


void DeschidereReguli()
{

    RenderWindow Joc(VideoMode(1400, 700), "Smart Farmer", Style::None); //declarare fereastra
    Joc.setPosition(sf::Vector2i(300, 200)); //pozitia in functie de ecran
    Text titlu; titlu.setFont(FONTUL); titlu.setString("Smart Farmer"); titlu.setCharacterSize(70); titlu.setFillColor(Color(237, 139, 32));
    titlu.setPosition( 10.f, 2.f);titlu.setOutlineThickness(5);titlu.setOutlineColor(Color(0,0,0));
    Sprite Inapoi; Inapoi.setTexture(btn_inapoi); Inapoi.setPosition(1340.f, 640.f);
    Sprite imgregula2; imgregula2.setTexture(regula2);imgregula2.setPosition(100.f,90.f);
    Sprite imgregula1; imgregula1.setTexture(regula1);imgregula1.setPosition(100.f,245.f);
    Sprite imgregula4; imgregula4.setTexture(regula4);imgregula4.setPosition(100.f,400.f);
    Sprite imgregula3; imgregula3.setTexture(regula3);imgregula3.setPosition(100.f,555.f);

    Text reguli1; reguli1.setFont(FONTUL); reguli1.setString("-Impartiti campul in pajisti separate folosind gardurile :"); reguli1.setCharacterSize(25); reguli1.setFillColor(Color::Black); reguli1.setPosition(400.f, 100.f);
    Text reguli2; reguli2.setFont(FONTUL); reguli2.setString("Caii, vacile, oile si porcii trebuie sa ajunga in pajisti diferite, separate."); reguli2.setCharacterSize(25); reguli2.setFillColor(Color::Black); reguli2.setPosition(400.f, 130.f);
    Text reguli3; reguli3.setFont(FONTUL); reguli3.setString("-In provocarile ulterioare, fiecare pajiste separata trebuie sa aiba"); reguli3.setCharacterSize(25); reguli3.setFillColor(Color::Black); reguli3.setPosition(400.f, 255.f);
    Text reguli33; reguli33.setFont(FONTUL); reguli33.setString("jgheab de apa pentru animalul din pajiste."); reguli33.setCharacterSize(25); reguli33.setFillColor(Color::Black); reguli33.setPosition(400.f, 285.f);
    Text reguli4; reguli4.setFont(FONTUL); reguli4.setString("-Nu toate gardurile sunt necesare pentru fiecare solutie.Uneori veti avea"); reguli4.setCharacterSize(25); reguli4.setFillColor(Color::Black); reguli4.setPosition(400.f, 160.f);
    Text reguli44; reguli44.setFont(FONTUL); reguli44.setString("nevoie doar de 1 sau 2."); reguli44.setCharacterSize(25); reguli44.setFillColor(Color::Black); reguli44.setPosition(400.f, 190.f);
    Text reguli5; reguli5.setFont(FONTUL); reguli5.setString("-Poti schimba doar pozitiile celor 3 garduri.Nu aveti voie sa schimbati"); reguli5.setCharacterSize(25); reguli5.setFillColor(Color::Black); reguli5.setPosition(350.f, 410.f);
    Text reguli55; reguli55.setFont(FONTUL); reguli55.setString("pozitia animalelor sau a jgheaburilor de apa."); reguli55.setCharacterSize(25); reguli55.setFillColor(Color::Black); reguli55.setPosition(350.f, 440.f);
    Text reguli6; reguli6.setFont(FONTUL); reguli6.setString("-Toate pajistile ar trebui sa fie ocupate - nu vor exista pajisti goale"); reguli6.setCharacterSize(25); reguli6.setFillColor(Color::Black); reguli6.setPosition(350.f, 565.f);
    Text reguli66; reguli66.setFont(FONTUL); reguli66.setString("in solutie."); reguli66.setCharacterSize(25); reguli66.setFillColor(Color::Black); reguli66.setPosition(350.f, 595.f);
    Text reguli7; reguli7.setFont(FONTUL); reguli7.setString("-Exista o singura solutie posibila."); reguli7.setCharacterSize(25); reguli7.setFillColor(Color::Black); reguli7.setPosition(350.f, 625.f);
    while (Joc.isOpen())
    {
        Event Actiune;
        while (Joc.pollEvent(Actiune))
        {
            if (Actiune.type==Event::Closed) Joc.close();
            if (Actiune.type==Event::MouseMoved)
            {
                Vector2i PozitieMouse = Mouse::getPosition(Joc);
                Vector2f PozitieMouseFloat(static_cast<float>(PozitieMouse.x), static_cast<float>(PozitieMouse.y));
            }
            if (Actiune.type==Event::MouseButtonPressed)
            {
                Vector2i PozitieMouse = Mouse::getPosition(Joc);
                Vector2f PozitieMouseFloat(static_cast<float>(PozitieMouse.x), static_cast<float>(PozitieMouse.y));
                if (Inapoi.getGlobalBounds().contains(PozitieMouseFloat))
                {
                    Joc.close();
                }

            }
        }
        Joc.clear(culoare_fundal);
        Joc.draw(titlu);
        Joc.draw(Inapoi);
        Joc.draw(imgregula1);
        Joc.draw(imgregula2);
        Joc.draw(imgregula3);
        Joc.draw(imgregula4);
        Joc.draw(reguli1);
        Joc.draw(reguli2);
        Joc.draw(reguli3);
        Joc.draw(reguli33);
        Joc.draw(reguli4);
        Joc.draw(reguli44);
        Joc.draw(reguli5);
        Joc.draw(reguli55);
        Joc.draw(reguli6);
        Joc.draw(reguli66);
        Joc.draw(reguli7);
        Joc.display();
    }
}
void DeschidereMeniu()
{
    RenderWindow Joc(VideoMode(1400, 700), "Smart Farmer", Style::None);
    Joc.setPosition(sf::Vector2i(300, 200));
    Text titlu; titlu.setFont(FONTUL); titlu.setString("Smart Farmer"); titlu.setCharacterSize(70); titlu.setFillColor(Color(237, 139, 32));
    titlu.setPosition( 10.f, 2.f);titlu.setOutlineThickness(5);titlu.setOutlineColor(Color(0,0,0));
    Sprite ButonStart; ButonStart.setTexture(btn_start); ButonStart.setPosition(450.f, 200.f);
    Sprite ButonReguli; ButonReguli.setTexture(btn_reguli); ButonReguli.setPosition(450.f, 370.f);
    Sprite ButonIesire; ButonIesire.setTexture(btn_iesire); ButonIesire.setPosition(1345.f, 8.f);
    Sprite fundalul;  fundalul.setTexture(fundal);
    Sprite Mute; Mute.setTexture(mute); Mute.setPosition(1345.f, 645.f);
    Sprite Unmute; Unmute.setTexture(unmute); Unmute.setPosition(1280.f, 645.f);

     while (Joc.isOpen())
    {
        Event Actiune;
        while (Joc.pollEvent(Actiune))
        {
            if (Actiune.type==Event::Closed) Joc.close();
            if (Actiune.type==Event::MouseMoved)
            {
                Vector2i PozitieMouse = Mouse::getPosition(Joc);
                Vector2f PozitieMouseFloat(static_cast<float>(PozitieMouse.x), static_cast<float>(PozitieMouse.y));

            }
            if (Actiune.type==Event::MouseButtonPressed)
            {
                Vector2i PozitieMouse = Mouse::getPosition(Joc);
                Vector2f PozitieMouseFloat(static_cast<float>(PozitieMouse.x), static_cast<float>(PozitieMouse.y));
                if (ButonStart.getGlobalBounds().contains(PozitieMouseFloat))
                {
                    Joc.close();
                    DeschiderePaginaNivele(v);
                }
                if (ButonReguli.getGlobalBounds().contains(PozitieMouseFloat))
                {
                    DeschidereReguli();
                }
                if (ButonIesire.getGlobalBounds().contains(PozitieMouseFloat))
                {
                    Joc.close();
                }
                if (Mute.getGlobalBounds().contains(PozitieMouseFloat))
                {
                    background_sound.setVolume(0.f);
                }
                if (Unmute.getGlobalBounds().contains(PozitieMouseFloat))
                {background_sound.play(); background_sound.setLoop(true);
                background_sound.setVolume(15.f);
                }
            }

        }
        Joc.clear(culoare_fundal);
        Joc.draw(fundalul);
        Joc.draw(titlu);
        Joc.draw(ButonStart);
        Joc.draw(ButonReguli);
        Joc.draw(ButonIesire);
        Joc.draw(Mute);
        Joc.draw(Unmute);
        Joc.display();
    }
}



void StartJoc() //LOADING
{
    RenderWindow Joc(VideoMode(900, 900), "Smart Farmer", Style::None);
    Joc.setPosition(sf::Vector2i(500, 100));
    Time delay1 = seconds(0.5), delay2 = seconds(1);
    Text titlu; titlu.setFont(FONTUL); titlu.setString("Smart Farmer"); titlu.setCharacterSize(70); titlu.setFillColor(Color(237, 139, 32));
    titlu.setPosition( 900/2.0f, 300.f);titlu.setOutlineThickness(5);titlu.setOutlineColor(Color(0,0,0));
    titlu.setOrigin(titlu.getLocalBounds().width / 2.0f, titlu.getLocalBounds().height / 2.0f);
    Text loading; loading.setFont(FONTUL); loading.setString("loading"); loading.setCharacterSize(40); loading.setFillColor(Color(237, 139, 32)); loading.setPosition(360.f, 400.f);
    loading.setOutlineThickness(5);loading.setOutlineColor(Color(0,0,0));
    Text loadingPunct1; loadingPunct1.setFont(FONTUL); loadingPunct1.setString("."); loadingPunct1.setCharacterSize(40); loadingPunct1.setFillColor(Color(237, 139, 32)); loadingPunct1.setPosition(540.f, 400.f);
    Text loadingPunct2; loadingPunct2.setFont(FONTUL); loadingPunct2.setString("."); loadingPunct2.setCharacterSize(40); loadingPunct2.setFillColor(Color(237, 139, 32)); loadingPunct2.setPosition(560.f, 400.f);
    Text loadingPunct3; loadingPunct3.setFont(FONTUL); loadingPunct3.setString("."); loadingPunct3.setCharacterSize(40); loadingPunct3.setFillColor(Color(237, 139, 32)); loadingPunct3.setPosition(580.f, 400.f);
    loadingPunct1.setOutlineThickness(5);loadingPunct1.setOutlineColor(Color(0,0,0));
    loadingPunct2.setOutlineThickness(5);loadingPunct2.setOutlineColor(Color(0,0,0));
    loadingPunct3.setOutlineThickness(5);loadingPunct3.setOutlineColor(Color(0,0,0));
    while (Joc.isOpen())
    {
        Event Actiune;
        while (Joc.pollEvent(Actiune))
        {
            if (Actiune.type==Event::Closed) Joc.close();
        }

    Joc.clear(culoare_fundal);
    Joc.draw(titlu);
    Joc.draw(loading);
    Joc.display();
    sleep(delay1);
    Joc.clear(culoare_fundal);
    Joc.draw(titlu);
    Joc.draw(loading);
    Joc.draw(loadingPunct1);
    Joc.display();
    sleep(delay1);
    Joc.clear(culoare_fundal);
    Joc.draw(titlu);
    Joc.draw(loading);
    Joc.draw(loadingPunct1);
    Joc.draw(loadingPunct2);
    Joc.display();
    sleep(delay1);
    Joc.clear(culoare_fundal);
    Joc.draw(titlu);
    Joc.draw(loading);
    Joc.draw(loadingPunct1);
    Joc.draw(loadingPunct2);
    Joc.draw(loadingPunct3);
    Joc.display();
    sleep(delay2);
    Joc.close();
    DeschidereMeniu();


    }

}


int main()
{v[1]=1;
    SetareTexture();
    openFonts();
    openSounds();
    StartJoc();

    return 0;
}
