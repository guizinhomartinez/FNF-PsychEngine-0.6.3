#include <hxcpp.h>

#ifndef INCLUDED_453869af60c07cda
#define INCLUDED_453869af60c07cda
#include "wx/hashmap.h"
#endif
#ifndef INCLUDED_7e59142ed5699e1d
#define INCLUDED_7e59142ed5699e1d
#include "wx/process.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_0fc50924661fa785
#define INCLUDED_0fc50924661fa785
#include "wx/utils.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Globals
#include <hx/widgets/Globals.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Process
#include <hx/widgets/Process.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2cf361316a3bbd0c_16_shell,"hx.widgets.Globals","shell",0xcf992af5,"hx.widgets.Globals.shell","hx/widgets/Globals.hx",16,0x06c8ab2d)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf361316a3bbd0c_23_execute,"hx.widgets.Globals","execute",0xe20f27ba,"hx.widgets.Globals.execute","hx/widgets/Globals.hx",23,0x06c8ab2d)
HX_LOCAL_STACK_FRAME(_hx_pos_2cf361316a3bbd0c_48_yield,"hx.widgets.Globals","yield",0x44a9dc92,"hx.widgets.Globals.yield","hx/widgets/Globals.hx",48,0x06c8ab2d)
namespace hx{
namespace widgets{

void Globals_obj::__construct() { }

Dynamic Globals_obj::__CreateEmpty() { return new Globals_obj; }

void *Globals_obj::_hx_vtable = 0;

Dynamic Globals_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Globals_obj > _hx_result = new Globals_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Globals_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11d37645;
}

void Globals_obj::shell(::String __o_command){
            		::String command = __o_command;
            		if (::hx::IsNull(__o_command)) command = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_2cf361316a3bbd0c_16_shell)
HXLINE(  17)		const char* this1 = command.utf8_str();
HXDLIN(  17)		::cpp::Pointer<  wxString > s = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  18)		::wxShell(s->get_ref());
HXLINE(  19)		s->destroy();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Globals_obj,shell,(void))

int Globals_obj::execute(::String cmd,::hx::Null< int >  __o_flags, ::hx::widgets::Process callback, ::Dynamic env){
            		int flags = __o_flags.Default(0);
            	HX_STACKFRAME(&_hx_pos_2cf361316a3bbd0c_23_execute)
HXLINE(  24)		if (::hx::IsNull( env )) {
HXLINE(  25)			env =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  28)		 wxProcess* pCallback = null();
HXLINE(  29)		if (::hx::IsNotNull( callback )) {
HXLINE(  30)			pCallback = callback->get_processRef()->get_raw();
            		}
HXLINE(  33)		 wxExecuteEnv* pEnv = null();
HXLINE(  34)		::String s = ( (::String)(env->__Field(HX_("cwd",30,87,4b,00),::hx::paccDynamic)) );
HXLINE(  35)		const char* this1 = s.utf8_str();
HXDLIN(  35)		::cpp::Pointer<  wxString > cwd = ::cpp::Pointer_obj::fromRaw((new wxString(this1)));
HXLINE(  36)		::cpp::Pointer<  wxStringToStringHashMap > map = ::cpp::Pointer_obj::fromRaw((new wxStringToStringHashMap()));
HXLINE(  37)		 wxString cwd1 = cwd->get_ref();
HXDLIN(  37)		 wxStringToStringHashMap env1 = map->get_ref();
HXDLIN(  37)		 wxExecuteEnv param = { cwd1, env1 };
HXLINE(  38)		pEnv = ::cpp::Pointer_obj::addressOf(param)->get_raw();
HXLINE(  40)		const char* this2 = cmd.utf8_str();
HXDLIN(  40)		::cpp::Pointer<  wxString > wxCmd = ::cpp::Pointer_obj::fromRaw((new wxString(this2)));
HXLINE(  41)		int pid = ::wxExecute(wxCmd->get_ref(),flags,pCallback,pEnv);
HXLINE(  42)		wxCmd->destroy();
HXLINE(  44)		return pid;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Globals_obj,execute,return )

bool Globals_obj::yield(){
            	HX_STACKFRAME(&_hx_pos_2cf361316a3bbd0c_48_yield)
HXDLIN(  48)		return ::wxYield();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Globals_obj,yield,return )


Globals_obj::Globals_obj()
{
}

bool Globals_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shell") ) { outValue = shell_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"yield") ) { outValue = yield_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { outValue = execute_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Globals_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Globals_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Globals_obj::__mClass;

static ::String Globals_obj_sStaticFields[] = {
	HX_("shell",b0,e8,1f,7c),
	HX_("execute",35,0a,0d,cc),
	HX_("yield",4d,9a,30,f1),
	::String(null())
};

void Globals_obj::__register()
{
	Globals_obj _hx_dummy;
	Globals_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Globals",f3,f0,5a,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Globals_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Globals_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Globals_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Globals_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Globals_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
