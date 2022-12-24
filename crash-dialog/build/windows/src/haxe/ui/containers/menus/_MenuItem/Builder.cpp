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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_Builder
#include <haxe/ui/containers/menus/_MenuItem/Builder.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f2b2cb206b06446_111_new,"haxe.ui.containers.menus._MenuItem.Builder","new",0xe1722b8c,"haxe.ui.containers.menus._MenuItem.Builder.new","haxe/ui/containers/menus/MenuItem.hx",111,0x19b927e6)
HX_LOCAL_STACK_FRAME(_hx_pos_4f2b2cb206b06446_112_create,"haxe.ui.containers.menus._MenuItem.Builder","create",0xe5314f50,"haxe.ui.containers.menus._MenuItem.Builder.create","haxe/ui/containers/menus/MenuItem.hx",112,0x19b927e6)
HX_LOCAL_STACK_FRAME(_hx_pos_d6a256499a6a5bb7_11_applyStyle,"haxe.ui.containers.menus._MenuItem.Builder","applyStyle",0x914dc337,"haxe.ui.containers.menus._MenuItem.Builder.applyStyle","haxe/ui/macros/helpers/CodeBuilder.hx",11,0x9d251d70)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuItem{

void Builder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4f2b2cb206b06446_111_new)
HXDLIN( 111)		super::__construct(component);
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
		return inClassId==(int)0x6043a12a;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_4f2b2cb206b06446_112_create)
HXLINE( 113)		this->super::create();
HXLINE( 115)		 ::haxe::ui::containers::HBox box =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE( 116)		box->set_percentWidth(100);
HXLINE( 117)		box->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE( 119)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 120)		label->set_id(HX_("menuitem-label",59,c2,dd,b5));
HXLINE( 121)		label->set_percentWidth(100);
HXLINE( 122)		label->set_styleNames(HX_("menuitem-label",59,c2,dd,b5));
HXLINE( 123)		label->set_scriptAccess(false);
HXLINE( 124)		box->addComponent(label);
HXLINE( 126)		 ::haxe::ui::components::Label label1 =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 127)		label1->set_id(HX_("menuitem-shortcut-label",a8,00,78,8b));
HXLINE( 128)		label1->set_styleNames(HX_("menuitem-shortcut-label",a8,00,78,8b));
HXLINE( 129)		label1->set_scriptAccess(false);
HXLINE( 130)		box->addComponent(label1);
HXLINE( 132)		this->_component->addComponent(box);
            	}


void Builder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_d6a256499a6a5bb7_11_applyStyle)
HXLINE( 105)		 ::haxe::ui::core::Component c = this->_component->findComponent(HX_("menuitem-label",59,c2,dd,b5),::hx::ClassOf< ::haxe::ui::core::Component >(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 117)		if (::hx::IsNotNull( c )) {
HXLINE( 118)			bool invalidate = false;
HXLINE( 120)			{
HXLINE( 110)				bool _hx_tmp;
HXDLIN( 110)				if (::hx::IsNull( c->get_customStyle()->color )) {
HXLINE( 110)					_hx_tmp = ::hx::IsNotEq( c->get_customStyle()->color,style->color );
            				}
            				else {
HXLINE( 110)					_hx_tmp = false;
            				}
HXDLIN( 110)				if (_hx_tmp) {
HXLINE( 111)					c->get_customStyle()->color = style->color;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp1;
HXDLIN( 110)				if (::hx::IsNull( c->get_customStyle()->fontName )) {
HXLINE( 110)					_hx_tmp1 = (c->get_customStyle()->fontName != style->fontName);
            				}
            				else {
HXLINE( 110)					_hx_tmp1 = false;
            				}
HXDLIN( 110)				if (_hx_tmp1) {
HXLINE( 111)					c->get_customStyle()->fontName = style->fontName;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp2;
HXDLIN( 110)				if (::hx::IsNull( c->get_customStyle()->fontSize )) {
HXLINE( 110)					_hx_tmp2 = ::hx::IsNotEq( c->get_customStyle()->fontSize,style->fontSize );
            				}
            				else {
HXLINE( 110)					_hx_tmp2 = false;
            				}
HXDLIN( 110)				if (_hx_tmp2) {
HXLINE( 111)					c->get_customStyle()->fontSize = style->fontSize;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp3;
HXDLIN( 110)				if (::hx::IsNull( c->get_customStyle()->cursor )) {
HXLINE( 110)					_hx_tmp3 = (c->get_customStyle()->cursor != style->cursor);
            				}
            				else {
HXLINE( 110)					_hx_tmp3 = false;
            				}
HXDLIN( 110)				if (_hx_tmp3) {
HXLINE( 111)					c->get_customStyle()->cursor = style->cursor;
HXLINE( 112)					invalidate = true;
            				}
HXLINE( 110)				bool _hx_tmp4;
HXDLIN( 110)				if (::hx::IsNull( c->get_customStyle()->textAlign )) {
HXLINE( 110)					_hx_tmp4 = (c->get_customStyle()->textAlign != style->textAlign);
            				}
            				else {
HXLINE( 110)					_hx_tmp4 = false;
            				}
HXDLIN( 110)				if (_hx_tmp4) {
HXLINE( 111)					c->get_customStyle()->textAlign = style->textAlign;
HXLINE( 112)					invalidate = true;
            				}
            			}
HXLINE( 122)			if ((invalidate == true)) {
HXLINE( 123)				c->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 123)				{
            				}
            			}
            		}
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers.menus._MenuItem.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Builder_obj::Builder_obj()
{
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Builder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuItem.Builder",9a,b5,02,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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
} // end namespace containers
} // end namespace menus
} // end namespace _MenuItem
