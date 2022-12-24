#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_Builder
#include <haxe/ui/components/_TextField/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_51c0c758e7e931c3_449_new,"haxe.ui.components._TextField.Builder","new",0x70429273,"haxe.ui.components._TextField.Builder.new","haxe/ui/components/TextField.hx",449,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_51c0c758e7e931c3_454_applyStyle,"haxe.ui.components._TextField.Builder","applyStyle",0x327b1730,"haxe.ui.components._TextField.Builder.applyStyle","haxe/ui/components/TextField.hx",454,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_51c0c758e7e931c3_468_isHtml,"haxe.ui.components._TextField.Builder","isHtml",0x6342e642,"haxe.ui.components._TextField.Builder.isHtml","haxe/ui/components/TextField.hx",468,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void Builder_obj::__construct( ::haxe::ui::components::TextField textfield){
            	HX_STACKFRAME(&_hx_pos_51c0c758e7e931c3_449_new)
HXLINE( 450)		super::__construct(textfield);
HXLINE( 451)		this->_textfield = textfield;
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x379b5d99;
	}
}

void Builder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_51c0c758e7e931c3_454_applyStyle)
HXLINE( 455)		if (::hx::IsNotNull( style->icon )) {
HXLINE( 456)			 ::haxe::ui::components::TextField _hx_tmp = this->_textfield;
HXDLIN( 456)			_hx_tmp->set_icon(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(style->icon));
            		}
HXLINE( 458)		if ((this->_textfield->hasTextInput() == true)) {
HXLINE( 459)			this->_textfield->getTextInput()->set_textStyle(style);
HXLINE( 461)			bool _hx_tmp;
HXDLIN( 461)			bool _hx_tmp1;
HXDLIN( 461)			bool _hx_tmp2;
HXDLIN( 461)			if ((style->contentType != HX_("auto",6f,df,76,40))) {
HXLINE( 461)				_hx_tmp2 = (style->contentType == HX_("html",6b,95,16,45));
            			}
            			else {
HXLINE( 461)				_hx_tmp2 = true;
            			}
HXDLIN( 461)			if (_hx_tmp2) {
HXLINE( 461)				_hx_tmp1 = this->_textfield->getTextInput()->get_supportsHtml();
            			}
            			else {
HXLINE( 461)				_hx_tmp1 = false;
            			}
HXDLIN( 461)			if (_hx_tmp1) {
HXLINE( 461)				::String v = ::Std_obj::string(this->_textfield->get_text());
HXDLIN( 461)				if (::hx::IsNull( v )) {
HXLINE( 461)					_hx_tmp = false;
            				}
            				else {
HXLINE( 461)					_hx_tmp = (v.indexOf(HX_("<font ",b5,5d,fb,01),null()) != -1);
            				}
            			}
            			else {
HXLINE( 461)				_hx_tmp = false;
            			}
HXDLIN( 461)			if (_hx_tmp) {
HXLINE( 462)				 ::haxe::ui::components::TextField _hx_tmp = this->_textfield;
HXDLIN( 462)				_hx_tmp->set_htmlText(this->_textfield->get_text());
            			}
            		}
            	}


bool Builder_obj::isHtml(::String v){
            	HX_STACKFRAME(&_hx_pos_51c0c758e7e931c3_468_isHtml)
HXDLIN( 468)		if (::hx::IsNull( v )) {
HXDLIN( 468)			return false;
            		}
            		else {
HXDLIN( 468)			return (v.indexOf(HX_("<font ",b5,5d,fb,01),null()) != -1);
            		}
HXDLIN( 468)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,isHtml,return )


::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::components::TextField textfield) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(textfield);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::TextField textfield) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.components._TextField.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(textfield);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_textfield,"_textfield");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textfield,"_textfield");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_textfield") ) { return ::hx::Val( _textfield ); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Builder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isHtml") ) { outValue = isHtml_dyn(); return true; }
	}
	return false;
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_textfield") ) { _textfield=inValue.Cast<  ::haxe::ui::components::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_textfield",ae,30,f6,61));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::TextField */ ,(int)offsetof(Builder_obj,_textfield),HX_("_textfield",ae,30,f6,61)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_textfield",ae,30,f6,61),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

static ::String Builder_obj_sStaticFields[] = {
	HX_("isHtml",75,5a,7d,62),
	::String(null())
};

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.Builder",01,dd,6d,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Builder_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Builder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
