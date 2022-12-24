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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45ec73b17b928b12_5_new,"haxe.ui.core.ComponentLayout","new",0xadf7bc1c,"haxe.ui.core.ComponentLayout.new","haxe/ui/core/ComponentLayout.hx",5,0xc116ec75)
HX_LOCAL_STACK_FRAME(_hx_pos_45ec73b17b928b12_19_get_style,"haxe.ui.core.ComponentLayout","get_style",0x8f706244,"haxe.ui.core.ComponentLayout.get_style","haxe/ui/core/ComponentLayout.hx",19,0xc116ec75)
HX_LOCAL_STACK_FRAME(_hx_pos_45ec73b17b928b12_22_set_style,"haxe.ui.core.ComponentLayout","set_style",0x72c14e50,"haxe.ui.core.ComponentLayout.set_style","haxe/ui/core/ComponentLayout.hx",22,0xc116ec75)
HX_LOCAL_STACK_FRAME(_hx_pos_da6395d5bbe3de28_442_registerBehaviours,"haxe.ui.core.ComponentLayout","registerBehaviours",0xd3424f9d,"haxe.ui.core.ComponentLayout.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3e5439d44c46f422_565_cloneComponent,"haxe.ui.core.ComponentLayout","cloneComponent",0x67c95f64,"haxe.ui.core.ComponentLayout.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_da6395d5bbe3de28_423_self,"haxe.ui.core.ComponentLayout","self",0x8e1ae450,"haxe.ui.core.ComponentLayout.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace core{

void ComponentLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_45ec73b17b928b12_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic ComponentLayout_obj::__CreateEmpty() { return new ComponentLayout_obj; }

void *ComponentLayout_obj::_hx_vtable = 0;

Dynamic ComponentLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentLayout_obj > _hx_result = new ComponentLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x01557b4b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			return inClassId==(int)0x241b0321;
		}
	} else {
		if (inClassId<=(int)0x4ba87886) {
			return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
		} else {
			return inClassId==(int)0x715d6dae;
		}
	}
}

 ::haxe::ui::styles::Style ComponentLayout_obj::get_style(){
            	HX_STACKFRAME(&_hx_pos_45ec73b17b928b12_19_get_style)
HXDLIN(  19)		return this->_style;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentLayout_obj,get_style,return )

 ::haxe::ui::styles::Style ComponentLayout_obj::set_style( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_45ec73b17b928b12_22_set_style)
HXLINE(  23)		this->_style = value;
HXLINE(  24)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentLayout_obj,set_style,return )

void ComponentLayout_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_da6395d5bbe3de28_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer ComponentLayout_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_3e5439d44c46f422_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::core::ComponentLayout c = ( ( ::haxe::ui::core::ComponentLayout)(this->super::cloneComponent()) );
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer ComponentLayout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_da6395d5bbe3de28_423_self)
HXDLIN( 423)		return  ::haxe::ui::core::ComponentLayout_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ComponentLayout_obj > ComponentLayout_obj::__new() {
	::hx::ObjectPtr< ComponentLayout_obj > __this = new ComponentLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentLayout_obj > ComponentLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentLayout_obj *__this = (ComponentLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentLayout_obj), true, "haxe.ui.core.ComponentLayout"));
	*(void **)__this = ComponentLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentLayout_obj::ComponentLayout_obj()
{
}

::hx::Val ComponentLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_style() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_style") ) { return ::hx::Val( get_style_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_style") ) { return ::hx::Val( set_style_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_style(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("style",31,a5,1d,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentLayout_obj_sMemberFields[] = {
	HX_("get_style",88,01,c7,c7),
	HX_("set_style",94,ed,17,ab),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ComponentLayout_obj::__mClass;

void ComponentLayout_obj::__register()
{
	ComponentLayout_obj _hx_dummy;
	ComponentLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentLayout",2a,be,30,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
