// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_BuilderAlgo_HeaderFile
#define _BRepAlgoAPI_BuilderAlgo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <BOPAlgo_PPaveFiller.hxx>
#include <BOPAlgo_PBuilder.hxx>
#include <Standard_Real.hxx>
#include <TopTools_ListOfShape.hxx>
#include <BRepAlgoAPI_Algo.hxx>
#include <Standard_Boolean.hxx>
class BOPAlgo_PaveFiller;
class TopTools_ListOfShape;
class TopoDS_Shape;



//! The clsss contains API level of General Fuse algorithm
class BRepAlgoAPI_BuilderAlgo  : public BRepAlgoAPI_Algo
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT BRepAlgoAPI_BuilderAlgo();
Standard_EXPORT virtual ~BRepAlgoAPI_BuilderAlgo();
  
  //! Empty constructor
  Standard_EXPORT BRepAlgoAPI_BuilderAlgo(const BOPAlgo_PaveFiller& thePF);
  
  //! Sets the additional tolerance
  Standard_EXPORT   void SetFuzzyValue (const Standard_Real theFuzz) ;
  
  //! Returns the additional tolerance
  Standard_EXPORT   Standard_Real FuzzyValue()  const;
  
  //! Sets the arguments
  Standard_EXPORT   void SetArguments (const TopTools_ListOfShape& theLS) ;
  
  //! Gets the arguments
  Standard_EXPORT  const  TopTools_ListOfShape& Arguments()  const;
  
  //! Performs the algorithm
  //!
  //! H  I  S  T  O  R  Y
  Standard_EXPORT virtual   void Build() ;
  
  //! Returns the list  of shapes modified from the shape <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& aS) ;
  
  //! Returns true if the shape S has been deleted. The
  //! result shape of the operation does not contain the shape S.
  Standard_EXPORT virtual   Standard_Boolean IsDeleted (const TopoDS_Shape& aS) ;
  
  //! Returns the list  of shapes generated from the shape <S>.
  //! For use in BRepNaming.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  //! Returns true if there is at least one modified shape.
  //! For use in BRepNaming.
  Standard_EXPORT virtual   Standard_Boolean HasModified()  const;
  
  //! Returns true if there is at least one generated shape.
  //! For use in BRepNaming.
  Standard_EXPORT virtual   Standard_Boolean HasGenerated()  const;
  
  //! Returns true if there is at least one deleted shape.
  //! For use in BRepNaming.
  //!
  //! protected methods
  Standard_EXPORT virtual   Standard_Boolean HasDeleted()  const;




protected:

  
  Standard_EXPORT virtual   void Clear() ;


  Standard_Integer myEntryType;
  BOPAlgo_PPaveFiller myDSFiller;
  BOPAlgo_PBuilder myBuilder;
  Standard_Real myFuzzyValue;
  TopTools_ListOfShape myArguments;


private:





};







#endif // _BRepAlgoAPI_BuilderAlgo_HeaderFile