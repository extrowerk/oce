// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_TrimmedSurface_HeaderFile
#define _IGESGeom_TrimmedSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESGeom_TrimmedSurface.hxx>

#include <Handle_IGESData_IGESEntity.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IGESGeom_CurveOnSurface.hxx>
#include <Handle_IGESGeom_HArray1OfCurveOnSurface.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>
class IGESData_IGESEntity;
class IGESGeom_CurveOnSurface;
class IGESGeom_HArray1OfCurveOnSurface;
class Standard_OutOfRange;


//! defines IGESTrimmedSurface, Type <144> Form <0>
//! in package IGESGeom
//! A simple closed curve  in Euclidean plane  divides the
//! plane in to two disjoint, open connected components; one
//! bounded, one unbounded. The bounded one is called the
//! interior region to the curve. Unbounded component is called
//! exterior region to the curve. The domain of the trimmed
//! surface is defined as the interior of the outer boundaries
//! and exterior of the inner boundaries and includes the
//! boundary curves.
class IGESGeom_TrimmedSurface : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGeom_TrimmedSurface();
  
  //! This method is used to set the fields of the class
  //! TrimmedSurface
  //! - aSurface  : Surface to be trimmed
  //! - aFlag     : Outer boundary type
  //! False = The outer boundary is the boundary of
  //! rectangle D which is the domain of the
  //! surface to be trimmed
  //! True  = otherwise
  //! - anOuter   : Closed curve which constitutes outer boundary
  //! - allInners : Array of closed curves which constitute the
  //! inner boundary
  Standard_EXPORT   void Init (const Handle(IGESData_IGESEntity)& aSurface, const Standard_Integer aFlag, const Handle(IGESGeom_CurveOnSurface)& anOuter, const Handle(IGESGeom_HArray1OfCurveOnSurface)& allInners) ;
  
  //! returns the surface to be trimmed
  Standard_EXPORT   Handle(IGESData_IGESEntity) Surface()  const;
  
  //! returns True if outer contour exists
  Standard_EXPORT   Standard_Boolean HasOuterContour()  const;
  
  //! returns the outer contour of the trimmed surface
  Standard_EXPORT   Handle(IGESGeom_CurveOnSurface) OuterContour()  const;
  
  //! returns the outer contour type of the trimmed surface
  //! 0  : The outer boundary is the boundary of D
  //! 1  : otherwise
  Standard_EXPORT   Standard_Integer OuterBoundaryType()  const;
  
  //! returns the number of inner boundaries
  Standard_EXPORT   Standard_Integer NbInnerContours()  const;
  
  //! returns the Index'th inner contour
  //! raises exception if Index <= 0 or Index > NbInnerContours()
  Standard_EXPORT   Handle(IGESGeom_CurveOnSurface) InnerContour (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESGeom_TrimmedSurface)

protected:




private: 


  Handle(IGESData_IGESEntity) theSurface;
  Standard_Integer theFlag;
  Handle(IGESGeom_CurveOnSurface) theOuterCurve;
  Handle(IGESGeom_HArray1OfCurveOnSurface) theInnerCurves;


};







#endif // _IGESGeom_TrimmedSurface_HeaderFile
