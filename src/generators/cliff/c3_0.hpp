#include <string>
#include <sstream>
namespace cliff{
  typedef double Blade0[1];
  typedef double Blade1[3];
  typedef double Blade2[3];
  typedef double Blade3[1];
  class GTFFF;
  class GFTFF;
  class GTTFF;
  class GFFTF;
  class GTFTF;
  class GFTTF;
  class GTTTF;
  class GFFFT;
  class GTFFT;
  class GFTFT;
  class GTTFT;
  class GFFTT;
  class GTFTT;
  class GFTTT;
  class GTTTT;
  class GTFFF{
    Blade0 v0;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      return result.str();
    }
    constexpr GTFFF(double p0_0)
    : v0{p0_0}
    {}
    Blade0& blade0() {return v0;}
    constexpr GTFFF operator + (const GTFFF& r);
    constexpr GTFFF operator * (const GTFFF& r);
    constexpr GTTFF operator + (const GFTFF& r);
    constexpr GFTFF operator * (const GFTFF& r);
    constexpr GTTFF operator + (const GTTFF& r);
    constexpr GTTFF operator * (const GTTFF& r);
    constexpr GTFTF operator + (const GFFTF& r);
    constexpr GFFTF operator * (const GFFTF& r);
    constexpr GTFTF operator + (const GTFTF& r);
    constexpr GTFTF operator * (const GTFTF& r);
    constexpr GTTTF operator + (const GFTTF& r);
    constexpr GFTTF operator * (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTF operator * (const GTTTF& r);
    constexpr GTFFT operator + (const GFFFT& r);
    constexpr GFFFT operator * (const GFFFT& r);
    constexpr GTFFT operator + (const GTFFT& r);
    constexpr GTFFT operator * (const GTFFT& r);
    constexpr GTTFT operator + (const GFTFT& r);
    constexpr GFTFT operator * (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTFT operator * (const GTTFT& r);
    constexpr GTFTT operator + (const GFFTT& r);
    constexpr GFFTT operator * (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTFTT operator * (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GFTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GFTFF{
    Blade1 v1;
    friend class GTFFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      if(v1[1]!=0) result<<(result.tellp()==0?"":"+")<<v1[1]<<"e2";
      if(v1[2]!=0) result<<(result.tellp()==0?"":"+")<<v1[2]<<"e3";
      return result.str();
    }
    constexpr GFTFF(double p1_0, double p1_1, double p1_2)
    : v1{p1_0, p1_1, p1_2}
    {}
    Blade1& blade1() {return v1;}
    constexpr GTTFF operator + (const GTFFF& r);
    constexpr GFTFF operator * (const GTFFF& r);
    constexpr GFTFF operator + (const GFTFF& r);
    constexpr GTFTF operator * (const GFTFF& r);
    constexpr GTTFF operator + (const GTTFF& r);
    constexpr GTTTF operator * (const GTTFF& r);
    constexpr GFTTF operator + (const GFFTF& r);
    constexpr GFTFT operator * (const GFFTF& r);
    constexpr GTTTF operator + (const GTFTF& r);
    constexpr GFTFT operator * (const GTFTF& r);
    constexpr GFTTF operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GFTFT operator + (const GFFFT& r);
    constexpr GFFTF operator * (const GFFFT& r);
    constexpr GTTFT operator + (const GTFFT& r);
    constexpr GFTTF operator * (const GTFFT& r);
    constexpr GFTFT operator + (const GFTFT& r);
    constexpr GTFTF operator * (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTTF operator * (const GTTFT& r);
    constexpr GFTTT operator + (const GFFTT& r);
    constexpr GFTTT operator * (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GFTTT operator * (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GTTFF{
    Blade0 v0;
    Blade1 v1;
    friend class GTFFF;
    friend class GFTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      if(v1[1]!=0) result<<(result.tellp()==0?"":"+")<<v1[1]<<"e2";
      if(v1[2]!=0) result<<(result.tellp()==0?"":"+")<<v1[2]<<"e3";
      return result.str();
    }
    constexpr GTTFF(double p0_0, double p1_0, double p1_1, double p1_2)
    : v0{p0_0}
    , v1{p1_0, p1_1, p1_2}
    {}
    Blade0& blade0() {return v0;}
    Blade1& blade1() {return v1;}
    constexpr GTTFF operator + (const GTFFF& r);
    constexpr GTTFF operator * (const GTFFF& r);
    constexpr GTTFF operator + (const GFTFF& r);
    constexpr GTTTF operator * (const GFTFF& r);
    constexpr GTTFF operator + (const GTTFF& r);
    constexpr GTTTF operator * (const GTTFF& r);
    constexpr GTTTF operator + (const GFFTF& r);
    constexpr GFTTT operator * (const GFFTF& r);
    constexpr GTTTF operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GTTTF operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GTTFT operator + (const GFFFT& r);
    constexpr GFFTT operator * (const GFFFT& r);
    constexpr GTTFT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GTTFT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GTTTT operator + (const GFFTT& r);
    constexpr GFTTT operator * (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GFFTF{
    Blade2 v2;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v2[0]!=0) result<<(result.tellp()==0?"":"+")<<v2[0]<<"e12";
      if(v2[1]!=0) result<<(result.tellp()==0?"":"+")<<v2[1]<<"e13";
      if(v2[2]!=0) result<<(result.tellp()==0?"":"+")<<v2[2]<<"e23";
      return result.str();
    }
    constexpr GFFTF(double p2_0, double p2_1, double p2_2)
    : v2{p2_0, p2_1, p2_2}
    {}
    Blade2& blade2() {return v2;}
    constexpr GTFTF operator + (const GTFFF& r);
    constexpr GFFTF operator * (const GTFFF& r);
    constexpr GFTTF operator + (const GFTFF& r);
    constexpr GFTFT operator * (const GFTFF& r);
    constexpr GTTTF operator + (const GTTFF& r);
    constexpr GFTTT operator * (const GTTFF& r);
    constexpr GFFTF operator + (const GFFTF& r);
    constexpr GTFTF operator * (const GFFTF& r);
    constexpr GTFTF operator + (const GTFTF& r);
    constexpr GTFTF operator * (const GTFTF& r);
    constexpr GFTTF operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GFFTT operator + (const GFFFT& r);
    constexpr GFTFF operator * (const GFFFT& r);
    constexpr GTFTT operator + (const GTFFT& r);
    constexpr GFTTF operator * (const GTFFT& r);
    constexpr GFTTT operator + (const GFTFT& r);
    constexpr GFTFT operator * (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GFTTT operator * (const GTTFT& r);
    constexpr GFFTT operator + (const GFFTT& r);
    constexpr GTTTF operator * (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTTTF operator * (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GTFTF{
    Blade0 v0;
    Blade2 v2;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      if(v2[0]!=0) result<<(result.tellp()==0?"":"+")<<v2[0]<<"e12";
      if(v2[1]!=0) result<<(result.tellp()==0?"":"+")<<v2[1]<<"e13";
      if(v2[2]!=0) result<<(result.tellp()==0?"":"+")<<v2[2]<<"e23";
      return result.str();
    }
    constexpr GTFTF(double p0_0, double p2_0, double p2_1, double p2_2)
    : v0{p0_0}
    , v2{p2_0, p2_1, p2_2}
    {}
    Blade0& blade0() {return v0;}
    Blade2& blade2() {return v2;}
    constexpr GTFTF operator + (const GTFFF& r);
    constexpr GTFTF operator * (const GTFFF& r);
    constexpr GTTTF operator + (const GFTFF& r);
    constexpr GFTFT operator * (const GFTFF& r);
    constexpr GTTTF operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GTFTF operator + (const GFFTF& r);
    constexpr GTFTF operator * (const GFFTF& r);
    constexpr GTFTF operator + (const GTFTF& r);
    constexpr GTFTF operator * (const GTFTF& r);
    constexpr GTTTF operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GTFTT operator + (const GFFFT& r);
    constexpr GFTFT operator * (const GFFFT& r);
    constexpr GTFTT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GTTTT operator + (const GFTFT& r);
    constexpr GFTFT operator * (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GTFTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GFTTF{
    Blade1 v1;
    Blade2 v2;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      if(v1[1]!=0) result<<(result.tellp()==0?"":"+")<<v1[1]<<"e2";
      if(v1[2]!=0) result<<(result.tellp()==0?"":"+")<<v1[2]<<"e3";
      if(v2[0]!=0) result<<(result.tellp()==0?"":"+")<<v2[0]<<"e12";
      if(v2[1]!=0) result<<(result.tellp()==0?"":"+")<<v2[1]<<"e13";
      if(v2[2]!=0) result<<(result.tellp()==0?"":"+")<<v2[2]<<"e23";
      return result.str();
    }
    constexpr GFTTF(double p1_0, double p1_1, double p1_2, double p2_0, double p2_1, double p2_2)
    : v1{p1_0, p1_1, p1_2}
    , v2{p2_0, p2_1, p2_2}
    {}
    Blade1& blade1() {return v1;}
    Blade2& blade2() {return v2;}
    constexpr GTTTF operator + (const GTFFF& r);
    constexpr GFTTF operator * (const GTFFF& r);
    constexpr GFTTF operator + (const GFTFF& r);
    constexpr GTTTT operator * (const GFTFF& r);
    constexpr GTTTF operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GFTTF operator + (const GFFTF& r);
    constexpr GTTTT operator * (const GFFTF& r);
    constexpr GTTTF operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GFTTF operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GFTTT operator + (const GFFFT& r);
    constexpr GFTTF operator * (const GFFFT& r);
    constexpr GTTTT operator + (const GTFFT& r);
    constexpr GFTTF operator * (const GTFFT& r);
    constexpr GFTTT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GFTTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GTTTF{
    Blade0 v0;
    Blade1 v1;
    Blade2 v2;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      if(v1[1]!=0) result<<(result.tellp()==0?"":"+")<<v1[1]<<"e2";
      if(v1[2]!=0) result<<(result.tellp()==0?"":"+")<<v1[2]<<"e3";
      if(v2[0]!=0) result<<(result.tellp()==0?"":"+")<<v2[0]<<"e12";
      if(v2[1]!=0) result<<(result.tellp()==0?"":"+")<<v2[1]<<"e13";
      if(v2[2]!=0) result<<(result.tellp()==0?"":"+")<<v2[2]<<"e23";
      return result.str();
    }
    constexpr GTTTF(double p0_0, double p1_0, double p1_1, double p1_2, double p2_0, double p2_1, double p2_2)
    : v0{p0_0}
    , v1{p1_0, p1_1, p1_2}
    , v2{p2_0, p2_1, p2_2}
    {}
    Blade0& blade0() {return v0;}
    Blade1& blade1() {return v1;}
    Blade2& blade2() {return v2;}
    constexpr GTTTF operator + (const GTFFF& r);
    constexpr GTTTF operator * (const GTFFF& r);
    constexpr GTTTF operator + (const GFTFF& r);
    constexpr GTTTT operator * (const GFTFF& r);
    constexpr GTTTF operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GTTTF operator + (const GFFTF& r);
    constexpr GTTTT operator * (const GFFTF& r);
    constexpr GTTTF operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GTTTF operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GTTTT operator + (const GFFFT& r);
    constexpr GFTTT operator * (const GFFFT& r);
    constexpr GTTTT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GTTTT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GTTTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GFFFT{
    Blade3 v3;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v3[0]!=0) result<<(result.tellp()==0?"":"+")<<v3[0]<<"e123";
      return result.str();
    }
    constexpr GFFFT(double p3_0)
    : v3{p3_0}
    {}
    Blade3& blade3() {return v3;}
    constexpr GTFFT operator + (const GTFFF& r);
    constexpr GFFFT operator * (const GTFFF& r);
    constexpr GFTFT operator + (const GFTFF& r);
    constexpr GFFTF operator * (const GFTFF& r);
    constexpr GTTFT operator + (const GTTFF& r);
    constexpr GFFTT operator * (const GTTFF& r);
    constexpr GFFTT operator + (const GFFTF& r);
    constexpr GFTFF operator * (const GFFTF& r);
    constexpr GTFTT operator + (const GTFTF& r);
    constexpr GFTFT operator * (const GTFTF& r);
    constexpr GFTTT operator + (const GFTTF& r);
    constexpr GFTTF operator * (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GFTTT operator * (const GTTTF& r);
    constexpr GFFFT operator + (const GFFFT& r);
    constexpr GTFFF operator * (const GFFFT& r);
    constexpr GTFFT operator + (const GTFFT& r);
    constexpr GTFFT operator * (const GTFFT& r);
    constexpr GFTFT operator + (const GFTFT& r);
    constexpr GTFTF operator * (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTFTT operator * (const GTTFT& r);
    constexpr GFFTT operator + (const GFFTT& r);
    constexpr GTTFF operator * (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTTFT operator * (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GTTTF operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GTFFT{
    Blade0 v0;
    Blade3 v3;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      if(v3[0]!=0) result<<(result.tellp()==0?"":"+")<<v3[0]<<"e123";
      return result.str();
    }
    constexpr GTFFT(double p0_0, double p3_0)
    : v0{p0_0}
    , v3{p3_0}
    {}
    Blade0& blade0() {return v0;}
    Blade3& blade3() {return v3;}
    constexpr GTFFT operator + (const GTFFF& r);
    constexpr GTFFT operator * (const GTFFF& r);
    constexpr GTTFT operator + (const GFTFF& r);
    constexpr GFTTF operator * (const GFTFF& r);
    constexpr GTTFT operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GTFTT operator + (const GFFTF& r);
    constexpr GFTTF operator * (const GFFTF& r);
    constexpr GTFTT operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GTTTT operator + (const GFTTF& r);
    constexpr GFTTF operator * (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GTFFT operator + (const GFFFT& r);
    constexpr GTFFT operator * (const GFFFT& r);
    constexpr GTFFT operator + (const GTFFT& r);
    constexpr GTFFT operator * (const GTFFT& r);
    constexpr GTTFT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GTFTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GFTFT{
    Blade1 v1;
    Blade3 v3;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      if(v1[1]!=0) result<<(result.tellp()==0?"":"+")<<v1[1]<<"e2";
      if(v1[2]!=0) result<<(result.tellp()==0?"":"+")<<v1[2]<<"e3";
      if(v3[0]!=0) result<<(result.tellp()==0?"":"+")<<v3[0]<<"e123";
      return result.str();
    }
    constexpr GFTFT(double p1_0, double p1_1, double p1_2, double p3_0)
    : v1{p1_0, p1_1, p1_2}
    , v3{p3_0}
    {}
    Blade1& blade1() {return v1;}
    Blade3& blade3() {return v3;}
    constexpr GTTFT operator + (const GTFFF& r);
    constexpr GFTFT operator * (const GTFFF& r);
    constexpr GFTFT operator + (const GFTFF& r);
    constexpr GTFTF operator * (const GFTFF& r);
    constexpr GTTFT operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GFTTT operator + (const GFFTF& r);
    constexpr GFTFT operator * (const GFFTF& r);
    constexpr GTTTT operator + (const GTFTF& r);
    constexpr GFTFT operator * (const GTFTF& r);
    constexpr GFTTT operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GFTFT operator + (const GFFFT& r);
    constexpr GTFTF operator * (const GFFFT& r);
    constexpr GTTFT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GFTFT operator + (const GFTFT& r);
    constexpr GTFTF operator * (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GFTTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GTTFT{
    Blade0 v0;
    Blade1 v1;
    Blade3 v3;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      if(v1[1]!=0) result<<(result.tellp()==0?"":"+")<<v1[1]<<"e2";
      if(v1[2]!=0) result<<(result.tellp()==0?"":"+")<<v1[2]<<"e3";
      if(v3[0]!=0) result<<(result.tellp()==0?"":"+")<<v3[0]<<"e123";
      return result.str();
    }
    constexpr GTTFT(double p0_0, double p1_0, double p1_1, double p1_2, double p3_0)
    : v0{p0_0}
    , v1{p1_0, p1_1, p1_2}
    , v3{p3_0}
    {}
    Blade0& blade0() {return v0;}
    Blade1& blade1() {return v1;}
    Blade3& blade3() {return v3;}
    constexpr GTTFT operator + (const GTFFF& r);
    constexpr GTTFT operator * (const GTFFF& r);
    constexpr GTTFT operator + (const GFTFF& r);
    constexpr GTTTF operator * (const GFTFF& r);
    constexpr GTTFT operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GTTTT operator + (const GFFTF& r);
    constexpr GFTTT operator * (const GFFTF& r);
    constexpr GTTTT operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GTTTT operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GTTFT operator + (const GFFFT& r);
    constexpr GTFTT operator * (const GFFFT& r);
    constexpr GTTFT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GTTFT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GTTTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GFFTT{
    Blade2 v2;
    Blade3 v3;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GTFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v2[0]!=0) result<<(result.tellp()==0?"":"+")<<v2[0]<<"e12";
      if(v2[1]!=0) result<<(result.tellp()==0?"":"+")<<v2[1]<<"e13";
      if(v2[2]!=0) result<<(result.tellp()==0?"":"+")<<v2[2]<<"e23";
      if(v3[0]!=0) result<<(result.tellp()==0?"":"+")<<v3[0]<<"e123";
      return result.str();
    }
    constexpr GFFTT(double p2_0, double p2_1, double p2_2, double p3_0)
    : v2{p2_0, p2_1, p2_2}
    , v3{p3_0}
    {}
    Blade2& blade2() {return v2;}
    Blade3& blade3() {return v3;}
    constexpr GTFTT operator + (const GTFFF& r);
    constexpr GFFTT operator * (const GTFFF& r);
    constexpr GFTTT operator + (const GFTFF& r);
    constexpr GFTTT operator * (const GFTFF& r);
    constexpr GTTTT operator + (const GTTFF& r);
    constexpr GFTTT operator * (const GTTFF& r);
    constexpr GFFTT operator + (const GFFTF& r);
    constexpr GTTTF operator * (const GFFTF& r);
    constexpr GTFTT operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GFTTT operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GFFTT operator + (const GFFFT& r);
    constexpr GTTFF operator * (const GFFFT& r);
    constexpr GTFTT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GFTTT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GFFTT operator + (const GFFTT& r);
    constexpr GTTTF operator * (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GTFTT{
    Blade0 v0;
    Blade2 v2;
    Blade3 v3;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GFTTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      if(v2[0]!=0) result<<(result.tellp()==0?"":"+")<<v2[0]<<"e12";
      if(v2[1]!=0) result<<(result.tellp()==0?"":"+")<<v2[1]<<"e13";
      if(v2[2]!=0) result<<(result.tellp()==0?"":"+")<<v2[2]<<"e23";
      if(v3[0]!=0) result<<(result.tellp()==0?"":"+")<<v3[0]<<"e123";
      return result.str();
    }
    constexpr GTFTT(double p0_0, double p2_0, double p2_1, double p2_2, double p3_0)
    : v0{p0_0}
    , v2{p2_0, p2_1, p2_2}
    , v3{p3_0}
    {}
    Blade0& blade0() {return v0;}
    Blade2& blade2() {return v2;}
    Blade3& blade3() {return v3;}
    constexpr GTFTT operator + (const GTFFF& r);
    constexpr GTFTT operator * (const GTFFF& r);
    constexpr GTTTT operator + (const GFTFF& r);
    constexpr GFTTT operator * (const GFTFF& r);
    constexpr GTTTT operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GTFTT operator + (const GFFTF& r);
    constexpr GTTTF operator * (const GFFTF& r);
    constexpr GTFTT operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GTTTT operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GTFTT operator + (const GFFFT& r);
    constexpr GTTFT operator * (const GFFFT& r);
    constexpr GTFTT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GTTTT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GTFTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GFTTT{
    Blade1 v1;
    Blade2 v2;
    Blade3 v3;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GTTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      if(v1[1]!=0) result<<(result.tellp()==0?"":"+")<<v1[1]<<"e2";
      if(v1[2]!=0) result<<(result.tellp()==0?"":"+")<<v1[2]<<"e3";
      if(v2[0]!=0) result<<(result.tellp()==0?"":"+")<<v2[0]<<"e12";
      if(v2[1]!=0) result<<(result.tellp()==0?"":"+")<<v2[1]<<"e13";
      if(v2[2]!=0) result<<(result.tellp()==0?"":"+")<<v2[2]<<"e23";
      if(v3[0]!=0) result<<(result.tellp()==0?"":"+")<<v3[0]<<"e123";
      return result.str();
    }
    constexpr GFTTT(double p1_0, double p1_1, double p1_2, double p2_0, double p2_1, double p2_2, double p3_0)
    : v1{p1_0, p1_1, p1_2}
    , v2{p2_0, p2_1, p2_2}
    , v3{p3_0}
    {}
    Blade1& blade1() {return v1;}
    Blade2& blade2() {return v2;}
    Blade3& blade3() {return v3;}
    constexpr GTTTT operator + (const GTFFF& r);
    constexpr GFTTT operator * (const GTFFF& r);
    constexpr GFTTT operator + (const GFTFF& r);
    constexpr GTTTT operator * (const GFTFF& r);
    constexpr GTTTT operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GFTTT operator + (const GFFTF& r);
    constexpr GTTTT operator * (const GFFTF& r);
    constexpr GTTTT operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GFTTT operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GFTTT operator + (const GFFFT& r);
    constexpr GTTTF operator * (const GFFFT& r);
    constexpr GTTTT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GFTTT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GFTTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  class GTTTT{
    Blade0 v0;
    Blade1 v1;
    Blade2 v2;
    Blade3 v3;
    friend class GTFFF;
    friend class GFTFF;
    friend class GTTFF;
    friend class GFFTF;
    friend class GTFTF;
    friend class GFTTF;
    friend class GTTTF;
    friend class GFFFT;
    friend class GTFFT;
    friend class GFTFT;
    friend class GTTFT;
    friend class GFFTT;
    friend class GTFTT;
    friend class GFTTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      if(v1[1]!=0) result<<(result.tellp()==0?"":"+")<<v1[1]<<"e2";
      if(v1[2]!=0) result<<(result.tellp()==0?"":"+")<<v1[2]<<"e3";
      if(v2[0]!=0) result<<(result.tellp()==0?"":"+")<<v2[0]<<"e12";
      if(v2[1]!=0) result<<(result.tellp()==0?"":"+")<<v2[1]<<"e13";
      if(v2[2]!=0) result<<(result.tellp()==0?"":"+")<<v2[2]<<"e23";
      if(v3[0]!=0) result<<(result.tellp()==0?"":"+")<<v3[0]<<"e123";
      return result.str();
    }
    constexpr GTTTT(double p0_0, double p1_0, double p1_1, double p1_2, double p2_0, double p2_1, double p2_2, double p3_0)
    : v0{p0_0}
    , v1{p1_0, p1_1, p1_2}
    , v2{p2_0, p2_1, p2_2}
    , v3{p3_0}
    {}
    Blade0& blade0() {return v0;}
    Blade1& blade1() {return v1;}
    Blade2& blade2() {return v2;}
    Blade3& blade3() {return v3;}
    constexpr GTTTT operator + (const GTFFF& r);
    constexpr GTTTT operator * (const GTFFF& r);
    constexpr GTTTT operator + (const GFTFF& r);
    constexpr GTTTT operator * (const GFTFF& r);
    constexpr GTTTT operator + (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    constexpr GTTTT operator + (const GFFTF& r);
    constexpr GTTTT operator * (const GFFTF& r);
    constexpr GTTTT operator + (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    constexpr GTTTT operator + (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    constexpr GTTTT operator + (const GFFFT& r);
    constexpr GTTTT operator * (const GFFFT& r);
    constexpr GTTTT operator + (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    constexpr GTTTT operator + (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    constexpr GTTTT operator + (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
  };
  constexpr GTFFF GTFFF::operator + (const GTFFF& r){
    return GTFFF(v0[0]+r.v0[0]);
  }
  constexpr GTTFF GTFFF::operator + (const GFTFF& r){
    return GTTFF(v0[0], r.v1[0], r.v1[1], r.v1[2]);
  }
  constexpr GTTFF GTFFF::operator + (const GTTFF& r){
    return GTTFF(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2]);
  }
  constexpr GTFTF GTFFF::operator + (const GFFTF& r){
    return GTFTF(v0[0], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTFTF GTFFF::operator + (const GTFTF& r){
    return GTFTF(v0[0]+r.v0[0], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTTTF GTFFF::operator + (const GFTTF& r){
    return GTTTF(v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTTTF GTFFF::operator + (const GTTTF& r){
    return GTTTF(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTFFT GTFFF::operator + (const GFFFT& r){
    return GTFFT(v0[0], r.v3[0]);
  }
  constexpr GTFFT GTFFF::operator + (const GTFFT& r){
    return GTFFT(v0[0]+r.v0[0], r.v3[0]);
  }
  constexpr GTTFT GTFFF::operator + (const GFTFT& r){
    return GTTFT(v0[0], r.v1[0], r.v1[1], r.v1[2], r.v3[0]);
  }
  constexpr GTTFT GTFFF::operator + (const GTTFT& r){
    return GTTFT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], r.v3[0]);
  }
  constexpr GTFTT GTFFF::operator + (const GFFTT& r){
    return GTFTT(v0[0], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTFTT GTFFF::operator + (const GTFTT& r){
    return GTFTT(v0[0]+r.v0[0], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTFFF::operator + (const GFTTT& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTFFF::operator + (const GTTTT& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTFF GFTFF::operator + (const GTFFF& r){
    return GTTFF(r.v0[0], v1[0], v1[1], v1[2]);
  }
  constexpr GFTFF GFTFF::operator + (const GFTFF& r){
    return GFTFF(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2]);
  }
  constexpr GTTFF GFTFF::operator + (const GTTFF& r){
    return GTTFF(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2]);
  }
  constexpr GFTTF GFTFF::operator + (const GFFTF& r){
    return GFTTF(v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTTTF GFTFF::operator + (const GTFTF& r){
    return GTTTF(r.v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GFTTF GFTFF::operator + (const GFTTF& r){
    return GFTTF(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTTTF GFTFF::operator + (const GTTTF& r){
    return GTTTF(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GFTFT GFTFF::operator + (const GFFFT& r){
    return GFTFT(v1[0], v1[1], v1[2], r.v3[0]);
  }
  constexpr GTTFT GFTFF::operator + (const GTFFT& r){
    return GTTFT(r.v0[0], v1[0], v1[1], v1[2], r.v3[0]);
  }
  constexpr GFTFT GFTFF::operator + (const GFTFT& r){
    return GFTFT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v3[0]);
  }
  constexpr GTTFT GFTFF::operator + (const GTTFT& r){
    return GTTFT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v3[0]);
  }
  constexpr GFTTT GFTFF::operator + (const GFFTT& r){
    return GFTTT(v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GFTFF::operator + (const GTFTT& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GFTTT GFTFF::operator + (const GFTTT& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GFTFF::operator + (const GTTTT& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTFF GTTFF::operator + (const GTFFF& r){
    return GTTFF(v0[0]+r.v0[0], v1[0], v1[1], v1[2]);
  }
  constexpr GTTFF GTTFF::operator + (const GFTFF& r){
    return GTTFF(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2]);
  }
  constexpr GTTFF GTTFF::operator + (const GTTFF& r){
    return GTTFF(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2]);
  }
  constexpr GTTTF GTTFF::operator + (const GFFTF& r){
    return GTTTF(v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTTTF GTTFF::operator + (const GTFTF& r){
    return GTTTF(v0[0]+r.v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTTTF GTTFF::operator + (const GFTTF& r){
    return GTTTF(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTTTF GTTFF::operator + (const GTTTF& r){
    return GTTTF(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2]);
  }
  constexpr GTTFT GTTFF::operator + (const GFFFT& r){
    return GTTFT(v0[0], v1[0], v1[1], v1[2], r.v3[0]);
  }
  constexpr GTTFT GTTFF::operator + (const GTFFT& r){
    return GTTFT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], r.v3[0]);
  }
  constexpr GTTFT GTTFF::operator + (const GFTFT& r){
    return GTTFT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v3[0]);
  }
  constexpr GTTFT GTTFF::operator + (const GTTFT& r){
    return GTTFT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator + (const GFFTT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator + (const GTFTT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator + (const GFTTT& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator + (const GTTTT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], r.v3[0]);
  }
  constexpr GTFTF GFFTF::operator + (const GTFFF& r){
    return GTFTF(r.v0[0], v2[0], v2[1], v2[2]);
  }
  constexpr GFTTF GFFTF::operator + (const GFTFF& r){
    return GFTTF(r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GFFTF::operator + (const GTTFF& r){
    return GTTTF(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GFFTF GFFTF::operator + (const GFFTF& r){
    return GFFTF(v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTFTF GFFTF::operator + (const GTFTF& r){
    return GTFTF(r.v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GFTTF GFFTF::operator + (const GFTTF& r){
    return GFTTF(r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTF GFFTF::operator + (const GTTTF& r){
    return GTTTF(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GFFTT GFFTF::operator + (const GFFFT& r){
    return GFFTT(v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTFTT GFFTF::operator + (const GTFFT& r){
    return GTFTT(r.v0[0], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GFTTT GFFTF::operator + (const GFTFT& r){
    return GFTTT(r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GFFTF::operator + (const GTTFT& r){
    return GTTTT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GFFTT GFFTF::operator + (const GFFTT& r){
    return GFFTT(v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTFTT GFFTF::operator + (const GTFTT& r){
    return GTFTT(r.v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GFTTT GFFTF::operator + (const GFTTT& r){
    return GFTTT(r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GFFTF::operator + (const GTTTT& r){
    return GTTTT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTFTF GTFTF::operator + (const GTFFF& r){
    return GTFTF(v0[0]+r.v0[0], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTFTF::operator + (const GFTFF& r){
    return GTTTF(v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTFTF::operator + (const GTTFF& r){
    return GTTTF(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTFTF GTFTF::operator + (const GFFTF& r){
    return GTFTF(v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTFTF GTFTF::operator + (const GTFTF& r){
    return GTFTF(v0[0]+r.v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTF GTFTF::operator + (const GFTTF& r){
    return GTTTF(v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTF GTFTF::operator + (const GTTTF& r){
    return GTTTF(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTFTT GTFTF::operator + (const GFFFT& r){
    return GTFTT(v0[0], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTFTT GTFTF::operator + (const GTFFT& r){
    return GTFTT(v0[0]+r.v0[0], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator + (const GFTFT& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator + (const GTTFT& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTFTT GTFTF::operator + (const GFFTT& r){
    return GTFTT(v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTFTT GTFTF::operator + (const GTFTT& r){
    return GTFTT(v0[0]+r.v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator + (const GFTTT& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator + (const GTTTT& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTF GFTTF::operator + (const GTFFF& r){
    return GTTTF(r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GFTTF GFTTF::operator + (const GFTFF& r){
    return GFTTF(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GFTTF::operator + (const GTTFF& r){
    return GTTTF(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GFTTF GFTTF::operator + (const GFFTF& r){
    return GFTTF(v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTF GFTTF::operator + (const GTFTF& r){
    return GTTTF(r.v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GFTTF GFTTF::operator + (const GFTTF& r){
    return GFTTF(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTF GFTTF::operator + (const GTTTF& r){
    return GTTTF(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GFTTT GFTTF::operator + (const GFFFT& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GFTTF::operator + (const GTFFT& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GFTTT GFTTF::operator + (const GFTFT& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GFTTF::operator + (const GTTFT& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GFTTT GFTTF::operator + (const GFFTT& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GFTTF::operator + (const GTFTT& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GFTTT GFTTF::operator + (const GFTTT& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GFTTF::operator + (const GTTTT& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTF GTTTF::operator + (const GTFFF& r){
    return GTTTF(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTTTF::operator + (const GFTFF& r){
    return GTTTF(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTTTF::operator + (const GTTFF& r){
    return GTTTF(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTTTF::operator + (const GFFTF& r){
    return GTTTF(v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTF GTTTF::operator + (const GTFTF& r){
    return GTTTF(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTF GTTTF::operator + (const GFTTF& r){
    return GTTTF(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTF GTTTF::operator + (const GTTTF& r){
    return GTTTF(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2]);
  }
  constexpr GTTTT GTTTF::operator + (const GFFFT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator + (const GTFFT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator + (const GFTFT& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator + (const GTTFT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator + (const GFFTT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator + (const GTFTT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator + (const GFTTT& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator + (const GTTTT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], r.v3[0]);
  }
  constexpr GTFFT GFFFT::operator + (const GTFFF& r){
    return GTFFT(r.v0[0], v3[0]);
  }
  constexpr GFTFT GFFFT::operator + (const GFTFF& r){
    return GFTFT(r.v1[0], r.v1[1], r.v1[2], v3[0]);
  }
  constexpr GTTFT GFFFT::operator + (const GTTFF& r){
    return GTTFT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v3[0]);
  }
  constexpr GFFTT GFFFT::operator + (const GFFTF& r){
    return GFFTT(r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTFTT GFFFT::operator + (const GTFTF& r){
    return GTFTT(r.v0[0], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GFTTT GFFFT::operator + (const GFTTF& r){
    return GFTTT(r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTTT GFFFT::operator + (const GTTTF& r){
    return GTTTT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GFFFT GFFFT::operator + (const GFFFT& r){
    return GFFFT(v3[0]+r.v3[0]);
  }
  constexpr GTFFT GFFFT::operator + (const GTFFT& r){
    return GTFFT(r.v0[0], v3[0]+r.v3[0]);
  }
  constexpr GFTFT GFFFT::operator + (const GFTFT& r){
    return GFTFT(r.v1[0], r.v1[1], r.v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GFFFT::operator + (const GTTFT& r){
    return GTTFT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v3[0]+r.v3[0]);
  }
  constexpr GFFTT GFFFT::operator + (const GFFTT& r){
    return GFFTT(r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GFFFT::operator + (const GTFTT& r){
    return GTFTT(r.v0[0], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GFTTT GFFFT::operator + (const GFTTT& r){
    return GFTTT(r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFFFT::operator + (const GTTTT& r){
    return GTTTT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFFT GTFFT::operator + (const GTFFF& r){
    return GTFFT(v0[0]+r.v0[0], v3[0]);
  }
  constexpr GTTFT GTFFT::operator + (const GFTFF& r){
    return GTTFT(v0[0], r.v1[0], r.v1[1], r.v1[2], v3[0]);
  }
  constexpr GTTFT GTFFT::operator + (const GTTFF& r){
    return GTTFT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v3[0]);
  }
  constexpr GTFTT GTFFT::operator + (const GFFTF& r){
    return GTFTT(v0[0], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTFTT GTFFT::operator + (const GTFTF& r){
    return GTFTT(v0[0]+r.v0[0], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTTT GTFFT::operator + (const GFTTF& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTTT GTFFT::operator + (const GTTTF& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTFFT GTFFT::operator + (const GFFFT& r){
    return GTFFT(v0[0], v3[0]+r.v3[0]);
  }
  constexpr GTFFT GTFFT::operator + (const GTFFT& r){
    return GTFFT(v0[0]+r.v0[0], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GTFFT::operator + (const GFTFT& r){
    return GTTFT(v0[0], r.v1[0], r.v1[1], r.v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GTFFT::operator + (const GTTFT& r){
    return GTTFT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GTFFT::operator + (const GFFTT& r){
    return GTFTT(v0[0], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GTFFT::operator + (const GTFTT& r){
    return GTFTT(v0[0]+r.v0[0], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTFFT::operator + (const GFTTT& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTFFT::operator + (const GTTTT& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GFTFT::operator + (const GTFFF& r){
    return GTTFT(r.v0[0], v1[0], v1[1], v1[2], v3[0]);
  }
  constexpr GFTFT GFTFT::operator + (const GFTFF& r){
    return GFTFT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v3[0]);
  }
  constexpr GTTFT GFTFT::operator + (const GTTFF& r){
    return GTTFT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v3[0]);
  }
  constexpr GFTTT GFTFT::operator + (const GFFTF& r){
    return GFTTT(v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTTT GFTFT::operator + (const GTFTF& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GFTTT GFTFT::operator + (const GFTTF& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTTT GFTFT::operator + (const GTTTF& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GFTFT GFTFT::operator + (const GFFFT& r){
    return GFTFT(v1[0], v1[1], v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GFTFT::operator + (const GTFFT& r){
    return GTTFT(r.v0[0], v1[0], v1[1], v1[2], v3[0]+r.v3[0]);
  }
  constexpr GFTFT GFTFT::operator + (const GFTFT& r){
    return GFTFT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GFTFT::operator + (const GTTFT& r){
    return GTTFT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v3[0]+r.v3[0]);
  }
  constexpr GFTTT GFTFT::operator + (const GFFTT& r){
    return GFTTT(v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFTFT::operator + (const GTFTT& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GFTTT GFTFT::operator + (const GFTTT& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFTFT::operator + (const GTTTT& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GTTFT::operator + (const GTFFF& r){
    return GTTFT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v3[0]);
  }
  constexpr GTTFT GTTFT::operator + (const GFTFF& r){
    return GTTFT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v3[0]);
  }
  constexpr GTTFT GTTFT::operator + (const GTTFF& r){
    return GTTFT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v3[0]);
  }
  constexpr GTTTT GTTFT::operator + (const GFFTF& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTFT::operator + (const GTFTF& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTFT::operator + (const GFTTF& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTFT::operator + (const GTTTF& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]);
  }
  constexpr GTTFT GTTFT::operator + (const GFFFT& r){
    return GTTFT(v0[0], v1[0], v1[1], v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GTTFT::operator + (const GTFFT& r){
    return GTTFT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GTTFT::operator + (const GFTFT& r){
    return GTTFT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTTFT GTTFT::operator + (const GTTFT& r){
    return GTTFT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator + (const GFFTT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator + (const GTFTT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator + (const GFTTT& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator + (const GTTTT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], r.v2[0], r.v2[1], r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GFFTT::operator + (const GTFFF& r){
    return GTFTT(r.v0[0], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GFTTT GFFTT::operator + (const GFTFF& r){
    return GFTTT(r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GFFTT::operator + (const GTTFF& r){
    return GTTTT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GFFTT GFFTT::operator + (const GFFTF& r){
    return GFFTT(v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTFTT GFFTT::operator + (const GTFTF& r){
    return GTFTT(r.v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GFTTT GFFTT::operator + (const GFTTF& r){
    return GFTTT(r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GFFTT::operator + (const GTTTF& r){
    return GTTTT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GFFTT GFFTT::operator + (const GFFFT& r){
    return GFFTT(v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GFFTT::operator + (const GTFFT& r){
    return GTFTT(r.v0[0], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GFTTT GFFTT::operator + (const GFTFT& r){
    return GFTTT(r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFFTT::operator + (const GTTFT& r){
    return GTTTT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GFFTT GFFTT::operator + (const GFFTT& r){
    return GFFTT(v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GFFTT::operator + (const GTFTT& r){
    return GTFTT(r.v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GFTTT GFFTT::operator + (const GFTTT& r){
    return GFTTT(r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFFTT::operator + (const GTTTT& r){
    return GTTTT(r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GTFTT::operator + (const GTFFF& r){
    return GTFTT(v0[0]+r.v0[0], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTFTT::operator + (const GFTFF& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTFTT::operator + (const GTTFF& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTFTT GTFTT::operator + (const GFFTF& r){
    return GTFTT(v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTFTT GTFTT::operator + (const GTFTF& r){
    return GTFTT(v0[0]+r.v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GTFTT::operator + (const GFTTF& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GTFTT::operator + (const GTTTF& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTFTT GTFTT::operator + (const GFFFT& r){
    return GTFTT(v0[0], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GTFTT::operator + (const GTFFT& r){
    return GTFTT(v0[0]+r.v0[0], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator + (const GFTFT& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator + (const GTTFT& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GTFTT::operator + (const GFFTT& r){
    return GTFTT(v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFTT GTFTT::operator + (const GTFTT& r){
    return GTFTT(v0[0]+r.v0[0], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator + (const GFTTT& r){
    return GTTTT(v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator + (const GTTTT& r){
    return GTTTT(v0[0]+r.v0[0], r.v1[0], r.v1[1], r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator + (const GTFFF& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GFTTT GFTTT::operator + (const GFTFF& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GFTTT::operator + (const GTTFF& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GFTTT GFTTT::operator + (const GFFTF& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GFTTT::operator + (const GTFTF& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GFTTT GFTTT::operator + (const GFTTF& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GFTTT::operator + (const GTTTF& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GFTTT GFTTT::operator + (const GFFFT& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator + (const GTFFT& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GFTTT GFTTT::operator + (const GFTFT& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator + (const GTTFT& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GFTTT GFTTT::operator + (const GFFTT& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator + (const GTFTT& r){
    return GTTTT(r.v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GFTTT GFTTT::operator + (const GFTTT& r){
    return GFTTT(v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator + (const GTTTT& r){
    return GTTTT(r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GTFFF& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GFTFF& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GTTFF& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GFFTF& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GTFTF& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GFTTF& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GTTTF& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GFFFT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GTFFT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GFTFT& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GTTFT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0], v2[1], v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GFFTT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GTFTT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0], v1[1], v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GFTTT& r){
    return GTTTT(v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator + (const GTTTT& r){
    return GTTTT(v0[0]+r.v0[0], v1[0]+r.v1[0], v1[1]+r.v1[1], v1[2]+r.v1[2], v2[0]+r.v2[0], v2[1]+r.v2[1], v2[2]+r.v2[2], v3[0]+r.v3[0]);
  }
  constexpr GTFFF GTFFF::operator * (const GTFFF& r){
    return GTFFF(v0[0]*r.v0[0]);
  }
  constexpr GFTFF GTFFF::operator * (const GFTFF& r){
    return GFTFF(v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2]);
  }
  constexpr GTTFF GTFFF::operator * (const GTTFF& r){
    return GTTFF(v0[0]*r.v0[0], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2]);
  }
  constexpr GFFTF GTFFF::operator * (const GFFTF& r){
    return GFFTF(v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2]);
  }
  constexpr GTFTF GTFFF::operator * (const GTFTF& r){
    return GTFTF(v0[0]*r.v0[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2]);
  }
  constexpr GFTTF GTFFF::operator * (const GFTTF& r){
    return GFTTF(v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2]);
  }
  constexpr GTTTF GTFFF::operator * (const GTTTF& r){
    return GTTTF(v0[0]*r.v0[0], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2]);
  }
  constexpr GFFFT GTFFF::operator * (const GFFFT& r){
    return GFFFT(v0[0]*r.v3[0]);
  }
  constexpr GTFFT GTFFF::operator * (const GTFFT& r){
    return GTFFT(v0[0]*r.v0[0], v0[0]*r.v3[0]);
  }
  constexpr GFTFT GTFFF::operator * (const GFTFT& r){
    return GFTFT(v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v0[0]*r.v3[0]);
  }
  constexpr GTTFT GTFFF::operator * (const GTTFT& r){
    return GTTFT(v0[0]*r.v0[0], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v0[0]*r.v3[0]);
  }
  constexpr GFFTT GTFFF::operator * (const GFFTT& r){
    return GFFTT(v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v0[0]*r.v3[0]);
  }
  constexpr GTFTT GTFFF::operator * (const GTFTT& r){
    return GTFTT(v0[0]*r.v0[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v0[0]*r.v3[0]);
  }
  constexpr GFTTT GTFFF::operator * (const GFTTT& r){
    return GFTTT(v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFFF::operator * (const GTTTT& r){
    return GTTTT(v0[0]*r.v0[0], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v0[0]*r.v3[0]);
  }
  constexpr GFTFF GFTFF::operator * (const GTFFF& r){
    return GFTFF(v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0]);
  }
  constexpr GTFTF GFTFF::operator * (const GFTFF& r){
    return GTFTF(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1]);
  }
  constexpr GTTTF GFTFF::operator * (const GTTFF& r){
    return GTTTF(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1]);
  }
  constexpr GFTFT GFTFF::operator * (const GFFTF& r){
    return GFTFT(-1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GFTFT GFTFF::operator * (const GTFTF& r){
    return GFTFT(v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTFF::operator * (const GFTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTFF::operator * (const GTTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GFFTF GFTFF::operator * (const GFFFT& r){
    return GFFTF(-1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0]);
  }
  constexpr GFTTF GFTFF::operator * (const GTFFT& r){
    return GFTTF(v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0]);
  }
  constexpr GTFTF GFTFF::operator * (const GFTFT& r){
    return GTFTF(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1]);
  }
  constexpr GTTTF GFTFF::operator * (const GTTFT& r){
    return GTTTF(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1]);
  }
  constexpr GFTTT GFTFF::operator * (const GFFTT& r){
    return GFTTT(-1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GFTTT GFTFF::operator * (const GTFTT& r){
    return GFTTT(v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTFF::operator * (const GFTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTFF::operator * (const GTTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTFF GTTFF::operator * (const GTFFF& r){
    return GTTFF(v0[0]*r.v0[0], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0]);
  }
  constexpr GTTTF GTTFF::operator * (const GFTFF& r){
    return GTTTF(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1]);
  }
  constexpr GTTTF GTTFF::operator * (const GTTFF& r){
    return GTTTF(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0], v0[0]*r.v1[1] + v1[1]*r.v0[0], v0[0]*r.v1[2] + v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1]);
  }
  constexpr GFTTT GTTFF::operator * (const GFFTF& r){
    return GFTTT(-1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GTFTF& r){
    return GTTTT(v0[0]*r.v0[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GFTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v0[0]*r.v1[1] + v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v0[0]*r.v2[2] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GTTTF& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v0[0]*r.v1[1] + v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v0[0]*r.v2[2] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GFFTT GTTFF::operator * (const GFFFT& r){
    return GFFTT(-1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GTFFT& r){
    return GTTTT(v0[0]*r.v0[0], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GFTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GTTFT& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0], v0[0]*r.v1[1] + v1[1]*r.v0[0], v0[0]*r.v1[2] + v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v0[0]*r.v3[0]);
  }
  constexpr GFTTT GTTFF::operator * (const GFFTT& r){
    return GFTTT(-1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2], v0[0]*r.v2[0] + -1*v1[2]*r.v3[0], v0[0]*r.v2[1] + -1*v1[1]*r.v3[0], v0[0]*r.v2[2] + v1[0]*r.v3[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GTFTT& r){
    return GTTTT(v0[0]*r.v0[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v0[0]*r.v2[0] + -1*v1[2]*r.v3[0], v0[0]*r.v2[1] + -1*v1[1]*r.v3[0], v0[0]*r.v2[2] + v1[0]*r.v3[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GFTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v0[0]*r.v1[1] + v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v0[0]*r.v2[2] + v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GTTTT& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v0[0]*r.v1[1] + v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v0[0]*r.v2[2] + v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GFFTF GFFTF::operator * (const GTFFF& r){
    return GFFTF(v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0]);
  }
  constexpr GFTFT GFFTF::operator * (const GFTFF& r){
    return GFTFT(v2[0]*r.v1[1] + v2[1]*r.v1[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFTTT GFFTF::operator * (const GTTFF& r){
    return GFTTT(v2[0]*r.v1[1] + v2[1]*r.v1[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTFTF GFFTF::operator * (const GFFTF& r){
    return GTFTF(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0]);
  }
  constexpr GTFTF GFFTF::operator * (const GTFTF& r){
    return GTFTF(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0]);
  }
  constexpr GTTTT GFFTF::operator * (const GFTTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v2[0]*r.v1[1] + v2[1]*r.v1[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFFTF::operator * (const GTTTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v2[0]*r.v1[1] + v2[1]*r.v1[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFTFF GFFTF::operator * (const GFFFT& r){
    return GFTFF(-1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0]);
  }
  constexpr GFTTF GFFTF::operator * (const GTFFT& r){
    return GFTTF(-1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0]);
  }
  constexpr GFTFT GFFTF::operator * (const GFTFT& r){
    return GFTFT(v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFTTT GFFTF::operator * (const GTTFT& r){
    return GFTTT(v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTF GFFTF::operator * (const GFFTT& r){
    return GTTTF(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0]);
  }
  constexpr GTTTF GFFTF::operator * (const GTFTT& r){
    return GTTTF(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0]);
  }
  constexpr GTTTT GFFTF::operator * (const GFTTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFFTF::operator * (const GTTTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTFTF GTFTF::operator * (const GTFFF& r){
    return GTFTF(v0[0]*r.v0[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0]);
  }
  constexpr GFTFT GTFTF::operator * (const GFTFF& r){
    return GFTFT(v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GTTFF& r){
    return GTTTT(v0[0]*r.v0[0], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTFTF GTFTF::operator * (const GFFTF& r){
    return GTFTF(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0]);
  }
  constexpr GTFTF GTFTF::operator * (const GTFTF& r){
    return GTFTF(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GFTTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GTTTF& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFTFT GTFTF::operator * (const GFFFT& r){
    return GFTFT(-1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GTFFT& r){
    return GTTTT(v0[0]*r.v0[0], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v0[0]*r.v3[0]);
  }
  constexpr GFTFT GTFTF::operator * (const GFTFT& r){
    return GFTFT(v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GTTFT& r){
    return GTTTT(v0[0]*r.v0[0], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GFFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GTFTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GFTTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GTTTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFTTF GFTTF::operator * (const GTFFF& r){
    return GFTTF(v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GFTFF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v2[0]*r.v1[1] + v2[1]*r.v1[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GTTFF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v1[1]*r.v0[0] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v1[2]*r.v0[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v2[0]*r.v0[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[1]*r.v0[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GFFTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GTFTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GFTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GTTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFTTF GFTTF::operator * (const GFFFT& r){
    return GFTTF(-1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0]);
  }
  constexpr GFTTF GFTTF::operator * (const GTFFT& r){
    return GFTTF(v1[0]*r.v0[0] + -1*v2[2]*r.v3[0], v1[1]*r.v0[0] + -1*v2[1]*r.v3[0], v1[2]*r.v0[0] + -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0] + v2[0]*r.v0[0], -1*v1[1]*r.v3[0] + v2[1]*r.v0[0], v1[0]*r.v3[0] + v2[2]*r.v0[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GFTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GTTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v1[1]*r.v0[0] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[1]*r.v0[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GFFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v2[2]*r.v3[0], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[1]*r.v3[0], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], -1*v1[1]*r.v3[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v1[0]*r.v3[0] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GTFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v2[2]*r.v3[0], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[1]*r.v3[0], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], -1*v1[1]*r.v3[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v1[0]*r.v3[0] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GFTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GTTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTF GTTTF::operator * (const GTFFF& r){
    return GTTTF(v0[0]*r.v0[0], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GFTFF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GTTFF& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + v1[1]*r.v0[0] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + v1[2]*r.v0[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v2[0]*r.v0[0], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[1]*r.v0[0], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v2[2]*r.v0[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GFFTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GTFTF& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GFTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GTTTF& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFTTT GTTTF::operator * (const GFFFT& r){
    return GFTTT(-1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GTFFT& r){
    return GTTTT(v0[0]*r.v0[0], v1[0]*r.v0[0] + -1*v2[2]*r.v3[0], v1[1]*r.v0[0] + -1*v2[1]*r.v3[0], v1[2]*r.v0[0] + -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0] + v2[0]*r.v0[0], -1*v1[1]*r.v3[0] + v2[1]*r.v0[0], v1[0]*r.v3[0] + v2[2]*r.v0[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GFTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GTTFT& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + v1[1]*r.v0[0] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[1]*r.v0[0], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v2[2]*r.v0[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GFFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v2[2]*r.v3[0], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[1]*r.v3[0], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[0]*r.v3[0], v0[0]*r.v2[0] + -1*v1[2]*r.v3[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + -1*v1[1]*r.v3[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + v1[0]*r.v3[0] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GTFTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v2[2]*r.v3[0], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[1]*r.v3[0], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0], v0[0]*r.v2[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + -1*v1[1]*r.v3[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + v1[0]*r.v3[0] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GFTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GTTTT& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFFFT GFFFT::operator * (const GTFFF& r){
    return GFFFT(v3[0]*r.v0[0]);
  }
  constexpr GFFTF GFFFT::operator * (const GFTFF& r){
    return GFFTF(v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0]);
  }
  constexpr GFFTT GFFFT::operator * (const GTTFF& r){
    return GFFTT(v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GFTFF GFFFT::operator * (const GFFTF& r){
    return GFTFF(-1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0]);
  }
  constexpr GFTFT GFFFT::operator * (const GTFTF& r){
    return GFTFT(-1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v3[0]*r.v0[0]);
  }
  constexpr GFTTF GFFFT::operator * (const GFTTF& r){
    return GFTTF(-1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0]);
  }
  constexpr GFTTT GFFFT::operator * (const GTTTF& r){
    return GFTTT(-1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GTFFF GFFFT::operator * (const GFFFT& r){
    return GTFFF(-1*v3[0]*r.v3[0]);
  }
  constexpr GTFFT GFFFT::operator * (const GTFFT& r){
    return GTFFT(-1*v3[0]*r.v3[0], v3[0]*r.v0[0]);
  }
  constexpr GTFTF GFFFT::operator * (const GFTFT& r){
    return GTFTF(-1*v3[0]*r.v3[0], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0]);
  }
  constexpr GTFTT GFFFT::operator * (const GTTFT& r){
    return GTFTT(-1*v3[0]*r.v3[0], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GTTFF GFFFT::operator * (const GFFTT& r){
    return GTTFF(-1*v3[0]*r.v3[0], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0]);
  }
  constexpr GTTFT GFFFT::operator * (const GTFTT& r){
    return GTTFT(-1*v3[0]*r.v3[0], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTF GFFFT::operator * (const GFTTT& r){
    return GTTTF(-1*v3[0]*r.v3[0], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0]);
  }
  constexpr GTTTT GFFFT::operator * (const GTTTT& r){
    return GTTTT(-1*v3[0]*r.v3[0], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GTFFT GTFFT::operator * (const GTFFF& r){
    return GTFFT(v0[0]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GFTTF GTFFT::operator * (const GFTFF& r){
    return GFTTF(v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTTFF& r){
    return GTTTT(v0[0]*r.v0[0], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GFTTF GTFFT::operator * (const GFFTF& r){
    return GFTTF(-1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2]);
  }
  constexpr GTTTT GTFFT::operator * (const GTFTF& r){
    return GTTTT(v0[0]*r.v0[0], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v3[0]*r.v0[0]);
  }
  constexpr GFTTF GTFFT::operator * (const GFTTF& r){
    return GFTTF(v0[0]*r.v1[0] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v3[0]*r.v2[1], v0[0]*r.v1[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v3[0]*r.v1[2], v0[0]*r.v2[1] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v3[0]*r.v1[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTTTF& r){
    return GTTTT(v0[0]*r.v0[0], v0[0]*r.v1[0] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v3[0]*r.v2[1], v0[0]*r.v1[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v3[0]*r.v1[2], v0[0]*r.v2[1] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GTFFT GTFFT::operator * (const GFFFT& r){
    return GTFFT(-1*v3[0]*r.v3[0], v0[0]*r.v3[0]);
  }
  constexpr GTFFT GTFFT::operator * (const GTFFT& r){
    return GTFFT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GFTFT& r){
    return GTTTT(-1*v3[0]*r.v3[0], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTTFT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GFFTT& r){
    return GTTTT(-1*v3[0]*r.v3[0], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTFTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GFTTT& r){
    return GTTTT(-1*v3[0]*r.v3[0], v0[0]*r.v1[0] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v3[0]*r.v2[1], v0[0]*r.v1[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v3[0]*r.v1[2], v0[0]*r.v2[1] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v3[0]*r.v1[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTTTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v3[0]*r.v2[1], v0[0]*r.v1[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v3[0]*r.v1[2], v0[0]*r.v2[1] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GFTFT GFTFT::operator * (const GTFFF& r){
    return GFTFT(v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTFTF GFTFT::operator * (const GFTFF& r){
    return GTFTF(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GTTFF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GFTFT GFTFT::operator * (const GFFTF& r){
    return GFTFT(-1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GFTFT GFTFT::operator * (const GTFTF& r){
    return GFTFT(v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GFTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GTTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTFTF GFTFT::operator * (const GFFFT& r){
    return GTFTF(-1*v3[0]*r.v3[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GTFFT& r){
    return GTTTT(-1*v3[0]*r.v3[0], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v3[0]*r.v0[0]);
  }
  constexpr GTFTF GFTFT::operator * (const GFTFT& r){
    return GTFTF(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GTTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GFFTT& r){
    return GTTTT(-1*v3[0]*r.v3[0], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GTFTT& r){
    return GTTTT(-1*v3[0]*r.v3[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GFTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GTTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTFT GTTFT::operator * (const GTFFF& r){
    return GTTFT(v0[0]*r.v0[0], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTF GTTFT::operator * (const GFTFF& r){
    return GTTTF(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTTFF& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0], v0[0]*r.v1[1] + v1[1]*r.v0[0], v0[0]*r.v1[2] + v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v3[0]*r.v0[0]);
  }
  constexpr GFTTT GTTFT::operator * (const GFFTF& r){
    return GFTTT(-1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTFTF& r){
    return GTTTT(v0[0]*r.v0[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0], v0[0]*r.v2[1], v0[0]*r.v2[2], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GFTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTTTF& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTFTT GTTFT::operator * (const GFFFT& r){
    return GTFTT(-1*v3[0]*r.v3[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTFFT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GFTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0], v0[0]*r.v1[1], v0[0]*r.v1[2], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTTFT& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v1[0]*r.v0[0], v0[0]*r.v1[1] + v1[1]*r.v0[0], v0[0]*r.v1[2] + v1[2]*r.v0[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GFFTT& r){
    return GTTTT(-1*v3[0]*r.v3[0], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v1[2]*r.v3[0], v0[0]*r.v2[1] + -1*v1[1]*r.v3[0], v0[0]*r.v2[2] + v1[0]*r.v3[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTFTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v1[2]*r.v3[0], v0[0]*r.v2[1] + -1*v1[1]*r.v3[0], v0[0]*r.v2[2] + v1[0]*r.v3[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GFTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTTTT& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GFFTT GFFTT::operator * (const GTFFF& r){
    return GFFTT(v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GFTTT GFFTT::operator * (const GFTFF& r){
    return GFTTT(v2[0]*r.v1[1] + v2[1]*r.v1[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GFTTT GFFTT::operator * (const GTTFF& r){
    return GFTTT(v2[0]*r.v1[1] + v2[1]*r.v1[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0] + v3[0]*r.v1[2], v2[1]*r.v0[0] + -1*v3[0]*r.v1[1], v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTF GFFTT::operator * (const GFFTF& r){
    return GTTTF(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GTFTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GFTTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v3[0]*r.v2[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GTTTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v3[0]*r.v2[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTFF GFFTT::operator * (const GFFFT& r){
    return GTTFF(-1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GTFFT& r){
    return GTTTT(-1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GFTFT& r){
    return GTTTT(-1*v3[0]*r.v3[0], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GTTFT& r){
    return GTTTT(-1*v3[0]*r.v3[0], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0] + v3[0]*r.v1[2], v2[1]*r.v0[0] + -1*v3[0]*r.v1[1], v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTF GFFTT::operator * (const GFFTT& r){
    return GTTTF(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], -1*v2[1]*r.v3[0] + v3[0]*r.v2[1], -1*v2[0]*r.v3[0] + -1*v3[0]*r.v2[0], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GTFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], -1*v2[1]*r.v3[0] + v3[0]*r.v2[1], -1*v2[0]*r.v3[0] + -1*v3[0]*r.v2[0], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GFTTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GTTTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTFTT GTFTT::operator * (const GTFFF& r){
    return GTFTT(v0[0]*r.v0[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GFTTT GTFTT::operator * (const GFTFF& r){
    return GFTTT(v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTTFF& r){
    return GTTTT(v0[0]*r.v0[0], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0] + v3[0]*r.v1[2], v2[1]*r.v0[0] + -1*v3[0]*r.v1[1], v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTF GTFTT::operator * (const GFFTF& r){
    return GTTTF(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTFTF& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v3[0]*r.v2[2], v3[0]*r.v2[1], -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GFTTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTTTF& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTFT GTFTT::operator * (const GFFFT& r){
    return GTTFT(-1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTFFT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GFTFT& r){
    return GTTTT(-1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v3[0]*r.v1[2], -1*v3[0]*r.v1[1], v3[0]*r.v1[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTTFT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v2[0]*r.v0[0] + v3[0]*r.v1[2], v2[1]*r.v0[0] + -1*v3[0]*r.v1[1], v2[2]*r.v0[0] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GFFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], -1*v2[1]*r.v3[0] + v3[0]*r.v2[1], -1*v2[0]*r.v3[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTFTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], -1*v2[1]*r.v3[0] + v3[0]*r.v2[1], -1*v2[0]*r.v3[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GFTTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTTTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GFTTT GFTTT::operator * (const GTFFF& r){
    return GFTTT(v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GFTFF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v2[0]*r.v1[1] + v2[1]*r.v1[2], -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GTTFF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v1[0]*r.v0[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v1[1]*r.v0[0] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v1[2]*r.v0[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v2[0]*r.v0[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[1]*r.v0[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GFFTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GTFTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GFTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GTTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTF GFTTT::operator * (const GFFFT& r){
    return GTTTF(-1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GTFFT& r){
    return GTTTT(-1*v3[0]*r.v3[0], v1[0]*r.v0[0] + -1*v2[2]*r.v3[0], v1[1]*r.v0[0] + -1*v2[1]*r.v3[0], v1[2]*r.v0[0] + -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0] + v2[0]*r.v0[0], -1*v1[1]*r.v3[0] + v2[1]*r.v0[0], v1[0]*r.v3[0] + v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GFTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GTTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v1[1]*r.v0[0] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[1]*r.v0[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GFFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[1]*r.v3[0] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[0]*r.v3[0] + -1*v3[0]*r.v2[0], -1*v1[2]*r.v3[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], -1*v1[1]*r.v3[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v1[0]*r.v3[0] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GTFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[1]*r.v3[0] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v3[0]*r.v2[0], -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], -1*v1[1]*r.v3[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v1[0]*r.v3[0] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GFTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GTTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTFFF& r){
    return GTTTT(v0[0]*r.v0[0], v1[0]*r.v0[0], v1[1]*r.v0[0], v1[2]*r.v0[0], v2[0]*r.v0[0], v2[1]*r.v0[0], v2[2]*r.v0[0], v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFTFF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTTFF& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2], v0[0]*r.v1[1] + v1[1]*r.v0[0] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + v1[2]*r.v0[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v2[0]*r.v0[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[1]*r.v0[0] + -1*v3[0]*r.v1[1], v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFFTF& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTFTF& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFTTF& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTTTF& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2], v0[0]*r.v1[0] + v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFFFT& r){
    return GTTTT(-1*v3[0]*r.v3[0], -1*v2[2]*r.v3[0], -1*v2[1]*r.v3[0], -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0], -1*v1[1]*r.v3[0], v1[0]*r.v3[0], v0[0]*r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTFFT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0] + -1*v2[2]*r.v3[0], v1[1]*r.v0[0] + -1*v2[1]*r.v3[0], v1[2]*r.v0[0] + -1*v2[0]*r.v3[0], -1*v1[2]*r.v3[0] + v2[0]*r.v0[0], -1*v1[1]*r.v3[0] + v2[1]*r.v0[0], v1[0]*r.v3[0] + v2[2]*r.v0[0], v0[0]*r.v3[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFTFT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTTFT& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v1[0]*r.v0[0] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0], v0[0]*r.v1[1] + v1[1]*r.v0[0] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2], v0[0]*r.v1[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1], v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + v3[0]*r.v1[2], v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[1]*r.v0[0] + -1*v3[0]*r.v1[1], v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFFTT& r){
    return GTTTT(-1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[1]*r.v3[0] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[0]*r.v3[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v1[2]*r.v3[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + -1*v1[1]*r.v3[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + v1[0]*r.v3[0] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTFTT& r){
    return GTTTT(v0[0]*r.v0[0] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[1]*r.v3[0] + v3[0]*r.v2[1], v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1], v0[0]*r.v2[1] + -1*v1[1]*r.v3[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0], v0[0]*r.v2[2] + v1[0]*r.v3[0] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v3[0]*r.v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFTTT& r){
    return GTTTT(v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTTTT& r){
    return GTTTT(v0[0]*r.v0[0] + v1[0]*r.v1[0] + v1[1]*r.v1[1] + v1[2]*r.v1[2] + -1*v2[0]*r.v2[0] + -1*v2[1]*r.v2[1] + -1*v2[2]*r.v2[2] + -1*v3[0]*r.v3[0], v0[0]*r.v1[0] + v1[0]*r.v0[0] + -1*v1[1]*r.v2[0] + -1*v1[2]*r.v2[1] + v2[0]*r.v1[1] + v2[1]*r.v1[2] + -1*v2[2]*r.v3[0] + -1*v3[0]*r.v2[2], v0[0]*r.v1[1] + v1[0]*r.v2[0] + v1[1]*r.v0[0] + -1*v1[2]*r.v2[2] + -1*v2[0]*r.v1[0] + -1*v2[1]*r.v3[0] + v2[2]*r.v1[2] + v3[0]*r.v2[1], v0[0]*r.v1[2] + v1[0]*r.v2[1] + v1[1]*r.v2[2] + v1[2]*r.v0[0] + -1*v2[0]*r.v3[0] + -1*v2[1]*r.v1[0] + -1*v2[2]*r.v1[1] + -1*v3[0]*r.v2[0], v0[0]*r.v2[0] + v1[0]*r.v1[1] + -1*v1[1]*r.v1[0] + -1*v1[2]*r.v3[0] + v2[0]*r.v0[0] + -1*v2[1]*r.v2[2] + v2[2]*r.v2[1] + v3[0]*r.v1[2], v0[0]*r.v2[1] + v1[0]*r.v1[2] + -1*v1[1]*r.v3[0] + -1*v1[2]*r.v1[0] + v2[0]*r.v2[2] + v2[1]*r.v0[0] + -1*v2[2]*r.v2[0] + -1*v3[0]*r.v1[1], v0[0]*r.v2[2] + v1[0]*r.v3[0] + v1[1]*r.v1[2] + -1*v1[2]*r.v1[1] + -1*v2[0]*r.v2[1] + -1*v2[1]*r.v2[0] + v2[2]*r.v0[0] + v3[0]*r.v1[0], v0[0]*r.v3[0] + v1[0]*r.v2[2] + -1*v1[1]*r.v2[1] + -1*v1[2]*r.v2[0] + v2[0]*r.v1[2] + -1*v2[1]*r.v1[1] + v2[2]*r.v1[0] + v3[0]*r.v0[0]);
  }
}
