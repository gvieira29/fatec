//Variaveis
/*
    btu = 0
    ValueRegion
    TypePlace
    TypeArea
    Slab
    Meters
    TotalMeters
    People
    TotalPeople 
    Eletronics
    TotalEletronics

    KindLamps 
    NumLamps
    TotalLamps
    Windows
    TotalWindows

    600 btu p/ m2
    200 btu+ p/ sol tarde


*/
//Leitura
TbWindows 
TbNumLamps
TbEletronic
TbPeople
TbMeters

//Select region
CbRegion
0 = ValueRegion = 0; //south
1 = ValueRegion = 100; //southweast
2 = ValueRegion = 400; //north
3 = ValueRegion = 500; //northweast

default = ValueRegion = 200; //midweast

//Select type of place House or Apartment                
CbType                
house = 700;
apartament = 600;               

//information if the area is commercial area
CbCommercialArea
comercial = 800;
residencial = 600;
                
//The place have slab?
CbSlab
c/ laje = 0;
s/ laje = 1200;
                
//calculate eletronic

tEletronicos =  quantEletronicos * btu

//kind of lamps

printf ("Insira quantidade de lampadas.....: ");
scanf ("%i", &quantLampada);

printf ("Insira tipo de lampada.....: ");
scanf ("%i", &tipoLampada)

if (tipoLampada == 1)
{
    //lampada quente = 300
}
else if (tipoLampada == 2)
{
    //çapada fria = 100
}
quantLampada
tipoLampada

    1 = Lampada Fria = 100
    2 = Lampada Quente = 300
                
totlampada = quantLampada * tipoLampada                

//Calculate windows

janela
cortina
totJanela = (cortinas / 2) * janela

 Windows = int.Parse(TbNumLamps.Text);
CbWindows
0 = TotalWindows = Windows * 600;
default = TotalWindows = Windows * 600;

///////////////////////////////////////
btu = ValueRegion + TypePlace + TypeArea + Slab + TotalMeters + TotalPeople + TotalEletronics + TotalLamps + TotalWindows;

"For your use acording with informations you need air conditioning with " + btu + " btu's"

Exception
CbRegion = "You need inform the region!"
CbType = "You need inform type of area!"
CbCommercialArea = "You need inform if area is comercial"
CbSlab = "You need inform if have slab!"
TbMeters = "You need inform how many square meters has the place!"
TbPeople = "You need inform how many people have live or stay in place!"
TbEletronic = "You need inform how many eletronics have in place!"
CbLamps = "You need inform the type of lamps"
TbNumLamps = "You need inform how many lamps have in place"
TbWindows = "You need inform how many windows have in place"
CbWindows = "You need inform if have curtains in windows"