// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeParabola_HeaderFile
#define _GCE2d_MakeParabola_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_Parabola_HeaderFile
#include <Handle_Geom2d_Parabola.hxx>
#endif
#ifndef _GCE2d_Root_HeaderFile
#include <GCE2d_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2d_Parabola;
class StdFail_NotDone;
class gp_Parab2d;
class gp_Ax22d;
class gp_Ax2d;
class gp_Pnt2d;


//!This class implements the following algorithms used to <br>
//!          create Parabola from Geom2d. <br>
//!          * Create an Parabola from two apex  and the center. <br>
//!  Defines the parabola in the parameterization range  : <br>
//!  ]-infinite,+infinite[ <br>
//!  The vertex of the parabola is the "Location" point of the <br>
//!  local coordinate system "XAxis" of the parabola. <br>
//!  The "XAxis" of the parabola is its axis of symmetry. <br>
//!  The "Xaxis" is oriented from the vertex of the parabola to the <br>
//!  Focus of the parabola. <br>
//!  The equation of the parabola in the local coordinate system is <br>
//!  Y**2 = (2*P) * X <br>
//!  P is the distance between the focus and the directrix of the <br>
//!  parabola called Parameter). <br>
//!  The focal length F = P/2 is the distance between the vertex <br>
//!  and the focus of the parabola. <br>
class GCE2d_MakeParabola  : public GCE2d_Root {
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

  //! Creates a parabola from a non persistent one. <br>
  Standard_EXPORT   GCE2d_MakeParabola(const gp_Parab2d& Prb);
  //! Creates a parabola with its local coordinate system and it's focal <br>
//!  length "Focal". <br>
//!  The "Location" point of "Axis" is the vertex of the parabola <br>
//! Status is "NegativeFocusLength" if Focal < 0.0 <br>
  Standard_EXPORT   GCE2d_MakeParabola(const gp_Ax22d& Axis,const Standard_Real Focal);
  //! Creates a parabola with its "MirrorAxis" and it's focal length "Focal". <br>
//!  MirrorAxis is the axis of symmetry of the curve, it is the <br>
//!  "XAxis". The "YAxis" is parallel to the directrix of the <br>
//!  parabola. The "Location" point of "MirrorAxis" is the vertex of the parabola <br>
//! Status is "NegativeFocusLength" if Focal < 0.0 <br>
  Standard_EXPORT   GCE2d_MakeParabola(const gp_Ax2d& MirrorAxis,const Standard_Real Focal,const Standard_Boolean Sense);
  //! Creates a parabola with the local coordinate system and the focus point. <br>
//!  The sense of parametrization is given by Sense. <br>
  Standard_EXPORT   GCE2d_MakeParabola(const gp_Ax22d& D,const gp_Pnt2d& F);
  
//!  D is the directrix of the parabola and F the focus point. <br>
//!  The symmetry axis "XAxis" of the parabola is normal to the <br>
//!  directrix and pass through the focus point F, but its <br>
//!  "Location" point is the vertex of the parabola. <br>
//!  The "YAxis" of the parabola is parallel to D and its "Location" <br>
//!  point is the vertex of the parabola. <br>
  Standard_EXPORT   GCE2d_MakeParabola(const gp_Ax2d& D,const gp_Pnt2d& F,const Standard_Boolean Sense = Standard_True);
  //! Make a parabola with focal point S1 and <br>
//!          center O <br>
//!          The branch of the parabola returned will have <S1> as <br>
//!          focal point <br>
//! The implicit orientation of the parabola is: <br>
//! -   the same one as the parabola Prb, <br>
//! -   the sense defined by the coordinate system Axis or the directrix D, <br>
//! -   the trigonometric sense if Sense is not given or is true, or <br>
//! -   the opposite sense if Sense is false. <br>
//! Warning <br>
//! The MakeParabola class does not prevent the <br>
//! construction of a parabola with a null focal distance. <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_NullFocusLength if Focal is less than 0.0, or <br>
//! -   gce_NullAxis if points S1 and O are coincident. <br>
  Standard_EXPORT   GCE2d_MakeParabola(const gp_Pnt2d& S1,const gp_Pnt2d& O);
  //! Returns the constructed parabola. <br>
//! Exceptions StdFail_NotDone if no parabola is constructed. <br>
  Standard_EXPORT    const Handle_Geom2d_Parabola& Value() const;
  
  Standard_EXPORT    const Handle_Geom2d_Parabola& Operator() const;
Standard_EXPORT operator Handle_Geom2d_Parabola() const;





protected:





private:



Handle_Geom2d_Parabola TheParabola;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif