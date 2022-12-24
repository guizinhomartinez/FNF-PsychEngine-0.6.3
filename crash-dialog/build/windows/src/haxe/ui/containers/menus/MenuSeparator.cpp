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
#ifndef INCLUDED_haxe_ui_containers_menus_MenuSeparator
#include <haxe/ui/containers/menus/MenuSeparator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_58f21a469bb56131_5_new,"haxe.ui.containers.menus.MenuSeparator","new",0x192bdcd4,"haxe.ui.containers.menus.MenuSeparator.new","haxe/ui/containers/menus/MenuSeparator.hx",5,0xf6fd493e)
HX_LOCAL_STACK_FRAME(_hx_pos_727c6a269ad012d7_442_registerBehaviours,"haxe.ui.containers.menus.MenuSeparator","registerBehaviours",0x524fbde5,"haxe.ui.containers.menus.MenuSeparator.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6c1c7beafba6f2_565_cloneComponent,"haxe.ui.containers.menus.MenuSeparator","cloneComponent",0x506009ac,"haxe.ui.containers.menus.MenuSeparator.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_727c6a269ad012d7_423_self,"haxe.ui.containers.menus.MenuSeparator","self",0xf0836498,"haxe.ui.containers.menus.MenuSeparator.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void MenuSeparator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_58f21a469bb56131_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic MenuSeparator_obj::__CreateEmpty() { return new MenuSeparator_obj; }

void *MenuSeparator_obj::_hx_vtable = 0;

Dynamic MenuSeparator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuSeparator_obj > _hx_result = new MenuSeparator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MenuSeparator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0eeb3cfe) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0eeb3cfe;
				}
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x13d76ae7) {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void MenuSeparator_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_727c6a269ad012d7_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer MenuSeparator_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_cb6c1c7beafba6f2_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::menus::MenuSeparator c = ( ( ::haxe::ui::containers::menus::MenuSeparator)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer MenuSeparator_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_727c6a269ad012d7_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::menus::MenuSeparator_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< MenuSeparator_obj > MenuSeparator_obj::__new() {
	::hx::ObjectPtr< MenuSeparator_obj > __this = new MenuSeparator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MenuSeparator_obj > MenuSeparator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MenuSeparator_obj *__this = (MenuSeparator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuSeparator_obj), true, "haxe.ui.containers.menus.MenuSeparator"));
	*(void **)__this = MenuSeparator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MenuSeparator_obj::MenuSeparator_obj()
{
}

::hx::Val MenuSeparator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuSeparator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuSeparator_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuSeparator_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class MenuSeparator_obj::__mClass;

void MenuSeparator_obj::__register()
{
	MenuSeparator_obj _hx_dummy;
	MenuSeparator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.MenuSeparator",e2,22,28,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuSeparator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuSeparator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuSeparator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuSeparator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
