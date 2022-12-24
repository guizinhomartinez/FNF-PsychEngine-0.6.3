#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_RadioButtonGroups
#include <haxe/ui/backend/hxwidgets/RadioButtonGroups.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_RadioButtonCreator
#include <haxe/ui/backend/hxwidgets/creators/RadioButtonCreator.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
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
#ifndef INCLUDED_wx_widgets_styles_RadioButtonStyle
#include <wx/widgets/styles/RadioButtonStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1094842a95d4279e_9_new,"haxe.ui.backend.hxwidgets.creators.RadioButtonCreator","new",0xb10d4f3d,"haxe.ui.backend.hxwidgets.creators.RadioButtonCreator.new","haxe/ui/backend/hxwidgets/creators/RadioButtonCreator.hx",9,0xcf1a6694)
HX_LOCAL_STACK_FRAME(_hx_pos_1094842a95d4279e_14_createStyle,"haxe.ui.backend.hxwidgets.creators.RadioButtonCreator","createStyle",0x2b680072,"haxe.ui.backend.hxwidgets.creators.RadioButtonCreator.createStyle","haxe/ui/backend/hxwidgets/creators/RadioButtonCreator.hx",14,0xcf1a6694)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void RadioButtonCreator_obj::__construct( ::haxe::ui::components::OptionBox optionbox){
            	HX_STACKFRAME(&_hx_pos_1094842a95d4279e_9_new)
HXLINE(  10)		super::__construct(optionbox);
HXLINE(  11)		this->_optionbox = optionbox;
            	}

Dynamic RadioButtonCreator_obj::__CreateEmpty() { return new RadioButtonCreator_obj; }

void *RadioButtonCreator_obj::_hx_vtable = 0;

Dynamic RadioButtonCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RadioButtonCreator_obj > _hx_result = new RadioButtonCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RadioButtonCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3925cb80) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3925cb80;
	} else {
		return inClassId==(int)0x5197c08b;
	}
}

int RadioButtonCreator_obj::createStyle(int style){
            	HX_STACKFRAME(&_hx_pos_1094842a95d4279e_14_createStyle)
HXLINE(  15)		if ((::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::exists(this->_optionbox->get_componentGroup()) == false)) {
HXLINE(  16)			style = (style | ::wx::widgets::styles::RadioButtonStyle_obj::GROUP);
            		}
HXLINE(  18)		::String _hx_tmp = this->_optionbox->get_componentGroup();
HXDLIN(  18)		::haxe::ui::backend::hxwidgets::RadioButtonGroups_obj::add(_hx_tmp,this->_optionbox);
HXLINE(  19)		return style;
            	}



::hx::ObjectPtr< RadioButtonCreator_obj > RadioButtonCreator_obj::__new( ::haxe::ui::components::OptionBox optionbox) {
	::hx::ObjectPtr< RadioButtonCreator_obj > __this = new RadioButtonCreator_obj();
	__this->__construct(optionbox);
	return __this;
}

::hx::ObjectPtr< RadioButtonCreator_obj > RadioButtonCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::OptionBox optionbox) {
	RadioButtonCreator_obj *__this = (RadioButtonCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RadioButtonCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.RadioButtonCreator"));
	*(void **)__this = RadioButtonCreator_obj::_hx_vtable;
	__this->__construct(optionbox);
	return __this;
}

RadioButtonCreator_obj::RadioButtonCreator_obj()
{
}

void RadioButtonCreator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RadioButtonCreator);
	HX_MARK_MEMBER_NAME(_optionbox,"_optionbox");
	 ::haxe::ui::backend::hxwidgets::creators::Creator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RadioButtonCreator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_optionbox,"_optionbox");
	 ::haxe::ui::backend::hxwidgets::creators::Creator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RadioButtonCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_optionbox") ) { return ::hx::Val( _optionbox ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createStyle") ) { return ::hx::Val( createStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RadioButtonCreator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_optionbox") ) { _optionbox=inValue.Cast<  ::haxe::ui::components::OptionBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RadioButtonCreator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_optionbox",77,3d,0e,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RadioButtonCreator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::OptionBox */ ,(int)offsetof(RadioButtonCreator_obj,_optionbox),HX_("_optionbox",77,3d,0e,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RadioButtonCreator_obj_sStaticStorageInfo = 0;
#endif

static ::String RadioButtonCreator_obj_sMemberFields[] = {
	HX_("_optionbox",77,3d,0e,de),
	HX_("createStyle",95,dc,98,ad),
	::String(null()) };

::hx::Class RadioButtonCreator_obj::__mClass;

void RadioButtonCreator_obj::__register()
{
	RadioButtonCreator_obj _hx_dummy;
	RadioButtonCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.RadioButtonCreator",cb,ec,93,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RadioButtonCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RadioButtonCreator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RadioButtonCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RadioButtonCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
