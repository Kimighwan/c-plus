#ifndef TVFM_H
#define TVFM_H
class Tv;

class Remoto {
private:
	int mode;
public:
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, VCR };
	Remoto(int m = TV) : mode(m) {}
	void onoff(Tv& t);
	bool volup(Tv& t);
	bool voldown(Tv& t);
	void chanup(Tv& t);
	void chandown(Tv& t);
	void set_chan(Tv& t, int c);
	void set_mode(Tv& t);
	void set_input(Tv& t);
};

class Tv {
private:
	int state; // On Off
	int volume; 
	int maxchannel; 
	int channel;  // 현재 채널
	int mode; //지상파 방송 또는 케이블 방송
	int input;  //TV입력 또는 DVD 입력
public:
	friend void Remoto::set_chan(Tv& t, int c);
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

inline void Remoto::onoff(Tv& t) { t.onoff(); }
inline bool Remoto::volup(Tv& t) { return t.volup(); }
inline bool Remoto::voldown(Tv& t) { return t.voldown();}
inline void Remoto::chanup(Tv& t) { return t.chanup(); }
inline void Remoto::chandown(Tv& t) { return t.chandown(); }
inline void Remoto::set_chan(Tv& t, int c) { t.channel = c; }
inline void Remoto::set_mode(Tv& t) { return t.set_mode(); }
inline void Remoto::set_input(Tv& t) { return t.set_input(); }
#endif
