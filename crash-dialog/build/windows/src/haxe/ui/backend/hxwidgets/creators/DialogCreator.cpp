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
#ifndef INCLUDED_haxe_ui_backend_DialogBase
#include <haxe/ui/backend/DialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_DialogCreator
#include <haxe/ui/backend/hxwidgets/creators/DialogCreator.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_wx_widgets_Defs
#include <wx/widgets/Defs.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_DialogStyle
#include <wx/widgets/styles/DialogStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_250e176a52c69e14_9_new,"haxe.ui.backend.hxwidgets.creators.DialogCreator","new",0x42bbd74a,"haxe.ui.backend.hxwidgets.creators.DialogCreator.new","haxe/ui/backend/hxwidgets/creators/DialogCreator.hx",9,0x85ecf745)
HX_LOCAL_STACK_FRAME(_hx_pos_250e176a52c69e14_14_createConstructorParams,"haxe.ui.backend.hxwidgets.creators.DialogCreator","createConstructorParams",0x8991092e,"haxe.ui.backend.hxwidgets.creators.DialogCreator.createConstructorParams","haxe/ui/backend/hxwidgets/creators/DialogCreator.hx",14,0x85ecf745)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void DialogCreator_obj::__construct( ::haxe::ui::containers::dialogs::Dialog dialog){
            	HX_STACKFRAME(&_hx_pos_250e176a52c69e14_9_new)
HXLINE(  10)		super::__construct(dialog);
HXLINE(  11)		this->_dialog = dialog;
            	}

Dynamic DialogCreator_obj::__CreateEmpty() { return new DialogCreator_obj; }

void *DialogCreator_obj::_hx_vtable = 0;

Dynamic DialogCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogCreator_obj > _hx_result = new DialogCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DialogCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1a6cee98) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1a6cee98;
	} else {
		return inClassId==(int)0x3925cb80;
	}
}

::cpp::VirtualArray DialogCreator_obj::createConstructorParams(::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_250e176a52c69e14_14_createConstructorParams)
HXLINE(  15)		params->push(this->_dialog->get_title());
HXLINE(  16)		params->push((::wx::widgets::styles::DialogStyle_obj::DEFAULT_DIALOG_STYLE | ::wx::widgets::Defs_obj::CENTRE));
HXLINE(  17)		return params;
            	}



::hx::ObjectPtr< DialogCreator_obj > DialogCreator_obj::__new( ::haxe::ui::containers::dialogs::Dialog dialog) {
	::hx::ObjectPtr< DialogCreator_obj > __this = new DialogCreator_obj();
	__this->__construct(dialog);
	return __this;
}

::hx::ObjectPtr< DialogCreator_obj > DialogCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::dialogs::Dialog dialog) {
	DialogCreator_obj *__this = (DialogCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.DialogCreator"));
	*(void **)__this = DialogCreator_obj::_hx_vtable;
	__this->__construct(dialog);
	return __this;
}

DialogCreator_obj::DialogCreator_obj()
{
}

void DialogCreator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogCreator);
	HX_MARK_MEMBER_NAME(_dialog,"_dialog");
	 ::haxe::ui::backend::hxwidgets::creators::Creator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogCreator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dialog,"_dialog");
	 ::haxe::ui::backend::hxwidgets::creators::Creator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_dialog") ) { return ::hx::Val( _dialog ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createConstructorParams") ) { return ::hx::Val( createConstructorParams_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogCreator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_dialog") ) { _dialog=inValue.Cast<  ::haxe::ui::containers::dialogs::Dialog >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogCreator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dialog",67,16,aa,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogCreator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::dialogs::Dialog */ ,(int)offsetof(DialogCreator_obj,_dialog),HX_("_dialog",67,16,aa,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogCreator_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogCreator_obj_sMemberFields[] = {
	HX_("_dialog",67,16,aa,1f),
	HX_("createConstructorParams",44,51,16,38),
	::String(null()) };

::hx::Class DialogCreator_obj::__mClass;

void DialogCreator_obj::__register()
{
	DialogCreator_obj _hx_dummy;
	DialogCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.DialogCreator",58,2a,60,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogCreator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
