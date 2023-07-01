#include <iostream>
using namespace std;

int main(){
    int soal;
    char zodiak;
    char grade;
    cout << "soal ke : "; cin >> soal;
    if (soal == 1){
        cout << "grade a-e : "; cin >> grade;
        if (grade == 'a' || grade == 'A'){
            cout << "PERTAHANKAN";
        }
        else if (grade == 'b' || grade == 'B'){
            cout << "LEBIH GIAT LAGI";
        }
        else if (grade == 'c' || grade == 'C'){
            cout << "BELAJAR LAGI SAMPAI BISA";
        }
        else if (grade == 'd' || grade == 'D'){
            cout << "FOCUS DAN KONSTRASI BELAJAR";
        }
        else if (grade == 'a' || grade == 'E'){
            cout << "SILAHKAN MENGULANG DI SMESTER LAIN";
        }
        else {
            cout << "GRADE TIDAK ADA\n";
            main();
        }
    }
    else if (soal == 2){
        cout << "zodiak ke : "; cin >> zodiak;
        if (zodiak =='1'){
            cout << "Aries = Jujur" << endl << "Aries selalu memberi kesan percaya diri yang apa adanya sesuai dengan realita yang ada. Ia real, tidak menutupi apa pun dan cenderung jujur.";
        }
        else if (zodiak == '2') {
            cout << "Taurus = Ketenangan" << endl << "Orang-orang bisa segera melihat ketenangan dalam diri Taurus. Ia selalu memberi kesan sosok berpikiran kuat yang mandiri dan terkendali.";
        }
        else if (zodiak == '3') {
            cout << "Gemini = Menyenangkan" << endl << "Orang langsung merasa nyaman dengan pesona Gemini yang ramah, murah senyum dan selalu ingin tahu. Banyak orang juga ingin mengenal gemini lebih baik.";
        }
        else if (zodiak == '4') {
            cout << "Cancer = Kebaikan" << endl << "Satu hal yang selalu langsung bisa diperhatikan dari Cancer adalah sifatnya yang baik kepada siapa saja. Cancer selalu tampak polos dan penuh perhatian.";
        }
        else if (zodiak == '5') {
            cout << "Leo = Karisma" << endl << "Leo selalu menunjukkan kesan karismatik alami baik secara penampilan maupun kepribadian. Leo begitu mempesona dan memiliki kepercayaan diri yang dominan.";
        }
        else if (zodiak == '6') {
            cout << "Virgo = Sopan" << endl << "Orang selalu mudah mendefisiniskan Virgo sebagai sosok yang sopan dan tahu tata krama. Ia mungkin menunjukkan sikap pemalu atau sungkan di pertemuan pertama.";
        }
        else if (zodiak == '7') {
            cout << "Libra = Magnetisme" << endl << "Libra memiliki daya tarik alami dengan sikapnya yang hangat dan ramah. Orang lain tidak merasakan bahaya ketika dekat dengan Libra karena tatapan matanya teduh.";
        }
        else if (zodiak == '8') {
            cout << "Scorpio = Kuat" << endl << "Scorpio selalu memberi kesan pribadi yang kuat dan tak ingin diremehkan. Ia menyenangkan tapi seakan ada sesuatu yang ditahan atau disembunyikan dari orang lain.";
        }
        else if (zodiak == '9') {
            cout << "Sagitarius = Antusiasme" << endl << "Gampang bercanda dan mudah tertawa adalah kesan sifat yang paling lekat dengan Sagitarius. Ia selalu memancarkan energi antusias terhadap apa saja.";
        }
        else if (zodiak == '10') {
            cout << "Capricorn = Dewasa" << endl << "Orang selalu mudah menilai Capricorn sebagai sosok yang terkendali, agak serius dan suka mengikuti aturan yang ada. Kedewasaan yang sering dikagumi banyak orang.";
        }
        else if (zodiak == '11') {
            cout << "Aquarius = Berjiwa bebas" << endl << "Bahkan jika orang lain melihat Aquarius sebagai pemalu, kesan berjiwa bebas itu tetap ada. Orang lain langsung merasa bisa bicara dengan Aquarius tanpa merasa dihakimi.";
        }
        else if (zodiak == '12') {
            cout << "Pisces = Perhatian" << endl << "Begitu seseorang memulai percakapan dengan Pisces, kesan perhatian, simpati dan perasa adalah sifat utama yang tergambar jelas pada sikap, kata-kata dan wajah seorang Pisces.";
        }
        else {
            cout << "zodiak tidak ada";
            main();
        }
    }
    else {
        cout << "soal tidak ada";
        main();
    }
}
