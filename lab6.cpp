#include <iostream>
#include <string>
using namespace std;

class device {
protected:
	string name;
	int time;
	int type;
public:
	void SetName(string n) {
		name = n;
	};
	void SetTime(int t) {
		time = t;
	}
	void GetName() {
		cout << name;
	}
	void GetTime() {
		cout << time;
	}
	int TM() {
		return time;
	}
	virtual void Type(int t) {
		type = t;
	}
	int tp() {
		return type;
	}
};

class keyboard : public device {
protected:
	string type;
	string model;
public:
	void Type(int t) override {
		type = "keyboard";
	}
	void GetType() {
		cout << type;
	}
	void SetModel(string m) {
		model = m;
	}
	void GetModel() {
		cout << model;
	}
};
	
class scanner : public device {
protected:
	string type;
	string model;
public:
	void Type(int t) override {
		type = "scanner";
	}
	void GetType() {
		cout << type;
	}
	void SetModel(string m) {
		model = m;
	}
	void GetModel() {
		cout << model;
	}
};

int main() {

	int amount, t;
	keyboard kb[40];
	scanner sc[40];
	device device[40];
	int i{}, j{}, a{}, b{};

	cout << "___CREATING A NEW ARRAY___" << endl;
	cout << "enter amount of devices: ";
	cin >> amount;

	for (i = 1; i <= amount; i++) {
		cout << "enter type of " << i << " device (1 - keyboard, 2 - scanner): ";
		cin >> t;
		if (t == 1 or t == 2) {
			device[i].Type(t);
		}
		else {
			cout << "wrong type. try again" << endl;
			i--;
		}
	}

	for (j == 1; j <= amount; j++) {
		if (device[j].tp() == 1) {
			kb[a].Type(1);
			a++;
		}
		else if (device[j].tp() == 2) {
			sc[b].Type(2);
			b++;
		}
	}

	int k{}, l{}, out1{}, out2{};
	string n, m;
	float tim;

	for (k = 1; k <= a; k++) {
		cout << "enter name of keyboard " << k << ": ";
		cin >> n;
		cout << "enter model of keyboard " << k << ": ";
		cin >> m;
		cout << "enter time of work of keyboard (month) " << k << ": ";
		cin >> tim;
		kb[k].SetModel(m);
		kb[k].SetName(n);
		kb[k].SetTime(tim);
	}

	for (l = 1; l <= b; l++) {
		cout << "enter name of scanner " << l << ": ";
		cin >> n;
		cout << "enter model of scanner " << l << ": ";
		cin >> m;
		cout << "enter time of work of scanner (month) " << l << ": ";
		cin >> tim;
		sc[l].SetModel(m);
		sc[l].SetName(n);
		sc[l].SetTime(tim);
	}

	if (a > 0) {
		cout << "\nKEYBOARDS:" << endl;
		cout << "n |   type   |  name  | model | avg time of work " << endl;
		for (out1 = 1; out1 <= a; out1++) {
			cout << out1 << " | " << "keyboard | ";
			kb[out1].GetName();
			cout << " | ";
			kb[out1].GetModel();
			cout << " | ";
			kb[out1].GetTime();
			cout << endl;
		}
		float sr;
		float summ = 0;
		int sch1{};
		for (sch1 = 1; sch1 <= a; sch1++) {
			summ = summ + kb[sch1].TM();
		}
		sr = summ / a;
		cout << "average service life: " << sr << endl;
		summ = sr = 0;
	}

	if (b > 0) {
		cout << "\nSCANNERS: " << endl;
		cout << "n |   type  |  name  | model | avg time of work " << endl;
		for (out2 = 1; out2 <= b; out2++) {
			cout << out2 << " | " << "scanner | ";
			sc[out2].GetName();
			cout << " | ";
			sc[out2].GetModel();
			cout << " | ";
			sc[out2].GetTime();
			cout << endl;
		}
		float sr;
		float summ = 0;
		int sch2{};
		for (sch2 = 1; sch2 <= b; sch2++) {
			summ = summ + sc[sch2].TM();
		}
		sr = summ / b;
		cout << "average service life: " << sr << endl;
		summ = sr = 0;
	}

	int anstype, num, feat;
	int end = 0;

	while (end == 0) {
		cout << "\n______MENU______" << "\nARRAY OUTPUT (1)" << "\nCHANGE ARRAY (2)" << "\nEND  EDITING (0)" << endl;
		int ans;
		cin >> ans;
		if (ans == 1) {
			if (a > 0) {
				cout << "\nKEYBOARDS:" << endl;
				cout << "n |   type   |  name  | model | avg time of work " << endl;
				for (out1 = 1; out1 <= a; out1++) {
					cout << out1 << " | " << "keyboard | ";
					kb[out1].GetName();
					cout << " | ";
					kb[out1].GetModel();
					cout << " | ";
					kb[out1].GetTime();
					cout << endl;
				}
				float sr;
				float summ = 0;
				int sch1{};
				for (sch1 = 1; sch1 <= a; sch1++) {
					summ = summ + kb[sch1].TM();
				}
				sr = summ / a;
				cout << "average service life: " << sr << endl;
				summ = sr = 0;
			}

			if (b > 0) {
				cout << "\nSCANNERS: " << endl;
				cout << "n |   type  |  name  | model | avg time of work " << endl;
				for (out2 = 1; out2 <= b; out2++) {
					cout << out2 << " | " << "scanner | ";
					sc[out2].GetName();
					cout << " | ";
					sc[out2].GetModel();
					cout << " | ";
					sc[out2].GetTime();
					cout << endl;
				}
				float sr;
				float summ = 0;
				int sch2{};
				for (sch2 = 1; sch2 <= b; sch2++) {
					summ = summ + sc[sch2].TM();
				}
				sr = summ / b;
				cout << "average service life: " << sr << endl;
				summ = sr = 0;
			}
		}
		else if (ans == 2) {
			int ch = 0;
			while (ch == 0) {
				cout << "____enter type of device___" << endl;
				cout << "(1 - keyboard, 2 - scanner)" << endl;
				cin >> anstype;
				if (anstype == 1) {
					ch = 1;
					cout << "enter number of keyboard: ";
					cin >> num;
					cout << "______what feature to change?_____)" << endl;
					cout << "(1 - name, 2 - model, 3 - avg time)" << endl;
					cin >> feat;
					int ch2 = 0;
					while (ch2 == 0) {
						if (feat == 1) {
							string nam;
							ch2 = 1;
							cout << "enter new name: ";
							cin >> nam;
							kb[num].SetName(nam);
						}
						else if (feat == 2) {
							string mod;
							ch2 = 1;
							cout << "enter new model: ";
							cin >> mod;
							kb[num].SetModel(mod);
						}
						else if (feat == 3) {
							int tim2;
							ch2 = 1;
							cout << "enter new time: ";
							cin >> tim2;
							kb[num].SetTime(tim2);
						}
						else {
							cout << "wrong number! try again." << endl;
						}
					}
					ch2 = 0;
				}
				else if (anstype == 2) {
					ch = 1;
					cout << "enter number of scanner: ";
					cin >> num;
					cout << "______what feature to change?_____)" << endl;
					cout << "(1 - name, 2 - model, 3 - avg time)" << endl;
					cin >> feat;
					int ch2 = 0;
					while (ch2 == 0) {
						if (feat == 1) {
							string nam;
							ch2 = 1;
							cout << "enter new name: ";
							cin >> nam;
							sc[num].SetName(nam);
						}
						else if (feat == 2) {
							string mod;
							ch2 = 1;
							cout << "enter new model: ";
							cin >> mod;
							sc[num].SetModel(mod);
						}
						else if (feat == 3) {
							int tim2;
							ch2 = 1;
							cout << "enter new time: ";
							cin >> tim2;
							sc[num].SetTime(tim2);
						}
						else {
							cout << "wrong number! try again." << endl;
						}
					}
					ch2 = 0;
				}
				else {
					cout << "wrong number. try again." << endl;
				}
			}
		}
		else if (ans == 0) {
			end = 1;
			return 0;
		}
		else {
			cout << "WRONG NUMBER!" << endl;
		}
	}
}