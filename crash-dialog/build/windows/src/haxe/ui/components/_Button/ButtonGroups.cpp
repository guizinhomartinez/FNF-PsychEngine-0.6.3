#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_ButtonGroups
#include <haxe/ui/components/_Button/ButtonGroups.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_556c2a3b10bc30a7_750_new,"haxe.ui.components._Button.ButtonGroups","new",0x1a2f83db,"haxe.ui.components._Button.ButtonGroups.new","haxe/ui/components/Button.hx",750,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_556c2a3b10bc30a7_755_get,"haxe.ui.components._Button.ButtonGroups","get",0x1a2a3411,"haxe.ui.components._Button.ButtonGroups.get","haxe/ui/components/Button.hx",755,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_556c2a3b10bc30a7_759_set,"haxe.ui.components._Button.ButtonGroups","set",0x1a334f1d,"haxe.ui.components._Button.ButtonGroups.set","haxe/ui/components/Button.hx",759,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_556c2a3b10bc30a7_762_add,"haxe.ui.components._Button.ButtonGroups","add",0x1a25a59c,"haxe.ui.components._Button.ButtonGroups.add","haxe/ui/components/Button.hx",762,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_556c2a3b10bc30a7_774_remove,"haxe.ui.components._Button.ButtonGroups","remove",0xe80c07a9,"haxe.ui.components._Button.ButtonGroups.remove","haxe/ui/components/Button.hx",774,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_556c2a3b10bc30a7_786_reset,"haxe.ui.components._Button.ButtonGroups","reset",0xf594120a,"haxe.ui.components._Button.ButtonGroups.reset","haxe/ui/components/Button.hx",786,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_556c2a3b10bc30a7_740_get_instance,"haxe.ui.components._Button.ButtonGroups","get_instance",0xd75858c3,"haxe.ui.components._Button.ButtonGroups.get_instance","haxe/ui/components/Button.hx",740,0x45086125)
namespace haxe{
namespace ui{
namespace components{
namespace _Button{

void ButtonGroups_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_556c2a3b10bc30a7_750_new)
HXDLIN( 750)		this->_groups =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ButtonGroups_obj::__CreateEmpty() { return new ButtonGroups_obj; }

void *ButtonGroups_obj::_hx_vtable = 0;

Dynamic ButtonGroups_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonGroups_obj > _hx_result = new ButtonGroups_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ButtonGroups_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4bba63a7;
}

::Array< ::Dynamic> ButtonGroups_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_556c2a3b10bc30a7_755_get)
HXDLIN( 755)		return ( (::Array< ::Dynamic>)(this->_groups->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonGroups_obj,get,return )

void ButtonGroups_obj::set(::String name,::Array< ::Dynamic> buttons){
            	HX_STACKFRAME(&_hx_pos_556c2a3b10bc30a7_759_set)
HXDLIN( 759)		this->_groups->set(name,buttons);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonGroups_obj,set,(void))

void ButtonGroups_obj::add(::String name, ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_556c2a3b10bc30a7_762_add)
HXLINE( 763)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 764)		if (::hx::IsNull( arr )) {
HXLINE( 765)			arr = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 768)		if ((arr->indexOf(button,null()) == -1)) {
HXLINE( 769)			arr->push(button);
            		}
HXLINE( 771)		this->set(name,arr);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonGroups_obj,add,(void))

void ButtonGroups_obj::remove(::String name, ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_556c2a3b10bc30a7_774_remove)
HXLINE( 775)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 776)		if (::hx::IsNull( arr )) {
HXLINE( 777)			return;
            		}
HXLINE( 780)		arr->remove(button);
HXLINE( 781)		if ((arr->length == 0)) {
HXLINE( 782)			this->_groups->remove(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ButtonGroups_obj,remove,(void))

void ButtonGroups_obj::reset(::String name){
            	HX_STACKFRAME(&_hx_pos_556c2a3b10bc30a7_786_reset)
HXLINE( 787)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 788)		if (::hx::IsNull( arr )) {
HXLINE( 789)			return;
            		}
HXLINE( 792)		 ::haxe::ui::components::Button selection = null();
HXLINE( 793)		{
HXLINE( 793)			int _g = 0;
HXDLIN( 793)			while((_g < arr->length)){
HXLINE( 793)				 ::haxe::ui::components::Button item = arr->__get(_g).StaticCast<  ::haxe::ui::components::Button >();
HXDLIN( 793)				_g = (_g + 1);
HXLINE( 794)				if ((item->get_selected() == true)) {
HXLINE( 795)					selection = item;
HXLINE( 796)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 800)		if (::hx::IsNull( selection )) {
HXLINE( 801)			return;
            		}
HXLINE( 804)		::hx::TCast<  ::haxe::ui::components::ButtonBuilder >::cast(selection->_compositeBuilder)->setSelection(selection,false,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ButtonGroups_obj,reset,(void))

 ::haxe::ui::components::_Button::ButtonGroups ButtonGroups_obj::_instance;

 ::haxe::ui::components::_Button::ButtonGroups ButtonGroups_obj::instance;

 ::haxe::ui::components::_Button::ButtonGroups ButtonGroups_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_556c2a3b10bc30a7_740_get_instance)
HXLINE( 741)		if (::hx::IsNull( ::haxe::ui::components::_Button::ButtonGroups_obj::_instance )) {
HXLINE( 742)			::haxe::ui::components::_Button::ButtonGroups_obj::_instance =  ::haxe::ui::components::_Button::ButtonGroups_obj::__alloc( HX_CTX );
            		}
HXLINE( 744)		return ::haxe::ui::components::_Button::ButtonGroups_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ButtonGroups_obj,get_instance,return )


::hx::ObjectPtr< ButtonGroups_obj > ButtonGroups_obj::__new() {
	::hx::ObjectPtr< ButtonGroups_obj > __this = new ButtonGroups_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ButtonGroups_obj > ButtonGroups_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ButtonGroups_obj *__this = (ButtonGroups_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonGroups_obj), true, "haxe.ui.components._Button.ButtonGroups"));
	*(void **)__this = ButtonGroups_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ButtonGroups_obj::ButtonGroups_obj()
{
}

void ButtonGroups_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonGroups);
	HX_MARK_MEMBER_NAME(_groups,"_groups");
	HX_MARK_END_CLASS();
}

void ButtonGroups_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_groups,"_groups");
}

::hx::Val ButtonGroups_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { return ::hx::Val( _groups ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ButtonGroups_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ButtonGroups_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ButtonGroups_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::components::_Button::ButtonGroups >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::components::_Button::ButtonGroups >(); return true; }
	}
	return false;
}

void ButtonGroups_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_groups",f3,35,9f,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonGroups_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ButtonGroups_obj,_groups),HX_("_groups",f3,35,9f,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ButtonGroups_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::_Button::ButtonGroups */ ,(void *) &ButtonGroups_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::components::_Button::ButtonGroups */ ,(void *) &ButtonGroups_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ButtonGroups_obj_sMemberFields[] = {
	HX_("_groups",f3,35,9f,8a),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

static void ButtonGroups_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonGroups_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ButtonGroups_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ButtonGroups_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonGroups_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ButtonGroups_obj::instance,"instance");
};

#endif

::hx::Class ButtonGroups_obj::__mClass;

static ::String ButtonGroups_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ButtonGroups_obj::__register()
{
	ButtonGroups_obj _hx_dummy;
	ButtonGroups_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Button.ButtonGroups",69,fa,db,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ButtonGroups_obj::__GetStatic;
	__mClass->mSetStaticField = &ButtonGroups_obj::__SetStatic;
	__mClass->mMarkFunc = ButtonGroups_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ButtonGroups_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonGroups_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonGroups_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ButtonGroups_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonGroups_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonGroups_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Button
