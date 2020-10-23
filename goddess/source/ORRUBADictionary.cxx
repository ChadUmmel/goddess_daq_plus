// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ORRUBADictionary

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
#include "/home/chad/goddess_daq_plus/goddess/include/ORRUBA.h"
#include "/home/chad/goddess_daq_plus/goddess/include/Detector.h"
#include "/home/chad/goddess_daq_plus/goddess/include/siDet.h"
#include "/home/chad/goddess_daq_plus/goddess/include/orrubaDet.h"
#include "/home/chad/goddess_daq_plus/goddess/include/superX3.h"
#include "/home/chad/goddess_daq_plus/goddess/include/BB10.h"
#include "/home/chad/goddess_daq_plus/goddess/include/QQQ5.h"
#include "/home/chad/goddess_daq_plus/goddess/include/IonChamber.h"
#include "/home/chad/goddess_daq_plus/goddess/include/LiquidScint.h"
#include "/home/chad/goddess_daq_plus/goddess/include/TDC.h"
#include "/home/chad/goddess_daq_plus/goddess/include/SolidVector.h"
#include "/home/chad/goddess_daq_plus/goddess/include/GoddessConfig.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ORRUBA(void *p = 0);
   static void *newArray_ORRUBA(Long_t size, void *p);
   static void delete_ORRUBA(void *p);
   static void deleteArray_ORRUBA(void *p);
   static void destruct_ORRUBA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ORRUBA*)
   {
      ::ORRUBA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ORRUBA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ORRUBA", ::ORRUBA::Class_Version(), "ORRUBA.h", 7,
                  typeid(::ORRUBA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ORRUBA::Dictionary, isa_proxy, 4,
                  sizeof(::ORRUBA) );
      instance.SetNew(&new_ORRUBA);
      instance.SetNewArray(&newArray_ORRUBA);
      instance.SetDelete(&delete_ORRUBA);
      instance.SetDeleteArray(&deleteArray_ORRUBA);
      instance.SetDestructor(&destruct_ORRUBA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ORRUBA*)
   {
      return GenerateInitInstanceLocal((::ORRUBA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ORRUBA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SolidVector(void *p = 0);
   static void *newArray_SolidVector(Long_t size, void *p);
   static void delete_SolidVector(void *p);
   static void deleteArray_SolidVector(void *p);
   static void destruct_SolidVector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SolidVector*)
   {
      ::SolidVector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SolidVector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SolidVector", ::SolidVector::Class_Version(), "SolidVector.h", 6,
                  typeid(::SolidVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SolidVector::Dictionary, isa_proxy, 4,
                  sizeof(::SolidVector) );
      instance.SetNew(&new_SolidVector);
      instance.SetNewArray(&newArray_SolidVector);
      instance.SetDelete(&delete_SolidVector);
      instance.SetDeleteArray(&deleteArray_SolidVector);
      instance.SetDestructor(&destruct_SolidVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SolidVector*)
   {
      return GenerateInitInstanceLocal((::SolidVector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SolidVector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Detector(void *p);
   static void deleteArray_Detector(void *p);
   static void destruct_Detector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Detector*)
   {
      ::Detector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Detector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Detector", ::Detector::Class_Version(), "Detector.h", 17,
                  typeid(::Detector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Detector::Dictionary, isa_proxy, 4,
                  sizeof(::Detector) );
      instance.SetDelete(&delete_Detector);
      instance.SetDeleteArray(&deleteArray_Detector);
      instance.SetDestructor(&destruct_Detector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Detector*)
   {
      return GenerateInitInstanceLocal((::Detector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Detector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_siDet(void *p);
   static void deleteArray_siDet(void *p);
   static void destruct_siDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::siDet*)
   {
      ::siDet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::siDet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("siDet", ::siDet::Class_Version(), "siDet.h", 11,
                  typeid(::siDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::siDet::Dictionary, isa_proxy, 4,
                  sizeof(::siDet) );
      instance.SetDelete(&delete_siDet);
      instance.SetDeleteArray(&deleteArray_siDet);
      instance.SetDestructor(&destruct_siDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::siDet*)
   {
      return GenerateInitInstanceLocal((::siDet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::siDet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_orrubaDet(void *p);
   static void deleteArray_orrubaDet(void *p);
   static void destruct_orrubaDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::orrubaDet*)
   {
      ::orrubaDet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::orrubaDet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("orrubaDet", ::orrubaDet::Class_Version(), "orrubaDet.h", 13,
                  typeid(::orrubaDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::orrubaDet::Dictionary, isa_proxy, 4,
                  sizeof(::orrubaDet) );
      instance.SetDelete(&delete_orrubaDet);
      instance.SetDeleteArray(&deleteArray_orrubaDet);
      instance.SetDestructor(&destruct_orrubaDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::orrubaDet*)
   {
      return GenerateInitInstanceLocal((::orrubaDet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::orrubaDet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_superX3(void *p = 0);
   static void *newArray_superX3(Long_t size, void *p);
   static void delete_superX3(void *p);
   static void deleteArray_superX3(void *p);
   static void destruct_superX3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::superX3*)
   {
      ::superX3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::superX3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("superX3", ::superX3::Class_Version(), "superX3.h", 16,
                  typeid(::superX3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::superX3::Dictionary, isa_proxy, 4,
                  sizeof(::superX3) );
      instance.SetNew(&new_superX3);
      instance.SetNewArray(&newArray_superX3);
      instance.SetDelete(&delete_superX3);
      instance.SetDeleteArray(&deleteArray_superX3);
      instance.SetDestructor(&destruct_superX3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::superX3*)
   {
      return GenerateInitInstanceLocal((::superX3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::superX3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BB10(void *p = 0);
   static void *newArray_BB10(Long_t size, void *p);
   static void delete_BB10(void *p);
   static void deleteArray_BB10(void *p);
   static void destruct_BB10(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BB10*)
   {
      ::BB10 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BB10 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BB10", ::BB10::Class_Version(), "BB10.h", 14,
                  typeid(::BB10), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BB10::Dictionary, isa_proxy, 4,
                  sizeof(::BB10) );
      instance.SetNew(&new_BB10);
      instance.SetNewArray(&newArray_BB10);
      instance.SetDelete(&delete_BB10);
      instance.SetDeleteArray(&deleteArray_BB10);
      instance.SetDestructor(&destruct_BB10);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BB10*)
   {
      return GenerateInitInstanceLocal((::BB10*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BB10*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_QQQ5(void *p = 0);
   static void *newArray_QQQ5(Long_t size, void *p);
   static void delete_QQQ5(void *p);
   static void deleteArray_QQQ5(void *p);
   static void destruct_QQQ5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::QQQ5*)
   {
      ::QQQ5 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::QQQ5 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("QQQ5", ::QQQ5::Class_Version(), "QQQ5.h", 13,
                  typeid(::QQQ5), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::QQQ5::Dictionary, isa_proxy, 4,
                  sizeof(::QQQ5) );
      instance.SetNew(&new_QQQ5);
      instance.SetNewArray(&newArray_QQQ5);
      instance.SetDelete(&delete_QQQ5);
      instance.SetDeleteArray(&deleteArray_QQQ5);
      instance.SetDestructor(&destruct_QQQ5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::QQQ5*)
   {
      return GenerateInitInstanceLocal((::QQQ5*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::QQQ5*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_IonChamber(void *p);
   static void deleteArray_IonChamber(void *p);
   static void destruct_IonChamber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IonChamber*)
   {
      ::IonChamber *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IonChamber >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IonChamber", ::IonChamber::Class_Version(), "IonChamber.h", 7,
                  typeid(::IonChamber), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::IonChamber::Dictionary, isa_proxy, 4,
                  sizeof(::IonChamber) );
      instance.SetDelete(&delete_IonChamber);
      instance.SetDeleteArray(&deleteArray_IonChamber);
      instance.SetDestructor(&destruct_IonChamber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IonChamber*)
   {
      return GenerateInitInstanceLocal((::IonChamber*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IonChamber*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LiquidScint(void *p = 0);
   static void *newArray_LiquidScint(Long_t size, void *p);
   static void delete_LiquidScint(void *p);
   static void deleteArray_LiquidScint(void *p);
   static void destruct_LiquidScint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LiquidScint*)
   {
      ::LiquidScint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LiquidScint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LiquidScint", ::LiquidScint::Class_Version(), "LiquidScint.h", 6,
                  typeid(::LiquidScint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LiquidScint::Dictionary, isa_proxy, 4,
                  sizeof(::LiquidScint) );
      instance.SetNew(&new_LiquidScint);
      instance.SetNewArray(&newArray_LiquidScint);
      instance.SetDelete(&delete_LiquidScint);
      instance.SetDeleteArray(&deleteArray_LiquidScint);
      instance.SetDestructor(&destruct_LiquidScint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LiquidScint*)
   {
      return GenerateInitInstanceLocal((::LiquidScint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LiquidScint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TDC(void *p);
   static void deleteArray_TDC(void *p);
   static void destruct_TDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDC*)
   {
      ::TDC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TDC", ::TDC::Class_Version(), "TDC.h", 7,
                  typeid(::TDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDC::Dictionary, isa_proxy, 4,
                  sizeof(::TDC) );
      instance.SetDelete(&delete_TDC);
      instance.SetDeleteArray(&deleteArray_TDC);
      instance.SetDestructor(&destruct_TDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDC*)
   {
      return GenerateInitInstanceLocal((::TDC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_GoddessConfig(void *p);
   static void deleteArray_GoddessConfig(void *p);
   static void destruct_GoddessConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GoddessConfig*)
   {
      ::GoddessConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GoddessConfig >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GoddessConfig", ::GoddessConfig::Class_Version(), "GoddessConfig.h", 15,
                  typeid(::GoddessConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GoddessConfig::Dictionary, isa_proxy, 4,
                  sizeof(::GoddessConfig) );
      instance.SetDelete(&delete_GoddessConfig);
      instance.SetDeleteArray(&deleteArray_GoddessConfig);
      instance.SetDestructor(&destruct_GoddessConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GoddessConfig*)
   {
      return GenerateInitInstanceLocal((::GoddessConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GoddessConfig*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ORRUBA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ORRUBA::Class_Name()
{
   return "ORRUBA";
}

//______________________________________________________________________________
const char *ORRUBA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ORRUBA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ORRUBA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ORRUBA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ORRUBA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ORRUBA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ORRUBA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ORRUBA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SolidVector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SolidVector::Class_Name()
{
   return "SolidVector";
}

//______________________________________________________________________________
const char *SolidVector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SolidVector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SolidVector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SolidVector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SolidVector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SolidVector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SolidVector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SolidVector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Detector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Detector::Class_Name()
{
   return "Detector";
}

//______________________________________________________________________________
const char *Detector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Detector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Detector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Detector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr siDet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *siDet::Class_Name()
{
   return "siDet";
}

//______________________________________________________________________________
const char *siDet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::siDet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int siDet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::siDet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *siDet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::siDet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *siDet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::siDet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr orrubaDet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *orrubaDet::Class_Name()
{
   return "orrubaDet";
}

//______________________________________________________________________________
const char *orrubaDet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::orrubaDet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int orrubaDet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::orrubaDet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *orrubaDet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::orrubaDet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *orrubaDet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::orrubaDet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr superX3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *superX3::Class_Name()
{
   return "superX3";
}

//______________________________________________________________________________
const char *superX3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::superX3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int superX3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::superX3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *superX3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::superX3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *superX3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::superX3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BB10::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BB10::Class_Name()
{
   return "BB10";
}

//______________________________________________________________________________
const char *BB10::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BB10*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BB10::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BB10*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BB10::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BB10*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BB10::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BB10*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr QQQ5::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *QQQ5::Class_Name()
{
   return "QQQ5";
}

//______________________________________________________________________________
const char *QQQ5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::QQQ5*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int QQQ5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::QQQ5*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *QQQ5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::QQQ5*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *QQQ5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::QQQ5*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IonChamber::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IonChamber::Class_Name()
{
   return "IonChamber";
}

//______________________________________________________________________________
const char *IonChamber::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IonChamber*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IonChamber::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IonChamber*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IonChamber::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IonChamber*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IonChamber::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IonChamber*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LiquidScint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LiquidScint::Class_Name()
{
   return "LiquidScint";
}

//______________________________________________________________________________
const char *LiquidScint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LiquidScint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LiquidScint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LiquidScint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LiquidScint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LiquidScint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LiquidScint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LiquidScint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TDC::Class_Name()
{
   return "TDC";
}

//______________________________________________________________________________
const char *TDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GoddessConfig::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GoddessConfig::Class_Name()
{
   return "GoddessConfig";
}

//______________________________________________________________________________
const char *GoddessConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessConfig*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GoddessConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessConfig*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GoddessConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessConfig*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GoddessConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessConfig*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ORRUBA::Streamer(TBuffer &R__b)
{
   // Stream an object of class ORRUBA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ORRUBA::Class(),this);
   } else {
      R__b.WriteClassBuffer(ORRUBA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ORRUBA(void *p) {
      return  p ? new(p) ::ORRUBA : new ::ORRUBA;
   }
   static void *newArray_ORRUBA(Long_t nElements, void *p) {
      return p ? new(p) ::ORRUBA[nElements] : new ::ORRUBA[nElements];
   }
   // Wrapper around operator delete
   static void delete_ORRUBA(void *p) {
      delete ((::ORRUBA*)p);
   }
   static void deleteArray_ORRUBA(void *p) {
      delete [] ((::ORRUBA*)p);
   }
   static void destruct_ORRUBA(void *p) {
      typedef ::ORRUBA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ORRUBA

//______________________________________________________________________________
void SolidVector::Streamer(TBuffer &R__b)
{
   // Stream an object of class SolidVector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SolidVector::Class(),this);
   } else {
      R__b.WriteClassBuffer(SolidVector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SolidVector(void *p) {
      return  p ? new(p) ::SolidVector : new ::SolidVector;
   }
   static void *newArray_SolidVector(Long_t nElements, void *p) {
      return p ? new(p) ::SolidVector[nElements] : new ::SolidVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_SolidVector(void *p) {
      delete ((::SolidVector*)p);
   }
   static void deleteArray_SolidVector(void *p) {
      delete [] ((::SolidVector*)p);
   }
   static void destruct_SolidVector(void *p) {
      typedef ::SolidVector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SolidVector

//______________________________________________________________________________
void Detector::Streamer(TBuffer &R__b)
{
   // Stream an object of class Detector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Detector::Class(),this);
   } else {
      R__b.WriteClassBuffer(Detector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Detector(void *p) {
      delete ((::Detector*)p);
   }
   static void deleteArray_Detector(void *p) {
      delete [] ((::Detector*)p);
   }
   static void destruct_Detector(void *p) {
      typedef ::Detector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Detector

//______________________________________________________________________________
void siDet::Streamer(TBuffer &R__b)
{
   // Stream an object of class siDet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(siDet::Class(),this);
   } else {
      R__b.WriteClassBuffer(siDet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_siDet(void *p) {
      delete ((::siDet*)p);
   }
   static void deleteArray_siDet(void *p) {
      delete [] ((::siDet*)p);
   }
   static void destruct_siDet(void *p) {
      typedef ::siDet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::siDet

//______________________________________________________________________________
void orrubaDet::Streamer(TBuffer &R__b)
{
   // Stream an object of class orrubaDet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(orrubaDet::Class(),this);
   } else {
      R__b.WriteClassBuffer(orrubaDet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_orrubaDet(void *p) {
      delete ((::orrubaDet*)p);
   }
   static void deleteArray_orrubaDet(void *p) {
      delete [] ((::orrubaDet*)p);
   }
   static void destruct_orrubaDet(void *p) {
      typedef ::orrubaDet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::orrubaDet

//______________________________________________________________________________
void superX3::Streamer(TBuffer &R__b)
{
   // Stream an object of class superX3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(superX3::Class(),this);
   } else {
      R__b.WriteClassBuffer(superX3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_superX3(void *p) {
      return  p ? new(p) ::superX3 : new ::superX3;
   }
   static void *newArray_superX3(Long_t nElements, void *p) {
      return p ? new(p) ::superX3[nElements] : new ::superX3[nElements];
   }
   // Wrapper around operator delete
   static void delete_superX3(void *p) {
      delete ((::superX3*)p);
   }
   static void deleteArray_superX3(void *p) {
      delete [] ((::superX3*)p);
   }
   static void destruct_superX3(void *p) {
      typedef ::superX3 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::superX3

//______________________________________________________________________________
void BB10::Streamer(TBuffer &R__b)
{
   // Stream an object of class BB10.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BB10::Class(),this);
   } else {
      R__b.WriteClassBuffer(BB10::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BB10(void *p) {
      return  p ? new(p) ::BB10 : new ::BB10;
   }
   static void *newArray_BB10(Long_t nElements, void *p) {
      return p ? new(p) ::BB10[nElements] : new ::BB10[nElements];
   }
   // Wrapper around operator delete
   static void delete_BB10(void *p) {
      delete ((::BB10*)p);
   }
   static void deleteArray_BB10(void *p) {
      delete [] ((::BB10*)p);
   }
   static void destruct_BB10(void *p) {
      typedef ::BB10 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BB10

//______________________________________________________________________________
void QQQ5::Streamer(TBuffer &R__b)
{
   // Stream an object of class QQQ5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(QQQ5::Class(),this);
   } else {
      R__b.WriteClassBuffer(QQQ5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_QQQ5(void *p) {
      return  p ? new(p) ::QQQ5 : new ::QQQ5;
   }
   static void *newArray_QQQ5(Long_t nElements, void *p) {
      return p ? new(p) ::QQQ5[nElements] : new ::QQQ5[nElements];
   }
   // Wrapper around operator delete
   static void delete_QQQ5(void *p) {
      delete ((::QQQ5*)p);
   }
   static void deleteArray_QQQ5(void *p) {
      delete [] ((::QQQ5*)p);
   }
   static void destruct_QQQ5(void *p) {
      typedef ::QQQ5 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::QQQ5

//______________________________________________________________________________
void IonChamber::Streamer(TBuffer &R__b)
{
   // Stream an object of class IonChamber.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IonChamber::Class(),this);
   } else {
      R__b.WriteClassBuffer(IonChamber::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_IonChamber(void *p) {
      delete ((::IonChamber*)p);
   }
   static void deleteArray_IonChamber(void *p) {
      delete [] ((::IonChamber*)p);
   }
   static void destruct_IonChamber(void *p) {
      typedef ::IonChamber current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IonChamber

//______________________________________________________________________________
void LiquidScint::Streamer(TBuffer &R__b)
{
   // Stream an object of class LiquidScint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LiquidScint::Class(),this);
   } else {
      R__b.WriteClassBuffer(LiquidScint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LiquidScint(void *p) {
      return  p ? new(p) ::LiquidScint : new ::LiquidScint;
   }
   static void *newArray_LiquidScint(Long_t nElements, void *p) {
      return p ? new(p) ::LiquidScint[nElements] : new ::LiquidScint[nElements];
   }
   // Wrapper around operator delete
   static void delete_LiquidScint(void *p) {
      delete ((::LiquidScint*)p);
   }
   static void deleteArray_LiquidScint(void *p) {
      delete [] ((::LiquidScint*)p);
   }
   static void destruct_LiquidScint(void *p) {
      typedef ::LiquidScint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LiquidScint

//______________________________________________________________________________
void TDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDC::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDC(void *p) {
      delete ((::TDC*)p);
   }
   static void deleteArray_TDC(void *p) {
      delete [] ((::TDC*)p);
   }
   static void destruct_TDC(void *p) {
      typedef ::TDC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDC

//______________________________________________________________________________
void GoddessConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class GoddessConfig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GoddessConfig::Class(),this);
   } else {
      R__b.WriteClassBuffer(GoddessConfig::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GoddessConfig(void *p) {
      delete ((::GoddessConfig*)p);
   }
   static void deleteArray_GoddessConfig(void *p) {
      delete [] ((::GoddessConfig*)p);
   }
   static void destruct_GoddessConfig(void *p) {
      typedef ::GoddessConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GoddessConfig

namespace ROOT {
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary();
   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<float> >*)
   {
      vector<vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<float> >", -2, "vector", 216,
                  typeid(vector<vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<float> >) );
      instance.SetNew(&new_vectorlEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<float> >*)0x0)->GetClass();
      vectorlEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> > : new vector<vector<float> >;
   }
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> >[nElements] : new vector<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete ((vector<vector<float> >*)p);
   }
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete [] ((vector<vector<float> >*)p);
   }
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p) {
      typedef vector<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<float> >

namespace ROOT {
   static TClass *vectorlEorrubaDetmUgR_Dictionary();
   static void vectorlEorrubaDetmUgR_TClassManip(TClass*);
   static void *new_vectorlEorrubaDetmUgR(void *p = 0);
   static void *newArray_vectorlEorrubaDetmUgR(Long_t size, void *p);
   static void delete_vectorlEorrubaDetmUgR(void *p);
   static void deleteArray_vectorlEorrubaDetmUgR(void *p);
   static void destruct_vectorlEorrubaDetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<orrubaDet*>*)
   {
      vector<orrubaDet*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<orrubaDet*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<orrubaDet*>", -2, "vector", 216,
                  typeid(vector<orrubaDet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEorrubaDetmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<orrubaDet*>) );
      instance.SetNew(&new_vectorlEorrubaDetmUgR);
      instance.SetNewArray(&newArray_vectorlEorrubaDetmUgR);
      instance.SetDelete(&delete_vectorlEorrubaDetmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEorrubaDetmUgR);
      instance.SetDestructor(&destruct_vectorlEorrubaDetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<orrubaDet*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<orrubaDet*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEorrubaDetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<orrubaDet*>*)0x0)->GetClass();
      vectorlEorrubaDetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEorrubaDetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEorrubaDetmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<orrubaDet*> : new vector<orrubaDet*>;
   }
   static void *newArray_vectorlEorrubaDetmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<orrubaDet*>[nElements] : new vector<orrubaDet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEorrubaDetmUgR(void *p) {
      delete ((vector<orrubaDet*>*)p);
   }
   static void deleteArray_vectorlEorrubaDetmUgR(void *p) {
      delete [] ((vector<orrubaDet*>*)p);
   }
   static void destruct_vectorlEorrubaDetmUgR(void *p) {
      typedef vector<orrubaDet*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<orrubaDet*>

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
                  &vectorlEfloatgR_Dictionary, isa_proxy, 4,
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
   static TClass *vectorlEULong64_tgR_Dictionary();
   static void vectorlEULong64_tgR_TClassManip(TClass*);
   static void *new_vectorlEULong64_tgR(void *p = 0);
   static void *newArray_vectorlEULong64_tgR(Long_t size, void *p);
   static void delete_vectorlEULong64_tgR(void *p);
   static void deleteArray_vectorlEULong64_tgR(void *p);
   static void destruct_vectorlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ULong64_t>*)
   {
      vector<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ULong64_t>", -2, "vector", 216,
                  typeid(vector<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEULong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ULong64_t>) );
      instance.SetNew(&new_vectorlEULong64_tgR);
      instance.SetNewArray(&newArray_vectorlEULong64_tgR);
      instance.SetDelete(&delete_vectorlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEULong64_tgR);
      instance.SetDestructor(&destruct_vectorlEULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ULong64_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ULong64_t>*)0x0)->GetClass();
      vectorlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t> : new vector<ULong64_t>;
   }
   static void *newArray_vectorlEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t>[nElements] : new vector<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEULong64_tgR(void *p) {
      delete ((vector<ULong64_t>*)p);
   }
   static void deleteArray_vectorlEULong64_tgR(void *p) {
      delete [] ((vector<ULong64_t>*)p);
   }
   static void destruct_vectorlEULong64_tgR(void *p) {
      typedef vector<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ULong64_t>

namespace ROOT {
   static TClass *vectorlELiquidScintmUgR_Dictionary();
   static void vectorlELiquidScintmUgR_TClassManip(TClass*);
   static void *new_vectorlELiquidScintmUgR(void *p = 0);
   static void *newArray_vectorlELiquidScintmUgR(Long_t size, void *p);
   static void delete_vectorlELiquidScintmUgR(void *p);
   static void deleteArray_vectorlELiquidScintmUgR(void *p);
   static void destruct_vectorlELiquidScintmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<LiquidScint*>*)
   {
      vector<LiquidScint*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<LiquidScint*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<LiquidScint*>", -2, "vector", 216,
                  typeid(vector<LiquidScint*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELiquidScintmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<LiquidScint*>) );
      instance.SetNew(&new_vectorlELiquidScintmUgR);
      instance.SetNewArray(&newArray_vectorlELiquidScintmUgR);
      instance.SetDelete(&delete_vectorlELiquidScintmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlELiquidScintmUgR);
      instance.SetDestructor(&destruct_vectorlELiquidScintmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<LiquidScint*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<LiquidScint*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELiquidScintmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<LiquidScint*>*)0x0)->GetClass();
      vectorlELiquidScintmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELiquidScintmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELiquidScintmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<LiquidScint*> : new vector<LiquidScint*>;
   }
   static void *newArray_vectorlELiquidScintmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<LiquidScint*>[nElements] : new vector<LiquidScint*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELiquidScintmUgR(void *p) {
      delete ((vector<LiquidScint*>*)p);
   }
   static void deleteArray_vectorlELiquidScintmUgR(void *p) {
      delete [] ((vector<LiquidScint*>*)p);
   }
   static void destruct_vectorlELiquidScintmUgR(void *p) {
      typedef vector<LiquidScint*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<LiquidScint*>

namespace ROOT {
   static TClass *vectorlEDetectormUgR_Dictionary();
   static void vectorlEDetectormUgR_TClassManip(TClass*);
   static void *new_vectorlEDetectormUgR(void *p = 0);
   static void *newArray_vectorlEDetectormUgR(Long_t size, void *p);
   static void delete_vectorlEDetectormUgR(void *p);
   static void deleteArray_vectorlEDetectormUgR(void *p);
   static void destruct_vectorlEDetectormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Detector*>*)
   {
      vector<Detector*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Detector*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Detector*>", -2, "vector", 216,
                  typeid(vector<Detector*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDetectormUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<Detector*>) );
      instance.SetNew(&new_vectorlEDetectormUgR);
      instance.SetNewArray(&newArray_vectorlEDetectormUgR);
      instance.SetDelete(&delete_vectorlEDetectormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDetectormUgR);
      instance.SetDestructor(&destruct_vectorlEDetectormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Detector*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Detector*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDetectormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Detector*>*)0x0)->GetClass();
      vectorlEDetectormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDetectormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDetectormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Detector*> : new vector<Detector*>;
   }
   static void *newArray_vectorlEDetectormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Detector*>[nElements] : new vector<Detector*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDetectormUgR(void *p) {
      delete ((vector<Detector*>*)p);
   }
   static void deleteArray_vectorlEDetectormUgR(void *p) {
      delete [] ((vector<Detector*>*)p);
   }
   static void destruct_vectorlEDetectormUgR(void *p) {
      typedef vector<Detector*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Detector*>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = 0);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 99,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double>*)0x0)->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete ((map<string,double>*)p);
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] ((map<string,double>*)p);
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace ROOT {
   static TClass *maplEshortcOfloatgR_Dictionary();
   static void maplEshortcOfloatgR_TClassManip(TClass*);
   static void *new_maplEshortcOfloatgR(void *p = 0);
   static void *newArray_maplEshortcOfloatgR(Long_t size, void *p);
   static void delete_maplEshortcOfloatgR(void *p);
   static void deleteArray_maplEshortcOfloatgR(void *p);
   static void destruct_maplEshortcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<short,float>*)
   {
      map<short,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<short,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<short,float>", -2, "map", 99,
                  typeid(map<short,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEshortcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<short,float>) );
      instance.SetNew(&new_maplEshortcOfloatgR);
      instance.SetNewArray(&newArray_maplEshortcOfloatgR);
      instance.SetDelete(&delete_maplEshortcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEshortcOfloatgR);
      instance.SetDestructor(&destruct_maplEshortcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<short,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<short,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEshortcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<short,float>*)0x0)->GetClass();
      maplEshortcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEshortcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEshortcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<short,float> : new map<short,float>;
   }
   static void *newArray_maplEshortcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<short,float>[nElements] : new map<short,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEshortcOfloatgR(void *p) {
      delete ((map<short,float>*)p);
   }
   static void deleteArray_maplEshortcOfloatgR(void *p) {
      delete [] ((map<short,float>*)p);
   }
   static void destruct_maplEshortcOfloatgR(void *p) {
      typedef map<short,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<short,float>

namespace ROOT {
   static TClass *maplEshortcOULong64_tgR_Dictionary();
   static void maplEshortcOULong64_tgR_TClassManip(TClass*);
   static void *new_maplEshortcOULong64_tgR(void *p = 0);
   static void *newArray_maplEshortcOULong64_tgR(Long_t size, void *p);
   static void delete_maplEshortcOULong64_tgR(void *p);
   static void deleteArray_maplEshortcOULong64_tgR(void *p);
   static void destruct_maplEshortcOULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<short,ULong64_t>*)
   {
      map<short,ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<short,ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("map<short,ULong64_t>", -2, "map", 99,
                  typeid(map<short,ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEshortcOULong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(map<short,ULong64_t>) );
      instance.SetNew(&new_maplEshortcOULong64_tgR);
      instance.SetNewArray(&newArray_maplEshortcOULong64_tgR);
      instance.SetDelete(&delete_maplEshortcOULong64_tgR);
      instance.SetDeleteArray(&deleteArray_maplEshortcOULong64_tgR);
      instance.SetDestructor(&destruct_maplEshortcOULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<short,ULong64_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<short,ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEshortcOULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<short,ULong64_t>*)0x0)->GetClass();
      maplEshortcOULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEshortcOULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEshortcOULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<short,ULong64_t> : new map<short,ULong64_t>;
   }
   static void *newArray_maplEshortcOULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<short,ULong64_t>[nElements] : new map<short,ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEshortcOULong64_tgR(void *p) {
      delete ((map<short,ULong64_t>*)p);
   }
   static void deleteArray_maplEshortcOULong64_tgR(void *p) {
      delete [] ((map<short,ULong64_t>*)p);
   }
   static void destruct_maplEshortcOULong64_tgR(void *p) {
      typedef map<short,ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<short,ULong64_t>

namespace ROOT {
   static TClass *maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR_Dictionary();
   static void maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR_TClassManip(TClass*);
   static void *new_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(void *p = 0);
   static void *newArray_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(Long_t size, void *p);
   static void delete_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(void *p);
   static void deleteArray_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(void *p);
   static void destruct_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<short,short>,pair<Detector*,int> >*)
   {
      map<pair<short,short>,pair<Detector*,int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<short,short>,pair<Detector*,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<short,short>,pair<Detector*,int> >", -2, "map", 99,
                  typeid(map<pair<short,short>,pair<Detector*,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<short,short>,pair<Detector*,int> >) );
      instance.SetNew(&new_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR);
      instance.SetNewArray(&newArray_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR);
      instance.SetDelete(&delete_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR);
      instance.SetDestructor(&destruct_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<short,short>,pair<Detector*,int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<short,short>,pair<Detector*,int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<short,short>,pair<Detector*,int> >*)0x0)->GetClass();
      maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<short,short>,pair<Detector*,int> > : new map<pair<short,short>,pair<Detector*,int> >;
   }
   static void *newArray_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<short,short>,pair<Detector*,int> >[nElements] : new map<pair<short,short>,pair<Detector*,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(void *p) {
      delete ((map<pair<short,short>,pair<Detector*,int> >*)p);
   }
   static void deleteArray_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(void *p) {
      delete [] ((map<pair<short,short>,pair<Detector*,int> >*)p);
   }
   static void destruct_maplEpairlEshortcOshortgRcOpairlEDetectormUcOintgRsPgR(void *p) {
      typedef map<pair<short,short>,pair<Detector*,int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<short,short>,pair<Detector*,int> >

namespace ROOT {
   static TClass *maplEfloatcOpairlEfloatcOfloatgRsPgR_Dictionary();
   static void maplEfloatcOpairlEfloatcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_maplEfloatcOpairlEfloatcOfloatgRsPgR(void *p = 0);
   static void *newArray_maplEfloatcOpairlEfloatcOfloatgRsPgR(Long_t size, void *p);
   static void delete_maplEfloatcOpairlEfloatcOfloatgRsPgR(void *p);
   static void deleteArray_maplEfloatcOpairlEfloatcOfloatgRsPgR(void *p);
   static void destruct_maplEfloatcOpairlEfloatcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<float,pair<float,float> >*)
   {
      map<float,pair<float,float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<float,pair<float,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<float,pair<float,float> >", -2, "map", 99,
                  typeid(map<float,pair<float,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEfloatcOpairlEfloatcOfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<float,pair<float,float> >) );
      instance.SetNew(&new_maplEfloatcOpairlEfloatcOfloatgRsPgR);
      instance.SetNewArray(&newArray_maplEfloatcOpairlEfloatcOfloatgRsPgR);
      instance.SetDelete(&delete_maplEfloatcOpairlEfloatcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEfloatcOpairlEfloatcOfloatgRsPgR);
      instance.SetDestructor(&destruct_maplEfloatcOpairlEfloatcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<float,pair<float,float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<float,pair<float,float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEfloatcOpairlEfloatcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<float,pair<float,float> >*)0x0)->GetClass();
      maplEfloatcOpairlEfloatcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEfloatcOpairlEfloatcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEfloatcOpairlEfloatcOfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<float,pair<float,float> > : new map<float,pair<float,float> >;
   }
   static void *newArray_maplEfloatcOpairlEfloatcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<float,pair<float,float> >[nElements] : new map<float,pair<float,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEfloatcOpairlEfloatcOfloatgRsPgR(void *p) {
      delete ((map<float,pair<float,float> >*)p);
   }
   static void deleteArray_maplEfloatcOpairlEfloatcOfloatgRsPgR(void *p) {
      delete [] ((map<float,pair<float,float> >*)p);
   }
   static void destruct_maplEfloatcOpairlEfloatcOfloatgRsPgR(void *p) {
      typedef map<float,pair<float,float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<float,pair<float,float> >

namespace {
  void TriggerDictionaryInitialization_ORRUBADictionary_Impl() {
    static const char* headers[] = {
"/home/chad/goddess_daq_plus/goddess/include/ORRUBA.h",
"/home/chad/goddess_daq_plus/goddess/include/Detector.h",
"/home/chad/goddess_daq_plus/goddess/include/siDet.h",
"/home/chad/goddess_daq_plus/goddess/include/orrubaDet.h",
"/home/chad/goddess_daq_plus/goddess/include/superX3.h",
"/home/chad/goddess_daq_plus/goddess/include/BB10.h",
"/home/chad/goddess_daq_plus/goddess/include/QQQ5.h",
"/home/chad/goddess_daq_plus/goddess/include/IonChamber.h",
"/home/chad/goddess_daq_plus/goddess/include/LiquidScint.h",
"/home/chad/goddess_daq_plus/goddess/include/TDC.h",
"/home/chad/goddess_daq_plus/goddess/include/SolidVector.h",
"/home/chad/goddess_daq_plus/goddess/include/GoddessConfig.h",
0
    };
    static const char* includePaths[] = {
"/home/chad/root-6.14.06/builddir/include",
"/home/chad/goddess_daq_plus/include",
"/home/chad/goddess_daq_plus/toolbox/include",
"/home/chad/goddess_daq_plus/goddess/include",
"/home/chad/goddess_daq_plus/scripts/include",
"/home/chad/root-6.14.06/builddir/include",
"/home/chad/goddess_daq_plus/goddess/source/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ORRUBADictionary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/orrubaDet.h")))  orrubaDet;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/Detector.h")))  Detector;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/ORRUBA.h")))  ORRUBA;
class __attribute__((annotate("$clingAutoload$SolidVector.h")))  __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/Detector.h")))  SolidVector;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/siDet.h")))  siDet;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/superX3.h")))  superX3;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/BB10.h")))  BB10;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/QQQ5.h")))  QQQ5;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/IonChamber.h")))  IonChamber;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/LiquidScint.h")))  LiquidScint;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/TDC.h")))  TDC;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq_plus/goddess/include/GoddessConfig.h")))  GoddessConfig;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ORRUBADictionary dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/chad/goddess_daq_plus/goddess/include/ORRUBA.h"
#include "/home/chad/goddess_daq_plus/goddess/include/Detector.h"
#include "/home/chad/goddess_daq_plus/goddess/include/siDet.h"
#include "/home/chad/goddess_daq_plus/goddess/include/orrubaDet.h"
#include "/home/chad/goddess_daq_plus/goddess/include/superX3.h"
#include "/home/chad/goddess_daq_plus/goddess/include/BB10.h"
#include "/home/chad/goddess_daq_plus/goddess/include/QQQ5.h"
#include "/home/chad/goddess_daq_plus/goddess/include/IonChamber.h"
#include "/home/chad/goddess_daq_plus/goddess/include/LiquidScint.h"
#include "/home/chad/goddess_daq_plus/goddess/include/TDC.h"
#include "/home/chad/goddess_daq_plus/goddess/include/SolidVector.h"
#include "/home/chad/goddess_daq_plus/goddess/include/GoddessConfig.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BB10", payloadCode, "@",
"Detector", payloadCode, "@",
"GoddessConfig", payloadCode, "@",
"IonChamber", payloadCode, "@",
"LiquidScint", payloadCode, "@",
"ORRUBA", payloadCode, "@",
"QQQ5", payloadCode, "@",
"SolidVector", payloadCode, "@",
"TDC", payloadCode, "@",
"orrubaDet", payloadCode, "@",
"siDet", payloadCode, "@",
"superX3", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ORRUBADictionary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ORRUBADictionary_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ORRUBADictionary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ORRUBADictionary() {
  TriggerDictionaryInitialization_ORRUBADictionary_Impl();
}
