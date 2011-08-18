// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_HyperbolaToBSplineCurve_HeaderFile
#define _Convert_HyperbolaToBSplineCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Convert_ConicToBSplineCurve_HeaderFile
#include <Convert_ConicToBSplineCurve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class gp_Hypr2d;



//!  This algorithm converts a hyperbola into a rational B-spline curve. <br>
//!  The hyperbola is an Hypr2d from package gp with the <br>
//!  parametrization : <br>
//!  P (U) = <br>
//!  Loc + (MajorRadius * Cosh(U) * Xdir + MinorRadius * Sinh(U) * Ydir) <br>
//!  where Loc is the location point of the hyperbola, Xdir and Ydir are <br>
//!  the normalized directions of the local cartesian coordinate system <br>
//!  of the hyperbola. <br>
//! KeyWords : <br>
//!  Convert, Hyperbola, BSplineCurve, 2D . <br>
class Convert_HyperbolaToBSplineCurve  : public Convert_ConicToBSplineCurve {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
//!  The hyperbola H is limited between the parametric values U1, U2 <br>
//!  and the equivalent B-spline curve has the same orientation as the <br>
//!  hyperbola. <br>
  Standard_EXPORT   Convert_HyperbolaToBSplineCurve(const gp_Hypr2d& H,const Standard_Real U1,const Standard_Real U2);





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif