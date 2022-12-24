#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_1b9a54e28599daba
#define INCLUDED_1b9a54e28599daba
#include "wx/propgrid/propgrid.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_BoolProperty
#include <hx/widgets/BoolProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EnumProperty
#include <hx/widgets/EnumProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_IntProperty
#include <hx/widgets/IntProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_PGProperty
#include <hx/widgets/PGProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_PropertyCategory
#include <hx/widgets/PropertyCategory.h>
#endif
#ifndef INCLUDED_hx_widgets_PropertyGrid
#include <hx/widgets/PropertyGrid.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_StringProperty
#include <hx/widgets/StringProperty.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_PropertyGridAttributes
#include <wx/widgets/styles/PropertyGridAttributes.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_PropertyGridStyles
#include <wx/widgets/styles/PropertyGridStyles.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fa55ba17c6b82931_11_new,"hx.widgets.PropertyGrid","new",0x2401488a,"hx.widgets.PropertyGrid.new","hx/widgets/PropertyGrid.hx",11,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_24_append,"hx.widgets.PropertyGrid","append",0xa3a45ff0,"hx.widgets.PropertyGrid.append","hx/widgets/PropertyGrid.hx",24,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_33_getProperty,"hx.widgets.PropertyGrid","getProperty",0xafacbd35,"hx.widgets.PropertyGrid.getProperty","hx/widgets/PropertyGrid.hx",33,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_43_setPropertyAttribute,"hx.widgets.PropertyGrid","setPropertyAttribute",0x2e397b9b,"hx.widgets.PropertyGrid.setPropertyAttribute","hx/widgets/PropertyGrid.hx",43,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_52_appendCategory,"hx.widgets.PropertyGrid","appendCategory",0xc70bb70e,"hx.widgets.PropertyGrid.appendCategory","hx/widgets/PropertyGrid.hx",52,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_60_appendStringProperty,"hx.widgets.PropertyGrid","appendStringProperty",0x27c0de56,"hx.widgets.PropertyGrid.appendStringProperty","hx/widgets/PropertyGrid.hx",60,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_68_appendIntProperty,"hx.widgets.PropertyGrid","appendIntProperty",0x9eba7654,"hx.widgets.PropertyGrid.appendIntProperty","hx/widgets/PropertyGrid.hx",68,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_76_appendBoolProperty,"hx.widgets.PropertyGrid","appendBoolProperty",0x148396af,"hx.widgets.PropertyGrid.appendBoolProperty","hx/widgets/PropertyGrid.hx",76,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_86_appendEnumProperty,"hx.widgets.PropertyGrid","appendEnumProperty",0xad93ac86,"hx.widgets.PropertyGrid.appendEnumProperty","hx/widgets/PropertyGrid.hx",86,0xdd339f64)
HX_LOCAL_STACK_FRAME(_hx_pos_fa55ba17c6b82931_98_get_propertyGridRef,"hx.widgets.PropertyGrid","get_propertyGridRef",0x2c573999,"hx.widgets.PropertyGrid.get_propertyGridRef","hx/widgets/PropertyGrid.hx",98,0xdd339f64)
namespace hx{
namespace widgets{

void PropertyGrid_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_fa55ba17c6b82931_11_new)
HXLINE(  12)		if ((style == 0)) {
HXLINE(  13)			style = (::wx::widgets::styles::PropertyGridStyles_obj::DEFAULT_STYLE | ::wx::widgets::styles::PropertyGridStyles_obj::SPLITTER_AUTO_CENTER);
            		}
HXLINE(  15)		if (::hx::IsNull( this->_ref )) {
HXLINE(  16)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxPropertyGrid()))->reinterpret();
HXLINE(  17)			 wxPropertyGrid * _hx_tmp = this->get_propertyGridRef()->ptr;
HXDLIN(  17)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  17)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  17)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  17)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  20)		super::__construct(parent,id,null());
            	}

Dynamic PropertyGrid_obj::__CreateEmpty() { return new PropertyGrid_obj; }

void *PropertyGrid_obj::_hx_vtable = 0;

Dynamic PropertyGrid_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyGrid_obj > _hx_result = new PropertyGrid_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool PropertyGrid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x467ba226;
		}
	} else {
		return inClassId==(int)0x5d92cb6f || inClassId==(int)0x6335c496;
	}
}

 ::hx::widgets::PGProperty PropertyGrid_obj::append( ::hx::widgets::PGProperty property){
            	HX_GC_STACKFRAME(&_hx_pos_fa55ba17c6b82931_24_append)
HXLINE(  25)		::cpp::Pointer<  wxPGProperty > p = property->get_propertyRef();
HXLINE(  26)		 wxPropertyGrid * r = this->get_propertyGridRef()->ptr;
HXDLIN(  26)		 wxPGProperty* r1 = (*(r)).Append(p->get_raw());
HXLINE(  27)		 ::hx::widgets::PGProperty prop =  ::hx::widgets::PGProperty_obj::__alloc( HX_CTX );
HXLINE(  28)		prop->_ref = ::cpp::Pointer_obj::fromRaw(r1)->reinterpret();
HXLINE(  29)		return prop;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PropertyGrid_obj,append,return )

 ::hx::widgets::PGProperty PropertyGrid_obj::getProperty(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_fa55ba17c6b82931_33_getProperty)
HXLINE(  34)		 ::hx::widgets::PGProperty p =  ::hx::widgets::PGProperty_obj::__alloc( HX_CTX );
HXLINE(  36)		const char* this1 = name.utf8_str();
HXDLIN(  36)		 wxString strName = wxString::FromUTF8(this1);
HXLINE(  37)		 wxPGProperty* pProp = this->get_propertyGridRef()->ptr->GetProperty(strName);
HXLINE(  38)		p->_ref = ::cpp::Pointer_obj::fromRaw(pProp)->reinterpret();
HXLINE(  40)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PropertyGrid_obj,getProperty,return )

void PropertyGrid_obj::setPropertyAttribute(::String id,::String attrName, ::Dynamic value,::hx::Null< int >  __o_argFlags){
            		int argFlags = __o_argFlags.Default(0);
            	HX_STACKFRAME(&_hx_pos_fa55ba17c6b82931_43_setPropertyAttribute)
HXLINE(  44)		const char* this1 = id.utf8_str();
HXDLIN(  44)		 wxString strId = wxString::FromUTF8(this1);
HXLINE(  45)		const char* this2 = attrName.utf8_str();
HXDLIN(  45)		 wxString strAttrName = wxString::FromUTF8(this2);
HXLINE(  46)		this->get_propertyGridRef()->ptr->SetPropertyAttribute(strId,strAttrName,( (bool)(value) ),argFlags);
            	}


HX_DEFINE_DYNAMIC_FUNC4(PropertyGrid_obj,setPropertyAttribute,(void))

 ::hx::widgets::PGProperty PropertyGrid_obj::appendCategory(::String label,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_fa55ba17c6b82931_52_appendCategory)
HXLINE(  53)		if (::hx::IsNull( name )) {
HXLINE(  54)			name = label;
            		}
HXLINE(  56)		 ::hx::widgets::PropertyCategory p =  ::hx::widgets::PropertyCategory_obj::__alloc( HX_CTX ,label,name);
HXLINE(  57)		return this->append(p);
            	}


HX_DEFINE_DYNAMIC_FUNC2(PropertyGrid_obj,appendCategory,return )

 ::hx::widgets::PGProperty PropertyGrid_obj::appendStringProperty(::String label,::String value,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_fa55ba17c6b82931_60_appendStringProperty)
HXLINE(  61)		if (::hx::IsNull( name )) {
HXLINE(  62)			name = label;
            		}
HXLINE(  64)		 ::hx::widgets::StringProperty p =  ::hx::widgets::StringProperty_obj::__alloc( HX_CTX ,label,name,value);
HXLINE(  65)		return this->append(p);
            	}


HX_DEFINE_DYNAMIC_FUNC3(PropertyGrid_obj,appendStringProperty,return )

 ::hx::widgets::PGProperty PropertyGrid_obj::appendIntProperty(::String label,int value,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_fa55ba17c6b82931_68_appendIntProperty)
HXLINE(  69)		if (::hx::IsNull( name )) {
HXLINE(  70)			name = label;
            		}
HXLINE(  72)		 ::hx::widgets::IntProperty p =  ::hx::widgets::IntProperty_obj::__alloc( HX_CTX ,label,name,value);
HXLINE(  73)		return this->append(p);
            	}


HX_DEFINE_DYNAMIC_FUNC3(PropertyGrid_obj,appendIntProperty,return )

 ::hx::widgets::PGProperty PropertyGrid_obj::appendBoolProperty(::String label,bool value,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_fa55ba17c6b82931_76_appendBoolProperty)
HXLINE(  77)		if (::hx::IsNull( name )) {
HXLINE(  78)			name = label;
            		}
HXLINE(  80)		 ::hx::widgets::BoolProperty p =  ::hx::widgets::BoolProperty_obj::__alloc( HX_CTX ,label,name,value);
HXLINE(  81)		 ::hx::widgets::PGProperty r = this->append(p);
HXLINE(  82)		this->setPropertyAttribute(name,::wx::widgets::styles::PropertyGridAttributes_obj::BOOL_USE_CHECKBOX,true,null());
HXLINE(  83)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC3(PropertyGrid_obj,appendBoolProperty,return )

 ::hx::widgets::PGProperty PropertyGrid_obj::appendEnumProperty(::String label,::Array< ::Dynamic> choices,::hx::Null< int >  __o_value,::String name){
            		int value = __o_value.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_fa55ba17c6b82931_86_appendEnumProperty)
HXLINE(  87)		if (::hx::IsNull( name )) {
HXLINE(  88)			name = label;
            		}
HXLINE(  90)		 ::hx::widgets::EnumProperty p =  ::hx::widgets::EnumProperty_obj::__alloc( HX_CTX ,label,name,choices,value);
HXLINE(  91)		return this->append(p);
            	}


HX_DEFINE_DYNAMIC_FUNC4(PropertyGrid_obj,appendEnumProperty,return )

::cpp::Pointer<  wxPropertyGrid > PropertyGrid_obj::get_propertyGridRef(){
            	HX_STACKFRAME(&_hx_pos_fa55ba17c6b82931_98_get_propertyGridRef)
HXDLIN(  98)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PropertyGrid_obj,get_propertyGridRef,return )


::hx::ObjectPtr< PropertyGrid_obj > PropertyGrid_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< PropertyGrid_obj > __this = new PropertyGrid_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< PropertyGrid_obj > PropertyGrid_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	PropertyGrid_obj *__this = (PropertyGrid_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyGrid_obj), true, "hx.widgets.PropertyGrid"));
	*(void **)__this = PropertyGrid_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

PropertyGrid_obj::PropertyGrid_obj()
{
}

void PropertyGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyGrid);
	HX_MARK_MEMBER_NAME(propertyGridRef,"propertyGridRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyGrid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(propertyGridRef,"propertyGridRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PropertyGrid_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getProperty") ) { return ::hx::Val( getProperty_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendCategory") ) { return ::hx::Val( appendCategory_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propertyGridRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_propertyGridRef() : propertyGridRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendIntProperty") ) { return ::hx::Val( appendIntProperty_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"appendBoolProperty") ) { return ::hx::Val( appendBoolProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"appendEnumProperty") ) { return ::hx::Val( appendEnumProperty_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_propertyGridRef") ) { return ::hx::Val( get_propertyGridRef_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setPropertyAttribute") ) { return ::hx::Val( setPropertyAttribute_dyn() ); }
		if (HX_FIELD_EQ(inName,"appendStringProperty") ) { return ::hx::Val( appendStringProperty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PropertyGrid_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"propertyGridRef") ) { propertyGridRef=inValue.Cast< ::cpp::Pointer<  wxPropertyGrid > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("propertyGridRef",58,7e,2e,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PropertyGrid_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxPropertyGrid > */ ,(int)offsetof(PropertyGrid_obj,propertyGridRef),HX_("propertyGridRef",58,7e,2e,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PropertyGrid_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyGrid_obj_sMemberFields[] = {
	HX_("append",da,e1,d3,8f),
	HX_("getProperty",0b,0b,2c,d2),
	HX_("setPropertyAttribute",05,c3,28,68),
	HX_("appendCategory",f8,32,ce,70),
	HX_("appendStringProperty",c0,25,b0,61),
	HX_("appendIntProperty",aa,c8,22,e2),
	HX_("appendBoolProperty",99,4f,63,cc),
	HX_("appendEnumProperty",70,65,73,65),
	HX_("propertyGridRef",58,7e,2e,cd),
	HX_("get_propertyGridRef",6f,4d,39,58),
	::String(null()) };

::hx::Class PropertyGrid_obj::__mClass;

void PropertyGrid_obj::__register()
{
	PropertyGrid_obj _hx_dummy;
	PropertyGrid_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.PropertyGrid",98,fb,43,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyGrid_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyGrid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyGrid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyGrid_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
