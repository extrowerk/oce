// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_CORRISO_HeaderFile
#define _TopOpeBRepTool_CORRISO_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Face.hxx>
#include <GeomAdaptor_Surface.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <Standard_Integer.hxx>
class TopoDS_Face;
class GeomAdaptor_Surface;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopoDS_Edge;
class TopTools_DataMapOfOrientedShapeInteger;
class TopOpeBRepTool_C2DF;
class TopoDS_Vertex;


//! Fref is built on x-periodic surface (x=u,v).
//! S built on Fref's geometry, should be UVClosed.
//!
//! Give us E, an edge of S. 2drep(E) is not UV connexed.
//! We translate 2drep(E) in xdir*xperiod if necessary.
//!
//! call : TopOpeBRepTool_CORRISO Tool(Fref);
//! Tool.Init(S);
//! if (!Tool.UVClosed()) {
//! // initialize EdsToCheck,nfybounds,stopatfirst
//!
//! Tool.EdgeWithFaultyUV(EdsToCheck,nfybounds,FyEds,stopatfirst);
//! if (Tool.SetUVClosed()) S = Tool.GetnewS();
//! }
class TopOpeBRepTool_CORRISO 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepTool_CORRISO();
  
  Standard_EXPORT TopOpeBRepTool_CORRISO(const TopoDS_Face& FRef);
  
  Standard_EXPORT  const  TopoDS_Face& Fref()  const;
  
  Standard_EXPORT  const  GeomAdaptor_Surface& GASref()  const;
  
  Standard_EXPORT   Standard_Boolean Refclosed (const Standard_Integer x, Standard_Real& xperiod)  const;
  
  Standard_EXPORT   Standard_Boolean Init (const TopoDS_Shape& S) ;
  
  Standard_EXPORT  const  TopoDS_Shape& S()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Eds()  const;
  
  Standard_EXPORT   Standard_Boolean UVClosed()  const;
  
  Standard_EXPORT   Standard_Real Tol (const Standard_Integer I, const Standard_Real tol3d)  const;
  
  Standard_EXPORT   Standard_Boolean PurgeFyClosingE (const TopTools_ListOfShape& ClEds, TopTools_ListOfShape& fyClEds)  const;
  
  Standard_EXPORT   Standard_Integer EdgeOUTofBoundsUV (const TopoDS_Edge& E, const Standard_Boolean onU, const Standard_Real tolx, Standard_Real& parspE)  const;
  
  Standard_EXPORT   Standard_Boolean EdgesOUTofBoundsUV (const TopTools_ListOfShape& EdsToCheck, const Standard_Boolean onU, const Standard_Real tolx, TopTools_DataMapOfOrientedShapeInteger& FyEds)  const;
  
  Standard_EXPORT   Standard_Boolean EdgeWithFaultyUV (const TopoDS_Edge& E, Standard_Integer& Ivfaulty)  const;
  
  Standard_EXPORT   Standard_Boolean EdgesWithFaultyUV (const TopTools_ListOfShape& EdsToCheck, const Standard_Integer nfybounds, TopTools_DataMapOfOrientedShapeInteger& FyEds, const Standard_Boolean stopatfirst = Standard_False)  const;
  
  Standard_EXPORT   Standard_Boolean EdgeWithFaultyUV (const TopTools_ListOfShape& EdsToCheck, const Standard_Integer nfybounds, TopoDS_Shape& fyE, Standard_Integer& Ifaulty)  const;
  
  Standard_EXPORT   Standard_Boolean TrslUV (const Standard_Boolean onU, const TopTools_DataMapOfOrientedShapeInteger& FyEds) ;
  
  Standard_EXPORT   Standard_Boolean GetnewS (TopoDS_Face& newS)  const;
  
  Standard_EXPORT   Standard_Boolean UVRep (const TopoDS_Edge& E, TopOpeBRepTool_C2DF& C2DF)  const;
  
  Standard_EXPORT   Standard_Boolean SetUVRep (const TopoDS_Edge& E, const TopOpeBRepTool_C2DF& C2DF) ;
  
  Standard_EXPORT   Standard_Boolean Connexity (const TopoDS_Vertex& V, TopTools_ListOfShape& Eds)  const;
  
  Standard_EXPORT   Standard_Boolean SetConnexity (const TopoDS_Vertex& V, const TopTools_ListOfShape& Eds) ;
  
  Standard_EXPORT   Standard_Boolean AddNewConnexity (const TopoDS_Vertex& V, const TopoDS_Edge& E) ;
  
  Standard_EXPORT   Standard_Boolean RemoveOldConnexity (const TopoDS_Vertex& V, const TopoDS_Edge& E) ;




protected:





private:



  TopoDS_Face myFref;
  GeomAdaptor_Surface myGAS;
  Standard_Boolean myUclosed;
  Standard_Boolean myVclosed;
  Standard_Real myUper;
  Standard_Real myVper;
  TopoDS_Shape myS;
  TopTools_ListOfShape myEds;
  TopOpeBRepTool_DataMapOfOrientedShapeC2DF myERep2d;
  TopTools_DataMapOfShapeListOfShape myVEds;


};







#endif // _TopOpeBRepTool_CORRISO_HeaderFile
