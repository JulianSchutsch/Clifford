#include <string>
#include <sstream>
#include <cmath>
#include <limits>
static const double epsilon = std::numeric_limits<double>::epsilon();
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 0:
          return true;
      }
      return false;
    }
    constexpr GTFFF operator * (const double factor);
    constexpr GTFFF(double p0_0)
    : v0{p0_0}
    {}
    Blade0& blade0() {return v0;}
    constexpr GTFFF operator + (const GTFFF& r);
    constexpr GTFFF operator - (const GTFFF& r);
    constexpr GTFFF operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GTTFF operator + (const GFTFF& r);
    constexpr GTTFF operator - (const GFTFF& r);
    constexpr GFTFF operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTFF operator + (const GTTFF& r);
    constexpr GTTFF operator - (const GTTFF& r);
    constexpr GTTFF operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GTFTF operator + (const GFFTF& r);
    constexpr GTFTF operator - (const GFFTF& r);
    constexpr GFFTF operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTFTF operator + (const GTFTF& r);
    constexpr GTFTF operator - (const GTFTF& r);
    constexpr GTFTF operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GTTTF operator + (const GFTTF& r);
    constexpr GTTTF operator - (const GFTTF& r);
    constexpr GFTTF operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTF operator - (const GTTTF& r);
    constexpr GTTTF operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GTFFT operator + (const GFFFT& r);
    constexpr GTFFT operator - (const GFFFT& r);
    constexpr GFFFT operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTFFT operator + (const GTFFT& r);
    constexpr GTFFT operator - (const GTFFT& r);
    constexpr GTFFT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GTTFT operator + (const GFTFT& r);
    constexpr GTTFT operator - (const GFTFT& r);
    constexpr GFTFT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTFT operator - (const GTTFT& r);
    constexpr GTTFT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GTFTT operator + (const GFFTT& r);
    constexpr GTFTT operator - (const GFFTT& r);
    constexpr GFFTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTFTT operator - (const GTFTT& r);
    constexpr GTFTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator - (const GFTTT& r);
    constexpr GFTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 1:
          return true;
      }
      return false;
    }
    constexpr GFTFF operator * (const double factor);
    constexpr GFTFF(double p1_0, double p1_1, double p1_2)
    : v1{p1_0, p1_1, p1_2}
    {}
    Blade1& blade1() {return v1;}
    constexpr GTTFF operator + (const GTFFF& r);
    constexpr GTTFF operator - (const GTFFF& r);
    constexpr GFTFF operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GFTFF operator + (const GFTFF& r);
    constexpr GFTFF operator - (const GFTFF& r);
    constexpr GTFTF operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTFF operator + (const GTTFF& r);
    constexpr GTTFF operator - (const GTTFF& r);
    constexpr GTTTF operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GFTTF operator + (const GFFTF& r);
    constexpr GFTTF operator - (const GFFTF& r);
    constexpr GFTFT operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTTTF operator + (const GTFTF& r);
    constexpr GTTTF operator - (const GTFTF& r);
    constexpr GFTFT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GFTTF operator + (const GFTTF& r);
    constexpr GFTTF operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTF operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GFTFT operator + (const GFFFT& r);
    constexpr GFTFT operator - (const GFFFT& r);
    constexpr GFFTF operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTTFT operator + (const GTFFT& r);
    constexpr GTTFT operator - (const GTFFT& r);
    constexpr GFTTF operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GFTFT operator + (const GFTFT& r);
    constexpr GFTFT operator - (const GFTFT& r);
    constexpr GTFTF operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTFT operator - (const GTTFT& r);
    constexpr GTTTF operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GFTTT operator + (const GFFTT& r);
    constexpr GFTTT operator - (const GFFTT& r);
    constexpr GFTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator - (const GTFTT& r);
    constexpr GFTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GFTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 0:
        case 1:
          return true;
      }
      return false;
    }
    constexpr GTTFF operator * (const double factor);
    constexpr GTTFF(double p0_0, double p1_0, double p1_1, double p1_2)
    : v0{p0_0}
    , v1{p1_0, p1_1, p1_2}
    {}
    Blade0& blade0() {return v0;}
    Blade1& blade1() {return v1;}
    constexpr GTTFF operator + (const GTFFF& r);
    constexpr GTTFF operator - (const GTFFF& r);
    constexpr GTTFF operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GTTFF operator + (const GFTFF& r);
    constexpr GTTFF operator - (const GFTFF& r);
    constexpr GTTTF operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTFF operator + (const GTTFF& r);
    constexpr GTTFF operator - (const GTTFF& r);
    constexpr GTTTF operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GTTTF operator + (const GFFTF& r);
    constexpr GTTTF operator - (const GFFTF& r);
    constexpr GFTTT operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTTTF operator + (const GTFTF& r);
    constexpr GTTTF operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GTTTF operator + (const GFTTF& r);
    constexpr GTTTF operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTF operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GTTFT operator + (const GFFFT& r);
    constexpr GTTFT operator - (const GFFFT& r);
    constexpr GFFTT operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTTFT operator + (const GTFFT& r);
    constexpr GTTFT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GTTFT operator + (const GFTFT& r);
    constexpr GTTFT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTFT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GTTTT operator + (const GFFTT& r);
    constexpr GTTTT operator - (const GFFTT& r);
    constexpr GFTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 2:
          return true;
      }
      return false;
    }
    constexpr GFFTF operator * (const double factor);
    constexpr GFFTF(double p2_0, double p2_1, double p2_2)
    : v2{p2_0, p2_1, p2_2}
    {}
    Blade2& blade2() {return v2;}
    constexpr GTFTF operator + (const GTFFF& r);
    constexpr GTFTF operator - (const GTFFF& r);
    constexpr GFFTF operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GFTTF operator + (const GFTFF& r);
    constexpr GFTTF operator - (const GFTFF& r);
    constexpr GFTFT operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTTF operator + (const GTTFF& r);
    constexpr GTTTF operator - (const GTTFF& r);
    constexpr GFTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GFFTF operator + (const GFFTF& r);
    constexpr GFFTF operator - (const GFFTF& r);
    constexpr GTFTF operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTFTF operator + (const GTFTF& r);
    constexpr GTFTF operator - (const GTFTF& r);
    constexpr GTFTF operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GFTTF operator + (const GFTTF& r);
    constexpr GFTTF operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTF operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GFFTT operator + (const GFFFT& r);
    constexpr GFFTT operator - (const GFFFT& r);
    constexpr GFTFF operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTFTT operator + (const GTFFT& r);
    constexpr GTFTT operator - (const GTFFT& r);
    constexpr GFTTF operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GFTTT operator + (const GFTFT& r);
    constexpr GFTTT operator - (const GFTFT& r);
    constexpr GFTFT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator - (const GTTFT& r);
    constexpr GFTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GFFTT operator + (const GFFTT& r);
    constexpr GFFTT operator - (const GFFTT& r);
    constexpr GTTTF operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTFTT operator - (const GTFTT& r);
    constexpr GTTTF operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GFTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 0:
        case 2:
          return true;
      }
      return false;
    }
    constexpr GTFTF operator * (const double factor);
    constexpr GTFTF(double p0_0, double p2_0, double p2_1, double p2_2)
    : v0{p0_0}
    , v2{p2_0, p2_1, p2_2}
    {}
    Blade0& blade0() {return v0;}
    Blade2& blade2() {return v2;}
    constexpr GTFTF operator + (const GTFFF& r);
    constexpr GTFTF operator - (const GTFFF& r);
    constexpr GTFTF operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GTTTF operator + (const GFTFF& r);
    constexpr GTTTF operator - (const GFTFF& r);
    constexpr GFTFT operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTTF operator + (const GTTFF& r);
    constexpr GTTTF operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GTFTF operator + (const GFFTF& r);
    constexpr GTFTF operator - (const GFFTF& r);
    constexpr GTFTF operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTFTF operator + (const GTFTF& r);
    constexpr GTFTF operator - (const GTFTF& r);
    constexpr GTFTF operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GTTTF operator + (const GFTTF& r);
    constexpr GTTTF operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTF operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GTFTT operator + (const GFFFT& r);
    constexpr GTFTT operator - (const GFFFT& r);
    constexpr GFTFT operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTFTT operator + (const GTFFT& r);
    constexpr GTFTT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GTTTT operator + (const GFTFT& r);
    constexpr GTTTT operator - (const GFTFT& r);
    constexpr GFTFT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GTFTT operator + (const GFFTT& r);
    constexpr GTFTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTFTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 1:
        case 2:
          return true;
      }
      return false;
    }
    constexpr GFTTF operator * (const double factor);
    constexpr GFTTF(double p1_0, double p1_1, double p1_2, double p2_0, double p2_1, double p2_2)
    : v1{p1_0, p1_1, p1_2}
    , v2{p2_0, p2_1, p2_2}
    {}
    Blade1& blade1() {return v1;}
    Blade2& blade2() {return v2;}
    constexpr GTTTF operator + (const GTFFF& r);
    constexpr GTTTF operator - (const GTFFF& r);
    constexpr GFTTF operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GFTTF operator + (const GFTFF& r);
    constexpr GFTTF operator - (const GFTFF& r);
    constexpr GTTTT operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTTF operator + (const GTTFF& r);
    constexpr GTTTF operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GFTTF operator + (const GFFTF& r);
    constexpr GFTTF operator - (const GFFTF& r);
    constexpr GTTTT operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTTTF operator + (const GTFTF& r);
    constexpr GTTTF operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GFTTF operator + (const GFTTF& r);
    constexpr GFTTF operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTF operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GFTTT operator + (const GFFFT& r);
    constexpr GFTTT operator - (const GFFFT& r);
    constexpr GFTTF operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTTTT operator + (const GTFFT& r);
    constexpr GTTTT operator - (const GTFFT& r);
    constexpr GFTTF operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GFTTT operator + (const GFTFT& r);
    constexpr GFTTT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GFTTT operator + (const GFFTT& r);
    constexpr GFTTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GFTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 0:
        case 1:
        case 2:
          return true;
      }
      return false;
    }
    constexpr GTTTF operator * (const double factor);
    constexpr GTTTF(double p0_0, double p1_0, double p1_1, double p1_2, double p2_0, double p2_1, double p2_2)
    : v0{p0_0}
    , v1{p1_0, p1_1, p1_2}
    , v2{p2_0, p2_1, p2_2}
    {}
    Blade0& blade0() {return v0;}
    Blade1& blade1() {return v1;}
    Blade2& blade2() {return v2;}
    constexpr GTTTF operator + (const GTFFF& r);
    constexpr GTTTF operator - (const GTFFF& r);
    constexpr GTTTF operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GTTTF operator + (const GFTFF& r);
    constexpr GTTTF operator - (const GFTFF& r);
    constexpr GTTTT operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTTF operator + (const GTTFF& r);
    constexpr GTTTF operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GTTTF operator + (const GFFTF& r);
    constexpr GTTTF operator - (const GFFTF& r);
    constexpr GTTTT operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTTTF operator + (const GTFTF& r);
    constexpr GTTTF operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GTTTF operator + (const GFTTF& r);
    constexpr GTTTF operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTF operator + (const GTTTF& r);
    constexpr GTTTF operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GTTTT operator + (const GFFFT& r);
    constexpr GTTTT operator - (const GFFFT& r);
    constexpr GFTTT operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTTTT operator + (const GTFFT& r);
    constexpr GTTTT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GTTTT operator + (const GFTFT& r);
    constexpr GTTTT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GTTTT operator + (const GFFTT& r);
    constexpr GTTTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 3:
          return true;
      }
      return false;
    }
    constexpr GFFFT operator * (const double factor);
    constexpr GFFFT(double p3_0)
    : v3{p3_0}
    {}
    Blade3& blade3() {return v3;}
    constexpr GTFFT operator + (const GTFFF& r);
    constexpr GTFFT operator - (const GTFFF& r);
    constexpr GFFFT operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GFTFT operator + (const GFTFF& r);
    constexpr GFTFT operator - (const GFTFF& r);
    constexpr GFFTF operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTFT operator + (const GTTFF& r);
    constexpr GTTFT operator - (const GTTFF& r);
    constexpr GFFTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GFFTT operator + (const GFFTF& r);
    constexpr GFFTT operator - (const GFFTF& r);
    constexpr GFTFF operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTFTT operator + (const GTFTF& r);
    constexpr GTFTT operator - (const GTFTF& r);
    constexpr GFTFT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GFTTT operator + (const GFTTF& r);
    constexpr GFTTT operator - (const GFTTF& r);
    constexpr GFTTF operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator - (const GTTTF& r);
    constexpr GFTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GFFFT operator + (const GFFFT& r);
    constexpr GFFFT operator - (const GFFFT& r);
    constexpr GTFFF operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTFFT operator + (const GTFFT& r);
    constexpr GTFFT operator - (const GTFFT& r);
    constexpr GTFFT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GFTFT operator + (const GFTFT& r);
    constexpr GFTFT operator - (const GFTFT& r);
    constexpr GTFTF operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTFT operator - (const GTTFT& r);
    constexpr GTFTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GFFTT operator + (const GFFTT& r);
    constexpr GFFTT operator - (const GFFTT& r);
    constexpr GTTFF operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTFTT operator - (const GTFTT& r);
    constexpr GTTFT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GFTTT operator - (const GFTTT& r);
    constexpr GTTTF operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 0:
        case 3:
          return true;
      }
      return false;
    }
    constexpr GTFFT operator * (const double factor);
    constexpr GTFFT(double p0_0, double p3_0)
    : v0{p0_0}
    , v3{p3_0}
    {}
    Blade0& blade0() {return v0;}
    Blade3& blade3() {return v3;}
    constexpr GTFFT operator + (const GTFFF& r);
    constexpr GTFFT operator - (const GTFFF& r);
    constexpr GTFFT operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GTTFT operator + (const GFTFF& r);
    constexpr GTTFT operator - (const GFTFF& r);
    constexpr GFTTF operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTFT operator + (const GTTFF& r);
    constexpr GTTFT operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GTFTT operator + (const GFFTF& r);
    constexpr GTFTT operator - (const GFFTF& r);
    constexpr GFTTF operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTFTT operator + (const GTFTF& r);
    constexpr GTFTT operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GTTTT operator + (const GFTTF& r);
    constexpr GTTTT operator - (const GFTTF& r);
    constexpr GFTTF operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GTFFT operator + (const GFFFT& r);
    constexpr GTFFT operator - (const GFFFT& r);
    constexpr GTFFT operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTFFT operator + (const GTFFT& r);
    constexpr GTFFT operator - (const GTFFT& r);
    constexpr GTFFT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GTTFT operator + (const GFTFT& r);
    constexpr GTTFT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTFT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GTFTT operator + (const GFFTT& r);
    constexpr GTFTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTFTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 1:
        case 3:
          return true;
      }
      return false;
    }
    constexpr GFTFT operator * (const double factor);
    constexpr GFTFT(double p1_0, double p1_1, double p1_2, double p3_0)
    : v1{p1_0, p1_1, p1_2}
    , v3{p3_0}
    {}
    Blade1& blade1() {return v1;}
    Blade3& blade3() {return v3;}
    constexpr GTTFT operator + (const GTFFF& r);
    constexpr GTTFT operator - (const GTFFF& r);
    constexpr GFTFT operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GFTFT operator + (const GFTFF& r);
    constexpr GFTFT operator - (const GFTFF& r);
    constexpr GTFTF operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTFT operator + (const GTTFF& r);
    constexpr GTTFT operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GFTTT operator + (const GFFTF& r);
    constexpr GFTTT operator - (const GFFTF& r);
    constexpr GFTFT operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTTTT operator + (const GTFTF& r);
    constexpr GTTTT operator - (const GTFTF& r);
    constexpr GFTFT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GFTTT operator + (const GFTTF& r);
    constexpr GFTTT operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GFTFT operator + (const GFFFT& r);
    constexpr GFTFT operator - (const GFFFT& r);
    constexpr GTFTF operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTTFT operator + (const GTFFT& r);
    constexpr GTTFT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GFTFT operator + (const GFTFT& r);
    constexpr GFTFT operator - (const GFTFT& r);
    constexpr GTFTF operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTFT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GFTTT operator + (const GFFTT& r);
    constexpr GFTTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GFTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 0:
        case 1:
        case 3:
          return true;
      }
      return false;
    }
    constexpr GTTFT operator * (const double factor);
    constexpr GTTFT(double p0_0, double p1_0, double p1_1, double p1_2, double p3_0)
    : v0{p0_0}
    , v1{p1_0, p1_1, p1_2}
    , v3{p3_0}
    {}
    Blade0& blade0() {return v0;}
    Blade1& blade1() {return v1;}
    Blade3& blade3() {return v3;}
    constexpr GTTFT operator + (const GTFFF& r);
    constexpr GTTFT operator - (const GTFFF& r);
    constexpr GTTFT operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GTTFT operator + (const GFTFF& r);
    constexpr GTTFT operator - (const GFTFF& r);
    constexpr GTTTF operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTFT operator + (const GTTFF& r);
    constexpr GTTFT operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GTTTT operator + (const GFFTF& r);
    constexpr GTTTT operator - (const GFFTF& r);
    constexpr GFTTT operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTTTT operator + (const GTFTF& r);
    constexpr GTTTT operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GTTTT operator + (const GFTTF& r);
    constexpr GTTTT operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GTTFT operator + (const GFFFT& r);
    constexpr GTTFT operator - (const GFFFT& r);
    constexpr GTFTT operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTTFT operator + (const GTFFT& r);
    constexpr GTTFT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GTTFT operator + (const GFTFT& r);
    constexpr GTTFT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTFT operator + (const GTTFT& r);
    constexpr GTTFT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GTTTT operator + (const GFFTT& r);
    constexpr GTTTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 2:
        case 3:
          return true;
      }
      return false;
    }
    constexpr GFFTT operator * (const double factor);
    constexpr GFFTT(double p2_0, double p2_1, double p2_2, double p3_0)
    : v2{p2_0, p2_1, p2_2}
    , v3{p3_0}
    {}
    Blade2& blade2() {return v2;}
    Blade3& blade3() {return v3;}
    constexpr GTFTT operator + (const GTFFF& r);
    constexpr GTFTT operator - (const GTFFF& r);
    constexpr GFFTT operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GFTTT operator + (const GFTFF& r);
    constexpr GFTTT operator - (const GFTFF& r);
    constexpr GFTTT operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTTT operator + (const GTTFF& r);
    constexpr GTTTT operator - (const GTTFF& r);
    constexpr GFTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GFFTT operator + (const GFFTF& r);
    constexpr GFFTT operator - (const GFFTF& r);
    constexpr GTTTF operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTFTT operator + (const GTFTF& r);
    constexpr GTFTT operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GFTTT operator + (const GFTTF& r);
    constexpr GFTTT operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GFFTT operator + (const GFFFT& r);
    constexpr GFFTT operator - (const GFFFT& r);
    constexpr GTTFF operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTFTT operator + (const GTFFT& r);
    constexpr GTFTT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GFTTT operator + (const GFTFT& r);
    constexpr GFTTT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GFFTT operator + (const GFFTT& r);
    constexpr GFFTT operator - (const GFFTT& r);
    constexpr GTTTF operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTFTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GFTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 0:
        case 2:
        case 3:
          return true;
      }
      return false;
    }
    constexpr GTFTT operator * (const double factor);
    constexpr GTFTT(double p0_0, double p2_0, double p2_1, double p2_2, double p3_0)
    : v0{p0_0}
    , v2{p2_0, p2_1, p2_2}
    , v3{p3_0}
    {}
    Blade0& blade0() {return v0;}
    Blade2& blade2() {return v2;}
    Blade3& blade3() {return v3;}
    constexpr GTFTT operator + (const GTFFF& r);
    constexpr GTFTT operator - (const GTFFF& r);
    constexpr GTFTT operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GTTTT operator + (const GFTFF& r);
    constexpr GTTTT operator - (const GFTFF& r);
    constexpr GFTTT operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTTT operator + (const GTTFF& r);
    constexpr GTTTT operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GTFTT operator + (const GFFTF& r);
    constexpr GTFTT operator - (const GFFTF& r);
    constexpr GTTTF operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTFTT operator + (const GTFTF& r);
    constexpr GTFTT operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GTTTT operator + (const GFTTF& r);
    constexpr GTTTT operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GTFTT operator + (const GFFFT& r);
    constexpr GTFTT operator - (const GFFFT& r);
    constexpr GTTFT operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTFTT operator + (const GTFFT& r);
    constexpr GTFTT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GTTTT operator + (const GFTFT& r);
    constexpr GTTTT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GTFTT operator + (const GFFTT& r);
    constexpr GTFTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTFTT operator + (const GTFTT& r);
    constexpr GTFTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 1:
        case 2:
        case 3:
          return true;
      }
      return false;
    }
    constexpr GFTTT operator * (const double factor);
    constexpr GFTTT(double p1_0, double p1_1, double p1_2, double p2_0, double p2_1, double p2_2, double p3_0)
    : v1{p1_0, p1_1, p1_2}
    , v2{p2_0, p2_1, p2_2}
    , v3{p3_0}
    {}
    Blade1& blade1() {return v1;}
    Blade2& blade2() {return v2;}
    Blade3& blade3() {return v3;}
    constexpr GTTTT operator + (const GTFFF& r);
    constexpr GTTTT operator - (const GTFFF& r);
    constexpr GFTTT operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GFTTT operator + (const GFTFF& r);
    constexpr GFTTT operator - (const GFTFF& r);
    constexpr GTTTT operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTTT operator + (const GTTFF& r);
    constexpr GTTTT operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GFTTT operator + (const GFFTF& r);
    constexpr GFTTT operator - (const GFFTF& r);
    constexpr GTTTT operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTTTT operator + (const GTFTF& r);
    constexpr GTTTT operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GFTTT operator + (const GFTTF& r);
    constexpr GFTTT operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GFTTT operator + (const GFFFT& r);
    constexpr GFTTT operator - (const GFFFT& r);
    constexpr GTTTF operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTTTT operator + (const GTFFT& r);
    constexpr GTTTT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GFTTT operator + (const GFTFT& r);
    constexpr GFTTT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GFTTT operator + (const GFFTT& r);
    constexpr GFTTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GFTTT operator + (const GFTTT& r);
    constexpr GFTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
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
    bool hasBlade(unsigned int blade){
      switch(blade){
        case 0:
        case 1:
        case 2:
        case 3:
          return true;
      }
      return false;
    }
    constexpr GTTTT operator * (const double factor);
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
    constexpr GTTTT operator - (const GTFFF& r);
    constexpr GTTTT operator * (const GTFFF& r);
    bool approxEqual (const GTFFF& r);
    constexpr GTTTT operator + (const GFTFF& r);
    constexpr GTTTT operator - (const GFTFF& r);
    constexpr GTTTT operator * (const GFTFF& r);
    bool approxEqual (const GFTFF& r);
    constexpr GTTTT operator + (const GTTFF& r);
    constexpr GTTTT operator - (const GTTFF& r);
    constexpr GTTTT operator * (const GTTFF& r);
    bool approxEqual (const GTTFF& r);
    constexpr GTTTT operator + (const GFFTF& r);
    constexpr GTTTT operator - (const GFFTF& r);
    constexpr GTTTT operator * (const GFFTF& r);
    bool approxEqual (const GFFTF& r);
    constexpr GTTTT operator + (const GTFTF& r);
    constexpr GTTTT operator - (const GTFTF& r);
    constexpr GTTTT operator * (const GTFTF& r);
    bool approxEqual (const GTFTF& r);
    constexpr GTTTT operator + (const GFTTF& r);
    constexpr GTTTT operator - (const GFTTF& r);
    constexpr GTTTT operator * (const GFTTF& r);
    bool approxEqual (const GFTTF& r);
    constexpr GTTTT operator + (const GTTTF& r);
    constexpr GTTTT operator - (const GTTTF& r);
    constexpr GTTTT operator * (const GTTTF& r);
    bool approxEqual (const GTTTF& r);
    constexpr GTTTT operator + (const GFFFT& r);
    constexpr GTTTT operator - (const GFFFT& r);
    constexpr GTTTT operator * (const GFFFT& r);
    bool approxEqual (const GFFFT& r);
    constexpr GTTTT operator + (const GTFFT& r);
    constexpr GTTTT operator - (const GTFFT& r);
    constexpr GTTTT operator * (const GTFFT& r);
    bool approxEqual (const GTFFT& r);
    constexpr GTTTT operator + (const GFTFT& r);
    constexpr GTTTT operator - (const GFTFT& r);
    constexpr GTTTT operator * (const GFTFT& r);
    bool approxEqual (const GFTFT& r);
    constexpr GTTTT operator + (const GTTFT& r);
    constexpr GTTTT operator - (const GTTFT& r);
    constexpr GTTTT operator * (const GTTFT& r);
    bool approxEqual (const GTTFT& r);
    constexpr GTTTT operator + (const GFFTT& r);
    constexpr GTTTT operator - (const GFFTT& r);
    constexpr GTTTT operator * (const GFFTT& r);
    bool approxEqual (const GFFTT& r);
    constexpr GTTTT operator + (const GTFTT& r);
    constexpr GTTTT operator - (const GTFTT& r);
    constexpr GTTTT operator * (const GTFTT& r);
    bool approxEqual (const GTFTT& r);
    constexpr GTTTT operator + (const GFTTT& r);
    constexpr GTTTT operator - (const GFTTT& r);
    constexpr GTTTT operator * (const GFTTT& r);
    bool approxEqual (const GFTTT& r);
    constexpr GTTTT operator + (const GTTTT& r);
    constexpr GTTTT operator - (const GTTTT& r);
    constexpr GTTTT operator * (const GTTTT& r);
    bool approxEqual (const GTTTT& r);
  };
  constexpr GTFFF GTFFF::operator - (const GTFFF& r){
    return GTFFF(v0[0]-r.v0[0]);
  }
  constexpr GTTFF GTFFF::operator - (const GFTFF& r){
    return GTTFF(v0[0], -r.v1[0], -r.v1[1], -r.v1[2]);
  }
  constexpr GTTFF GTFFF::operator - (const GTTFF& r){
    return GTTFF(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2]);
  }
  constexpr GTFTF GTFFF::operator - (const GFFTF& r){
    return GTFTF(v0[0], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTFTF GTFFF::operator - (const GTFTF& r){
    return GTFTF(v0[0]-r.v0[0], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTTTF GTFFF::operator - (const GFTTF& r){
    return GTTTF(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTTTF GTFFF::operator - (const GTTTF& r){
    return GTTTF(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTFFT GTFFF::operator - (const GFFFT& r){
    return GTFFT(v0[0], -r.v3[0]);
  }
  constexpr GTFFT GTFFF::operator - (const GTFFT& r){
    return GTFFT(v0[0]-r.v0[0], -r.v3[0]);
  }
  constexpr GTTFT GTFFF::operator - (const GFTFT& r){
    return GTTFT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v3[0]);
  }
  constexpr GTTFT GTFFF::operator - (const GTTFT& r){
    return GTTFT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v3[0]);
  }
  constexpr GTFTT GTFFF::operator - (const GFFTT& r){
    return GTFTT(v0[0], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTFTT GTFFF::operator - (const GTFTT& r){
    return GTFTT(v0[0]-r.v0[0], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTFFF::operator - (const GFTTT& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTFFF::operator - (const GTTTT& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTFF GFTFF::operator - (const GTFFF& r){
    return GTTFF(-r.v0[0], v1[0], v1[1], v1[2]);
  }
  constexpr GFTFF GFTFF::operator - (const GFTFF& r){
    return GFTFF(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2]);
  }
  constexpr GTTFF GFTFF::operator - (const GTTFF& r){
    return GTTFF(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2]);
  }
  constexpr GFTTF GFTFF::operator - (const GFFTF& r){
    return GFTTF(v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTTTF GFTFF::operator - (const GTFTF& r){
    return GTTTF(-r.v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GFTTF GFTFF::operator - (const GFTTF& r){
    return GFTTF(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTTTF GFTFF::operator - (const GTTTF& r){
    return GTTTF(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GFTFT GFTFF::operator - (const GFFFT& r){
    return GFTFT(v1[0], v1[1], v1[2], -r.v3[0]);
  }
  constexpr GTTFT GFTFF::operator - (const GTFFT& r){
    return GTTFT(-r.v0[0], v1[0], v1[1], v1[2], -r.v3[0]);
  }
  constexpr GFTFT GFTFF::operator - (const GFTFT& r){
    return GFTFT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v3[0]);
  }
  constexpr GTTFT GFTFF::operator - (const GTTFT& r){
    return GTTFT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v3[0]);
  }
  constexpr GFTTT GFTFF::operator - (const GFFTT& r){
    return GFTTT(v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GFTFF::operator - (const GTFTT& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GFTTT GFTFF::operator - (const GFTTT& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GFTFF::operator - (const GTTTT& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTFF GTTFF::operator - (const GTFFF& r){
    return GTTFF(v0[0]-r.v0[0], v1[0], v1[1], v1[2]);
  }
  constexpr GTTFF GTTFF::operator - (const GFTFF& r){
    return GTTFF(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2]);
  }
  constexpr GTTFF GTTFF::operator - (const GTTFF& r){
    return GTTFF(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2]);
  }
  constexpr GTTTF GTTFF::operator - (const GFFTF& r){
    return GTTTF(v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTTTF GTTFF::operator - (const GTFTF& r){
    return GTTTF(v0[0]-r.v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTTTF GTTFF::operator - (const GFTTF& r){
    return GTTTF(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTTTF GTTFF::operator - (const GTTTF& r){
    return GTTTF(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2]);
  }
  constexpr GTTFT GTTFF::operator - (const GFFFT& r){
    return GTTFT(v0[0], v1[0], v1[1], v1[2], -r.v3[0]);
  }
  constexpr GTTFT GTTFF::operator - (const GTFFT& r){
    return GTTFT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], -r.v3[0]);
  }
  constexpr GTTFT GTTFF::operator - (const GFTFT& r){
    return GTTFT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v3[0]);
  }
  constexpr GTTFT GTTFF::operator - (const GTTFT& r){
    return GTTFT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator - (const GFFTT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator - (const GTFTT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator - (const GFTTT& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTFF::operator - (const GTTTT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], -r.v3[0]);
  }
  constexpr GTFTF GFFTF::operator - (const GTFFF& r){
    return GTFTF(-r.v0[0], v2[0], v2[1], v2[2]);
  }
  constexpr GFTTF GFFTF::operator - (const GFTFF& r){
    return GFTTF(-r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GFFTF::operator - (const GTTFF& r){
    return GTTTF(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GFFTF GFFTF::operator - (const GFFTF& r){
    return GFFTF(v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTFTF GFFTF::operator - (const GTFTF& r){
    return GTFTF(-r.v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GFTTF GFFTF::operator - (const GFTTF& r){
    return GFTTF(-r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTF GFFTF::operator - (const GTTTF& r){
    return GTTTF(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GFFTT GFFTF::operator - (const GFFFT& r){
    return GFFTT(v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTFTT GFFTF::operator - (const GTFFT& r){
    return GTFTT(-r.v0[0], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GFTTT GFFTF::operator - (const GFTFT& r){
    return GFTTT(-r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GFFTF::operator - (const GTTFT& r){
    return GTTTT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GFFTT GFFTF::operator - (const GFFTT& r){
    return GFFTT(v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTFTT GFFTF::operator - (const GTFTT& r){
    return GTFTT(-r.v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GFTTT GFFTF::operator - (const GFTTT& r){
    return GFTTT(-r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GFFTF::operator - (const GTTTT& r){
    return GTTTT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTFTF GTFTF::operator - (const GTFFF& r){
    return GTFTF(v0[0]-r.v0[0], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTFTF::operator - (const GFTFF& r){
    return GTTTF(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTFTF::operator - (const GTTFF& r){
    return GTTTF(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTFTF GTFTF::operator - (const GFFTF& r){
    return GTFTF(v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTFTF GTFTF::operator - (const GTFTF& r){
    return GTFTF(v0[0]-r.v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTF GTFTF::operator - (const GFTTF& r){
    return GTTTF(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTF GTFTF::operator - (const GTTTF& r){
    return GTTTF(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTFTT GTFTF::operator - (const GFFFT& r){
    return GTFTT(v0[0], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTFTT GTFTF::operator - (const GTFFT& r){
    return GTFTT(v0[0]-r.v0[0], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator - (const GFTFT& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator - (const GTTFT& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTFTT GTFTF::operator - (const GFFTT& r){
    return GTFTT(v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTFTT GTFTF::operator - (const GTFTT& r){
    return GTFTT(v0[0]-r.v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator - (const GFTTT& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTFTF::operator - (const GTTTT& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTF GFTTF::operator - (const GTFFF& r){
    return GTTTF(-r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GFTTF GFTTF::operator - (const GFTFF& r){
    return GFTTF(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GFTTF::operator - (const GTTFF& r){
    return GTTTF(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GFTTF GFTTF::operator - (const GFFTF& r){
    return GFTTF(v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTF GFTTF::operator - (const GTFTF& r){
    return GTTTF(-r.v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GFTTF GFTTF::operator - (const GFTTF& r){
    return GFTTF(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTF GFTTF::operator - (const GTTTF& r){
    return GTTTF(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GFTTT GFTTF::operator - (const GFFFT& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GFTTF::operator - (const GTFFT& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GFTTT GFTTF::operator - (const GFTFT& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GFTTF::operator - (const GTTFT& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GFTTT GFTTF::operator - (const GFFTT& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GFTTF::operator - (const GTFTT& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GFTTT GFTTF::operator - (const GFTTT& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GFTTF::operator - (const GTTTT& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTF GTTTF::operator - (const GTFFF& r){
    return GTTTF(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTTTF::operator - (const GFTFF& r){
    return GTTTF(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTTTF::operator - (const GTTFF& r){
    return GTTTF(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2]);
  }
  constexpr GTTTF GTTTF::operator - (const GFFTF& r){
    return GTTTF(v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTF GTTTF::operator - (const GTFTF& r){
    return GTTTF(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTF GTTTF::operator - (const GFTTF& r){
    return GTTTF(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTF GTTTF::operator - (const GTTTF& r){
    return GTTTF(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2]);
  }
  constexpr GTTTT GTTTF::operator - (const GFFFT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator - (const GTFFT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator - (const GFTFT& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator - (const GTTFT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator - (const GFFTT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator - (const GTFTT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator - (const GFTTT& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTTTT GTTTF::operator - (const GTTTT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], -r.v3[0]);
  }
  constexpr GTFFT GFFFT::operator - (const GTFFF& r){
    return GTFFT(-r.v0[0], v3[0]);
  }
  constexpr GFTFT GFFFT::operator - (const GFTFF& r){
    return GFTFT(-r.v1[0], -r.v1[1], -r.v1[2], v3[0]);
  }
  constexpr GTTFT GFFFT::operator - (const GTTFF& r){
    return GTTFT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v3[0]);
  }
  constexpr GFFTT GFFFT::operator - (const GFFTF& r){
    return GFFTT(-r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTFTT GFFFT::operator - (const GTFTF& r){
    return GTFTT(-r.v0[0], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GFTTT GFFFT::operator - (const GFTTF& r){
    return GFTTT(-r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTTT GFFFT::operator - (const GTTTF& r){
    return GTTTT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GFFFT GFFFT::operator - (const GFFFT& r){
    return GFFFT(v3[0]-r.v3[0]);
  }
  constexpr GTFFT GFFFT::operator - (const GTFFT& r){
    return GTFFT(-r.v0[0], v3[0]-r.v3[0]);
  }
  constexpr GFTFT GFFFT::operator - (const GFTFT& r){
    return GFTFT(-r.v1[0], -r.v1[1], -r.v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GFFFT::operator - (const GTTFT& r){
    return GTTFT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v3[0]-r.v3[0]);
  }
  constexpr GFFTT GFFFT::operator - (const GFFTT& r){
    return GFFTT(-r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GFFFT::operator - (const GTFTT& r){
    return GTFTT(-r.v0[0], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GFTTT GFFFT::operator - (const GFTTT& r){
    return GFTTT(-r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFFFT::operator - (const GTTTT& r){
    return GTTTT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFFT GTFFT::operator - (const GTFFF& r){
    return GTFFT(v0[0]-r.v0[0], v3[0]);
  }
  constexpr GTTFT GTFFT::operator - (const GFTFF& r){
    return GTTFT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v3[0]);
  }
  constexpr GTTFT GTFFT::operator - (const GTTFF& r){
    return GTTFT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v3[0]);
  }
  constexpr GTFTT GTFFT::operator - (const GFFTF& r){
    return GTFTT(v0[0], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTFTT GTFFT::operator - (const GTFTF& r){
    return GTFTT(v0[0]-r.v0[0], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTTT GTFFT::operator - (const GFTTF& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTTT GTFFT::operator - (const GTTTF& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTFFT GTFFT::operator - (const GFFFT& r){
    return GTFFT(v0[0], v3[0]-r.v3[0]);
  }
  constexpr GTFFT GTFFT::operator - (const GTFFT& r){
    return GTFFT(v0[0]-r.v0[0], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GTFFT::operator - (const GFTFT& r){
    return GTTFT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GTFFT::operator - (const GTTFT& r){
    return GTTFT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GTFFT::operator - (const GFFTT& r){
    return GTFTT(v0[0], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GTFFT::operator - (const GTFTT& r){
    return GTFTT(v0[0]-r.v0[0], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTFFT::operator - (const GFTTT& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTFFT::operator - (const GTTTT& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GFTFT::operator - (const GTFFF& r){
    return GTTFT(-r.v0[0], v1[0], v1[1], v1[2], v3[0]);
  }
  constexpr GFTFT GFTFT::operator - (const GFTFF& r){
    return GFTFT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v3[0]);
  }
  constexpr GTTFT GFTFT::operator - (const GTTFF& r){
    return GTTFT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v3[0]);
  }
  constexpr GFTTT GFTFT::operator - (const GFFTF& r){
    return GFTTT(v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTTT GFTFT::operator - (const GTFTF& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GFTTT GFTFT::operator - (const GFTTF& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTTT GFTFT::operator - (const GTTTF& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GFTFT GFTFT::operator - (const GFFFT& r){
    return GFTFT(v1[0], v1[1], v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GFTFT::operator - (const GTFFT& r){
    return GTTFT(-r.v0[0], v1[0], v1[1], v1[2], v3[0]-r.v3[0]);
  }
  constexpr GFTFT GFTFT::operator - (const GFTFT& r){
    return GFTFT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GFTFT::operator - (const GTTFT& r){
    return GTTFT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v3[0]-r.v3[0]);
  }
  constexpr GFTTT GFTFT::operator - (const GFFTT& r){
    return GFTTT(v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFTFT::operator - (const GTFTT& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GFTTT GFTFT::operator - (const GFTTT& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFTFT::operator - (const GTTTT& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GTTFT::operator - (const GTFFF& r){
    return GTTFT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v3[0]);
  }
  constexpr GTTFT GTTFT::operator - (const GFTFF& r){
    return GTTFT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v3[0]);
  }
  constexpr GTTFT GTTFT::operator - (const GTTFF& r){
    return GTTFT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v3[0]);
  }
  constexpr GTTTT GTTFT::operator - (const GFFTF& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTFT::operator - (const GTFTF& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTFT::operator - (const GFTTF& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTFT::operator - (const GTTTF& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]);
  }
  constexpr GTTFT GTTFT::operator - (const GFFFT& r){
    return GTTFT(v0[0], v1[0], v1[1], v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GTTFT::operator - (const GTFFT& r){
    return GTTFT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GTTFT::operator - (const GFTFT& r){
    return GTTFT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTTFT GTTFT::operator - (const GTTFT& r){
    return GTTFT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator - (const GFFTT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator - (const GTFTT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator - (const GFTTT& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTFT::operator - (const GTTTT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], -r.v2[0], -r.v2[1], -r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GFFTT::operator - (const GTFFF& r){
    return GTFTT(-r.v0[0], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GFTTT GFFTT::operator - (const GFTFF& r){
    return GFTTT(-r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GFFTT::operator - (const GTTFF& r){
    return GTTTT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GFFTT GFFTT::operator - (const GFFTF& r){
    return GFFTT(v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTFTT GFFTT::operator - (const GTFTF& r){
    return GTFTT(-r.v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GFTTT GFFTT::operator - (const GFTTF& r){
    return GFTTT(-r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GFFTT::operator - (const GTTTF& r){
    return GTTTT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GFFTT GFFTT::operator - (const GFFFT& r){
    return GFFTT(v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GFFTT::operator - (const GTFFT& r){
    return GTFTT(-r.v0[0], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GFTTT GFFTT::operator - (const GFTFT& r){
    return GFTTT(-r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFFTT::operator - (const GTTFT& r){
    return GTTTT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GFFTT GFFTT::operator - (const GFFTT& r){
    return GFFTT(v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GFFTT::operator - (const GTFTT& r){
    return GTFTT(-r.v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GFTTT GFFTT::operator - (const GFTTT& r){
    return GFTTT(-r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFFTT::operator - (const GTTTT& r){
    return GTTTT(-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GTFTT::operator - (const GTFFF& r){
    return GTFTT(v0[0]-r.v0[0], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTFTT::operator - (const GFTFF& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTFTT::operator - (const GTTFF& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTFTT GTFTT::operator - (const GFFTF& r){
    return GTFTT(v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTFTT GTFTT::operator - (const GTFTF& r){
    return GTFTT(v0[0]-r.v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GTFTT::operator - (const GFTTF& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GTFTT::operator - (const GTTTF& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTFTT GTFTT::operator - (const GFFFT& r){
    return GTFTT(v0[0], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GTFTT::operator - (const GTFFT& r){
    return GTFTT(v0[0]-r.v0[0], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator - (const GFTFT& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator - (const GTTFT& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GTFTT::operator - (const GFFTT& r){
    return GTFTT(v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTFTT GTFTT::operator - (const GTFTT& r){
    return GTFTT(v0[0]-r.v0[0], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator - (const GFTTT& r){
    return GTTTT(v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTFTT::operator - (const GTTTT& r){
    return GTTTT(v0[0]-r.v0[0], -r.v1[0], -r.v1[1], -r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator - (const GTFFF& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GFTTT GFTTT::operator - (const GFTFF& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GFTTT::operator - (const GTTFF& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GFTTT GFTTT::operator - (const GFFTF& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GFTTT::operator - (const GTFTF& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GFTTT GFTTT::operator - (const GFTTF& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GFTTT::operator - (const GTTTF& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GFTTT GFTTT::operator - (const GFFFT& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator - (const GTFFT& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GFTTT GFTTT::operator - (const GFTFT& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator - (const GTTFT& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GFTTT GFTTT::operator - (const GFFTT& r){
    return GFTTT(v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator - (const GTFTT& r){
    return GTTTT(-r.v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GFTTT GFTTT::operator - (const GFTTT& r){
    return GFTTT(v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GFTTT::operator - (const GTTTT& r){
    return GTTTT(-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GTFFF& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GFTFF& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GTTFF& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GFFTF& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GTFTF& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GFTTF& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GTTTF& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GFFFT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GTFFT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GFTFT& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GTTFT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0], v2[1], v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GFFTT& r){
    return GTTTT(v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GTFTT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0], v1[1], v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GFTTT& r){
    return GTTTT(v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
  constexpr GTTTT GTTTT::operator - (const GTTTT& r){
    return GTTTT(v0[0]-r.v0[0], v1[0]-r.v1[0], v1[1]-r.v1[1], v1[2]-r.v1[2], v2[0]-r.v2[0], v2[1]-r.v2[1], v2[2]-r.v2[2], v3[0]-r.v3[0]);
  }
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
  constexpr GTFFF GTFFF::operator * (const GTFFF& other){
      return GTFFF(other.v0[0]*v0[0]);
  }
  constexpr GFTFF GTFFF::operator * (const GFTFF& other){
      return GFTFF(other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0]);
  }
  constexpr GTTFF GTFFF::operator * (const GTTFF& other){
      return GTTFF(other.v0[0]*v0[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0]);
  }
  constexpr GFFTF GTFFF::operator * (const GFFTF& other){
      return GFFTF(other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0]);
  }
  constexpr GTFTF GTFFF::operator * (const GTFTF& other){
      return GTFTF(other.v0[0]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0]);
  }
  constexpr GFTTF GTFFF::operator * (const GFTTF& other){
      return GFTTF(other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0]);
  }
  constexpr GTTTF GTFFF::operator * (const GTTTF& other){
      return GTTTF(other.v0[0]*v0[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0]);
  }
  constexpr GFFFT GTFFF::operator * (const GFFFT& other){
      return GFFFT(other.v3[0]*v0[0]);
  }
  constexpr GTFFT GTFFF::operator * (const GTFFT& other){
      return GTFFT(other.v0[0]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GFTFT GTFFF::operator * (const GFTFT& other){
      return GFTFT(other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GTTFT GTFFF::operator * (const GTTFT& other){
      return GTTFT(other.v0[0]*v0[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GFFTT GTFFF::operator * (const GFFTT& other){
      return GFFTT(other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GTFTT GTFFF::operator * (const GTFTT& other){
      return GTFTT(other.v0[0]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GFTTT GTFFF::operator * (const GFTTT& other){
      return GFTTT(other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFFF::operator * (const GTTTT& other){
      return GTTTT(other.v0[0]*v0[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GFTFF GFTFF::operator * (const GTFFF& other){
      return GFTFF(other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2]);
  }
  constexpr GTFTF GFTFF::operator * (const GFTFF& other){
      return GTFTF(other.v1[1]*v1[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1]);
  }
  constexpr GTTTF GFTFF::operator * (const GTTFF& other){
      return GTTTF(other.v1[1]*v1[1], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1]);
  }
  constexpr GFTFT GFTFF::operator * (const GFFTF& other){
      return GFTFT(-other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GFTFT GFTFF::operator * (const GTFTF& other){
      return GFTFT(-other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFF::operator * (const GFTTF& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFF::operator * (const GTTTF& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GFFTF GFTFF::operator * (const GFFFT& other){
      return GFFTF(other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0]);
  }
  constexpr GFTTF GFTFF::operator * (const GTFFT& other){
      return GFTTF(other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0]);
  }
  constexpr GTFTF GFTFF::operator * (const GFTFT& other){
      return GTFTF(other.v1[1]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1]);
  }
  constexpr GTTTF GFTFF::operator * (const GTTFT& other){
      return GTTTF(other.v1[1]*v1[1], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1]);
  }
  constexpr GFTTT GFTFF::operator * (const GFFTT& other){
      return GFTTT(-other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], -other.v2[1]*v1[1]);
  }
  constexpr GFTTT GFTFF::operator * (const GTFTT& other){
      return GFTTT(-other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFF::operator * (const GFTTT& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFF::operator * (const GTTTT& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTFF GTTFF::operator * (const GTFFF& other){
      return GTTFF(other.v0[0]*v0[0], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2]);
  }
  constexpr GTTTF GTTFF::operator * (const GFTFF& other){
      return GTTTF(other.v1[1]*v1[1], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1]);
  }
  constexpr GTTTF GTTFF::operator * (const GTTFF& other){
      return GTTTF(other.v1[1]*v1[1], other.v1[0]*v0[0], other.v0[0]*v1[1], other.v1[2]*v0[0], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1]);
  }
  constexpr GFTTT GTTFF::operator * (const GFFTF& other){
      return GFTTT(-other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFF::operator * (const GTFTF& other){
      return GTTTT(other.v0[0]*v0[0], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFF::operator * (const GFTTF& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v1[1]*v0[0], other.v2[2]*v1[1], -other.v1[0]*v1[1], other.v2[1]*v0[0], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFF::operator * (const GTTTF& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v1[0]*v1[1], other.v2[1]*v0[0], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GFFTT GTTFF::operator * (const GFFFT& other){
      return GFFTT(other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GTFFT& other){
      return GTTTT(other.v0[0]*v0[0], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GFTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTFF::operator * (const GTTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[0]*v0[0], other.v0[0]*v1[1], other.v1[2]*v0[0], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], other.v3[0]*v0[0]);
  }
  constexpr GFTTT GTTFF::operator * (const GFFTT& other){
      return GFTTT(-other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], other.v2[0]*v0[0], -other.v3[0]*v1[1], other.v2[2]*v0[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFF::operator * (const GTFTT& other){
      return GTTTT(other.v0[0]*v0[0], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], other.v2[0]*v0[0], -other.v3[0]*v1[1], other.v2[2]*v0[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFF::operator * (const GFTTT& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v1[1]*v0[0], other.v2[2]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFF::operator * (const GTTTT& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GFFTF GFFTF::operator * (const GTFFF& other){
      return GFFTF(other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2]);
  }
  constexpr GFTFT GFFTF::operator * (const GFTFF& other){
      return GFTFT(other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GFTTT GFFTF::operator * (const GTTFF& other){
      return GFTTT(other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTFTF GFFTF::operator * (const GFFTF& other){
      return GTFTF(-other.v2[2]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1]);
  }
  constexpr GTFTF GFFTF::operator * (const GTFTF& other){
      return GTFTF(-other.v2[2]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2]);
  }
  constexpr GTTTT GFFTF::operator * (const GFTTF& other){
      return GTTTT(-other.v2[2]*v2[2], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GFFTF::operator * (const GTTTF& other){
      return GTTTT(-other.v2[2]*v2[2], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GFTFF GFFTF::operator * (const GFFFT& other){
      return GFTFF(-other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0]);
  }
  constexpr GFTTF GFFTF::operator * (const GTFFT& other){
      return GFTTF(-other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2]);
  }
  constexpr GFTFT GFFTF::operator * (const GFTFT& other){
      return GFTFT(-other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GFTTT GFFTF::operator * (const GTTFT& other){
      return GFTTT(-other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTTF GFFTF::operator * (const GFFTT& other){
      return GTTTF(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1]);
  }
  constexpr GTTTF GFFTF::operator * (const GTFTT& other){
      return GTTTF(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2]);
  }
  constexpr GTTTT GFFTF::operator * (const GFTTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GFFTF::operator * (const GTTTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTFTF GTFTF::operator * (const GTFFF& other){
      return GTFTF(other.v0[0]*v0[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2]);
  }
  constexpr GFTFT GTFTF::operator * (const GFTFF& other){
      return GFTFT(other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTF::operator * (const GTTFF& other){
      return GTTTT(other.v0[0]*v0[0], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTFTF GTFTF::operator * (const GFFTF& other){
      return GTFTF(-other.v2[2]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1]);
  }
  constexpr GTFTF GTFTF::operator * (const GTFTF& other){
      return GTFTF(-other.v2[2]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2]);
  }
  constexpr GTTTT GTFTF::operator * (const GFTTF& other){
      return GTTTT(-other.v2[2]*v2[2], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTF::operator * (const GTTTF& other){
      return GTTTT(-other.v2[2]*v2[2], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GFTFT GTFTF::operator * (const GFFFT& other){
      return GFTFT(-other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GTFFT& other){
      return GTTTT(other.v0[0]*v0[0], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v3[0]*v0[0]);
  }
  constexpr GFTFT GTFTF::operator * (const GFTFT& other){
      return GFTFT(-other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTF::operator * (const GTTFT& other){
      return GTTTT(other.v0[0]*v0[0], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTF::operator * (const GFFTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GTFTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFTF::operator * (const GFTTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTF::operator * (const GTTTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GFTTF GFTTF::operator * (const GTFFF& other){
      return GFTTF(other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2]);
  }
  constexpr GTTTT GFTTF::operator * (const GFTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GTTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v0[0]*v1[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v0[0]*v2[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GFFTF& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v2[2]*v2[1], -other.v2[0]*v2[2], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GTFTF& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GFTTF& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v2[0]*v1[0], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v1[2]*v1[0], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GTTTF& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v0[0]*v1[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GFTTF GFTTF::operator * (const GFFFT& other){
      return GFTTF(-other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0]);
  }
  constexpr GFTTF GFTTF::operator * (const GTFFT& other){
      return GFTTF(other.v0[0]*v1[0], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v3[0]*v1[0]);
  }
  constexpr GTTTT GFTTF::operator * (const GFTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GTTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v0[0]*v2[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GFFTT& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v3[0]*v2[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], -other.v3[0]*v1[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GTFTT& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v3[0]*v2[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GFTTT& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], -other.v3[0]*v1[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTF::operator * (const GTTTT& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTF GTTTF::operator * (const GTFFF& other){
      return GTTTF(other.v0[0]*v0[0], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2]);
  }
  constexpr GTTTT GTTTF::operator * (const GFTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GTTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v0[0]*v1[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v0[0]*v2[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GFFTF& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v2[2]*v2[1], -other.v2[0]*v2[2], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GTFTF& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GFTTF& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v2[0]*v1[0], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v1[2]*v1[0], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GTTTF& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v0[0]*v1[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GFTTT GTTTF::operator * (const GFFFT& other){
      return GFTTT(-other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GTFFT& other){
      return GTTTT(other.v0[0]*v0[0], other.v0[0]*v1[0], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v3[0]*v1[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTTF::operator * (const GFTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GTTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v0[0]*v2[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GFFTT& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v3[0]*v2[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], -other.v3[0]*v1[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GTFTT& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v3[0]*v2[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GFTTT& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], -other.v3[0]*v1[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTF::operator * (const GTTTT& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GFFFT GFFFT::operator * (const GTFFF& other){
      return GFFFT(other.v0[0]*v3[0]);
  }
  constexpr GFFTF GFFFT::operator * (const GFTFF& other){
      return GFFTF(other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0]);
  }
  constexpr GFFTT GFFFT::operator * (const GTTFF& other){
      return GFFTT(other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v0[0]*v3[0]);
  }
  constexpr GFTFF GFFFT::operator * (const GFFTF& other){
      return GFTFF(-other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0]);
  }
  constexpr GFTFT GFFFT::operator * (const GTFTF& other){
      return GFTFT(-other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v0[0]*v3[0]);
  }
  constexpr GFTTF GFFFT::operator * (const GFTTF& other){
      return GFTTF(-other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0]);
  }
  constexpr GFTTT GFFFT::operator * (const GTTTF& other){
      return GFTTT(-other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v0[0]*v3[0]);
  }
  constexpr GTFFF GFFFT::operator * (const GFFFT& other){
      return GTFFF(-other.v3[0]*v3[0]);
  }
  constexpr GTFFT GFFFT::operator * (const GTFFT& other){
      return GTFFT(-other.v3[0]*v3[0], other.v0[0]*v3[0]);
  }
  constexpr GTFTF GFFFT::operator * (const GFTFT& other){
      return GTFTF(-other.v3[0]*v3[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0]);
  }
  constexpr GTFTT GFFFT::operator * (const GTTFT& other){
      return GTFTT(-other.v3[0]*v3[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v0[0]*v3[0]);
  }
  constexpr GTTFF GFFFT::operator * (const GFFTT& other){
      return GTTFF(-other.v3[0]*v3[0], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0]);
  }
  constexpr GTTFT GFFFT::operator * (const GTFTT& other){
      return GTTFT(-other.v3[0]*v3[0], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v0[0]*v3[0]);
  }
  constexpr GTTTF GFFFT::operator * (const GFTTT& other){
      return GTTTF(-other.v3[0]*v3[0], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0]);
  }
  constexpr GTTTT GFFFT::operator * (const GTTTT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v0[0]*v3[0]);
  }
  constexpr GTFFT GTFFT::operator * (const GTFFF& other){
      return GTFFT(other.v0[0]*v0[0], other.v0[0]*v3[0]);
  }
  constexpr GFTTF GTFFT::operator * (const GFTFF& other){
      return GFTTF(other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTTFF& other){
      return GTTTT(other.v0[0]*v0[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v0[0]*v3[0]);
  }
  constexpr GFTTF GTFFT::operator * (const GFFTF& other){
      return GFTTF(-other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTFTF& other){
      return GTTTT(other.v0[0]*v0[0], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v0[0]*v3[0]);
  }
  constexpr GFTTF GTFFT::operator * (const GFTTF& other){
      return GFTTF(other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTTTF& other){
      return GTTTT(other.v0[0]*v0[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v0[0]*v3[0]);
  }
  constexpr GTFFT GTFFT::operator * (const GFFFT& other){
      return GTFFT(-other.v3[0]*v3[0], other.v3[0]*v0[0]);
  }
  constexpr GTFFT GTFFT::operator * (const GTFFT& other){
      return GTFFT(other.v0[0]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GFTFT& other){
      return GTTTT(-other.v3[0]*v3[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTTFT& other){
      return GTTTT(other.v0[0]*v0[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GFFTT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTFTT& other){
      return GTTTT(other.v0[0]*v0[0], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GFTTT& other){
      return GTTTT(-other.v3[0]*v3[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFFT::operator * (const GTTTT& other){
      return GTTTT(other.v0[0]*v0[0], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], other.v3[0]*v0[0]);
  }
  constexpr GFTFT GFTFT::operator * (const GTFFF& other){
      return GFTFT(other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v0[0]*v3[0]);
  }
  constexpr GTFTF GFTFT::operator * (const GFTFF& other){
      return GTFTF(other.v1[1]*v1[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1]);
  }
  constexpr GTTTT GFTFT::operator * (const GTTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], other.v0[0]*v3[0]);
  }
  constexpr GFTFT GFTFT::operator * (const GFFTF& other){
      return GFTFT(-other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GFTFT GFTFT::operator * (const GTFTF& other){
      return GFTFT(-other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFT::operator * (const GFTTF& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFT::operator * (const GTTTF& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTFTF GFTFT::operator * (const GFFFT& other){
      return GTFTF(-other.v3[0]*v3[0], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GTFFT& other){
      return GTTTT(-other.v3[0]*v3[0], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], other.v0[0]*v3[0]);
  }
  constexpr GTFTF GFTFT::operator * (const GFTFT& other){
      return GTFTF(other.v1[1]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1]);
  }
  constexpr GTTTT GFTFT::operator * (const GTTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GFTFT::operator * (const GFFTT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFT::operator * (const GTFTT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFT::operator * (const GFTTT& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTFT::operator * (const GTTTT& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTFT GTTFT::operator * (const GTFFF& other){
      return GTTFT(other.v0[0]*v0[0], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v0[0]*v3[0]);
  }
  constexpr GTTTF GTTFT::operator * (const GFTFF& other){
      return GTTTF(other.v1[1]*v1[1], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1]);
  }
  constexpr GTTTT GTTFT::operator * (const GTTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[0]*v0[0], other.v0[0]*v1[1], other.v1[2]*v0[0], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], other.v0[0]*v3[0]);
  }
  constexpr GFTTT GTTFT::operator * (const GFFTF& other){
      return GFTTT(-other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFT::operator * (const GTFTF& other){
      return GTTTT(other.v0[0]*v0[0], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], other.v2[0]*v0[0], other.v2[1]*v0[0], other.v2[2]*v0[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFT::operator * (const GFTTF& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v1[1]*v0[0], other.v2[2]*v1[1], -other.v1[0]*v1[1], other.v2[1]*v0[0], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFT::operator * (const GTTTF& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v1[0]*v1[1], other.v2[1]*v0[0], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTFTT GTTFT::operator * (const GFFFT& other){
      return GTFTT(-other.v3[0]*v3[0], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTFFT& other){
      return GTTTT(other.v0[0]*v0[0], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GFTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[0]*v0[0], other.v1[1]*v0[0], other.v1[2]*v0[0], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GTTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[0]*v0[0], other.v0[0]*v1[1], other.v1[2]*v0[0], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTFT::operator * (const GFFTT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], other.v2[0]*v0[0], -other.v3[0]*v1[1], other.v2[2]*v0[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFT::operator * (const GTFTT& other){
      return GTTTT(other.v0[0]*v0[0], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], other.v2[0]*v0[0], -other.v3[0]*v1[1], other.v2[2]*v0[0], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFT::operator * (const GFTTT& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v1[1]*v0[0], other.v2[2]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTFT::operator * (const GTTTT& other){
      return GTTTT(other.v1[1]*v1[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v2[1]*v1[1]);
  }
  constexpr GFFTT GFFTT::operator * (const GTFFF& other){
      return GFFTT(other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v0[0]*v3[0]);
  }
  constexpr GFTTT GFFTT::operator * (const GFTFF& other){
      return GFTTT(other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v1[0]*v2[2]);
  }
  constexpr GFTTT GFFTT::operator * (const GTTFF& other){
      return GFTTT(other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTTF GFFTT::operator * (const GFFTF& other){
      return GTTTF(-other.v2[2]*v2[2], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1]);
  }
  constexpr GTTTT GFFTT::operator * (const GTFTF& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GFTTF& other){
      return GTTTT(-other.v2[2]*v2[2], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GFFTT::operator * (const GTTTF& other){
      return GTTTT(-other.v2[2]*v2[2], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTFF GFFTT::operator * (const GFFFT& other){
      return GTTFF(-other.v3[0]*v3[0], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GTFFT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GFTFT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GFFTT::operator * (const GTTFT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTTF GFFTT::operator * (const GFFTT& other){
      return GTTTF(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1]);
  }
  constexpr GTTTT GFFTT::operator * (const GTFTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GFFTT::operator * (const GFTTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GFFTT::operator * (const GTTTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTFTT GTFTT::operator * (const GTFFF& other){
      return GTFTT(other.v0[0]*v0[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v0[0]*v3[0]);
  }
  constexpr GFTTT GTFTT::operator * (const GFTFF& other){
      return GFTTT(other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTT::operator * (const GTTFF& other){
      return GTTTT(other.v0[0]*v0[0], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTTF GTFTT::operator * (const GFFTF& other){
      return GTTTF(-other.v2[2]*v2[2], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1]);
  }
  constexpr GTTTT GTFTT::operator * (const GTFTF& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v2[2]*v3[0], other.v2[1]*v3[0], -other.v2[0]*v3[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GFTTF& other){
      return GTTTT(-other.v2[2]*v2[2], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTT::operator * (const GTTTF& other){
      return GTTTT(-other.v2[2]*v2[2], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTFT GTFTT::operator * (const GFFFT& other){
      return GTTFT(-other.v3[0]*v3[0], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTFFT& other){
      return GTTTT(other.v0[0]*v0[0], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GFTFT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v1[2]*v3[0], -other.v1[1]*v3[0], other.v1[0]*v3[0], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTT::operator * (const GTTFT& other){
      return GTTTT(other.v0[0]*v0[0], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTT::operator * (const GFFTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GTFTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTFTT::operator * (const GFTTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v2[0]*v2[1], other.v1[0]*v2[2]);
  }
  constexpr GTTTT GTFTT::operator * (const GTTTT& other){
      return GTTTT(-other.v2[2]*v2[2], -other.v3[0]*v2[2], other.v1[2]*v2[2], -other.v1[1]*v2[2], other.v2[1]*v2[2], -other.v2[0]*v2[2], other.v0[0]*v2[2], other.v1[0]*v2[2]);
  }
  constexpr GFTTT GFTTT::operator * (const GTFFF& other){
      return GFTTT(other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GFTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GTTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v0[0]*v1[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v0[0]*v2[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GFFTF& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v2[2]*v2[1], -other.v2[0]*v2[2], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GTFTF& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GFTTF& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v2[0]*v1[0], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v1[2]*v1[0], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GTTTF& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v0[0]*v1[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTF GFTTT::operator * (const GFFFT& other){
      return GTTTF(-other.v3[0]*v3[0], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GTFFT& other){
      return GTTTT(-other.v3[0]*v3[0], other.v0[0]*v1[0], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v3[0]*v1[0], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GFTTT::operator * (const GFTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GTTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v0[0]*v2[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GFFTT& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v3[0]*v2[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], -other.v3[0]*v1[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GTFTT& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v3[0]*v2[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GFTTT& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], -other.v3[0]*v1[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GFTTT::operator * (const GTTTT& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GTFFF& other){
      return GTTTT(other.v0[0]*v0[0], other.v0[0]*v1[0], other.v0[0]*v1[1], other.v0[0]*v1[2], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v0[0]*v2[2], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v1[2]*v2[2], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v1[2]*v1[0], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GTTFF& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v0[0]*v1[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v0[0]*v2[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GFFTF& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v2[0]*v1[0], other.v2[2]*v1[1], -other.v2[2]*v2[1], -other.v2[0]*v2[2], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GTFTF& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v0[0]*v1[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GFTTF& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v2[0]*v1[0], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v1[2]*v1[0], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GTTTF& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v0[0]*v1[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GFFFT& other){
      return GTTTT(-other.v3[0]*v3[0], -other.v3[0]*v2[2], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v3[0]*v1[2], -other.v3[0]*v1[1], other.v3[0]*v1[0], other.v3[0]*v0[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GTFFT& other){
      return GTTTT(-other.v3[0]*v3[0], other.v0[0]*v1[0], other.v3[0]*v2[1], -other.v3[0]*v2[0], other.v0[0]*v2[0], other.v0[0]*v2[1], other.v3[0]*v1[0], other.v0[0]*v3[0]);
  }
  constexpr GTTTT GTTTT::operator * (const GFTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], -other.v3[0]*v1[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GTTFT& other){
      return GTTTT(other.v1[1]*v1[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v1[0]*v1[1], other.v0[0]*v2[1], other.v1[2]*v1[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GFFTT& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v3[0]*v2[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], -other.v3[0]*v1[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GTFTT& other){
      return GTTTT(-other.v2[1]*v2[1], -other.v2[0]*v1[1], other.v3[0]*v2[1], other.v2[2]*v1[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v2[1]*v1[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GFTTT& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], -other.v3[0]*v1[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  constexpr GTTTT GTTTT::operator * (const GTTTT& other){
      return GTTTT(-other.v2[1]*v2[1], other.v1[2]*v2[1], other.v3[0]*v2[1], -other.v1[0]*v2[1], -other.v2[2]*v2[1], other.v0[0]*v2[1], other.v2[0]*v2[1], -other.v1[1]*v2[1]);
  }
  bool GTFFF::approxEqual (const GTFFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon);
  }
  bool GTFFF::approxEqual (const GFTFF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon);
  }
  bool GTFFF::approxEqual (const GTTFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon);
  }
  bool GTFFF::approxEqual (const GFFTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GTFFF::approxEqual (const GTFTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GTFFF::approxEqual (const GFTTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GTFFF::approxEqual (const GTTTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GTFFF::approxEqual (const GFFFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFFF::approxEqual (const GTFFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFFF::approxEqual (const GFTFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFFF::approxEqual (const GTTFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFFF::approxEqual (const GFFTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFFF::approxEqual (const GTFTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFFF::approxEqual (const GFTTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFFF::approxEqual (const GTTTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTFF::approxEqual (const GTFFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon);
  }
  bool GFTFF::approxEqual (const GFTFF& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon);
  }
  bool GFTFF::approxEqual (const GTTFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon);
  }
  bool GFTFF::approxEqual (const GFFTF& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GFTFF::approxEqual (const GTFTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GFTFF::approxEqual (const GFTTF& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GFTFF::approxEqual (const GTTTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GFTFF::approxEqual (const GFFFT& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTFF::approxEqual (const GTFFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTFF::approxEqual (const GFTFT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTFF::approxEqual (const GTTFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTFF::approxEqual (const GFFTT& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTFF::approxEqual (const GTFTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTFF::approxEqual (const GFTTT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTFF::approxEqual (const GTTTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTFF::approxEqual (const GTFFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon);
  }
  bool GTTFF::approxEqual (const GFTFF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon);
  }
  bool GTTFF::approxEqual (const GTTFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon);
  }
  bool GTTFF::approxEqual (const GFFTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GTTFF::approxEqual (const GTFTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GTTFF::approxEqual (const GFTTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GTTFF::approxEqual (const GTTTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon);
  }
  bool GTTFF::approxEqual (const GFFFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTFF::approxEqual (const GTFFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTFF::approxEqual (const GFTFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTFF::approxEqual (const GTTFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTFF::approxEqual (const GFFTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTFF::approxEqual (const GTFTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTFF::approxEqual (const GFTTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTFF::approxEqual (const GTTTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFTF::approxEqual (const GTFFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GFFTF::approxEqual (const GFTFF& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GFFTF::approxEqual (const GTTFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GFFTF::approxEqual (const GFFTF& r){
    return (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GFFTF::approxEqual (const GTFTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GFFTF::approxEqual (const GFTTF& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GFFTF::approxEqual (const GTTTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GFFTF::approxEqual (const GFFFT& r){
    return (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFTF::approxEqual (const GTFFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFTF::approxEqual (const GFTFT& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFTF::approxEqual (const GTTFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFTF::approxEqual (const GFFTT& r){
    return (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFTF::approxEqual (const GTFTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFTF::approxEqual (const GFTTT& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFTF::approxEqual (const GTTTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFTF::approxEqual (const GTFFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GTFTF::approxEqual (const GFTFF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GTFTF::approxEqual (const GTTFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GTFTF::approxEqual (const GFFTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GTFTF::approxEqual (const GTFTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GTFTF::approxEqual (const GFTTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GTFTF::approxEqual (const GTTTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GTFTF::approxEqual (const GFFFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFTF::approxEqual (const GTFFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFTF::approxEqual (const GFTFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFTF::approxEqual (const GTTFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFTF::approxEqual (const GFFTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFTF::approxEqual (const GTFTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFTF::approxEqual (const GFTTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTFTF::approxEqual (const GTTTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTTF::approxEqual (const GTFFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GFTTF::approxEqual (const GFTFF& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GFTTF::approxEqual (const GTTFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GFTTF::approxEqual (const GFFTF& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GFTTF::approxEqual (const GTFTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GFTTF::approxEqual (const GFTTF& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GFTTF::approxEqual (const GTTTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GFTTF::approxEqual (const GFFFT& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTTF::approxEqual (const GTFFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTTF::approxEqual (const GFTFT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTTF::approxEqual (const GTTFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTTF::approxEqual (const GFFTT& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTTF::approxEqual (const GTFTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTTF::approxEqual (const GFTTT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFTTF::approxEqual (const GTTTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTTF::approxEqual (const GTFFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GTTTF::approxEqual (const GFTFF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GTTTF::approxEqual (const GTTFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon);
  }
  bool GTTTF::approxEqual (const GFFTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GTTTF::approxEqual (const GTFTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GTTTF::approxEqual (const GFTTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GTTTF::approxEqual (const GTTTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon);
  }
  bool GTTTF::approxEqual (const GFFFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTTF::approxEqual (const GTFFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTTF::approxEqual (const GFTFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTTF::approxEqual (const GTTFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTTF::approxEqual (const GFFTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTTF::approxEqual (const GTFTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTTF::approxEqual (const GFTTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GTTTF::approxEqual (const GTTTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(r.v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GTFFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GFTFF& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GTTFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GFFTF& r){
    return (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GTFTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GFTTF& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GTTTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GFFFT& r){
    return (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GTFFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GFTFT& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GTTFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GFFTT& r){
    return (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GTFTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GFTTT& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFFT::approxEqual (const GTTTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GTFFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GFTFF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GTTFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GFFTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GTFTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GFTTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GTTTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GFFFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GTFFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GFTFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GTTFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GFFTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GTFTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GFTTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFFT::approxEqual (const GTTTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GTFFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GFTFF& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GTTFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GFFTF& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GTFTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GFTTF& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GTTTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GFFFT& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GTFFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GFTFT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GTTFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GFFTT& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GTFTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GFTTT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTFT::approxEqual (const GTTTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GTFFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GFTFF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GTTFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GFFTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GTFTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GFTTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GTTTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GFFFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GTFFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GFTFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GTTFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GFFTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GTFTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GFTTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTFT::approxEqual (const GTTTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(r.v2[0])<epsilon)&& (fabs(r.v2[1])<epsilon)&& (fabs(r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GTFFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GFTFF& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GTTFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GFFTF& r){
    return (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GTFTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GFTTF& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GTTTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GFFFT& r){
    return (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GTFFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GFTFT& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GTTFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GFFTT& r){
    return (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GTFTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GFTTT& r){
    return (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFFTT::approxEqual (const GTTTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GTFFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GFTFF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GTTFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GFFTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GTFTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GFTTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GTTTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GFFFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GTFFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GFTFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GTTFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GFFTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GTFTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GFTTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTFTT::approxEqual (const GTTTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon)&& (fabs(r.v1[1])<epsilon)&& (fabs(r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GTFFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GFTFF& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GTTFF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GFFTF& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GTFTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GFTTF& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GTTTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GFFFT& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GTFFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GFTFT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GTTFT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GFFTT& r){
    return (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GTFTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GFTTT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GFTTT::approxEqual (const GTTTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GTFFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GFTFF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GTTFF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GFFTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GTFTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GFTTF& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GTTTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GFFFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GTFFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GFTFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GTTFT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0])<epsilon) && (fabs(v2[1])<epsilon) && (fabs(v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GFFTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GTFTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon) && (fabs(v1[1])<epsilon) && (fabs(v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GFTTT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  bool GTTTT::approxEqual (const GTTTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon) && (fabs(v1[1]-r.v1[1])<epsilon) && (fabs(v1[2]-r.v1[2])<epsilon) && (fabs(v2[0]-r.v2[0])<epsilon) && (fabs(v2[1]-r.v2[1])<epsilon) && (fabs(v2[2]-r.v2[2])<epsilon) && (fabs(v3[0]-r.v3[0])<epsilon);
  }
  constexpr GTFFF GTFFF::operator * (const double factor){
    return GTFFF(factor*v0[0]);
  }
  constexpr GTFFF operator * (const double factor, const GTFFF& multivector){
    return multivector*factor;
  }
  constexpr GFTFF GFTFF::operator * (const double factor){
    return GFTFF(factor*v1[0], factor*v1[1], factor*v1[2]);
  }
  constexpr GFTFF operator * (const double factor, const GFTFF& multivector){
    return multivector*factor;
  }
  constexpr GTTFF GTTFF::operator * (const double factor){
    return GTTFF(factor*v0[0], factor*v1[0], factor*v1[1], factor*v1[2]);
  }
  constexpr GTTFF operator * (const double factor, const GTTFF& multivector){
    return multivector*factor;
  }
  constexpr GFFTF GFFTF::operator * (const double factor){
    return GFFTF(factor*v2[0], factor*v2[1], factor*v2[2]);
  }
  constexpr GFFTF operator * (const double factor, const GFFTF& multivector){
    return multivector*factor;
  }
  constexpr GTFTF GTFTF::operator * (const double factor){
    return GTFTF(factor*v0[0], factor*v2[0], factor*v2[1], factor*v2[2]);
  }
  constexpr GTFTF operator * (const double factor, const GTFTF& multivector){
    return multivector*factor;
  }
  constexpr GFTTF GFTTF::operator * (const double factor){
    return GFTTF(factor*v1[0], factor*v1[1], factor*v1[2], factor*v2[0], factor*v2[1], factor*v2[2]);
  }
  constexpr GFTTF operator * (const double factor, const GFTTF& multivector){
    return multivector*factor;
  }
  constexpr GTTTF GTTTF::operator * (const double factor){
    return GTTTF(factor*v0[0], factor*v1[0], factor*v1[1], factor*v1[2], factor*v2[0], factor*v2[1], factor*v2[2]);
  }
  constexpr GTTTF operator * (const double factor, const GTTTF& multivector){
    return multivector*factor;
  }
  constexpr GFFFT GFFFT::operator * (const double factor){
    return GFFFT(factor*v3[0]);
  }
  constexpr GFFFT operator * (const double factor, const GFFFT& multivector){
    return multivector*factor;
  }
  constexpr GTFFT GTFFT::operator * (const double factor){
    return GTFFT(factor*v0[0], factor*v3[0]);
  }
  constexpr GTFFT operator * (const double factor, const GTFFT& multivector){
    return multivector*factor;
  }
  constexpr GFTFT GFTFT::operator * (const double factor){
    return GFTFT(factor*v1[0], factor*v1[1], factor*v1[2], factor*v3[0]);
  }
  constexpr GFTFT operator * (const double factor, const GFTFT& multivector){
    return multivector*factor;
  }
  constexpr GTTFT GTTFT::operator * (const double factor){
    return GTTFT(factor*v0[0], factor*v1[0], factor*v1[1], factor*v1[2], factor*v3[0]);
  }
  constexpr GTTFT operator * (const double factor, const GTTFT& multivector){
    return multivector*factor;
  }
  constexpr GFFTT GFFTT::operator * (const double factor){
    return GFFTT(factor*v2[0], factor*v2[1], factor*v2[2], factor*v3[0]);
  }
  constexpr GFFTT operator * (const double factor, const GFFTT& multivector){
    return multivector*factor;
  }
  constexpr GTFTT GTFTT::operator * (const double factor){
    return GTFTT(factor*v0[0], factor*v2[0], factor*v2[1], factor*v2[2], factor*v3[0]);
  }
  constexpr GTFTT operator * (const double factor, const GTFTT& multivector){
    return multivector*factor;
  }
  constexpr GFTTT GFTTT::operator * (const double factor){
    return GFTTT(factor*v1[0], factor*v1[1], factor*v1[2], factor*v2[0], factor*v2[1], factor*v2[2], factor*v3[0]);
  }
  constexpr GFTTT operator * (const double factor, const GFTTT& multivector){
    return multivector*factor;
  }
  constexpr GTTTT GTTTT::operator * (const double factor){
    return GTTTT(factor*v0[0], factor*v1[0], factor*v1[1], factor*v1[2], factor*v2[0], factor*v2[1], factor*v2[2], factor*v3[0]);
  }
  constexpr GTTTT operator * (const double factor, const GTTTT& multivector){
    return multivector*factor;
  }
  static const GTFFF e(1);
  static const GFTFF e1(1, 0, 0);
  static const GFTFF e2(0, 1, 0);
  static const GFTFF e3(0, 0, 1);
  static const GFFTF e12(1, 0, 0);
  static const GFFTF e13(0, 1, 0);
  static const GFFTF e23(0, 0, 1);
  static const GFFFT e123(1);
}
