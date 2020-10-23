// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GoddessAnalysisDictionnary

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/chad/goddess_daq_plus/toolbox/include/GoddessAnalysis.h"
#include "/home/chad/goddess_daq_plus/toolbox/include/GoddessCalib.h"
#include "/home/chad/goddess_daq_plus/toolbox/include/GoddessGeomUtils.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_GoddessAnalysis(void *p = 0);
   static void *newArray_GoddessAnalysis(Long_t size, void *p);
   static void delete_GoddessAnalysis(void *p);
   static void deleteArray_GoddessAnalysis(void *p);
   static void destruct_GoddessAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GoddessAnalysis*)
   {
      ::GoddessAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GoddessAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GoddessAnalysis", ::GoddessAnalysis::Class_Version(), "GoddessAnalysis.h", 7,
                  typeid(::GoddessAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GoddessAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::GoddessAnalysis) );
      instance.SetNew(&new_GoddessAnalysis);
      instance.SetNewArray(&newArray_GoddessAnalysis);
      instance.SetDelete(&delete_GoddessAnalysis);
      instance.SetDeleteArray(&deleteArray_GoddessAnalysis);
      instance.SetDestructor(&destruct_GoddessAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GoddessAnalysis*)
   {
      return GenerateInitInstanceLocal((::GoddessAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GoddessAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_GoddessCalib(void *p);
   static void deleteArray_GoddessCalib(void *p);
   static void destruct_GoddessCalib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GoddessCalib*)
   {
      ::GoddessCalib *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GoddessCalib >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GoddessCalib", ::GoddessCalib::Class_Version(), "GoddessCalib.h", 33,
                  typeid(::GoddessCalib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GoddessCalib::Dictionary, isa_proxy, 4,
                  sizeof(::GoddessCalib) );
      instance.SetDelete(&delete_GoddessCalib);
      instance.SetDeleteArray(&deleteArray_GoddessCalib);
      instance.SetDestructor(&destruct_GoddessCalib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GoddessCalib*)
   {
      return GenerateInitInstanceLocal((::GoddessCalib*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GoddessCalib*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GoddessGeomUtils(void *p = 0);
   static void *newArray_GoddessGeomUtils(Long_t size, void *p);
   static void delete_GoddessGeomUtils(void *p);
   static void deleteArray_GoddessGeomUtils(void *p);
   static void destruct_GoddessGeomUtils(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GoddessGeomUtils*)
   {
      ::GoddessGeomUtils *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GoddessGeomUtils >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GoddessGeomUtils", ::GoddessGeomUtils::Class_Version(), "GoddessGeomUtils.h", 63,
                  typeid(::GoddessGeomUtils), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GoddessGeomUtils::Dictionary, isa_proxy, 4,
                  sizeof(::GoddessGeomUtils) );
      instance.SetNew(&new_GoddessGeomUtils);
      instance.SetNewArray(&newArray_GoddessGeomUtils);
      instance.SetDelete(&delete_GoddessGeomUtils);
      instance.SetDeleteArray(&deleteArray_GoddessGeomUtils);
      instance.SetDestructor(&destruct_GoddessGeomUtils);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GoddessGeomUtils*)
   {
      return GenerateInitInstanceLocal((::GoddessGeomUtils*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GoddessGeomUtils*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr GoddessAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GoddessAnalysis::Class_Name()
{
   return "GoddessAnalysis";
}

//______________________________________________________________________________
const char *GoddessAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GoddessAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GoddessAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GoddessAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GoddessCalib::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GoddessCalib::Class_Name()
{
   return "GoddessCalib";
}

//______________________________________________________________________________
const char *GoddessCalib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessCalib*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GoddessCalib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessCalib*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GoddessCalib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessCalib*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GoddessCalib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessCalib*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GoddessGeomUtils::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GoddessGeomUtils::Class_Name()
{
   return "GoddessGeomUtils";
}

//______________________________________________________________________________
const char *GoddessGeomUtils::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessGeomUtils*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GoddessGeomUtils::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessGeomUtils*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GoddessGeomUtils::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessGeomUtils*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GoddessGeomUtils::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessGeomUtils*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void GoddessAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class GoddessAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GoddessAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(GoddessAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GoddessAnalysis(void *p) {
      return  p ? new(p) ::GoddessAnalysis : new ::GoddessAnalysis;
   }
   static void *newArray_GoddessAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::GoddessAnalysis[nElements] : new ::GoddessAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_GoddessAnalysis(void *p) {
      delete ((::GoddessAnalysis*)p);
   }
   static void deleteArray_GoddessAnalysis(void *p) {
      delete [] ((::GoddessAnalysis*)p);
   }
   static void destruct_GoddessAnalysis(void *p) {
      typedef ::GoddessAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GoddessAnalysis

//______________________________________________________________________________
void GoddessCalib::Streamer(TBuffer &R__b)
{
   // Stream an object of class GoddessCalib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GoddessCalib::Class(),this);
   } else {
      R__b.WriteClassBuffer(GoddessCalib::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GoddessCalib(void *p) {
      delete ((::GoddessCalib*)p);
   }
   static void deleteArray_GoddessCalib(void *p) {
      delete [] ((::GoddessCalib*)p);
   }
   static void destruct_GoddessCalib(void *p) {
      typedef ::GoddessCalib current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GoddessCalib

//______________________________________________________________________________
void GoddessGeomUtils::Streamer(TBuffer &R__b)
{
   // Stream an object of class GoddessGeomUtils.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GoddessGeomUtils::Class(),this);
   } else {
      R__b.WriteClassBuffer(GoddessGeomUtils::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GoddessGeomUtils(void *p) {
      return  p ? new(p) ::GoddessGeomUtils : new ::GoddessGeomUtils;
   }
   static void *newArray_GoddessGeomUtils(Long_t nElements, void *p) {
      return p ? new(p) ::GoddessGeomUtils[nElements] : new ::GoddessGeomUtils[nElements];
   }
   // Wrapper around operator delete
   static void delete_GoddessGeomUtils(void *p) {
      delete ((::GoddessGeomUtils*)p);
   }
   static void deleteArray_GoddessGeomUtils(void *p) {
      delete [] ((::GoddessGeomUtils*)p);
   }
   static void destruct_GoddessGeomUtils(void *p) {
      typedef ::GoddessGeomUtils current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GoddessGeomUtils

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 216,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETVector3gR_Dictionary();
   static void vectorlETVector3gR_TClassManip(TClass*);
   static void *new_vectorlETVector3gR(void *p = 0);
   static void *newArray_vectorlETVector3gR(Long_t size, void *p);
   static void delete_vectorlETVector3gR(void *p);
   static void deleteArray_vectorlETVector3gR(void *p);
   static void destruct_vectorlETVector3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TVector3>*)
   {
      vector<TVector3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TVector3>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TVector3>", -2, "vector", 216,
                  typeid(vector<TVector3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETVector3gR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TVector3>) );
      instance.SetNew(&new_vectorlETVector3gR);
      instance.SetNewArray(&newArray_vectorlETVector3gR);
      instance.SetDelete(&delete_vectorlETVector3gR);
      instance.SetDeleteArray(&deleteArray_vectorlETVector3gR);
      instance.SetDestructor(&destruct_vectorlETVector3gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TVector3> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TVector3>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETVector3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TVector3>*)0x0)->GetClass();
      vectorlETVector3gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETVector3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETVector3gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TVector3> : new vector<TVector3>;
   }
   static void *newArray_vectorlETVector3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TVector3>[nElements] : new vector<TVector3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETVector3gR(void *p) {
      delete ((vector<TVector3>*)p);
   }
   static void deleteArray_vectorlETVector3gR(void *p) {
      delete [] ((vector<TVector3>*)p);
   }
   static void destruct_vectorlETVector3gR(void *p) {
      typedef vector<TVector3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TVector3>

namespace ROOT {
   static TClass *vectorlETTreemUgR_Dictionary();
   static void vectorlETTreemUgR_TClassManip(TClass*);
   static void *new_vectorlETTreemUgR(void *p = 0);
   static void *newArray_vectorlETTreemUgR(Long_t size, void *p);
   static void delete_vectorlETTreemUgR(void *p);
   static void deleteArray_vectorlETTreemUgR(void *p);
   static void destruct_vectorlETTreemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TTree*>*)
   {
      vector<TTree*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TTree*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TTree*>", -2, "vector", 216,
                  typeid(vector<TTree*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETTreemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TTree*>) );
      instance.SetNew(&new_vectorlETTreemUgR);
      instance.SetNewArray(&newArray_vectorlETTreemUgR);
      instance.SetDelete(&delete_vectorlETTreemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETTreemUgR);
      instance.SetDestructor(&destruct_vectorlETTreemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TTree*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TTree*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETTreemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TTree*>*)0x0)->GetClass();
      vectorlETTreemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETTreemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETTreemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TTree*> : new vector<TTree*>;
   }
   static void *newArray_vectorlETTreemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TTree*>[nElements] : new vector<TTree*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETTreemUgR(void *p) {
      delete ((vector<TTree*>*)p);
   }
   static void deleteArray_vectorlETTreemUgR(void *p) {
      delete [] ((vector<TTree*>*)p);
   }
   static void destruct_vectorlETTreemUgR(void *p) {
      typedef vector<TTree*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TTree*>

namespace ROOT {
   static TClass *maplEunsignedsPshortcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEunsignedsPshortcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPshortcOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_maplEunsignedsPshortcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPshortcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEunsignedsPshortcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEunsignedsPshortcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned short,vector<double> >*)
   {
      map<unsigned short,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned short,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned short,vector<double> >", -2, "map", 99,
                  typeid(map<unsigned short,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPshortcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned short,vector<double> >) );
      instance.SetNew(&new_maplEunsignedsPshortcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPshortcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPshortcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPshortcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPshortcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned short,vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned short,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPshortcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned short,vector<double> >*)0x0)->GetClass();
      maplEunsignedsPshortcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPshortcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPshortcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned short,vector<double> > : new map<unsigned short,vector<double> >;
   }
   static void *newArray_maplEunsignedsPshortcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned short,vector<double> >[nElements] : new map<unsigned short,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPshortcOvectorlEdoublegRsPgR(void *p) {
      delete ((map<unsigned short,vector<double> >*)p);
   }
   static void deleteArray_maplEunsignedsPshortcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((map<unsigned short,vector<double> >*)p);
   }
   static void destruct_maplEunsignedsPshortcOvectorlEdoublegRsPgR(void *p) {
      typedef map<unsigned short,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned short,vector<double> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<double> >*)
   {
      map<string,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<double> >", -2, "map", 99,
                  typeid(map<string,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<double> >) );
      instance.SetNew(&new_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<double> >*)0x0)->GetClass();
      maplEstringcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<double> > : new map<string,vector<double> >;
   }
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<double> >[nElements] : new map<string,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete ((map<string,vector<double> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((map<string,vector<double> >*)p);
   }
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      typedef map<string,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<double> >

namespace ROOT {
   static TClass *maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR_Dictionary();
   static void maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(void *p);
   static void destruct_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,map<unsigned short,vector<double> > >*)
   {
      map<string,map<unsigned short,vector<double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,map<unsigned short,vector<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,map<unsigned short,vector<double> > >", -2, "map", 99,
                  typeid(map<string,map<unsigned short,vector<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,map<unsigned short,vector<double> > >) );
      instance.SetNew(&new_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,map<unsigned short,vector<double> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,map<unsigned short,vector<double> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,map<unsigned short,vector<double> > >*)0x0)->GetClass();
      maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,map<unsigned short,vector<double> > > : new map<string,map<unsigned short,vector<double> > >;
   }
   static void *newArray_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,map<unsigned short,vector<double> > >[nElements] : new map<string,map<unsigned short,vector<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(void *p) {
      delete ((map<string,map<unsigned short,vector<double> > >*)p);
   }
   static void deleteArray_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(void *p) {
      delete [] ((map<string,map<unsigned short,vector<double> > >*)p);
   }
   static void destruct_maplEstringcOmaplEunsignedsPshortcOvectorlEdoublegRsPgRsPgR(void *p) {
      typedef map<string,map<unsigned short,vector<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,map<unsigned short,vector<double> > >

namespace ROOT {
   static TClass *maplEstringcOTH2FmUgR_Dictionary();
   static void maplEstringcOTH2FmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTH2FmUgR(void *p = 0);
   static void *newArray_maplEstringcOTH2FmUgR(Long_t size, void *p);
   static void delete_maplEstringcOTH2FmUgR(void *p);
   static void deleteArray_maplEstringcOTH2FmUgR(void *p);
   static void destruct_maplEstringcOTH2FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TH2F*>*)
   {
      map<string,TH2F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TH2F*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TH2F*>", -2, "map", 99,
                  typeid(map<string,TH2F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTH2FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TH2F*>) );
      instance.SetNew(&new_maplEstringcOTH2FmUgR);
      instance.SetNewArray(&newArray_maplEstringcOTH2FmUgR);
      instance.SetDelete(&delete_maplEstringcOTH2FmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTH2FmUgR);
      instance.SetDestructor(&destruct_maplEstringcOTH2FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TH2F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,TH2F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTH2FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,TH2F*>*)0x0)->GetClass();
      maplEstringcOTH2FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTH2FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTH2FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TH2F*> : new map<string,TH2F*>;
   }
   static void *newArray_maplEstringcOTH2FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TH2F*>[nElements] : new map<string,TH2F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTH2FmUgR(void *p) {
      delete ((map<string,TH2F*>*)p);
   }
   static void deleteArray_maplEstringcOTH2FmUgR(void *p) {
      delete [] ((map<string,TH2F*>*)p);
   }
   static void destruct_maplEstringcOTH2FmUgR(void *p) {
      typedef map<string,TH2F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,TH2F*>

namespace ROOT {
   static TClass *maplEstringcOTGraphmUgR_Dictionary();
   static void maplEstringcOTGraphmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTGraphmUgR(void *p = 0);
   static void *newArray_maplEstringcOTGraphmUgR(Long_t size, void *p);
   static void delete_maplEstringcOTGraphmUgR(void *p);
   static void deleteArray_maplEstringcOTGraphmUgR(void *p);
   static void destruct_maplEstringcOTGraphmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TGraph*>*)
   {
      map<string,TGraph*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TGraph*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TGraph*>", -2, "map", 99,
                  typeid(map<string,TGraph*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTGraphmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TGraph*>) );
      instance.SetNew(&new_maplEstringcOTGraphmUgR);
      instance.SetNewArray(&newArray_maplEstringcOTGraphmUgR);
      instance.SetDelete(&delete_maplEstringcOTGraphmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTGraphmUgR);
      instance.SetDestructor(&destruct_maplEstringcOTGraphmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TGraph*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,TGraph*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTGraphmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,TGraph*>*)0x0)->GetClass();
      maplEstringcOTGraphmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTGraphmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTGraphmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TGraph*> : new map<string,TGraph*>;
   }
   static void *newArray_maplEstringcOTGraphmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,TGraph*>[nElements] : new map<string,TGraph*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTGraphmUgR(void *p) {
      delete ((map<string,TGraph*>*)p);
   }
   static void deleteArray_maplEstringcOTGraphmUgR(void *p) {
      delete [] ((map<string,TGraph*>*)p);
   }
   static void destruct_maplEstringcOTGraphmUgR(void *p) {
      typedef map<string,TGraph*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,TGraph*>

namespace {
  void TriggerDictionaryInitialization_GoddessAnalysisDictionnary_Impl() {
    static const char* headers[] = {
"/home/chad/goddess_daq_plus/toolbox/include/GoddessAnalysis.h",
"/home/chad/goddess_daq_plus/toolbox/include/GoddessCalib.h",
"/home/chad/goddess_daq_plus/toolbox/include/GoddessGeomUtils.h",
0
    };
    static const char* includePaths[] = {
"/home/chad/root-6.14.06/builddir/include",
"/home/chad/goddess_daq_plus/include",
"/home/chad/goddess_daq_plus/toolbox/include",
"/home/chad/goddess_daq_plus/goddess/include",
"/home/chad/goddess_daq_plus/scripts/include",
"/home/chad/root-6.14.06/builddir/include",
"/home/chad/goddess_daq_plus/toolbox/source/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GoddessAnalysisDictionnary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/toolbox/include/GoddessAnalysis.h")))  GoddessAnalysis;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/toolbox/include/GoddessCalib.h")))  GoddessCalib;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/toolbox/include/GoddessGeomUtils.h")))  GoddessGeomUtils;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GoddessAnalysisDictionnary dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/chad/goddess_daq_plus/toolbox/include/GoddessAnalysis.h"
#include "/home/chad/goddess_daq_plus/toolbox/include/GoddessCalib.h"
#include "/home/chad/goddess_daq_plus/toolbox/include/GoddessGeomUtils.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"GoddessAnalysis", payloadCode, "@",
"GoddessCalib", payloadCode, "@",
"GoddessGeomUtils", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GoddessAnalysisDictionnary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GoddessAnalysisDictionnary_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GoddessAnalysisDictionnary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GoddessAnalysisDictionnary() {
  TriggerDictionaryInitialization_GoddessAnalysisDictionnary_Impl();
}
