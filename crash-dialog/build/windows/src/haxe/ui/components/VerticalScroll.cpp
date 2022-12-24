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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__VerticalScroll_ApplyPageFromCoord
#include <haxe/ui/components/_VerticalScroll/ApplyPageFromCoord.h>
#endif
#ifndef INCLUDED_haxe_ui_components__VerticalScroll_PosFromCoord
#include <haxe/ui/components/_VerticalScroll/PosFromCoord.h>
#endif
#ifndef INCLUDED_haxe_ui_components__VerticalScroll_VerticalScrollLayout
#include <haxe/ui/components/_VerticalScroll/VerticalScrollLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_46c031fb0bf2ef34_10_new,"haxe.ui.components.VerticalScroll","new",0x2b9311bb,"haxe.ui.components.VerticalScroll.new","haxe/ui/components/VerticalScroll.hx",10,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_46c031fb0bf2ef34_16_registerBehaviours,"haxe.ui.components.VerticalScroll","registerBehaviours",0x909824de,"haxe.ui.components.VerticalScroll.registerBehaviours","haxe/ui/components/VerticalScroll.hx",16,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_46c031fb0bf2ef34_22_createChildren,"haxe.ui.components.VerticalScroll","createChildren",0x6ba6eee0,"haxe.ui.components.VerticalScroll.createChildren","haxe/ui/components/VerticalScroll.hx",22,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_46c031fb0bf2ef34_29_createDefaults,"haxe.ui.components.VerticalScroll","createDefaults",0xaad6a633,"haxe.ui.components.VerticalScroll.createDefaults","haxe/ui/components/VerticalScroll.hx",29,0x571b9394)
HX_LOCAL_STACK_FRAME(_hx_pos_13078ab53731a40d_565_cloneComponent,"haxe.ui.components.VerticalScroll","cloneComponent",0xcf594025,"haxe.ui.components.VerticalScroll.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_bbaa27035b3a9a62_423_self,"haxe.ui.components.VerticalScroll","self",0xf86a79d1,"haxe.ui.components.VerticalScroll.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void VerticalScroll_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_46c031fb0bf2ef34_10_new)
HXDLIN(  10)		super::__construct();
            	}

Dynamic VerticalScroll_obj::__CreateEmpty() { return new VerticalScroll_obj; }

void *VerticalScroll_obj::_hx_vtable = 0;

Dynamic VerticalScroll_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalScroll_obj > _hx_result = new VerticalScroll_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalScroll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccba775) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0c9dc0bd) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0c9dc0bd;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2ccba775;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4c1c5137) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x395782b4 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x4c1c5137;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void VerticalScroll_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_46c031fb0bf2ef34_16_registerBehaviours)
HXLINE(  17)		this->super::registerBehaviours();
HXLINE(  18)		this->behaviours->_hx_register(HX_("posFromCoord",b7,d4,5e,a6),::hx::ClassOf< ::haxe::ui::components::_VerticalScroll::PosFromCoord >(),null());
HXLINE(  19)		this->behaviours->_hx_register(HX_("applyPageFromCoord",4e,e6,f7,52),::hx::ClassOf< ::haxe::ui::components::_VerticalScroll::ApplyPageFromCoord >(),null());
            	}


void VerticalScroll_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_46c031fb0bf2ef34_22_createChildren)
HXLINE(  23)		this->super::createChildren();
HXLINE(  24)		if (::hx::IsLessEq( this->get_componentHeight(),0 )) {
HXLINE(  25)			this->set_componentHeight(150);
            		}
            	}


void VerticalScroll_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_46c031fb0bf2ef34_29_createDefaults)
HXLINE(  30)		this->super::createDefaults();
HXLINE(  31)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_VerticalScroll::VerticalScrollLayout >();
            	}


 ::haxe::ui::core::ComponentContainer VerticalScroll_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_13078ab53731a40d_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::VerticalScroll c = ( ( ::haxe::ui::components::VerticalScroll)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer VerticalScroll_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_bbaa27035b3a9a62_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::VerticalScroll_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< VerticalScroll_obj > VerticalScroll_obj::__new() {
	::hx::ObjectPtr< VerticalScroll_obj > __this = new VerticalScroll_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VerticalScroll_obj > VerticalScroll_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VerticalScroll_obj *__this = (VerticalScroll_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalScroll_obj), true, "haxe.ui.components.VerticalScroll"));
	*(void **)__this = VerticalScroll_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalScroll_obj::VerticalScroll_obj()
{
}

::hx::Val VerticalScroll_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VerticalScroll_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VerticalScroll_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalScroll_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("createChildren",5b,98,a4,c2),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class VerticalScroll_obj::__mClass;

void VerticalScroll_obj::__register()
{
	VerticalScroll_obj _hx_dummy;
	VerticalScroll_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.VerticalScroll",49,18,2b,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalScroll_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalScroll_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalScroll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalScroll_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
