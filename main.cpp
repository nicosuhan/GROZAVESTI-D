#include <iostream>

class caminist
{
private:
    std::string nume;
    int an;
    float medie;
    std::string specializare;

public:

    //am scris mai jos si getteri si setteri chiar daca de setteri nu voi avea nevoie nicodata(pt ca voi folosi constructori) si getterii ii voi folosi foarte rar
    const std::string &getNume() const {
        return nume;
    }
    void setNume(const std::string &nume) {
        caminist::nume = nume;
    }
    int getAn() const {
        return an;
    }
    void setAn(int an) {
        caminist::an = an;
    }
    float getMedie() const {
        return medie;
    }
    void setMedie(float medie) {
        caminist::medie = medie;
    }
    const std::string &getSpecializare() const {
        return specializare;
    }
    void setSpecializare(const std::string &specializare) {
        caminist::specializare = specializare;
    }

    //constructorul explicit de initializare(am pus parametru impliciti la constructor pentru a nu avea probleme)
    explicit caminist(const std::string& nume_="S", int an_=1, float medie_=10,const std::string& specializare_="speci") : nume{nume_}, an{an_}, medie{medie_}, specializare{specializare_}{}

    //constructorul de copiere
    caminist(const caminist& other): nume{other.nume}, an{other.an}, medie{other.medie}, specializare{other.specializare}
    {
        //std::cout<<"Testam constructorul de copiere"<<std::endl;
        //sterge comentariul pentru a testa
    }

    //operator= de copiere
    caminist& operator=(const caminist &other)
    {
        nume=other.nume;
        an=other.an;
        medie=other.medie;
        specializare=other.specializare;
        std::cout<<"Testam operatorul= de copiere"<<std::endl;
        return *this;
    }

    //destructor
    ~caminist()
    {
        //std::cout<<"A fost apelat destructorul"<<std::endl;
        //sterge comentariul pentru verificarea apelarii
    }

    //operator<<
    friend std::ostream& operator<<(std::ostream& os, const caminist& c)
    {
        os<< "Nume: " << c.nume << ", An: " << c.an << ", Medie: " << c.medie << ", Specializare: " << c.specializare;
        return os;
    }

    //functii
    void prezinta_te()
    {
        std::cout<<"Numele meu este "<<nume<<" si sunt student in anul "<<an<<" la specializarea "<<specializare<<"."<<std::endl;
    }
    void ai_medie_pentru_camin()
    {
        if(medie>7.34) std::cout<<"Felicitari, ai loc la camin!"<<std::endl;
        else std::cout<<"Mult succes la cautat chirie."<<std::endl;
    }

};

class camera {
private:
    caminist coleg1, coleg2;
    int catistauincamera;
    int nrcamera;
    std::string aucursurimaine;
public:
    // Constructor explicit de inițializare
    explicit camera(const caminist& coleg1_, const caminist& coleg2_, int catistauincamera_, int nrcamera_, const std::string aucursurimaine_)
            : coleg1(coleg1_), coleg2(coleg2_), catistauincamera(catistauincamera_), nrcamera(nrcamera_), aucursurimaine(aucursurimaine_) {}

    //operator<<
    friend std::ostream& operator<<(std::ostream& os, const camera& ca)
    {
        os<<"Camera: "<<ca.nrcamera<<std::endl<< "Locatari:" << ca.coleg1.getNume() << ", " << ca.coleg2.getNume() <<std::endl<< "Numar locatari:" << ca.catistauincamera <<std::endl<<  "Maine " << ca.aucursurimaine<<" cursuri"<<std::endl;
        return os;
    }
    //getteri
    const caminist &getColeg1() const {
        return coleg1;
    }

    const caminist &getColeg2() const {
        return coleg2;
    }

    const std::string &getAucursurimaine() const {
        return aucursurimaine;
    }
    caminist cinearemediamaimareincamera()
    {
        if (coleg1.getMedie()>coleg2.getMedie()) return coleg1;
        else return coleg2;
    }
    void estevreunlocliber()
    {
        if (catistauincamera<2) std::cout<<"Este loc liber"<<std::endl;
        else std::cout<<"Nu mai avem locuri"<<std::endl;
    }
};
//pentru a nu pierde timp cu introducerea mai multor date vom presupune ca pe fiecare palier/etaj sunt 2, nu 40 cum sunt in realiate
class palier
{
private:
    camera camera1, camera2;
    std::string numee;
    int nretaj;
public:
    //constructor explicit de initializare
    explicit palier(const camera& camera1_, const camera& camera2_, const std::string numee_, int nretaj_)
            :camera1(camera1_), camera2(camera2_), numee(numee_), nretaj(nretaj_){}
    //operator<<
    friend std::ostream& operator<<(std::ostream& os, const palier& p)
    {
        os<<"Numar etaj: "<<p.nretaj<<std::endl<<"Locatari: "<<p.camera1.getColeg1().getNume()<<", "<<p.camera1.getColeg2().getNume()<<", "<<p.camera2.getColeg1().getNume()<<", "<<p.camera2.getColeg2().getNume()<<std::endl<<"Numele etajului:"<<p.numee;
        return os;
    }
    //getter
    const camera &getCamera1() const {
        return camera1;
    }

    const camera &getCamera2() const {
        return camera2;
    }
    //functie
    void dampetrcere()
    {
        if (camera1.getAucursurimaine()=="nu au" and camera2.getAucursurimaine()=="nu au")
            std::cout<<"Se da petrecere la etajul "<<nretaj<<std::endl;
        else
            std::cout<<"Ne culcacam devreme ca maine avem cursuri "<<std::endl;
    }
    //seful de palier este elevul cu cea mai mare medie de pe palier
    void sef_palier()
    {
        if (camera1.cinearemediamaimareincamera().getMedie()>camera2.cinearemediamaimareincamera().getMedie()) std::cout<<camera1.cinearemediamaimareincamera().getNume()<<std::endl;
        else std::cout<<camera2.cinearemediamaimareincamera().getNume()<<std::endl;
    }

};
//un camin are 3 etaje numerotate de la 1 la 3
class camin
{
private:
    palier palier1, palier2, palier3;
    std::string numecamin;
    int nota;
    int nrloccamin;
public:
    //constructor explicit de initializare
    explicit camin(const palier& palier1_, const palier& palier2_, const palier& palier3_, const std::string numecamin_, int nota_, int nrloccamin_)
            :palier1(palier1_), palier2(palier2_), palier3(palier3_), numecamin(numecamin_), nota(nota_), nrloccamin(nrloccamin_){}
    //operator<<
    friend std::ostream& operator<<(std::ostream& os, const camin& cam)
    {
        os<<"Nume: "<<cam.numecamin<<std::endl<<"Nota camin:"<<cam.nota<<std::endl<<"Numar locatari:"<<cam.nrloccamin;
        return os;
    }
    void media()
    {
        float total=0;
        total=total+palier1.getCamera1().getColeg1().getMedie();
        total=total+palier1.getCamera1().getColeg2().getMedie();
        total=total+palier1.getCamera2().getColeg1().getMedie();
        total=total+palier1.getCamera2().getColeg2().getMedie();

        total=total+palier2.getCamera1().getColeg1().getMedie();
        total=total+palier2.getCamera1().getColeg2().getMedie();
        total=total+palier2.getCamera2().getColeg1().getMedie();
        total=total+palier2.getCamera2().getColeg2().getMedie();

        total=total+palier3.getCamera1().getColeg1().getMedie();
        total=total+palier3.getCamera1().getColeg2().getMedie();
        total=total+palier3.getCamera2().getColeg1().getMedie();
        total=total+palier3.getCamera2().getColeg2().getMedie();

        std::cout<<total/9.0;

    }
};


int main()
{
    caminist caministlipsa=caminist("",0,0,"");
    caminist caminist1=caminist("Suhan Nicoleta", 1, 8.87, "Informatica");
    caminist caminist2=caminist("Onisie Andreea", 1, 8.99, "Informatica");
    caminist caminist3=caminist("Carciumaru Adelin", 1, 8.50, "Informatica");
    caminist caminist4=caminist("Lumanararu Ionut", 1, 8.40, "Informatica");
    caminist caminist5=caminist("Glod Cosmin", 1, 9.91, "Informatica");
    caminist caminist6=caminist("Trifan Marius", 1, 7.23, "Matematica");
    caminist caminist7=caminist("Nistor Horia", 1, 8.53, "Matematica");
    caminist caminist8=caminist("Trifan Iustin", 1, 6.87, "CTI");
    caminist caminist9=caminist("Iovan Andrei", 1, 7.87, "CTI");
    caminist as_vrea_sa_fiu_caminist_dar_nu_am_medie=caminist("Popescu Ion", 1, 5.70, "Matematica");

    camera camera335=camera(caminist1, caminist2, 2, 335, "nu au");
    camera camera321=camera(caminist3, caminist4, 2, 321, "nu au");
    camera cameragoala=camera(caministlipsa, caministlipsa, 0, 0, "au");
    camera camera313=camera(caminist5, caministlipsa, 1, 313, "au");
    camera camera307=camera(caminist6, caminist7, 2, 307, "au");
    camera camera310=camera(caminist8, caminist9,2,310,"au");


    palier etaj1=palier(camera335, camera321, "INFORMATICIENII", 1);
    palier etaj2=palier(camera313, cameragoala, "ETAJUL APROAPE GOL", 2);
    palier etaj3=palier(camera307, camera310, "CTI+MATE", 3);

    camin caminD=camin(etaj1, etaj2, etaj3, "Camin Grozavesti D", 10, 9);

    /*

    std::cout<<etaj1;
    std::cout<<etaj2;
    std::cout<<etaj3;


    std::cout<<camera335;
    std::cout<<camera321;
    std::cout<<camera313;
    std::cout<<camera307;
    std::cout<<camera310;

    //testam constructorul de copiere
    caminist caminist10=caminist1;
    caminist10.prezinta_te();

    //testam operatorul= de copiera
    caminist caminist11;
    caminist11=caminist2;
    caminist2.prezinta_te();

    //testam destructorul(haha teapa nu-l mai apelam si noi pentru ca vom avea bug-uri, eu sigur nu l-am apelat si apoi am facut debugging 2 ore)

    //testam operatorul<<
    std::cout<<caminist1;
    std::cout<<caminD;
    */
    //urmeaza sa testam functiile
    caminist1.prezinta_te();
    caminist2.prezinta_te();
    caminist3.prezinta_te();

    caminist1.ai_medie_pentru_camin();
    caminist2.ai_medie_pentru_camin();
    as_vrea_sa_fiu_caminist_dar_nu_am_medie.ai_medie_pentru_camin();

    etaj1.dampetrcere();
    etaj2.dampetrcere();
    etaj3.dampetrcere();

    etaj1.sef_palier();
    etaj2.sef_palier();
    etaj3.sef_palier();

    camera313.estevreunlocliber();
    camera335.estevreunlocliber();

    caminD.media();
    return 0;
}
