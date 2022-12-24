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
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxBuilder
#include <haxe/ui/components/CheckBoxBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxValue
#include <haxe/ui/components/CheckBoxValue.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_277687b33c7f0cbf_231_new,"haxe.ui.components.CheckBoxBuilder","new",0xa70b7344,"haxe.ui.components.CheckBoxBuilder.new","haxe/ui/components/CheckBox.hx",231,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_277687b33c7f0cbf_238_create,"haxe.ui.components.CheckBoxBuilder","create",0x4cfdaa98,"haxe.ui.components.CheckBoxBuilder.create","haxe/ui/components/CheckBox.hx",238,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_9b05f2339708f779_11_applyStyle,"haxe.ui.components.CheckBoxBuilder","applyStyle",0xbabd627f,"haxe.ui.components.CheckBoxBuilder.applyStyle","haxe/ui/macros/helpers/CodeBuilder.hx",11,0x9d251d70)
HX_LOCAL_STACK_FRAME(_hx_pos_277687b33c7f0cbf_254_get_cssName,"haxe.ui.components.CheckBoxBuilder","get_cssName",0x59ea46a9,"haxe.ui.components.CheckBoxBuilder.get_cssName","haxe/ui/components/CheckBox.hx",254,0xaeb3e5d4)
namespace haxe{
namespace ui{
namespace components{

void CheckBoxBuilder_obj::__construct( ::haxe::ui::components::CheckBox checkbox){
            	HX_STACKFRAME(&_hx_pos_277687b33c7f0cbf_231_new)
HXLINE( 232)		super::__construct(checkbox);
HXLINE( 233)		this->_checkbox = checkbox;
HXLINE( 234)		this->_checkbox->set_allowFocus(false);
            	}

Dynamic CheckBoxBuilder_obj::__CreateEmpty() { return new CheckBoxBuilder_obj; }

void *CheckBoxBuilder_obj::_hx_vtable = 0;

Dynamic CheckBoxBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CheckBoxBuilder_obj > _hx_result = new CheckBoxBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CheckBoxBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x1cd5d488;
	}
}

void CheckBoxBuilder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_277687b33c7f0cbf_238_create)
HXDLIN( 238)		if (::hx::IsNull( this->_checkbox->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::CheckBoxValue >(),null(),null()).StaticCast<  ::haxe::ui::components::CheckBoxValue >() )) {
HXLINE( 239)			 ::haxe::ui::components::CheckBoxValue value =  ::haxe::ui::components::CheckBoxValue_obj::__alloc( HX_CTX );
HXLINE( 240)			value->set_id(((HX_("",00,00,00,00) + this->_checkbox->get_cssName()) + HX_("-value",24,bc,c7,2f)));
HXLINE( 241)			value->addClass(((HX_("",00,00,00,00) + this->_checkbox->get_cssName()) + HX_("-value",24,bc,c7,2f)),null(),null());
HXLINE( 242)			value->set_scriptAccess(false);
HXLINE( 243)			this->_checkbox->addComponent(value);
            		}
            	}


void CheckBoxBuilder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_9b05f2339708f779_11_applyStyle)
HXLINE( 105)		 ::haxe::ui::core::Component c = this->_component;
HXDLIN( 105)		 ::haxe::ui::core::Component c1 = c->findComponent(((HX_("",00,00,00,00) + this->_checkbox->get_cssName()) + HX_("-label",a7,4a,be,6d)),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 117)		if (::hx::IsNotNull( c1 )) {
HXLINE( 118)			bool invalidate = false;
HXLINE( 120)			{
HXLINE( 110)				bool _hx_tmp;
HXDLIN( 110)				if (::hx::IsNull( c1->get_customStyle()->color )) {
HXLINE( 110)					_hx_tmp = ::hx::IsNotEq( c1->get_customStyle()->color,style->color );
            				}
            				else {
HXLINE( 110)					_hx_tmp = false;
            				}
HXDLIN( 110)				if (_hx_tmp) {
HXLINE( 111)					c1->get_customStyle()->color = style->color;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp1;
HXDLIN( 110)				if (::hx::IsNull( c1->get_customStyle()->fontName )) {
HXLINE( 110)					_hx_tmp1 = (c1->get_customStyle()->fontName != style->fontName);
            				}
            				else {
HXLINE( 110)					_hx_tmp1 = false;
            				}
HXDLIN( 110)				if (_hx_tmp1) {
HXLINE( 111)					c1->get_customStyle()->fontName = style->fontName;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp2;
HXDLIN( 110)				if (::hx::IsNull( c1->get_customStyle()->fontSize )) {
HXLINE( 110)					_hx_tmp2 = ::hx::IsNotEq( c1->get_customStyle()->fontSize,style->fontSize );
            				}
            				else {
HXLINE( 110)					_hx_tmp2 = false;
            				}
HXDLIN( 110)				if (_hx_tmp2) {
HXLINE( 111)					c1->get_customStyle()->fontSize = style->fontSize;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp3;
HXDLIN( 110)				if (::hx::IsNull( c1->get_customStyle()->cursor )) {
HXLINE( 110)					_hx_tmp3 = (c1->get_customStyle()->cursor != style->cursor);
            				}
            				else {
HXLINE( 110)					_hx_tmp3 = false;
            				}
HXDLIN( 110)				if (_hx_tmp3) {
HXLINE( 111)					c1->get_customStyle()->cursor = style->cursor;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp4;
HXDLIN( 110)				if (::hx::IsNull( c1->get_customStyle()->textAlign )) {
HXLINE( 110)					_hx_tmp4 = (c1->get_customStyle()->textAlign != style->textAlign);
            				}
            				else {
HXLINE( 110)					_hx_tmp4 = false;
            				}
HXDLIN( 110)				if (_hx_tmp4) {
HXLINE( 111)					c1->get_customStyle()->textAlign = style->textAlign;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp5;
HXDLIN( 110)				if (::hx::IsNull( c1->get_customStyle()->fontBold )) {
HXLINE( 110)					_hx_tmp5 = ::hx::IsNotEq( c1->get_customStyle()->fontBold,style->fontBold );
            				}
            				else {
HXLINE( 110)					_hx_tmp5 = false;
            				}
HXDLIN( 110)				if (_hx_tmp5) {
HXLINE( 111)					c1->get_customStyle()->fontBold = style->fontBold;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp6;
HXDLIN( 110)				if (::hx::IsNull( c1->get_customStyle()->fontUnderline )) {
HXLINE( 110)					_hx_tmp6 = ::hx::IsNotEq( c1->get_customStyle()->fontUnderline,style->fontUnderline );
            				}
            				else {
HXLINE( 110)					_hx_tmp6 = false;
            				}
HXDLIN( 110)				if (_hx_tmp6) {
HXLINE( 111)					c1->get_customStyle()->fontUnderline = style->fontUnderline;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp7;
HXDLIN( 110)				if (::hx::IsNull( c1->get_customStyle()->fontItalic )) {
HXLINE( 110)					_hx_tmp7 = ::hx::IsNotEq( c1->get_customStyle()->fontItalic,style->fontItalic );
            				}
            				else {
HXLINE( 110)					_hx_tmp7 = false;
            				}
HXDLIN( 110)				if (_hx_tmp7) {
HXLINE( 111)					c1->get_customStyle()->fontItalic = style->fontItalic;
HXLINE( 112)					invalidate = true;
            				}
            			}
HXLINE( 122)			if ((invalidate == true)) {
HXLINE( 123)				c1->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 123)				{
            				}
            			}
            		}
            	}


::String CheckBoxBuilder_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_277687b33c7f0cbf_254_get_cssName)
HXDLIN( 254)		return HX_("checkbox",43,d2,f5,ac);
            	}



::hx::ObjectPtr< CheckBoxBuilder_obj > CheckBoxBuilder_obj::__new( ::haxe::ui::components::CheckBox checkbox) {
	::hx::ObjectPtr< CheckBoxBuilder_obj > __this = new CheckBoxBuilder_obj();
	__this->__construct(checkbox);
	return __this;
}

::hx::ObjectPtr< CheckBoxBuilder_obj > CheckBoxBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::CheckBox checkbox) {
	CheckBoxBuilder_obj *__this = (CheckBoxBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CheckBoxBuilder_obj), true, "haxe.ui.components.CheckBoxBuilder"));
	*(void **)__this = CheckBoxBuilder_obj::_hx_vtable;
	__this->__construct(checkbox);
	return __this;
}

CheckBoxBuilder_obj::CheckBoxBuilder_obj()
{
}

void CheckBoxBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckBoxBuilder);
	HX_MARK_MEMBER_NAME(_checkbox,"_checkbox");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckBoxBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_checkbox,"_checkbox");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CheckBoxBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_checkbox") ) { return ::hx::Val( _checkbox ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return ::hx::Val( get_cssName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CheckBoxBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_checkbox") ) { _checkbox=inValue.Cast<  ::haxe::ui::components::CheckBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckBoxBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_checkbox",a2,c9,8b,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CheckBoxBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::CheckBox */ ,(int)offsetof(CheckBoxBuilder_obj,_checkbox),HX_("_checkbox",a2,c9,8b,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CheckBoxBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBoxBuilder_obj_sMemberFields[] = {
	HX_("_checkbox",a2,c9,8b,f4),
	HX_("create",fc,66,0f,7c),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("get_cssName",c5,1f,bf,00),
	::String(null()) };

::hx::Class CheckBoxBuilder_obj::__mClass;

void CheckBoxBuilder_obj::__register()
{
	CheckBoxBuilder_obj _hx_dummy;
	CheckBoxBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.CheckBoxBuilder",52,c1,ff,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CheckBoxBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CheckBoxBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBoxBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBoxBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
