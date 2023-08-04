#include<iostream>
#include<vector>
#include<string>
#include<regex>
using namespace std;

//クラスの構築
class Videos {
	string title;
	string url;
	int date;
public:
	void setTitle(const string& newTitle) { title = newTitle; }
	string getTitle() { return title; }
	void setUrl(const string& newUrl) { url = newUrl; }
	string getUrl() { return url; }
	void setDate(int newDate) { date = newDate; }
	int getDate() { return date; }
};

//関数Playlistの定義
void playlist(string category) {
	cout << "Playlist:" << category << endl;
}

int main() {
//動画タイトルとURLをvectorに格納する
	vector<Videos>v1;
	v1.emplace_back();
	v1[0].setTitle("いちごクッキーまゆ入居 | EN JP CN | SIGNAL 230724");
	v1[0].setUrl("https://www.youtube.com/watch?v=PI91GFbDvTo");
	v1.emplace_back();
	v1[1].setTitle("S6 スミン, 16歳 ヨンジ, S16 Mayu｜EN JP CN｜SSSIGNAL 230723");
	v1[1].setUrl("https://www.youtube.com/watch?v=moRCIDqfhfo");
	v1.emplace_back();
	v1[2].setTitle("低脂肪ジウのコジバン（高脂肪） | EN JP CN | SIGNAL WEEKLY 230722");
	v1[2].setUrl("https://www.youtube.com/watch?v=VRDqcseH3UM");
	v1.emplace_back();
	v1[3].setTitle("モドゥ HAUS 単独部屋のジウの話 | JP CN | SIGNAL 230721");
	v1[3].setUrl("https://www.youtube.com/watch?v=m05mUmZl6Kc");
	v1.emplace_back();
	v1[4].setTitle("今回の Objektも過去最高のビジュアル！ | EN JP CN | SIGNAL 230720");
	v1[4].setUrl("https://www.youtube.com/watch?v=oNj2BiiAtMU");
	v1.emplace_back();
	v1[5].setTitle("私たちはモダの森 HAUSです | EN JP CN | SIGNAL 230719");
	v1[5].setUrl("https://www.youtube.com/watch?v=-Fm2wZsTGFs");
	v1.emplace_back();
	v1[6].setTitle("私たちはお菓子の家 HAUSです | EN JP CN | SIGNAL 230718");
	v1[6].setUrl("https://www.youtube.com/watch?v=v51uwXP2xNU");
	v1.emplace_back();
	v1[7].setTitle("私たちは MODU HAUS です | EN JP CN | SIGNAL 230717");
	v1[7].setUrl("https://www.youtube.com/watch?v=yPbk-VfDuZM");
	v1.emplace_back();
	v1[8].setTitle("美しい時間たち｜EN JP CN ES｜SSSIGNAL 230716");
	v1[8].setUrl("https://www.youtube.com/watch?v=oH54AbS-qss");
	v1.emplace_back();
	v1[9].setTitle("MV現場とホラー映画視聴と最後の音楽番組とトークとASMR｜EN JP CN ES | SIGNAL WEEKLY 230715");
	v1[9].setUrl("https://www.youtube.com/watch?v=AuyKcsx2tZM");
	v1.emplace_back();
	v1[10].setTitle("ASMRだけど実はモッパン人 | EN JP CN | SIGNAL 230714");
	v1[10].setUrl("https://www.youtube.com/watch?v=sSi9Gs3Y-z0");
	v1.emplace_back();
	v1[11].setTitle("音楽番組に枕を持っていった理由 | EN JP CN | SIGNAL 230713");
	v1[11].setUrl("https://www.youtube.com/watch?v=bBa-xgwl_Tw");
	v1.emplace_back();
	v1[12].setTitle("たこ焼き器を継ぐ新しい料理は??? | EN JP CN | SIGNAL 230712");
	v1[12].setUrl("https://www.youtube.com/watch?v=osKgV-s0CCQ");
	v1.emplace_back();
	v1[13].setTitle("(ついに) ホラー映画見る日 | EN JP CN | SIGNAL 230711");
	v1[13].setUrl("https://www.youtube.com/watch?v=ZisGTrErKZQ");
	v1.emplace_back();
	v1[14].setTitle("LOVElution 期待してもいいです | EN JP CN ES ID | SIGNAL 230710");
	v1[14].setUrl("https://www.youtube.com/watch?v=3so0gEbxGsM");
	v1.emplace_back();
	v1[15].setTitle("新 HAUSでの本当の暮らし｜EN JP CN ES ID｜SSSIGNAL 230709");
	v1[15].setUrl("https://www.youtube.com/watch?v=x5A8bbTEBc0");
	v1.emplace_back();
	v1[16].setTitle("S15 シンウィーの初１週間 with ニエン｜EN JP CN ES ID｜SIGNAL WEEKLY 230708");
	v1[16].setUrl("https://www.youtube.com/watch?v=o0v26bPnkDk");
	v1.emplace_back();
	v1[17].setTitle("ケミが爆発した | EN JP CN ES ID | SIGNAL 230707");
	v1[17].setUrl("https://www.youtube.com/watch?v=zjMU-BUABho");
	v1.emplace_back();
	v1[18].setTitle("Kotone, シンウィーとチェリジェーンチャレンジ | SIGNAL 230706");
	v1[18].setUrl("https://www.youtube.com/watch?v=3r_OjHKbhmo");
	v1.emplace_back();
	v1[19].setTitle("ダヒョンとシンウィーのHAUS 適応期 | JP CN ES ID | SIGNAL 230705");
	v1[19].setUrl("https://www.youtube.com/watch?v=FfhOoJb2r0E");
	v1.emplace_back();
	v1[20].setTitle("LOVElution最後のメンバー登場 | EN JP CN ES ID | SIGNAL 230704");
	v1[20].setUrl("https://www.youtube.com/watch?v=FjY2EMbcD_A");
	v1.emplace_back();
	v1[21].setTitle("想像以上の NEW HAUS | EN JP CN ES ID l SIGNAL 230703");
	v1[21].setUrl("https://www.youtube.com/watch?v=oyR_LIl46DE");
	v1.emplace_back();
	v1[22].setTitle("それぞれの末っ子ズの魅力｜EN JP CN ES ID｜SSSIGNAL 230702");
	v1[22].setUrl("https://www.youtube.com/watch?v=84kcFZg2rBU");
	v1.emplace_back();
	v1[23].setTitle("ヨンジが伝える１週間のお知らせ｜EN JP CN ES ID｜SIGNAL WEEKLY 230701");
	v1[23].setUrl("https://www.youtube.com/watch?v=Kg43BnkQTm0");
	v1.emplace_back();
	v1[24].setTitle("登場! チョウォル最高美少女｜EN JP CN ES｜SIGNAL 230630");
	v1[24].setUrl("https://www.youtube.com/watch?v=2EBWziiPzaA");
	v1.emplace_back();
	v1[25].setTitle("スミンは宿題をMカでする | EN JP CN ES ID | SIGNAL 230629");
	v1[25].setUrl("https://www.youtube.com/watch?v=MAV8VIqk1wU");
	v1.emplace_back();
	v1[26].setTitle("遊び方を知ってるダヒョンソヒョン | JP | SIGNAL 230628");
	v1[26].setUrl("https://www.youtube.com/watch?v=SCCyN2tcT1M");
	v1.emplace_back();
	v1[27].setTitle("ピラティス女神ズ登場 | EN JP CN ES ID｜SIGNAL 230627");
	v1[27].setUrl("https://www.youtube.com/watch?v=PWiS0MpuJ0k");
	v1.emplace_back();
	v1[28].setTitle("LOVElution 8人全て揃った日 | EN JP CN ES ID｜SIGNAL 230626");
	v1[28].setUrl("https://www.youtube.com/watch?v=rfAiu_ZiYn4");
	v1.emplace_back();
	v1[29].setTitle("tripleSの心をTouch! | EN JP CN ES ID｜SSSIGNAL 230625");
	v1[29].setUrl("https://www.youtube.com/watch?v=5WwpEoSpYwQ");

//動画タイトルから投稿日をイテレータで検索し、データメンバdateとしてvectorに格納する
	for (int i = 0;i < 30;++i) {
		regex rx(R"(\d{6})");
		string str = v1[i].getTitle();
		sregex_iterator it(str.begin(), str.end(), rx);
		sregex_iterator end;
		int date = 0;
		while (it != end) {
			string a = (it++)->str();
			date += stoi(a);
			v1.emplace_back();
			v1[i].setDate(date);
		}
	}

//ユーザーに作成したいプレイリストを尋ねる
	cout << "Make your own playlist by\n";
	cout << "<SIGNAL>\n";
	cout << "<WEEKLY>\n";
	cout << "<SSSIGNAL>\n";
	cout << "<Search>\n";
	cout << "Imput a category and press ENTER\n";
	string category;

	while (cin >> category) {

		regex rx1(R"(WEEKLY)");
		regex rx2(R"(SSSIGNAL)");

//SIGNALのみのプレイリストを作成する
		if (category == "SIGNAL") {
			playlist(category);
			for (int i = 0;i < 30;++i) {
				string kw = v1[i].getTitle();
				if (regex_search(kw, rx1) == false) {
					if (regex_search(kw, rx2) == false) {
						cout << "Video:" << v1[i].getTitle() << endl;
						cout << "URL:" << v1[i].getUrl() << endl;
					}
				}
			}
		}
//SIGNAL WEEKLYのみのプレイリストを作成する
		else if (category == "WEEKLY") {
			playlist(category);
			for (int i = 0;i < 30;++i) {
				string kw = v1[i].getTitle();
				if (regex_search(kw, rx1)) {
					cout << "Video:" << v1[i].getTitle() << endl;
					cout << "URL:" << v1[i].getUrl() << endl;
				}
			}
		}
//SSSIGNALのみのプレイリストを作成する
		else if (category == "SSSIGNAL") {
			playlist(category);
			for (int i = 0;i < 30;++i) {
				string kw = v1[i].getTitle();
				if (regex_search(kw, rx2)) {
					cout << "Video:" << v1[i].getTitle() << endl;
					cout << "URL:" << v1[i].getUrl() << endl;
				}
			}
		}
//動画を投稿日で検索してヒットした動画を表示する
		else if (category == "Search") {
			cout << "Imput update date and press ENTER\n";
			string update;
			cin >> update;
			int target = stoi(update);
			for (int i = 0;i < 30;++i) {
				int kw = v1[i].getDate();
				if (kw == target) {
					cout << "Videos posted on " << update << endl;
					cout << "Video:" << v1[i].getTitle() << endl;
					cout << "URL:" << v1[i].getUrl() << endl;
				}
			}
		}
//指定されていないワードが入力された時のエラー処理
		else cout << "Sorry! We cannot make playlists by that word.\n";
//さらにプレイリストを作成するか、終了するか尋ねる
		cout << "Other Playlists?\n";
		cout << "Pless Ctrl+z to end.\n";
	}
}