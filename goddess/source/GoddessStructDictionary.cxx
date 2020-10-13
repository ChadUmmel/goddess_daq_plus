// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GoddessStructDictionary

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
#include "/home/chad/goddess_daq/goddess/include/GoddessStruct.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_GoddessGeomInfos(void *p = 0);
   static void *newArray_GoddessGeomInfos(Long_t size, void *p);
   static void delete_GoddessGeomInfos(void *p);
   static void deleteArray_GoddessGeomInfos(void *p);
   static void destruct_GoddessGeomInfos(void *p);
   static void streamer_GoddessGeomInfos(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GoddessGeomInfos*)
   {
      ::GoddessGeomInfos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GoddessGeomInfos >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GoddessGeomInfos", ::GoddessGeomInfos::Class_Version(), "GoddessStruct.h", 17,
                  typeid(::GoddessGeomInfos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GoddessGeomInfos::Dictionary, isa_proxy, 16,
                  sizeof(::GoddessGeomInfos) );
      instance.SetNew(&new_GoddessGeomInfos);
      instance.SetNewArray(&newArray_GoddessGeomInfos);
      instance.SetDelete(&delete_GoddessGeomInfos);
      instance.SetDeleteArray(&deleteArray_GoddessGeomInfos);
      instance.SetDestructor(&destruct_GoddessGeomInfos);
      instance.SetStreamerFunc(&streamer_GoddessGeomInfos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GoddessGeomInfos*)
   {
      return GenerateInitInstanceLocal((::GoddessGeomInfos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GoddessGeomInfos*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GoddessReacInfos(void *p = 0);
   static void *newArray_GoddessReacInfos(Long_t size, void *p);
   static void delete_GoddessReacInfos(void *p);
   static void deleteArray_GoddessReacInfos(void *p);
   static void destruct_GoddessReacInfos(void *p);
   static void streamer_GoddessReacInfos(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GoddessReacInfos*)
   {
      ::GoddessReacInfos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GoddessReacInfos >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GoddessReacInfos", ::GoddessReacInfos::Class_Version(), "GoddessStruct.h", 68,
                  typeid(::GoddessReacInfos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GoddessReacInfos::Dictionary, isa_proxy, 16,
                  sizeof(::GoddessReacInfos) );
      instance.SetNew(&new_GoddessReacInfos);
      instance.SetNewArray(&newArray_GoddessReacInfos);
      instance.SetDelete(&delete_GoddessReacInfos);
      instance.SetDeleteArray(&deleteArray_GoddessReacInfos);
      instance.SetDestructor(&destruct_GoddessReacInfos);
      instance.SetStreamerFunc(&streamer_GoddessReacInfos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GoddessReacInfos*)
   {
      return GenerateInitInstanceLocal((::GoddessReacInfos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GoddessReacInfos*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *GamData_Dictionary();
   static void GamData_TClassManip(TClass*);
   static void *new_GamData(void *p = 0);
   static void *newArray_GamData(Long_t size, void *p);
   static void delete_GamData(void *p);
   static void deleteArray_GamData(void *p);
   static void destruct_GamData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GamData*)
   {
      ::GamData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GamData));
      static ::ROOT::TGenericClassInfo 
         instance("GamData", "GoddessStruct.h", 108,
                  typeid(::GamData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GamData_Dictionary, isa_proxy, 4,
                  sizeof(::GamData) );
      instance.SetNew(&new_GamData);
      instance.SetNewArray(&newArray_GamData);
      instance.SetDelete(&delete_GamData);
      instance.SetDeleteArray(&deleteArray_GamData);
      instance.SetDestructor(&destruct_GamData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GamData*)
   {
      return GenerateInitInstanceLocal((::GamData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GamData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GamData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GamData*)0x0)->GetClass();
      GamData_TClassManip(theClass);
   return theClass;
   }

   static void GamData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GretData_Dictionary();
   static void GretData_TClassManip(TClass*);
   static void *new_GretData(void *p = 0);
   static void *newArray_GretData(Long_t size, void *p);
   static void delete_GretData(void *p);
   static void deleteArray_GretData(void *p);
   static void destruct_GretData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GretData*)
   {
      ::GretData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GretData));
      static ::ROOT::TGenericClassInfo 
         instance("GretData", "GoddessStruct.h", 122,
                  typeid(::GretData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GretData_Dictionary, isa_proxy, 4,
                  sizeof(::GretData) );
      instance.SetNew(&new_GretData);
      instance.SetNewArray(&newArray_GretData);
      instance.SetDelete(&delete_GretData);
      instance.SetDeleteArray(&deleteArray_GretData);
      instance.SetDestructor(&destruct_GretData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GretData*)
   {
      return GenerateInitInstanceLocal((::GretData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GretData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GretData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GretData*)0x0)->GetClass();
      GretData_TClassManip(theClass);
   return theClass;
   }

   static void GretData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_SiDataBase(void *p = 0);
   static void *newArray_SiDataBase(Long_t size, void *p);
   static void delete_SiDataBase(void *p);
   static void deleteArray_SiDataBase(void *p);
   static void destruct_SiDataBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SiDataBase*)
   {
      ::SiDataBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SiDataBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SiDataBase", ::SiDataBase::Class_Version(), "GoddessStruct.h", 145,
                  typeid(::SiDataBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SiDataBase::Dictionary, isa_proxy, 4,
                  sizeof(::SiDataBase) );
      instance.SetNew(&new_SiDataBase);
      instance.SetNewArray(&newArray_SiDataBase);
      instance.SetDelete(&delete_SiDataBase);
      instance.SetDeleteArray(&deleteArray_SiDataBase);
      instance.SetDestructor(&destruct_SiDataBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SiDataBase*)
   {
      return GenerateInitInstanceLocal((::SiDataBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SiDataBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *PNPairlEfloatgR_Dictionary();
   static void PNPairlEfloatgR_TClassManip(TClass*);
   static void *new_PNPairlEfloatgR(void *p = 0);
   static void *newArray_PNPairlEfloatgR(Long_t size, void *p);
   static void delete_PNPairlEfloatgR(void *p);
   static void deleteArray_PNPairlEfloatgR(void *p);
   static void destruct_PNPairlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PNPair<float>*)
   {
      ::PNPair<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PNPair<float> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PNPair<float>", ::PNPair<float>::Class_Version(), "GoddessStruct.h", 248,
                  typeid(::PNPair<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PNPairlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::PNPair<float>) );
      instance.SetNew(&new_PNPairlEfloatgR);
      instance.SetNewArray(&newArray_PNPairlEfloatgR);
      instance.SetDelete(&delete_PNPairlEfloatgR);
      instance.SetDeleteArray(&deleteArray_PNPairlEfloatgR);
      instance.SetDestructor(&destruct_PNPairlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PNPair<float>*)
   {
      return GenerateInitInstanceLocal((::PNPair<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PNPair<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PNPairlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::PNPair<float>*)0x0)->GetClass();
      PNPairlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void PNPairlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *PNPairlEintgR_Dictionary();
   static void PNPairlEintgR_TClassManip(TClass*);
   static void *new_PNPairlEintgR(void *p = 0);
   static void *newArray_PNPairlEintgR(Long_t size, void *p);
   static void delete_PNPairlEintgR(void *p);
   static void deleteArray_PNPairlEintgR(void *p);
   static void destruct_PNPairlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PNPair<int>*)
   {
      ::PNPair<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PNPair<int> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PNPair<int>", ::PNPair<int>::Class_Version(), "GoddessStruct.h", 248,
                  typeid(::PNPair<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PNPairlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::PNPair<int>) );
      instance.SetNew(&new_PNPairlEintgR);
      instance.SetNewArray(&newArray_PNPairlEintgR);
      instance.SetDelete(&delete_PNPairlEintgR);
      instance.SetDeleteArray(&deleteArray_PNPairlEintgR);
      instance.SetDestructor(&destruct_PNPairlEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PNPair<int>*)
   {
      return GenerateInitInstanceLocal((::PNPair<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PNPair<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PNPairlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::PNPair<int>*)0x0)->GetClass();
      PNPairlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void PNPairlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *PNPairlEULong64_tgR_Dictionary();
   static void PNPairlEULong64_tgR_TClassManip(TClass*);
   static void *new_PNPairlEULong64_tgR(void *p = 0);
   static void *newArray_PNPairlEULong64_tgR(Long_t size, void *p);
   static void delete_PNPairlEULong64_tgR(void *p);
   static void deleteArray_PNPairlEULong64_tgR(void *p);
   static void destruct_PNPairlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PNPair<ULong64_t>*)
   {
      ::PNPair<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PNPair<ULong64_t> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PNPair<ULong64_t>", ::PNPair<ULong64_t>::Class_Version(), "GoddessStruct.h", 248,
                  typeid(::PNPair<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PNPairlEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::PNPair<ULong64_t>) );
      instance.SetNew(&new_PNPairlEULong64_tgR);
      instance.SetNewArray(&newArray_PNPairlEULong64_tgR);
      instance.SetDelete(&delete_PNPairlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_PNPairlEULong64_tgR);
      instance.SetDestructor(&destruct_PNPairlEULong64_tgR);

      ::ROOT::AddClassAlternate("PNPair<ULong64_t>","PNPair<ULong64_t int>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PNPair<ULong64_t>*)
   {
      return GenerateInitInstanceLocal((::PNPair<ULong64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PNPair<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PNPairlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::PNPair<ULong64_t>*)0x0)->GetClass();
      PNPairlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void PNPairlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_SiDetEnStripInfo(void *p = 0);
   static void *newArray_SiDetEnStripInfo(Long_t size, void *p);
   static void delete_SiDetEnStripInfo(void *p);
   static void deleteArray_SiDetEnStripInfo(void *p);
   static void destruct_SiDetEnStripInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SiDetEnStripInfo*)
   {
      ::SiDetEnStripInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SiDetEnStripInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SiDetEnStripInfo", ::SiDetEnStripInfo::Class_Version(), "GoddessStruct.h", 280,
                  typeid(::SiDetEnStripInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SiDetEnStripInfo::Dictionary, isa_proxy, 4,
                  sizeof(::SiDetEnStripInfo) );
      instance.SetNew(&new_SiDetEnStripInfo);
      instance.SetNewArray(&newArray_SiDetEnStripInfo);
      instance.SetDelete(&delete_SiDetEnStripInfo);
      instance.SetDeleteArray(&deleteArray_SiDetEnStripInfo);
      instance.SetDestructor(&destruct_SiDetEnStripInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SiDetEnStripInfo*)
   {
      return GenerateInitInstanceLocal((::SiDetEnStripInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SiDetEnStripInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SiDataDetailed(void *p = 0);
   static void *newArray_SiDataDetailed(Long_t size, void *p);
   static void delete_SiDataDetailed(void *p);
   static void deleteArray_SiDataDetailed(void *p);
   static void destruct_SiDataDetailed(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SiDataDetailed*)
   {
      ::SiDataDetailed *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SiDataDetailed >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SiDataDetailed", ::SiDataDetailed::Class_Version(), "GoddessStruct.h", 314,
                  typeid(::SiDataDetailed), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SiDataDetailed::Dictionary, isa_proxy, 4,
                  sizeof(::SiDataDetailed) );
      instance.SetNew(&new_SiDataDetailed);
      instance.SetNewArray(&newArray_SiDataDetailed);
      instance.SetDelete(&delete_SiDataDetailed);
      instance.SetDeleteArray(&deleteArray_SiDataDetailed);
      instance.SetDestructor(&destruct_SiDataDetailed);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SiDataDetailed*)
   {
      return GenerateInitInstanceLocal((::SiDataDetailed*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SiDataDetailed*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *IonData_Dictionary();
   static void IonData_TClassManip(TClass*);
   static void *new_IonData(void *p = 0);
   static void *newArray_IonData(Long_t size, void *p);
   static void delete_IonData(void *p);
   static void deleteArray_IonData(void *p);
   static void destruct_IonData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IonData*)
   {
      ::IonData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IonData));
      static ::ROOT::TGenericClassInfo 
         instance("IonData", "GoddessStruct.h", 353,
                  typeid(::IonData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &IonData_Dictionary, isa_proxy, 4,
                  sizeof(::IonData) );
      instance.SetNew(&new_IonData);
      instance.SetNewArray(&newArray_IonData);
      instance.SetDelete(&delete_IonData);
      instance.SetDeleteArray(&deleteArray_IonData);
      instance.SetDestructor(&destruct_IonData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IonData*)
   {
      return GenerateInitInstanceLocal((::IonData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IonData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IonData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::IonData*)0x0)->GetClass();
      IonData_TClassManip(theClass);
   return theClass;
   }

   static void IonData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TDCData_Dictionary();
   static void TDCData_TClassManip(TClass*);
   static void *new_TDCData(void *p = 0);
   static void *newArray_TDCData(Long_t size, void *p);
   static void delete_TDCData(void *p);
   static void deleteArray_TDCData(void *p);
   static void destruct_TDCData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDCData*)
   {
      ::TDCData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TDCData));
      static ::ROOT::TGenericClassInfo 
         instance("TDCData", "GoddessStruct.h", 353,
                  typeid(::TDCData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TDCData_Dictionary, isa_proxy, 4,
                  sizeof(::TDCData) );
      instance.SetNew(&new_TDCData);
      instance.SetNewArray(&newArray_TDCData);
      instance.SetDelete(&delete_TDCData);
      instance.SetDeleteArray(&deleteArray_TDCData);
      instance.SetDestructor(&destruct_TDCData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDCData*)
   {
      return GenerateInitInstanceLocal((::TDCData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TDCData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TDCData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TDCData*)0x0)->GetClass();
      TDCData_TClassManip(theClass);
   return theClass;
   }

   static void TDCData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GSRawData_Dictionary();
   static void GSRawData_TClassManip(TClass*);
   static void *new_GSRawData(void *p = 0);
   static void *newArray_GSRawData(Long_t size, void *p);
   static void delete_GSRawData(void *p);
   static void deleteArray_GSRawData(void *p);
   static void destruct_GSRawData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GSRawData*)
   {
      ::GSRawData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GSRawData));
      static ::ROOT::TGenericClassInfo 
         instance("GSRawData", "GoddessStruct.h", 388,
                  typeid(::GSRawData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GSRawData_Dictionary, isa_proxy, 4,
                  sizeof(::GSRawData) );
      instance.SetNew(&new_GSRawData);
      instance.SetNewArray(&newArray_GSRawData);
      instance.SetDelete(&delete_GSRawData);
      instance.SetDeleteArray(&deleteArray_GSRawData);
      instance.SetDestructor(&destruct_GSRawData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GSRawData*)
   {
      return GenerateInitInstanceLocal((::GSRawData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GSRawData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GSRawData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GSRawData*)0x0)->GetClass();
      GSRawData_TClassManip(theClass);
   return theClass;
   }

   static void GSRawData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ChValPair(void *p = 0);
   static void *newArray_ChValPair(Long_t size, void *p);
   static void delete_ChValPair(void *p);
   static void deleteArray_ChValPair(void *p);
   static void destruct_ChValPair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChValPair*)
   {
      ::ChValPair *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChValPair >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChValPair", ::ChValPair::Class_Version(), "GoddessStruct.h", 401,
                  typeid(::ChValPair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChValPair::Dictionary, isa_proxy, 4,
                  sizeof(::ChValPair) );
      instance.SetNew(&new_ChValPair);
      instance.SetNewArray(&newArray_ChValPair);
      instance.SetDelete(&delete_ChValPair);
      instance.SetDeleteArray(&deleteArray_ChValPair);
      instance.SetDestructor(&destruct_ChValPair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChValPair*)
   {
      return GenerateInitInstanceLocal((::ChValPair*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChValPair*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ORRUBARawData(void *p = 0);
   static void *newArray_ORRUBARawData(Long_t size, void *p);
   static void delete_ORRUBARawData(void *p);
   static void deleteArray_ORRUBARawData(void *p);
   static void destruct_ORRUBARawData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ORRUBARawData*)
   {
      ::ORRUBARawData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ORRUBARawData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ORRUBARawData", ::ORRUBARawData::Class_Version(), "GoddessStruct.h", 423,
                  typeid(::ORRUBARawData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ORRUBARawData::Dictionary, isa_proxy, 4,
                  sizeof(::ORRUBARawData) );
      instance.SetNew(&new_ORRUBARawData);
      instance.SetNewArray(&newArray_ORRUBARawData);
      instance.SetDelete(&delete_ORRUBARawData);
      instance.SetDeleteArray(&deleteArray_ORRUBARawData);
      instance.SetDestructor(&destruct_ORRUBARawData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ORRUBARawData*)
   {
      return GenerateInitInstanceLocal((::ORRUBARawData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ORRUBARawData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr GoddessGeomInfos::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GoddessGeomInfos::Class_Name()
{
   return "GoddessGeomInfos";
}

//______________________________________________________________________________
const char *GoddessGeomInfos::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessGeomInfos*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GoddessGeomInfos::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessGeomInfos*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GoddessGeomInfos::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessGeomInfos*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GoddessGeomInfos::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessGeomInfos*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GoddessReacInfos::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GoddessReacInfos::Class_Name()
{
   return "GoddessReacInfos";
}

//______________________________________________________________________________
const char *GoddessReacInfos::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessReacInfos*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GoddessReacInfos::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GoddessReacInfos*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GoddessReacInfos::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessReacInfos*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GoddessReacInfos::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GoddessReacInfos*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SiDataBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SiDataBase::Class_Name()
{
   return "SiDataBase";
}

//______________________________________________________________________________
const char *SiDataBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SiDataBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SiDataBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SiDataBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SiDataBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SiDataBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SiDataBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SiDataBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr PNPair<float>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *PNPair<float>::Class_Name()
{
   return "PNPair<float>";
}

//______________________________________________________________________________
template <> const char *PNPair<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PNPair<float>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int PNPair<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PNPair<float>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *PNPair<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PNPair<float>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *PNPair<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PNPair<float>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr PNPair<int>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *PNPair<int>::Class_Name()
{
   return "PNPair<int>";
}

//______________________________________________________________________________
template <> const char *PNPair<int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PNPair<int>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int PNPair<int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PNPair<int>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *PNPair<int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PNPair<int>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *PNPair<int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PNPair<int>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr PNPair<ULong64_t>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *PNPair<ULong64_t>::Class_Name()
{
   return "PNPair<ULong64_t>";
}

//______________________________________________________________________________
template <> const char *PNPair<ULong64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PNPair<ULong64_t>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int PNPair<ULong64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PNPair<ULong64_t>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *PNPair<ULong64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PNPair<ULong64_t>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *PNPair<ULong64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PNPair<ULong64_t>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SiDetEnStripInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SiDetEnStripInfo::Class_Name()
{
   return "SiDetEnStripInfo";
}

//______________________________________________________________________________
const char *SiDetEnStripInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SiDetEnStripInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SiDetEnStripInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SiDetEnStripInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SiDetEnStripInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SiDetEnStripInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SiDetEnStripInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SiDetEnStripInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SiDataDetailed::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SiDataDetailed::Class_Name()
{
   return "SiDataDetailed";
}

//______________________________________________________________________________
const char *SiDataDetailed::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SiDataDetailed*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SiDataDetailed::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SiDataDetailed*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SiDataDetailed::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SiDataDetailed*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SiDataDetailed::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SiDataDetailed*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChValPair::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChValPair::Class_Name()
{
   return "ChValPair";
}

//______________________________________________________________________________
const char *ChValPair::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChValPair*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChValPair::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChValPair*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChValPair::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChValPair*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChValPair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChValPair*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ORRUBARawData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ORRUBARawData::Class_Name()
{
   return "ORRUBARawData";
}

//______________________________________________________________________________
const char *ORRUBARawData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ORRUBARawData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ORRUBARawData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ORRUBARawData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ORRUBARawData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ORRUBARawData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ORRUBARawData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ORRUBARawData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void GoddessGeomInfos::Streamer(TBuffer &R__b)
{
   // Stream an object of class GoddessGeomInfos.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> barrelRadius;
      R__b >> barrelLength;
      R__b >> targetLadderAngle;
      R__b >> barrelLayerSpacing;
      R__b >> endcapLayerSpacing;
      targetOffset.Streamer(R__b);
      superX3Offset.Streamer(R__b);
      qqq5Offset.Streamer(R__b);
      R__b >> superX3ActiveLength;
      R__b >> superX3ActiveWidth;
      R__b >> bb10ActiveWidth;
      R__b >> qqq5FirstStripWidth;
      R__b >> qqq5DeltaPitch;
      R__b >> qqq5RefPhi;
      R__b >> qqq5DeltaPhi;
      R__b >> qqq5RefRotz;
      R__b >> qqq5DeltaRotz;
      R__b >> superX3RefPhi;
      R__b >> superX3DeltaPhi;
      R__b >> superX3RefRotz;
      R__b >> superX3DeltaRotz;
      R__b.CheckByteCount(R__s, R__c, GoddessGeomInfos::IsA());
   } else {
      R__c = R__b.WriteVersion(GoddessGeomInfos::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << barrelRadius;
      R__b << barrelLength;
      R__b << targetLadderAngle;
      R__b << barrelLayerSpacing;
      R__b << endcapLayerSpacing;
      targetOffset.Streamer(R__b);
      superX3Offset.Streamer(R__b);
      qqq5Offset.Streamer(R__b);
      R__b << superX3ActiveLength;
      R__b << superX3ActiveWidth;
      R__b << bb10ActiveWidth;
      R__b << qqq5FirstStripWidth;
      R__b << qqq5DeltaPitch;
      R__b << qqq5RefPhi;
      R__b << qqq5DeltaPhi;
      R__b << qqq5RefRotz;
      R__b << qqq5DeltaRotz;
      R__b << superX3RefPhi;
      R__b << superX3DeltaPhi;
      R__b << superX3RefRotz;
      R__b << superX3DeltaRotz;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GoddessGeomInfos(void *p) {
      return  p ? new(p) ::GoddessGeomInfos : new ::GoddessGeomInfos;
   }
   static void *newArray_GoddessGeomInfos(Long_t nElements, void *p) {
      return p ? new(p) ::GoddessGeomInfos[nElements] : new ::GoddessGeomInfos[nElements];
   }
   // Wrapper around operator delete
   static void delete_GoddessGeomInfos(void *p) {
      delete ((::GoddessGeomInfos*)p);
   }
   static void deleteArray_GoddessGeomInfos(void *p) {
      delete [] ((::GoddessGeomInfos*)p);
   }
   static void destruct_GoddessGeomInfos(void *p) {
      typedef ::GoddessGeomInfos current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_GoddessGeomInfos(TBuffer &buf, void *obj) {
      ((::GoddessGeomInfos*)obj)->::GoddessGeomInfos::Streamer(buf);
   }
} // end of namespace ROOT for class ::GoddessGeomInfos

//______________________________________________________________________________
void GoddessReacInfos::Streamer(TBuffer &R__b)
{
   // Stream an object of class GoddessReacInfos.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> beamZ;
      R__b >> beamA;
      R__b >> beamAtomicMass;
      R__b >> targetZ;
      R__b >> targetA;
      R__b >> targetAtomicMass;
      R__b >> ejecZ;
      R__b >> ejecA;
      R__b >> ejecAtomicMass;
      R__b >> recoilZ;
      R__b >> recoilA;
      R__b >> recoilAtomicMass;
      R__b >> beamEk;
      R__b >> qValGsGs;
      { TString R__str; R__str.Streamer(R__b); targetType = R__str.Data(); }
      R__b >> targetThickness;
      R__b >> targetDensity;
      R__b >> qqq5EnGain;
      R__b >> sX3EnGain;
      R__b.CheckByteCount(R__s, R__c, GoddessReacInfos::IsA());
   } else {
      R__c = R__b.WriteVersion(GoddessReacInfos::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << beamZ;
      R__b << beamA;
      R__b << beamAtomicMass;
      R__b << targetZ;
      R__b << targetA;
      R__b << targetAtomicMass;
      R__b << ejecZ;
      R__b << ejecA;
      R__b << ejecAtomicMass;
      R__b << recoilZ;
      R__b << recoilA;
      R__b << recoilAtomicMass;
      R__b << beamEk;
      R__b << qValGsGs;
      { TString R__str = targetType.c_str(); R__str.Streamer(R__b);}
      R__b << targetThickness;
      R__b << targetDensity;
      R__b << qqq5EnGain;
      R__b << sX3EnGain;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GoddessReacInfos(void *p) {
      return  p ? new(p) ::GoddessReacInfos : new ::GoddessReacInfos;
   }
   static void *newArray_GoddessReacInfos(Long_t nElements, void *p) {
      return p ? new(p) ::GoddessReacInfos[nElements] : new ::GoddessReacInfos[nElements];
   }
   // Wrapper around operator delete
   static void delete_GoddessReacInfos(void *p) {
      delete ((::GoddessReacInfos*)p);
   }
   static void deleteArray_GoddessReacInfos(void *p) {
      delete [] ((::GoddessReacInfos*)p);
   }
   static void destruct_GoddessReacInfos(void *p) {
      typedef ::GoddessReacInfos current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_GoddessReacInfos(TBuffer &buf, void *obj) {
      ((::GoddessReacInfos*)obj)->::GoddessReacInfos::Streamer(buf);
   }
} // end of namespace ROOT for class ::GoddessReacInfos

namespace ROOT {
   // Wrappers around operator new
   static void *new_GamData(void *p) {
      return  p ? new(p) ::GamData : new ::GamData;
   }
   static void *newArray_GamData(Long_t nElements, void *p) {
      return p ? new(p) ::GamData[nElements] : new ::GamData[nElements];
   }
   // Wrapper around operator delete
   static void delete_GamData(void *p) {
      delete ((::GamData*)p);
   }
   static void deleteArray_GamData(void *p) {
      delete [] ((::GamData*)p);
   }
   static void destruct_GamData(void *p) {
      typedef ::GamData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GamData

namespace ROOT {
   // Wrappers around operator new
   static void *new_GretData(void *p) {
      return  p ? new(p) ::GretData : new ::GretData;
   }
   static void *newArray_GretData(Long_t nElements, void *p) {
      return p ? new(p) ::GretData[nElements] : new ::GretData[nElements];
   }
   // Wrapper around operator delete
   static void delete_GretData(void *p) {
      delete ((::GretData*)p);
   }
   static void deleteArray_GretData(void *p) {
      delete [] ((::GretData*)p);
   }
   static void destruct_GretData(void *p) {
      typedef ::GretData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GretData

//______________________________________________________________________________
void SiDataBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class SiDataBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SiDataBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(SiDataBase::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SiDataBase(void *p) {
      return  p ? new(p) ::SiDataBase : new ::SiDataBase;
   }
   static void *newArray_SiDataBase(Long_t nElements, void *p) {
      return p ? new(p) ::SiDataBase[nElements] : new ::SiDataBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_SiDataBase(void *p) {
      delete ((::SiDataBase*)p);
   }
   static void deleteArray_SiDataBase(void *p) {
      delete [] ((::SiDataBase*)p);
   }
   static void destruct_SiDataBase(void *p) {
      typedef ::SiDataBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SiDataBase

//______________________________________________________________________________
template <> void PNPair<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class PNPair<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PNPair<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(PNPair<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PNPairlEfloatgR(void *p) {
      return  p ? new(p) ::PNPair<float> : new ::PNPair<float>;
   }
   static void *newArray_PNPairlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::PNPair<float>[nElements] : new ::PNPair<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_PNPairlEfloatgR(void *p) {
      delete ((::PNPair<float>*)p);
   }
   static void deleteArray_PNPairlEfloatgR(void *p) {
      delete [] ((::PNPair<float>*)p);
   }
   static void destruct_PNPairlEfloatgR(void *p) {
      typedef ::PNPair<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PNPair<float>

//______________________________________________________________________________
template <> void PNPair<int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class PNPair<int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PNPair<int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(PNPair<int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PNPairlEintgR(void *p) {
      return  p ? new(p) ::PNPair<int> : new ::PNPair<int>;
   }
   static void *newArray_PNPairlEintgR(Long_t nElements, void *p) {
      return p ? new(p) ::PNPair<int>[nElements] : new ::PNPair<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_PNPairlEintgR(void *p) {
      delete ((::PNPair<int>*)p);
   }
   static void deleteArray_PNPairlEintgR(void *p) {
      delete [] ((::PNPair<int>*)p);
   }
   static void destruct_PNPairlEintgR(void *p) {
      typedef ::PNPair<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PNPair<int>

//______________________________________________________________________________
template <> void PNPair<ULong64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class PNPair<ULong64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PNPair<ULong64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(PNPair<ULong64_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PNPairlEULong64_tgR(void *p) {
      return  p ? new(p) ::PNPair<ULong64_t> : new ::PNPair<ULong64_t>;
   }
   static void *newArray_PNPairlEULong64_tgR(Long_t nElements, void *p) {
      return p ? new(p) ::PNPair<ULong64_t>[nElements] : new ::PNPair<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_PNPairlEULong64_tgR(void *p) {
      delete ((::PNPair<ULong64_t>*)p);
   }
   static void deleteArray_PNPairlEULong64_tgR(void *p) {
      delete [] ((::PNPair<ULong64_t>*)p);
   }
   static void destruct_PNPairlEULong64_tgR(void *p) {
      typedef ::PNPair<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PNPair<ULong64_t>

//______________________________________________________________________________
void SiDetEnStripInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class SiDetEnStripInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SiDetEnStripInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(SiDetEnStripInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SiDetEnStripInfo(void *p) {
      return  p ? new(p) ::SiDetEnStripInfo : new ::SiDetEnStripInfo;
   }
   static void *newArray_SiDetEnStripInfo(Long_t nElements, void *p) {
      return p ? new(p) ::SiDetEnStripInfo[nElements] : new ::SiDetEnStripInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_SiDetEnStripInfo(void *p) {
      delete ((::SiDetEnStripInfo*)p);
   }
   static void deleteArray_SiDetEnStripInfo(void *p) {
      delete [] ((::SiDetEnStripInfo*)p);
   }
   static void destruct_SiDetEnStripInfo(void *p) {
      typedef ::SiDetEnStripInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SiDetEnStripInfo

//______________________________________________________________________________
void SiDataDetailed::Streamer(TBuffer &R__b)
{
   // Stream an object of class SiDataDetailed.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SiDataDetailed::Class(),this);
   } else {
      R__b.WriteClassBuffer(SiDataDetailed::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SiDataDetailed(void *p) {
      return  p ? new(p) ::SiDataDetailed : new ::SiDataDetailed;
   }
   static void *newArray_SiDataDetailed(Long_t nElements, void *p) {
      return p ? new(p) ::SiDataDetailed[nElements] : new ::SiDataDetailed[nElements];
   }
   // Wrapper around operator delete
   static void delete_SiDataDetailed(void *p) {
      delete ((::SiDataDetailed*)p);
   }
   static void deleteArray_SiDataDetailed(void *p) {
      delete [] ((::SiDataDetailed*)p);
   }
   static void destruct_SiDataDetailed(void *p) {
      typedef ::SiDataDetailed current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SiDataDetailed

namespace ROOT {
   // Wrappers around operator new
   static void *new_IonData(void *p) {
      return  p ? new(p) ::IonData : new ::IonData;
   }
   static void *newArray_IonData(Long_t nElements, void *p) {
      return p ? new(p) ::IonData[nElements] : new ::IonData[nElements];
   }
   // Wrapper around operator delete
   static void delete_IonData(void *p) {
      delete ((::IonData*)p);
   }
   static void deleteArray_IonData(void *p) {
      delete [] ((::IonData*)p);
   }
   static void destruct_IonData(void *p) {
      typedef ::IonData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IonData

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDCData(void *p) {
      return  p ? new(p) ::TDCData : new ::TDCData;
   }
   static void *newArray_TDCData(Long_t nElements, void *p) {
      return p ? new(p) ::TDCData[nElements] : new ::TDCData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDCData(void *p) {
      delete ((::TDCData*)p);
   }
   static void deleteArray_TDCData(void *p) {
      delete [] ((::TDCData*)p);
   }
   static void destruct_TDCData(void *p) {
      typedef ::TDCData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TDCData

namespace ROOT {
   // Wrappers around operator new
   static void *new_GSRawData(void *p) {
      return  p ? new(p) ::GSRawData : new ::GSRawData;
   }
   static void *newArray_GSRawData(Long_t nElements, void *p) {
      return p ? new(p) ::GSRawData[nElements] : new ::GSRawData[nElements];
   }
   // Wrapper around operator delete
   static void delete_GSRawData(void *p) {
      delete ((::GSRawData*)p);
   }
   static void deleteArray_GSRawData(void *p) {
      delete [] ((::GSRawData*)p);
   }
   static void destruct_GSRawData(void *p) {
      typedef ::GSRawData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GSRawData

//______________________________________________________________________________
void ChValPair::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChValPair.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChValPair::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChValPair::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChValPair(void *p) {
      return  p ? new(p) ::ChValPair : new ::ChValPair;
   }
   static void *newArray_ChValPair(Long_t nElements, void *p) {
      return p ? new(p) ::ChValPair[nElements] : new ::ChValPair[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChValPair(void *p) {
      delete ((::ChValPair*)p);
   }
   static void deleteArray_ChValPair(void *p) {
      delete [] ((::ChValPair*)p);
   }
   static void destruct_ChValPair(void *p) {
      typedef ::ChValPair current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChValPair

//______________________________________________________________________________
void ORRUBARawData::Streamer(TBuffer &R__b)
{
   // Stream an object of class ORRUBARawData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ORRUBARawData::Class(),this);
   } else {
      R__b.WriteClassBuffer(ORRUBARawData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ORRUBARawData(void *p) {
      return  p ? new(p) ::ORRUBARawData : new ::ORRUBARawData;
   }
   static void *newArray_ORRUBARawData(Long_t nElements, void *p) {
      return p ? new(p) ::ORRUBARawData[nElements] : new ::ORRUBARawData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ORRUBARawData(void *p) {
      delete ((::ORRUBARawData*)p);
   }
   static void deleteArray_ORRUBARawData(void *p) {
      delete [] ((::ORRUBARawData*)p);
   }
   static void destruct_ORRUBARawData(void *p) {
      typedef ::ORRUBARawData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ORRUBARawData

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
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 543,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

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
   static TClass *vectorlESiDetEnStripInfogR_Dictionary();
   static void vectorlESiDetEnStripInfogR_TClassManip(TClass*);
   static void *new_vectorlESiDetEnStripInfogR(void *p = 0);
   static void *newArray_vectorlESiDetEnStripInfogR(Long_t size, void *p);
   static void delete_vectorlESiDetEnStripInfogR(void *p);
   static void deleteArray_vectorlESiDetEnStripInfogR(void *p);
   static void destruct_vectorlESiDetEnStripInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SiDetEnStripInfo>*)
   {
      vector<SiDetEnStripInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SiDetEnStripInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SiDetEnStripInfo>", -2, "vector", 216,
                  typeid(vector<SiDetEnStripInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESiDetEnStripInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<SiDetEnStripInfo>) );
      instance.SetNew(&new_vectorlESiDetEnStripInfogR);
      instance.SetNewArray(&newArray_vectorlESiDetEnStripInfogR);
      instance.SetDelete(&delete_vectorlESiDetEnStripInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlESiDetEnStripInfogR);
      instance.SetDestructor(&destruct_vectorlESiDetEnStripInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SiDetEnStripInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SiDetEnStripInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESiDetEnStripInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SiDetEnStripInfo>*)0x0)->GetClass();
      vectorlESiDetEnStripInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESiDetEnStripInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESiDetEnStripInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SiDetEnStripInfo> : new vector<SiDetEnStripInfo>;
   }
   static void *newArray_vectorlESiDetEnStripInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SiDetEnStripInfo>[nElements] : new vector<SiDetEnStripInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESiDetEnStripInfogR(void *p) {
      delete ((vector<SiDetEnStripInfo>*)p);
   }
   static void deleteArray_vectorlESiDetEnStripInfogR(void *p) {
      delete [] ((vector<SiDetEnStripInfo>*)p);
   }
   static void destruct_vectorlESiDetEnStripInfogR(void *p) {
      typedef vector<SiDetEnStripInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SiDetEnStripInfo>

namespace ROOT {
   static TClass *vectorlESiDataDetailedgR_Dictionary();
   static void vectorlESiDataDetailedgR_TClassManip(TClass*);
   static void *new_vectorlESiDataDetailedgR(void *p = 0);
   static void *newArray_vectorlESiDataDetailedgR(Long_t size, void *p);
   static void delete_vectorlESiDataDetailedgR(void *p);
   static void deleteArray_vectorlESiDataDetailedgR(void *p);
   static void destruct_vectorlESiDataDetailedgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SiDataDetailed>*)
   {
      vector<SiDataDetailed> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SiDataDetailed>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SiDataDetailed>", -2, "vector", 216,
                  typeid(vector<SiDataDetailed>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESiDataDetailedgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<SiDataDetailed>) );
      instance.SetNew(&new_vectorlESiDataDetailedgR);
      instance.SetNewArray(&newArray_vectorlESiDataDetailedgR);
      instance.SetDelete(&delete_vectorlESiDataDetailedgR);
      instance.SetDeleteArray(&deleteArray_vectorlESiDataDetailedgR);
      instance.SetDestructor(&destruct_vectorlESiDataDetailedgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SiDataDetailed> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SiDataDetailed>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESiDataDetailedgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SiDataDetailed>*)0x0)->GetClass();
      vectorlESiDataDetailedgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESiDataDetailedgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESiDataDetailedgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SiDataDetailed> : new vector<SiDataDetailed>;
   }
   static void *newArray_vectorlESiDataDetailedgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SiDataDetailed>[nElements] : new vector<SiDataDetailed>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESiDataDetailedgR(void *p) {
      delete ((vector<SiDataDetailed>*)p);
   }
   static void deleteArray_vectorlESiDataDetailedgR(void *p) {
      delete [] ((vector<SiDataDetailed>*)p);
   }
   static void destruct_vectorlESiDataDetailedgR(void *p) {
      typedef vector<SiDataDetailed> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SiDataDetailed>

namespace ROOT {
   static TClass *vectorlESiDataBasegR_Dictionary();
   static void vectorlESiDataBasegR_TClassManip(TClass*);
   static void *new_vectorlESiDataBasegR(void *p = 0);
   static void *newArray_vectorlESiDataBasegR(Long_t size, void *p);
   static void delete_vectorlESiDataBasegR(void *p);
   static void deleteArray_vectorlESiDataBasegR(void *p);
   static void destruct_vectorlESiDataBasegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SiDataBase>*)
   {
      vector<SiDataBase> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SiDataBase>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SiDataBase>", -2, "vector", 216,
                  typeid(vector<SiDataBase>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESiDataBasegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<SiDataBase>) );
      instance.SetNew(&new_vectorlESiDataBasegR);
      instance.SetNewArray(&newArray_vectorlESiDataBasegR);
      instance.SetDelete(&delete_vectorlESiDataBasegR);
      instance.SetDeleteArray(&deleteArray_vectorlESiDataBasegR);
      instance.SetDestructor(&destruct_vectorlESiDataBasegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SiDataBase> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SiDataBase>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESiDataBasegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SiDataBase>*)0x0)->GetClass();
      vectorlESiDataBasegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESiDataBasegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESiDataBasegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SiDataBase> : new vector<SiDataBase>;
   }
   static void *newArray_vectorlESiDataBasegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SiDataBase>[nElements] : new vector<SiDataBase>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESiDataBasegR(void *p) {
      delete ((vector<SiDataBase>*)p);
   }
   static void deleteArray_vectorlESiDataBasegR(void *p) {
      delete [] ((vector<SiDataBase>*)p);
   }
   static void destruct_vectorlESiDataBasegR(void *p) {
      typedef vector<SiDataBase> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SiDataBase>

namespace ROOT {
   static TClass *vectorlEORRUBARawDatagR_Dictionary();
   static void vectorlEORRUBARawDatagR_TClassManip(TClass*);
   static void *new_vectorlEORRUBARawDatagR(void *p = 0);
   static void *newArray_vectorlEORRUBARawDatagR(Long_t size, void *p);
   static void delete_vectorlEORRUBARawDatagR(void *p);
   static void deleteArray_vectorlEORRUBARawDatagR(void *p);
   static void destruct_vectorlEORRUBARawDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ORRUBARawData>*)
   {
      vector<ORRUBARawData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ORRUBARawData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ORRUBARawData>", -2, "vector", 216,
                  typeid(vector<ORRUBARawData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEORRUBARawDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ORRUBARawData>) );
      instance.SetNew(&new_vectorlEORRUBARawDatagR);
      instance.SetNewArray(&newArray_vectorlEORRUBARawDatagR);
      instance.SetDelete(&delete_vectorlEORRUBARawDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEORRUBARawDatagR);
      instance.SetDestructor(&destruct_vectorlEORRUBARawDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ORRUBARawData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ORRUBARawData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEORRUBARawDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ORRUBARawData>*)0x0)->GetClass();
      vectorlEORRUBARawDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEORRUBARawDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEORRUBARawDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ORRUBARawData> : new vector<ORRUBARawData>;
   }
   static void *newArray_vectorlEORRUBARawDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ORRUBARawData>[nElements] : new vector<ORRUBARawData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEORRUBARawDatagR(void *p) {
      delete ((vector<ORRUBARawData>*)p);
   }
   static void deleteArray_vectorlEORRUBARawDatagR(void *p) {
      delete [] ((vector<ORRUBARawData>*)p);
   }
   static void destruct_vectorlEORRUBARawDatagR(void *p) {
      typedef vector<ORRUBARawData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ORRUBARawData>

namespace ROOT {
   static TClass *vectorlEIonDatagR_Dictionary();
   static void vectorlEIonDatagR_TClassManip(TClass*);
   static void *new_vectorlEIonDatagR(void *p = 0);
   static void *newArray_vectorlEIonDatagR(Long_t size, void *p);
   static void delete_vectorlEIonDatagR(void *p);
   static void deleteArray_vectorlEIonDatagR(void *p);
   static void destruct_vectorlEIonDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<IonData>*)
   {
      vector<IonData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<IonData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<IonData>", -2, "vector", 216,
                  typeid(vector<IonData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEIonDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<IonData>) );
      instance.SetNew(&new_vectorlEIonDatagR);
      instance.SetNewArray(&newArray_vectorlEIonDatagR);
      instance.SetDelete(&delete_vectorlEIonDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEIonDatagR);
      instance.SetDestructor(&destruct_vectorlEIonDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<IonData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<IonData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEIonDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<IonData>*)0x0)->GetClass();
      vectorlEIonDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEIonDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEIonDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<IonData> : new vector<IonData>;
   }
   static void *newArray_vectorlEIonDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<IonData>[nElements] : new vector<IonData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEIonDatagR(void *p) {
      delete ((vector<IonData>*)p);
   }
   static void deleteArray_vectorlEIonDatagR(void *p) {
      delete [] ((vector<IonData>*)p);
   }
   static void destruct_vectorlEIonDatagR(void *p) {
      typedef vector<IonData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<IonData>

namespace ROOT {
   static TClass *vectorlETDCDatagR_Dictionary();
   static void vectorlETDCDatagR_TClassManip(TClass*);
   static void *new_vectorlETDCDatagR(void *p = 0);
   static void *newArray_vectorlETDCDatagR(Long_t size, void *p);
   static void delete_vectorlETDCDatagR(void *p);
   static void deleteArray_vectorlETDCDatagR(void *p);
   static void destruct_vectorlETDCDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TDCData>*)
   {
      vector<TDCData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TDCData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TDCData>", -2, "vector", 216,
                  typeid(vector<TDCData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETDCDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TDCData>) );
      instance.SetNew(&new_vectorlETDCDatagR);
      instance.SetNewArray(&newArray_vectorlETDCDatagR);
      instance.SetDelete(&delete_vectorlETDCDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlETDCDatagR);
      instance.SetDestructor(&destruct_vectorlETDCDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TDCData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TDCData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETDCDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TDCData>*)0x0)->GetClass();
      vectorlETDCDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETDCDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETDCDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TDCData> : new vector<TDCData>;
   }
   static void *newArray_vectorlETDCDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TDCData>[nElements] : new vector<TDCData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETDCDatagR(void *p) {
      delete ((vector<TDCData>*)p);
   }
   static void deleteArray_vectorlETDCDatagR(void *p) {
      delete [] ((vector<TDCData>*)p);
   }
   static void destruct_vectorlETDCDatagR(void *p) {
      typedef vector<TDCData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TDCData>

namespace ROOT {
   static TClass *vectorlEGretDatagR_Dictionary();
   static void vectorlEGretDatagR_TClassManip(TClass*);
   static void *new_vectorlEGretDatagR(void *p = 0);
   static void *newArray_vectorlEGretDatagR(Long_t size, void *p);
   static void delete_vectorlEGretDatagR(void *p);
   static void deleteArray_vectorlEGretDatagR(void *p);
   static void destruct_vectorlEGretDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GretData>*)
   {
      vector<GretData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GretData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GretData>", -2, "vector", 216,
                  typeid(vector<GretData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGretDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<GretData>) );
      instance.SetNew(&new_vectorlEGretDatagR);
      instance.SetNewArray(&newArray_vectorlEGretDatagR);
      instance.SetDelete(&delete_vectorlEGretDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEGretDatagR);
      instance.SetDestructor(&destruct_vectorlEGretDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GretData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<GretData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGretDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GretData>*)0x0)->GetClass();
      vectorlEGretDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGretDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGretDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GretData> : new vector<GretData>;
   }
   static void *newArray_vectorlEGretDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GretData>[nElements] : new vector<GretData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGretDatagR(void *p) {
      delete ((vector<GretData>*)p);
   }
   static void deleteArray_vectorlEGretDatagR(void *p) {
      delete [] ((vector<GretData>*)p);
   }
   static void destruct_vectorlEGretDatagR(void *p) {
      typedef vector<GretData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GretData>

namespace ROOT {
   static TClass *vectorlEGamDatagR_Dictionary();
   static void vectorlEGamDatagR_TClassManip(TClass*);
   static void *new_vectorlEGamDatagR(void *p = 0);
   static void *newArray_vectorlEGamDatagR(Long_t size, void *p);
   static void delete_vectorlEGamDatagR(void *p);
   static void deleteArray_vectorlEGamDatagR(void *p);
   static void destruct_vectorlEGamDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GamData>*)
   {
      vector<GamData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GamData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GamData>", -2, "vector", 216,
                  typeid(vector<GamData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGamDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<GamData>) );
      instance.SetNew(&new_vectorlEGamDatagR);
      instance.SetNewArray(&newArray_vectorlEGamDatagR);
      instance.SetDelete(&delete_vectorlEGamDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEGamDatagR);
      instance.SetDestructor(&destruct_vectorlEGamDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GamData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<GamData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGamDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GamData>*)0x0)->GetClass();
      vectorlEGamDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGamDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGamDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GamData> : new vector<GamData>;
   }
   static void *newArray_vectorlEGamDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GamData>[nElements] : new vector<GamData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGamDatagR(void *p) {
      delete ((vector<GamData>*)p);
   }
   static void deleteArray_vectorlEGamDatagR(void *p) {
      delete [] ((vector<GamData>*)p);
   }
   static void destruct_vectorlEGamDatagR(void *p) {
      typedef vector<GamData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GamData>

namespace ROOT {
   static TClass *vectorlEGSRawDatagR_Dictionary();
   static void vectorlEGSRawDatagR_TClassManip(TClass*);
   static void *new_vectorlEGSRawDatagR(void *p = 0);
   static void *newArray_vectorlEGSRawDatagR(Long_t size, void *p);
   static void delete_vectorlEGSRawDatagR(void *p);
   static void deleteArray_vectorlEGSRawDatagR(void *p);
   static void destruct_vectorlEGSRawDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GSRawData>*)
   {
      vector<GSRawData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GSRawData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GSRawData>", -2, "vector", 216,
                  typeid(vector<GSRawData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGSRawDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<GSRawData>) );
      instance.SetNew(&new_vectorlEGSRawDatagR);
      instance.SetNewArray(&newArray_vectorlEGSRawDatagR);
      instance.SetDelete(&delete_vectorlEGSRawDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEGSRawDatagR);
      instance.SetDestructor(&destruct_vectorlEGSRawDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GSRawData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<GSRawData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGSRawDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GSRawData>*)0x0)->GetClass();
      vectorlEGSRawDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGSRawDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGSRawDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GSRawData> : new vector<GSRawData>;
   }
   static void *newArray_vectorlEGSRawDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GSRawData>[nElements] : new vector<GSRawData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGSRawDatagR(void *p) {
      delete ((vector<GSRawData>*)p);
   }
   static void deleteArray_vectorlEGSRawDatagR(void *p) {
      delete [] ((vector<GSRawData>*)p);
   }
   static void destruct_vectorlEGSRawDatagR(void *p) {
      typedef vector<GSRawData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GSRawData>

namespace ROOT {
   static TClass *vectorlEChValPairgR_Dictionary();
   static void vectorlEChValPairgR_TClassManip(TClass*);
   static void *new_vectorlEChValPairgR(void *p = 0);
   static void *newArray_vectorlEChValPairgR(Long_t size, void *p);
   static void delete_vectorlEChValPairgR(void *p);
   static void deleteArray_vectorlEChValPairgR(void *p);
   static void destruct_vectorlEChValPairgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ChValPair>*)
   {
      vector<ChValPair> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ChValPair>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ChValPair>", -2, "vector", 216,
                  typeid(vector<ChValPair>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEChValPairgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ChValPair>) );
      instance.SetNew(&new_vectorlEChValPairgR);
      instance.SetNewArray(&newArray_vectorlEChValPairgR);
      instance.SetDelete(&delete_vectorlEChValPairgR);
      instance.SetDeleteArray(&deleteArray_vectorlEChValPairgR);
      instance.SetDestructor(&destruct_vectorlEChValPairgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ChValPair> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ChValPair>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEChValPairgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ChValPair>*)0x0)->GetClass();
      vectorlEChValPairgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEChValPairgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEChValPairgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ChValPair> : new vector<ChValPair>;
   }
   static void *newArray_vectorlEChValPairgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ChValPair>[nElements] : new vector<ChValPair>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEChValPairgR(void *p) {
      delete ((vector<ChValPair>*)p);
   }
   static void deleteArray_vectorlEChValPairgR(void *p) {
      delete [] ((vector<ChValPair>*)p);
   }
   static void destruct_vectorlEChValPairgR(void *p) {
      typedef vector<ChValPair> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ChValPair>

namespace {
  void TriggerDictionaryInitialization_GoddessStructDictionary_Impl() {
    static const char* headers[] = {
"/home/chad/goddess_daq/goddess/include/GoddessStruct.h",
0
    };
    static const char* includePaths[] = {
"/home/chad/root-6.14.06/builddir/include",
"/home/chad/goddess_daq/include",
"/home/chad/goddess_daq/toolbox/include",
"/home/chad/goddess_daq/goddess/include",
"/home/chad/goddess_daq/scripts/include",
"/home/chad/root-6.14.06/builddir/include",
"/home/chad/goddess_daq/goddess/source/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GoddessStructDictionary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  ChValPair;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
struct __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  GretData;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  ORRUBARawData;
struct __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  GSRawData;
struct __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  IonData;
struct __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  TDCData;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  SiDataDetailed;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  SiDataBase;
struct __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  GamData;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  SiDetEnStripInfo;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  GoddessGeomInfos;
class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  GoddessReacInfos;
template <class pairType> class __attribute__((annotate("$clingAutoload$/home/chad/goddess_daq/goddess/include/GoddessStruct.h")))  PNPair;

)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GoddessStructDictionary dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/chad/goddess_daq/goddess/include/GoddessStruct.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ChValPair", payloadCode, "@",
"GSRawData", payloadCode, "@",
"GamData", payloadCode, "@",
"GoddessGeomInfos", payloadCode, "@",
"GoddessReacInfos", payloadCode, "@",
"GretData", payloadCode, "@",
"IonData", payloadCode, "@",
"TDCData", payloadCode, "@",
"ORRUBARawData", payloadCode, "@",
"PNPair<ULong64_t int>", payloadCode, "@",
"PNPair<ULong64_t>", payloadCode, "@",
"PNPair<float>", payloadCode, "@",
"PNPair<int>", payloadCode, "@",
"SiDataBase", payloadCode, "@",
"SiDataDetailed", payloadCode, "@",
"SiDetEnStripInfo", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GoddessStructDictionary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GoddessStructDictionary_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GoddessStructDictionary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GoddessStructDictionary() {
  TriggerDictionaryInitialization_GoddessStructDictionary_Impl();
}
