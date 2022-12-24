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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_TextFieldLayout
#include <haxe/ui/components/_TextField/TextFieldLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c1881108bdb7769f_93_new,"haxe.ui.components._TextField.TextFieldLayout","new",0xd4c63aaf,"haxe.ui.components._TextField.TextFieldLayout.new","haxe/ui/components/TextField.hx",93,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_c1881108bdb7769f_95_get_iconPosition,"haxe.ui.components._TextField.TextFieldLayout","get_iconPosition",0x1f27e21c,"haxe.ui.components._TextField.TextFieldLayout.get_iconPosition","haxe/ui/components/TextField.hx",95,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_c1881108bdb7769f_102_repositionChildren,"haxe.ui.components._TextField.TextFieldLayout","repositionChildren",0x0178874c,"haxe.ui.components._TextField.TextFieldLayout.repositionChildren","haxe/ui/components/TextField.hx",102,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_c1881108bdb7769f_123_resizeChildren,"haxe.ui.components._TextField.TextFieldLayout","resizeChildren",0xcb74ed64,"haxe.ui.components._TextField.TextFieldLayout.resizeChildren","haxe/ui/components/TextField.hx",123,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_c1881108bdb7769f_133_calcAutoSize,"haxe.ui.components._TextField.TextFieldLayout","calcAutoSize",0x372ad556,"haxe.ui.components._TextField.TextFieldLayout.calcAutoSize","haxe/ui/components/TextField.hx",133,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_c1881108bdb7769f_147_get_usableSize,"haxe.ui.components._TextField.TextFieldLayout","get_usableSize",0x493a3633,"haxe.ui.components._TextField.TextFieldLayout.get_usableSize","haxe/ui/components/TextField.hx",147,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void TextFieldLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c1881108bdb7769f_93_new)
HXDLIN(  93)		super::__construct();
            	}

Dynamic TextFieldLayout_obj::__CreateEmpty() { return new TextFieldLayout_obj; }

void *TextFieldLayout_obj::_hx_vtable = 0;

Dynamic TextFieldLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextFieldLayout_obj > _hx_result = new TextFieldLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextFieldLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x48e751b9;
	}
}

::String TextFieldLayout_obj::get_iconPosition(){
            	HX_STACKFRAME(&_hx_pos_c1881108bdb7769f_95_get_iconPosition)
HXLINE(  96)		if (::hx::IsNull( this->get_component()->get_style()->iconPosition )) {
HXLINE(  97)			return HX_("left",07,08,b0,47);
            		}
HXLINE(  99)		return this->get_component()->get_style()->iconPosition;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFieldLayout_obj,get_iconPosition,return )

void TextFieldLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_c1881108bdb7769f_102_repositionChildren)
HXLINE( 103)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 104)		Float xpos = this->get_paddingLeft();
HXLINE( 105)		if (::hx::IsNotNull( icon )) {
HXLINE( 106)			::String _hx_switch_0 = this->get_iconPosition();
            			if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 108)				icon->set_left(xpos);
HXLINE( 109)				Float _hx_tmp = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 109)				icon->set_top((_hx_tmp - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXLINE( 110)				 ::Dynamic xpos1 = icon->get_componentWidth();
HXDLIN( 110)				xpos = (xpos + (xpos1 + this->get_horizontalSpacing()));
HXLINE( 107)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 112)				 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 112)				Float _hx_tmp1 = (( (Float)(_hx_tmp) ) - ( (Float)(icon->get_componentWidth()) ));
HXDLIN( 112)				icon->set_left((_hx_tmp1 - this->get_paddingRight()));
HXLINE( 113)				Float _hx_tmp2 = (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) ));
HXDLIN( 113)				icon->set_top((_hx_tmp2 - (( (Float)(icon->get_componentHeight()) ) / ( (Float)(2) ))));
HXLINE( 111)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
HXLINE( 117)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 118)			this->get_component()->getTextInput()->set_left(xpos);
HXLINE( 119)			 ::haxe::ui::core::TextInput _hx_tmp = this->get_component()->getTextInput();
HXDLIN( 119)			Float _hx_tmp1 = this->get_paddingTop();
HXDLIN( 119)			Float _hx_tmp2 = (_hx_tmp1 + (( (Float)(this->get_component()->get_componentHeight()) ) / ( (Float)(2) )));
HXDLIN( 119)			Float _hx_tmp3 = this->get_component()->getTextInput()->get_height();
HXDLIN( 119)			Float _hx_tmp4 = (_hx_tmp3 + this->get_paddingTop());
HXDLIN( 119)			_hx_tmp->set_top((_hx_tmp2 - ((_hx_tmp4 + this->get_paddingBottom()) / ( (Float)(2) ))));
            		}
            	}


void TextFieldLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_c1881108bdb7769f_123_resizeChildren)
HXLINE( 124)		this->super::resizeChildren();
HXLINE( 126)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 127)			 ::haxe::ui::geom::Size size = this->get_usableSize();
HXLINE( 128)			this->get_component()->getTextInput()->set_width(size->width);
HXLINE( 129)			this->get_component()->getTextInput()->set_height(size->height);
            		}
            	}


 ::haxe::ui::geom::Size TextFieldLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_c1881108bdb7769f_133_calcAutoSize)
HXLINE( 134)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 135)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 136)			Float _hx_tmp = this->get_component()->getTextInput()->get_textWidth();
HXDLIN( 136)			Float _hx_tmp1 = (_hx_tmp + this->get_paddingLeft());
HXDLIN( 136)			Float _hx_tmp2 = (_hx_tmp1 + this->get_paddingRight());
HXDLIN( 136)			if ((_hx_tmp2 > size->width)) {
HXLINE( 137)				Float _hx_tmp = this->get_component()->getTextInput()->get_textWidth();
HXDLIN( 137)				Float _hx_tmp1 = (_hx_tmp + this->get_paddingLeft());
HXDLIN( 137)				size->width = (_hx_tmp1 + this->get_paddingRight());
            			}
HXLINE( 139)			Float _hx_tmp3 = this->get_component()->getTextInput()->get_textHeight();
HXDLIN( 139)			Float _hx_tmp4 = (_hx_tmp3 + this->get_paddingTop());
HXDLIN( 139)			Float _hx_tmp5 = (_hx_tmp4 + this->get_paddingBottom());
HXDLIN( 139)			if ((_hx_tmp5 > size->height)) {
HXLINE( 140)				Float _hx_tmp = this->get_component()->getTextInput()->get_textHeight();
HXDLIN( 140)				Float _hx_tmp1 = (_hx_tmp + this->get_paddingTop());
HXDLIN( 140)				size->height = (_hx_tmp1 + this->get_paddingBottom());
            			}
            		}
HXLINE( 144)		return size;
            	}


 ::haxe::ui::geom::Size TextFieldLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_c1881108bdb7769f_147_get_usableSize)
HXLINE( 148)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE( 149)		 ::haxe::ui::components::Image icon = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),false,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 150)		if (::hx::IsNotNull( icon )) {
HXLINE( 151)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 151)			Float size2 = size1->width;
HXDLIN( 151)			 ::Dynamic _hx_tmp = icon->get_componentWidth();
HXDLIN( 151)			size1->width = (size2 - (_hx_tmp + this->get_horizontalSpacing()));
            		}
HXLINE( 154)		return size;
            	}



::hx::ObjectPtr< TextFieldLayout_obj > TextFieldLayout_obj::__new() {
	::hx::ObjectPtr< TextFieldLayout_obj > __this = new TextFieldLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextFieldLayout_obj > TextFieldLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextFieldLayout_obj *__this = (TextFieldLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFieldLayout_obj), true, "haxe.ui.components._TextField.TextFieldLayout"));
	*(void **)__this = TextFieldLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextFieldLayout_obj::TextFieldLayout_obj()
{
}

void TextFieldLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFieldLayout);
	HX_MARK_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextFieldLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iconPosition,"iconPosition");
	 ::haxe::ui::layouts::Layout_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextFieldLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_iconPosition() : iconPosition ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return ::hx::Val( get_iconPosition_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextFieldLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { iconPosition=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFieldLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iconPosition",42,e5,38,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextFieldLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TextFieldLayout_obj,iconPosition),HX_("iconPosition",42,e5,38,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextFieldLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFieldLayout_obj_sMemberFields[] = {
	HX_("iconPosition",42,e5,38,76),
	HX_("get_iconPosition",cb,d1,d7,7a),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

::hx::Class TextFieldLayout_obj::__mClass;

void TextFieldLayout_obj::__register()
{
	TextFieldLayout_obj _hx_dummy;
	TextFieldLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.TextFieldLayout",3d,b7,f1,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextFieldLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextFieldLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFieldLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFieldLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
