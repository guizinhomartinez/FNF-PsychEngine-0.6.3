#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_7e59142ed5699e1d
#define INCLUDED_7e59142ed5699e1d
#include "wx/process.h"
#endif
#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Globals
#include <hx/widgets/Globals.h>
#endif
#ifndef INCLUDED_hx_widgets_InputStream
#include <hx/widgets/InputStream.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Process
#include <hx/widgets/Process.h>
#endif
#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_165008e76f9e734c_7_new,"hx.widgets.Process","new",0xf645efa4,"hx.widgets.Process.new","hx/widgets/Process.hx",7,0x85e04fce)
HX_LOCAL_STACK_FRAME(_hx_pos_165008e76f9e734c_16_redirect,"hx.widgets.Process","redirect",0x1a1b0158,"hx.widgets.Process.redirect","hx/widgets/Process.hx",16,0x85e04fce)
HX_LOCAL_STACK_FRAME(_hx_pos_165008e76f9e734c_31_get_inputStream,"hx.widgets.Process","get_inputStream",0xb6889d05,"hx.widgets.Process.get_inputStream","hx/widgets/Process.hx",31,0x85e04fce)
HX_LOCAL_STACK_FRAME(_hx_pos_165008e76f9e734c_50_get_isInputAvailable,"hx.widgets.Process","get_isInputAvailable",0x5518b32e,"hx.widgets.Process.get_isInputAvailable","hx/widgets/Process.hx",50,0x85e04fce)
HX_LOCAL_STACK_FRAME(_hx_pos_165008e76f9e734c_55_get_isInputOpened,"hx.widgets.Process","get_isInputOpened",0xeafd6824,"hx.widgets.Process.get_isInputOpened","hx/widgets/Process.hx",55,0x85e04fce)
HX_LOCAL_STACK_FRAME(_hx_pos_165008e76f9e734c_63_get_processRef,"hx.widgets.Process","get_processRef",0xbd86c5a9,"hx.widgets.Process.get_processRef","hx/widgets/Process.hx",63,0x85e04fce)
HX_LOCAL_STACK_FRAME(_hx_pos_165008e76f9e734c_66_open,"hx.widgets.Process","open",0x879d4006,"hx.widgets.Process.open","hx/widgets/Process.hx",66,0x85e04fce)
namespace hx{
namespace widgets{

void Process_obj::__construct(::hx::Null< int >  __o_id,::hx::Null< bool >  __o_create){
            		int id = __o_id.Default(-1);
            		bool create = __o_create.Default(true);
            	HX_STACKFRAME(&_hx_pos_165008e76f9e734c_7_new)
HXLINE(  28)		this->_inputStream = null();
HXLINE(   9)		if ((create == true)) {
HXLINE(  10)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxProcess(id)))->reinterpret();
            		}
HXLINE(  12)		super::__construct();
            	}

Dynamic Process_obj::__CreateEmpty() { return new Process_obj; }

void *Process_obj::_hx_vtable = 0;

Dynamic Process_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Process_obj > _hx_result = new Process_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Process_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		if (inClassId<=(int)0x02bb7e68) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02bb7e68;
		} else {
			return inClassId==(int)0x2045b63e;
		}
	} else {
		return inClassId==(int)0x467ba226;
	}
}

void Process_obj::redirect(){
            	HX_STACKFRAME(&_hx_pos_165008e76f9e734c_16_redirect)
HXDLIN(  16)		this->get_processRef()->ptr->Redirect();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Process_obj,redirect,(void))

 ::hx::widgets::InputStream Process_obj::get_inputStream(){
            	HX_GC_STACKFRAME(&_hx_pos_165008e76f9e734c_31_get_inputStream)
HXLINE(  32)		if (::hx::IsNotNull( this->_inputStream )) {
HXLINE(  33)			return this->_inputStream;
            		}
HXLINE(  37)		while((this->get_isInputOpened() == false)){
HXLINE(  39)			::hx::widgets::Globals_obj::yield();
            		}
HXLINE(  42)		this->_inputStream =  ::hx::widgets::InputStream_obj::__alloc( HX_CTX );
HXLINE(  43)		 wxInputStream* p = this->get_processRef()->ptr->GetInputStream();
HXLINE(  44)		this->_inputStream->_ref = ::cpp::Pointer_obj::fromRaw(p)->reinterpret();
HXLINE(  45)		return this->_inputStream;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Process_obj,get_inputStream,return )

bool Process_obj::get_isInputAvailable(){
            	HX_STACKFRAME(&_hx_pos_165008e76f9e734c_50_get_isInputAvailable)
HXDLIN(  50)		return this->get_processRef()->ptr->IsInputAvailable();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Process_obj,get_isInputAvailable,return )

bool Process_obj::get_isInputOpened(){
            	HX_STACKFRAME(&_hx_pos_165008e76f9e734c_55_get_isInputOpened)
HXDLIN(  55)		return this->get_processRef()->ptr->IsInputOpened();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Process_obj,get_isInputOpened,return )

::cpp::Pointer<  wxProcess > Process_obj::get_processRef(){
            	HX_STACKFRAME(&_hx_pos_165008e76f9e734c_63_get_processRef)
HXDLIN(  63)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Process_obj,get_processRef,return )

 ::hx::widgets::Process Process_obj::open(::String cmd){
            	HX_GC_STACKFRAME(&_hx_pos_165008e76f9e734c_66_open)
HXLINE(  67)		const char* this1 = cmd.utf8_str();
HXDLIN(  67)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  68)		 wxProcess* p = wxProcess::Open(s->get_ref());
HXLINE(  69)		s->destroy();
HXLINE(  70)		 ::hx::widgets::Process process =  ::hx::widgets::Process_obj::__alloc( HX_CTX ,null(),false);
HXLINE(  71)		process->_ref = ::cpp::Pointer_obj::fromRaw(p)->reinterpret();
HXLINE(  72)		return process;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Process_obj,open,return )


::hx::ObjectPtr< Process_obj > Process_obj::__new(::hx::Null< int >  __o_id,::hx::Null< bool >  __o_create) {
	::hx::ObjectPtr< Process_obj > __this = new Process_obj();
	__this->__construct(__o_id,__o_create);
	return __this;
}

::hx::ObjectPtr< Process_obj > Process_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_id,::hx::Null< bool >  __o_create) {
	Process_obj *__this = (Process_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Process_obj), true, "hx.widgets.Process"));
	*(void **)__this = Process_obj::_hx_vtable;
	__this->__construct(__o_id,__o_create);
	return __this;
}

Process_obj::Process_obj()
{
}

void Process_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Process);
	HX_MARK_MEMBER_NAME(_inputStream,"_inputStream");
	HX_MARK_MEMBER_NAME(inputStream,"inputStream");
	HX_MARK_MEMBER_NAME(isInputAvailable,"isInputAvailable");
	HX_MARK_MEMBER_NAME(isInputOpened,"isInputOpened");
	HX_MARK_MEMBER_NAME(processRef,"processRef");
	 ::hx::widgets::EvtHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Process_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_inputStream,"_inputStream");
	HX_VISIT_MEMBER_NAME(inputStream,"inputStream");
	HX_VISIT_MEMBER_NAME(isInputAvailable,"isInputAvailable");
	HX_VISIT_MEMBER_NAME(isInputOpened,"isInputOpened");
	HX_VISIT_MEMBER_NAME(processRef,"processRef");
	 ::hx::widgets::EvtHandler_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Process_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"redirect") ) { return ::hx::Val( redirect_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"processRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_processRef() : processRef ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputStream") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_inputStream() : inputStream ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inputStream") ) { return ::hx::Val( _inputStream ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInputOpened") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isInputOpened() : isInputOpened ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_processRef") ) { return ::hx::Val( get_processRef_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_inputStream") ) { return ::hx::Val( get_inputStream_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isInputAvailable") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isInputAvailable() : isInputAvailable ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_isInputOpened") ) { return ::hx::Val( get_isInputOpened_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_isInputAvailable") ) { return ::hx::Val( get_isInputAvailable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Process_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { outValue = open_dyn(); return true; }
	}
	return false;
}

::hx::Val Process_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"processRef") ) { processRef=inValue.Cast< ::cpp::Pointer<  wxProcess > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputStream") ) { inputStream=inValue.Cast<  ::hx::widgets::InputStream >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inputStream") ) { _inputStream=inValue.Cast<  ::hx::widgets::InputStream >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInputOpened") ) { isInputOpened=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isInputAvailable") ) { isInputAvailable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Process_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_inputStream",2b,9e,6a,6c));
	outFields->push(HX_("inputStream",2a,f0,60,06));
	outFields->push(HX_("isInputAvailable",e9,d9,67,00));
	outFields->push(HX_("isInputOpened",89,8e,ec,1f));
	outFields->push(HX_("processRef",24,de,23,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Process_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::InputStream */ ,(int)offsetof(Process_obj,_inputStream),HX_("_inputStream",2b,9e,6a,6c)},
	{::hx::fsObject /*  ::hx::widgets::InputStream */ ,(int)offsetof(Process_obj,inputStream),HX_("inputStream",2a,f0,60,06)},
	{::hx::fsBool,(int)offsetof(Process_obj,isInputAvailable),HX_("isInputAvailable",e9,d9,67,00)},
	{::hx::fsBool,(int)offsetof(Process_obj,isInputOpened),HX_("isInputOpened",89,8e,ec,1f)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxProcess > */ ,(int)offsetof(Process_obj,processRef),HX_("processRef",24,de,23,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Process_obj_sStaticStorageInfo = 0;
#endif

static ::String Process_obj_sMemberFields[] = {
	HX_("redirect",1c,f7,d8,9c),
	HX_("_inputStream",2b,9e,6a,6c),
	HX_("inputStream",2a,f0,60,06),
	HX_("get_inputStream",c1,a7,42,c7),
	HX_("isInputAvailable",e9,d9,67,00),
	HX_("get_isInputAvailable",f2,3e,d2,1e),
	HX_("isInputOpened",89,8e,ec,1f),
	HX_("get_isInputOpened",e0,99,5c,26),
	HX_("processRef",24,de,23,d7),
	HX_("get_processRef",6d,66,19,4d),
	::String(null()) };

::hx::Class Process_obj::__mClass;

static ::String Process_obj_sStaticFields[] = {
	HX_("open",ca,03,b4,49),
	::String(null())
};

void Process_obj::__register()
{
	Process_obj _hx_dummy;
	Process_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Process",b2,8d,6c,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Process_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Process_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Process_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Process_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Process_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Process_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
