#include <string>
#include <sstream>
#include <cmath>
#include <limits>
static const double epsilon = std::numeric_limits<double>::epsilon();
namespace cliff{
  typedef double Blade0[1];
  typedef double Blade1[1];
  class GTF;
  class GFT;
  class GTT;
  class GTF{
    Blade0 v0;
    friend class GFT;
    friend class GTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      return result.str();
    }
    constexpr GTF(double p0_0)
    : v0{p0_0}
    {}
    Blade0& blade0() {return v0;}
    constexpr GTF operator + (const GTF& r);
    constexpr GTF operator - (const GTF& r);
    constexpr GTF operator * (const GTF& r);
    bool approxEqual (const GTF& r);
    constexpr GTT operator + (const GFT& r);
    constexpr GTT operator - (const GFT& r);
    constexpr GFT operator * (const GFT& r);
    bool approxEqual (const GFT& r);
    constexpr GTT operator + (const GTT& r);
    constexpr GTT operator - (const GTT& r);
    constexpr GTT operator * (const GTT& r);
    bool approxEqual (const GTT& r);
  };
  class GFT{
    Blade1 v1;
    friend class GTF;
    friend class GTT;
  public:
    std::string str(){
      std::stringstream result;
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      return result.str();
    }
    constexpr GFT(double p1_0)
    : v1{p1_0}
    {}
    Blade1& blade1() {return v1;}
    constexpr GTT operator + (const GTF& r);
    constexpr GTT operator - (const GTF& r);
    constexpr GFT operator * (const GTF& r);
    bool approxEqual (const GTF& r);
    constexpr GFT operator + (const GFT& r);
    constexpr GFT operator - (const GFT& r);
    constexpr GTF operator * (const GFT& r);
    bool approxEqual (const GFT& r);
    constexpr GTT operator + (const GTT& r);
    constexpr GTT operator - (const GTT& r);
    constexpr GTT operator * (const GTT& r);
    bool approxEqual (const GTT& r);
  };
  class GTT{
    Blade0 v0;
    Blade1 v1;
    friend class GTF;
    friend class GFT;
  public:
    std::string str(){
      std::stringstream result;
      if(v0[0]!=0) result<<(result.tellp()==0?"":"+")<<v0[0]<<"e";
      if(v1[0]!=0) result<<(result.tellp()==0?"":"+")<<v1[0]<<"e1";
      return result.str();
    }
    constexpr GTT(double p0_0, double p1_0)
    : v0{p0_0}
    , v1{p1_0}
    {}
    Blade0& blade0() {return v0;}
    Blade1& blade1() {return v1;}
    constexpr GTT operator + (const GTF& r);
    constexpr GTT operator - (const GTF& r);
    constexpr GTT operator * (const GTF& r);
    bool approxEqual (const GTF& r);
    constexpr GTT operator + (const GFT& r);
    constexpr GTT operator - (const GFT& r);
    constexpr GTT operator * (const GFT& r);
    bool approxEqual (const GFT& r);
    constexpr GTT operator + (const GTT& r);
    constexpr GTT operator - (const GTT& r);
    constexpr GTT operator * (const GTT& r);
    bool approxEqual (const GTT& r);
  };
  constexpr GTF GTF::operator - (const GTF& r){
    return GTF(v0[0]-r.v0[0]);
  }
  constexpr GTT GTF::operator - (const GFT& r){
    return GTT(v0[0], -r.v1[0]);
  }
  constexpr GTT GTF::operator - (const GTT& r){
    return GTT(v0[0]-r.v0[0], -r.v1[0]);
  }
  constexpr GTT GFT::operator - (const GTF& r){
    return GTT(-r.v0[0], v1[0]);
  }
  constexpr GFT GFT::operator - (const GFT& r){
    return GFT(v1[0]-r.v1[0]);
  }
  constexpr GTT GFT::operator - (const GTT& r){
    return GTT(-r.v0[0], v1[0]-r.v1[0]);
  }
  constexpr GTT GTT::operator - (const GTF& r){
    return GTT(v0[0]-r.v0[0], v1[0]);
  }
  constexpr GTT GTT::operator - (const GFT& r){
    return GTT(v0[0], v1[0]-r.v1[0]);
  }
  constexpr GTT GTT::operator - (const GTT& r){
    return GTT(v0[0]-r.v0[0], v1[0]-r.v1[0]);
  }
  constexpr GTF GTF::operator + (const GTF& r){
    return GTF(v0[0]+r.v0[0]);
  }
  constexpr GTT GTF::operator + (const GFT& r){
    return GTT(v0[0], r.v1[0]);
  }
  constexpr GTT GTF::operator + (const GTT& r){
    return GTT(v0[0]+r.v0[0], r.v1[0]);
  }
  constexpr GTT GFT::operator + (const GTF& r){
    return GTT(r.v0[0], v1[0]);
  }
  constexpr GFT GFT::operator + (const GFT& r){
    return GFT(v1[0]+r.v1[0]);
  }
  constexpr GTT GFT::operator + (const GTT& r){
    return GTT(r.v0[0], v1[0]+r.v1[0]);
  }
  constexpr GTT GTT::operator + (const GTF& r){
    return GTT(v0[0]+r.v0[0], v1[0]);
  }
  constexpr GTT GTT::operator + (const GFT& r){
    return GTT(v0[0], v1[0]+r.v1[0]);
  }
  constexpr GTT GTT::operator + (const GTT& r){
    return GTT(v0[0]+r.v0[0], v1[0]+r.v1[0]);
  }
  constexpr GTF GTF::operator * (const GTF& r){
    return GTF(v0[0]*r.v0[0]);
  }
  constexpr GFT GTF::operator * (const GFT& r){
    return GFT(v0[0]*r.v1[0]);
  }
  constexpr GTT GTF::operator * (const GTT& r){
    return GTT(v0[0]*r.v0[0], v0[0]*r.v1[0]);
  }
  constexpr GFT GFT::operator * (const GTF& r){
    return GFT(v1[0]*r.v0[0]);
  }
  constexpr GTF GFT::operator * (const GFT& r){
    return GTF(v1[0]*r.v1[0]);
  }
  constexpr GTT GFT::operator * (const GTT& r){
    return GTT(v1[0]*r.v1[0], v1[0]*r.v0[0]);
  }
  constexpr GTT GTT::operator * (const GTF& r){
    return GTT(v0[0]*r.v0[0], v1[0]*r.v0[0]);
  }
  constexpr GTT GTT::operator * (const GFT& r){
    return GTT(v1[0]*r.v1[0], v0[0]*r.v1[0]);
  }
  constexpr GTT GTT::operator * (const GTT& r){
    return GTT(v0[0]*r.v0[0] + v1[0]*r.v1[0], v0[0]*r.v1[0] + v1[0]*r.v0[0]);
  }
  bool GTF::approxEqual (const GTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon);
  }
  bool GTF::approxEqual (const GFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(r.v1[0])<epsilon);
  }
  bool GTF::approxEqual (const GTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(r.v1[0])<epsilon);
  }
  bool GFT::approxEqual (const GTF& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0])<epsilon);
  }
  bool GFT::approxEqual (const GFT& r){
    return (fabs(v1[0]-r.v1[0])<epsilon);
  }
  bool GFT::approxEqual (const GTT& r){
    return (fabs(r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon);
  }
  bool GTT::approxEqual (const GTF& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0])<epsilon);
  }
  bool GTT::approxEqual (const GFT& r){
    return (fabs(v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon);
  }
  bool GTT::approxEqual (const GTT& r){
    return (fabs(v0[0]-r.v0[0])<epsilon) && (fabs(v1[0]-r.v1[0])<epsilon);
  }
}
