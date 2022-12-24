#include <hxcpp.h>

#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_3f256efeda3a1a55
#define INCLUDED_3f256efeda3a1a55
#include "wx/sizer.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Sizer
#include <hx/widgets/Sizer.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_9_new,"hx.widgets.Sizer","new",0xedb84806,"hx.widgets.Sizer.new","hx/widgets/Sizer.hx",9,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_16_add,"hx.widgets.Sizer","add",0xedae69c7,"hx.widgets.Sizer.add","hx/widgets/Sizer.hx",16,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_20_addSizer,"hx.widgets.Sizer","addSizer",0xd5803d4a,"hx.widgets.Sizer.addSizer","hx/widgets/Sizer.hx",20,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_24_insert,"hx.widgets.Sizer","insert",0x3d169753,"hx.widgets.Sizer.insert","hx/widgets/Sizer.hx",24,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_28_insertSizer,"hx.widgets.Sizer","insertSizer",0xb64b743e,"hx.widgets.Sizer.insertSizer","hx/widgets/Sizer.hx",28,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_32_addSpacer,"hx.widgets.Sizer","addSpacer",0xf1fb8e13,"hx.widgets.Sizer.addSpacer","hx/widgets/Sizer.hx",32,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_36_addStretchSpacer,"hx.widgets.Sizer","addStretchSpacer",0x379a3a8a,"hx.widgets.Sizer.addStretchSpacer","hx/widgets/Sizer.hx",36,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_40_remove,"hx.widgets.Sizer","remove",0xa3c1f05e,"hx.widgets.Sizer.remove","hx/widgets/Sizer.hx",40,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_44_layout,"hx.widgets.Sizer","layout",0xf7f202c4,"hx.widgets.Sizer.layout","hx/widgets/Sizer.hx",44,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_62_get_sizerRef,"hx.widgets.Sizer","get_sizerRef",0x43ca90e5,"hx.widgets.Sizer.get_sizerRef","hx/widgets/Sizer.hx",62,0xcae8552c)
HX_LOCAL_STACK_FRAME(_hx_pos_e37eb04ea2e5668d_50_toRaw,"hx.widgets.Sizer","toRaw",0x7d46b453,"hx.widgets.Sizer.toRaw","hx/widgets/Sizer.hx",50,0xcae8552c)
namespace hx{
namespace widgets{

void Sizer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic Sizer_obj::__CreateEmpty() { return new Sizer_obj; }

void *Sizer_obj::_hx_vtable = 0;

Dynamic Sizer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sizer_obj > _hx_result = new Sizer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sizer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x56489aba;
	}
}

void Sizer_obj::add( ::hx::widgets::Window window,::hx::Null< int >  __o_proportion,::hx::Null< int >  __o_flag,::hx::Null< int >  __o_border){
            		int proportion = __o_proportion.Default(0);
            		int flag = __o_flag.Default(0);
            		int border = __o_border.Default(0);
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_16_add)
HXDLIN(  16)		 wxSizer * _hx_tmp = this->get_sizerRef()->ptr;
HXDLIN(  16)		(*(_hx_tmp)).Add(::hx::widgets::Window_obj::toRaw(window),proportion,flag,border);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Sizer_obj,add,(void))

void Sizer_obj::addSizer( ::hx::widgets::Sizer sizer,::hx::Null< int >  __o_proportion,::hx::Null< int >  __o_flag,::hx::Null< int >  __o_border){
            		int proportion = __o_proportion.Default(0);
            		int flag = __o_flag.Default(0);
            		int border = __o_border.Default(0);
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_20_addSizer)
HXDLIN(  20)		 wxSizer * _hx_tmp = this->get_sizerRef()->ptr;
HXDLIN(  20)		(*(_hx_tmp)).Add(::hx::widgets::Sizer_obj::toRaw(sizer),proportion,flag,border);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Sizer_obj,addSizer,(void))

void Sizer_obj::insert(int index, ::hx::widgets::Window window,::hx::Null< int >  __o_proportion,::hx::Null< int >  __o_flag,::hx::Null< int >  __o_border){
            		int proportion = __o_proportion.Default(0);
            		int flag = __o_flag.Default(0);
            		int border = __o_border.Default(0);
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_24_insert)
HXDLIN(  24)		 wxSizer * _hx_tmp = this->get_sizerRef()->ptr;
HXDLIN(  24)		(*(_hx_tmp)).Insert(index,::hx::widgets::Window_obj::toRaw(window),proportion,flag,border);
            	}


HX_DEFINE_DYNAMIC_FUNC5(Sizer_obj,insert,(void))

void Sizer_obj::insertSizer(int index, ::hx::widgets::Sizer sizer,::hx::Null< int >  __o_proportion,::hx::Null< int >  __o_flag,::hx::Null< int >  __o_border){
            		int proportion = __o_proportion.Default(0);
            		int flag = __o_flag.Default(0);
            		int border = __o_border.Default(0);
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_28_insertSizer)
HXDLIN(  28)		 wxSizer * _hx_tmp = this->get_sizerRef()->ptr;
HXDLIN(  28)		(*(_hx_tmp)).Insert(index,::hx::widgets::Sizer_obj::toRaw(sizer),proportion,flag,border);
            	}


HX_DEFINE_DYNAMIC_FUNC5(Sizer_obj,insertSizer,(void))

void Sizer_obj::addSpacer(int size){
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_32_addSpacer)
HXDLIN(  32)		this->get_sizerRef()->ptr->AddSpacer(size);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sizer_obj,addSpacer,(void))

void Sizer_obj::addStretchSpacer(){
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_36_addStretchSpacer)
HXDLIN(  36)		this->get_sizerRef()->ptr->AddStretchSpacer();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sizer_obj,addStretchSpacer,(void))

bool Sizer_obj::remove(int index){
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_40_remove)
HXDLIN(  40)		return this->get_sizerRef()->ptr->Remove(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sizer_obj,remove,return )

void Sizer_obj::layout(){
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_44_layout)
HXDLIN(  44)		this->get_sizerRef()->ptr->Layout();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sizer_obj,layout,(void))

::cpp::Pointer<  wxSizer > Sizer_obj::get_sizerRef(){
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_62_get_sizerRef)
HXDLIN(  62)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sizer_obj,get_sizerRef,return )

 wxSizer* Sizer_obj::toRaw( ::hx::widgets::Sizer sizer){
            	HX_STACKFRAME(&_hx_pos_e37eb04ea2e5668d_50_toRaw)
HXLINE(  51)		if (::hx::IsNull( sizer )) {
HXLINE(  52)			return null();
            		}
HXLINE(  54)		return sizer->_ref->rawCast();
            	}



::hx::ObjectPtr< Sizer_obj > Sizer_obj::__new() {
	::hx::ObjectPtr< Sizer_obj > __this = new Sizer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Sizer_obj > Sizer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Sizer_obj *__this = (Sizer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sizer_obj), true, "hx.widgets.Sizer"));
	*(void **)__this = Sizer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sizer_obj::Sizer_obj()
{
}

void Sizer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sizer);
	HX_MARK_MEMBER_NAME(sizerRef,"sizerRef");
	 ::hx::widgets::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sizer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sizerRef,"sizerRef");
	 ::hx::widgets::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Sizer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"layout") ) { return ::hx::Val( layout_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addSizer") ) { return ::hx::Val( addSizer_dyn() ); }
		if (HX_FIELD_EQ(inName,"sizerRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_sizerRef() : sizerRef ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addSpacer") ) { return ::hx::Val( addSpacer_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"insertSizer") ) { return ::hx::Val( insertSizer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_sizerRef") ) { return ::hx::Val( get_sizerRef_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addStretchSpacer") ) { return ::hx::Val( addStretchSpacer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Sizer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sizerRef") ) { sizerRef=inValue.Cast< ::cpp::Pointer<  wxSizer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sizer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sizerRef",42,79,92,fa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sizer_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxSizer > */ ,(int)offsetof(Sizer_obj,sizerRef),HX_("sizerRef",42,79,92,fa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Sizer_obj_sStaticStorageInfo = 0;
#endif

static ::String Sizer_obj_sMemberFields[] = {
	HX_("add",21,f2,49,00),
	HX_("addSizer",b0,2e,36,f6),
	HX_("insert",39,43,dd,9d),
	HX_("insertSizer",98,e6,8d,c4),
	HX_("addSpacer",ed,d5,78,70),
	HX_("addStretchSpacer",f0,01,59,e5),
	HX_("remove",44,9c,88,04),
	HX_("layout",aa,ae,b8,58),
	HX_("sizerRef",42,79,92,fa),
	HX_("get_sizerRef",4b,2d,ac,af),
	::String(null()) };

::hx::Class Sizer_obj::__mClass;

void Sizer_obj::__register()
{
	Sizer_obj _hx_dummy;
	Sizer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Sizer",14,8d,2e,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sizer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sizer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sizer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sizer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
