#ifndef TV_H
#define TV_H
class Tv {
private:
	int state; // On Off
	int volume; 
	int maxchannel; 
	int channel;  // 현재 채널
	int mode; //지상파 방송 또는 케이블 방송
	int input;  //TV입력 또는 DVD 입력
public:
	friend class Remoto;
	enum {Off, On};
	enum {MinVal, MaxVal =20};
	enum {Antenna, Cable};
	enum {TV, DVD};
	Tv(int s =Off,int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void Show() const;
};

class Remoto {
private:
	int mode;
public:
	Remoto(int m = Tv::TV) : mode(m) {}
	void onoff(Tv& t) { t.onoff(); }
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void chanup(Tv& t) { t.chanup(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
};
#endif
