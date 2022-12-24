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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components__CheckBox_TextBehaviour
#include <haxe/ui/components/_CheckBox/TextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a71c32d5c944f7b_110_new,"haxe.ui.components._CheckBox.TextBehaviour","new",0x5e742010,"haxe.ui.components._CheckBox.TextBehaviour.new","haxe/ui/components/CheckBox.hx",110,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a71c32d5c944f7b_111_validateData,"haxe.ui.components._CheckBox.TextBehaviour","validateData",0xa2739030,"haxe.ui.components._CheckBox.TextBehaviour.validateData","haxe/ui/components/CheckBox.hx",111,0xaeb3e5d4)
namespace haxe{
namespace ui{
namespace components{
namespace _CheckBox{

void TextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0a71c32d5c944f7b_110_new)
HXDLIN( 110)		super::__construct(component);
            	}

Dynamic TextBehaviour_obj::__CreateEmpty() { return new TextBehaviour_obj; }

void *TextBehaviour_obj::_hx_vtable = 0;

Dynamic TextBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextBehaviour_obj > _hx_result = new TextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x04f33a6a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f33a6a;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void TextBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_0a71c32d5c944f7b_111_validateData)
HXLINE( 112)		 ::haxe::ui::components::Label label = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 113)		if (::hx::IsNull( label )) {
HXLINE( 114)			label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 115)			label->set_id(((HX_("",00,00,00,00) + this->_component->get_cssName()) + HX_("-label",a7,4a,be,6d)));
HXLINE( 116)			label->addClass(((HX_("",00,00,00,00) + this->_component->get_cssName()) + HX_("-label",a7,4a,be,6d)),null(),null());
HXLINE( 117)			label->set_scriptAccess(false);
HXLINE( 118)			this->_component->addComponent(label);
HXLINE( 119)			{
HXLINE( 119)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 119)				_this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 119)				_this->_style = null();
            			}
            		}
HXLINE( 122)		label->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            	}



::hx::ObjectPtr< TextBehaviour_obj > TextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextBehaviour_obj > __this = new TextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextBehaviour_obj > TextBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextBehaviour_obj *__this = (TextBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextBehaviour_obj), true, "haxe.ui.components._CheckBox.TextBehaviour"));
	*(void **)__this = TextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextBehaviour_obj::TextBehaviour_obj()
{
}

::hx::Val TextBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class TextBehaviour_obj::__mClass;

void TextBehaviour_obj::__register()
{
	TextBehaviour_obj _hx_dummy;
	TextBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._CheckBox.TextBehaviour",1e,18,47,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _CheckBox
