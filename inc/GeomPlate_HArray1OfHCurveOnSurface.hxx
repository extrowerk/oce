// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_HArray1OfHCurveOnSurface_HeaderFile
#define _GeomPlate_HArray1OfHCurveOnSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_GeomPlate_HArray1OfHCurveOnSurface.hxx>

#include <GeomPlate_Array1OfHCurveOnSurface.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_Adaptor3d_HCurveOnSurface.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Adaptor3d_HCurveOnSurface;
class GeomPlate_Array1OfHCurveOnSurface;



class GeomPlate_HArray1OfHCurveOnSurface : public MMgt_TShared
{

public:

  
    GeomPlate_HArray1OfHCurveOnSurface(const Standard_Integer Low, const Standard_Integer Up);
  
    GeomPlate_HArray1OfHCurveOnSurface(const Standard_Integer Low, const Standard_Integer Up, const Handle(Adaptor3d_HCurveOnSurface)& V);
  
      void Init (const Handle(Adaptor3d_HCurveOnSurface)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(Adaptor3d_HCurveOnSurface)& Value) ;
  
     const  Handle(Adaptor3d_HCurveOnSurface)& Value (const Standard_Integer Index)  const;
  
      Handle(Adaptor3d_HCurveOnSurface)& ChangeValue (const Standard_Integer Index) ;
  
     const  GeomPlate_Array1OfHCurveOnSurface& Array1()  const;
  
      GeomPlate_Array1OfHCurveOnSurface& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(GeomPlate_HArray1OfHCurveOnSurface)

protected:




private: 


  GeomPlate_Array1OfHCurveOnSurface myArray;


};

#define ItemHArray1 Handle(Adaptor3d_HCurveOnSurface)
#define ItemHArray1_hxx <Adaptor3d_HCurveOnSurface.hxx>
#define TheArray1 GeomPlate_Array1OfHCurveOnSurface
#define TheArray1_hxx <GeomPlate_Array1OfHCurveOnSurface.hxx>
#define TCollection_HArray1 GeomPlate_HArray1OfHCurveOnSurface
#define TCollection_HArray1_hxx <GeomPlate_HArray1OfHCurveOnSurface.hxx>
#define Handle_TCollection_HArray1 Handle_GeomPlate_HArray1OfHCurveOnSurface
#define TCollection_HArray1_Type_() GeomPlate_HArray1OfHCurveOnSurface_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _GeomPlate_HArray1OfHCurveOnSurface_HeaderFile
