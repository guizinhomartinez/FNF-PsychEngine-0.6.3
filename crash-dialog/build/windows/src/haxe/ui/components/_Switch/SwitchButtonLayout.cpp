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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_SwitchButtonLayout
#include <haxe/ui/components/_Switch/SwitchButtonLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Switch_SwitchButtonSub
#include <haxe/ui/components/_Switch/SwitchButtonSub.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7b65e4a361e9054_228_new,"haxe.ui.components._Switch.SwitchButtonLayout","new",0x64207bc3,"haxe.ui.components._Switch.SwitchButtonLayout.new","haxe/ui/components/Switch.hx",228,0x0342e663)
HX_LOCAL_STACK_FRAME(_hx_pos_e7b65e4a361e9054_229_repositionChildren,"haxe.ui.components._Switch.SwitchButtonLayout","repositionChildren",0x91929cb8,"haxe.ui.components._Switch.SwitchButtonLayout.repositionChildren","haxe/ui/components/Switch.hx",229,0x0342e663)
namespace haxe{
namespace ui{
namespace components{
namespace _Switch{

void SwitchButtonLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e7b65e4a361e9054_228_new)
HXDLIN( 228)		super::__construct();
            	}

Dynamic SwitchButtonLayout_obj::__CreateEmpty() { return new SwitchButtonLayout_obj; }

void *SwitchButtonLayout_obj::_hx_vtable = 0;

Dynamic SwitchButtonLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchButtonLayout_obj > _hx_result = new SwitchButtonLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SwitchButtonLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x59e11dd3;
	}
}

void SwitchButtonLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_e7b65e4a361e9054_229_repositionChildren)
HXLINE( 230)		 ::haxe::ui::components::_Switch::SwitchButtonSub switchComp = ::hx::TCast<  ::haxe::ui::components::_Switch::SwitchButtonSub >::cast(this->_component);
HXLINE( 231)		 ::haxe::ui::components::Button button = switchComp->findComponent(HX_("switch-button",6b,de,6c,db),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 232)		 ::haxe::ui::components::Label label = switchComp->findComponent(HX_("switch-label",9b,83,49,55),null(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 233)		bool _hx_tmp;
HXDLIN( 233)		if (::hx::IsNotNull( button )) {
HXLINE( 233)			_hx_tmp = ::hx::IsNull( label );
            		}
            		else {
HXLINE( 233)			_hx_tmp = true;
            		}
HXDLIN( 233)		if (_hx_tmp) {
HXLINE( 234)			return;
            		}
HXLINE( 237)		button->set_top(this->get_paddingTop());
HXLINE( 238)		Float _hx_tmp1 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 238)		label->set_top((_hx_tmp1 - (( (Float)(label->get_componentHeight()) ) / ( (Float)(2) ))));
HXLINE( 240)		if ((switchComp->get_selected() == true)) {
HXLINE( 241)			Float _hx_tmp = (( (Float)(button->get_componentWidth()) ) / ( (Float)(2) ));
HXDLIN( 241)			label->set_left((_hx_tmp - (( (Float)(label->get_componentWidth()) ) / ( (Float)(2) ))));
            		}
            		else {
HXLINE( 243)			 ::Dynamic _hx_tmp = button->get_left();
HXDLIN( 243)			Float _hx_tmp1 = (_hx_tmp + button->get_componentWidth());
HXDLIN( 243)			Float _hx_tmp2 = (_hx_tmp1 + (( (Float)(button->get_componentWidth()) ) / ( (Float)(2) )));
HXDLIN( 243)			label->set_left((_hx_tmp2 - (( (Float)(label->get_componentWidth()) ) / ( (Float)(2) ))));
            		}
HXLINE( 246)		Float ucx = this->get_usableWidth();
HXDLIN( 246)		Float ucx1 = (ucx - ( (Float)(button->get_width()) ));
HXLINE( 247)		int min = 0;
HXLINE( 248)		int max = 100;
HXLINE( 249)		Float x = (((switchComp->get_pos() - ( (Float)(min) )) / ( (Float)((max - min)) )) * ucx1);
HXLINE( 251)		button->set_left((this->get_paddingLeft() + x));
HXLINE( 253)		 ::haxe::ui::core::Component extra = switchComp->findComponent(HX_("switch-button-sub-extra",21,e5,65,ac),null(),null(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 254)		if (::hx::IsNotNull( extra )) {
HXLINE( 255)			Float _hx_tmp = (( (Float)(this->_component->get_height()) ) / ( (Float)(2) ));
HXDLIN( 255)			extra->set_top((_hx_tmp - (( (Float)(extra->get_height()) ) / ( (Float)(2) ))));
            		}
            	}



::hx::ObjectPtr< SwitchButtonLayout_obj > SwitchButtonLayout_obj::__new() {
	::hx::ObjectPtr< SwitchButtonLayout_obj > __this = new SwitchButtonLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SwitchButtonLayout_obj > SwitchButtonLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SwitchButtonLayout_obj *__this = (SwitchButtonLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchButtonLayout_obj), true, "haxe.ui.components._Switch.SwitchButtonLayout"));
	*(void **)__this = SwitchButtonLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SwitchButtonLayout_obj::SwitchButtonLayout_obj()
{
}

::hx::Val SwitchButtonLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SwitchButtonLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SwitchButtonLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchButtonLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	::String(null()) };

::hx::Class SwitchButtonLayout_obj::__mClass;

void SwitchButtonLayout_obj::__register()
{
	SwitchButtonLayout_obj _hx_dummy;
	SwitchButtonLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Switch.SwitchButtonLayout",51,de,28,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SwitchButtonLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SwitchButtonLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchButtonLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchButtonLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Switch
