// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Law_ListIteratorOfLaws_HeaderFile
#define _Law_ListIteratorOfLaws_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_Law_Function.hxx>
#include <Handle_Law_ListNodeOfLaws.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Law_Laws;
class Law_Function;
class Law_ListNodeOfLaws;



class Law_ListIteratorOfLaws 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Law_ListIteratorOfLaws();
  
  Standard_EXPORT Law_ListIteratorOfLaws(const Law_Laws& L);
  
  Standard_EXPORT   void Initialize (const Law_Laws& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(Law_Function)& Value()  const;


friend class Law_Laws;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(Law_Function)
#define Item_hxx <Law_Function.hxx>
#define TCollection_ListNode Law_ListNodeOfLaws
#define TCollection_ListNode_hxx <Law_ListNodeOfLaws.hxx>
#define TCollection_ListIterator Law_ListIteratorOfLaws
#define TCollection_ListIterator_hxx <Law_ListIteratorOfLaws.hxx>
#define Handle_TCollection_ListNode Handle_Law_ListNodeOfLaws
#define TCollection_ListNode_Type_() Law_ListNodeOfLaws_Type_()
#define TCollection_List Law_Laws
#define TCollection_List_hxx <Law_Laws.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _Law_ListIteratorOfLaws_HeaderFile
