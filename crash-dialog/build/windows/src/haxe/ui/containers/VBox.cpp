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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalLayout
#include <haxe/ui/layouts/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11f720eb43d1a658_10_new,"haxe.ui.containers.VBox","new",0x2e4126d1,"haxe.ui.containers.VBox.new","haxe/ui/containers/VBox.hx",10,0xbb032e7e)
HX_LOCAL_STACK_FRAME(_hx_pos_cb2c8d9afeed5cd2_442_registerBehaviours,"haxe.ui.containers.VBox","registerBehaviours",0xd32d3888,"haxe.ui.containers.VBox.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a736ef818f07bee5_565_cloneComponent,"haxe.ui.containers.VBox","cloneComponent",0xe9dcb6cf,"haxe.ui.containers.VBox.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_cb2c8d9afeed5cd2_423_self,"haxe.ui.containers.VBox","self",0x4e0ed7fb,"haxe.ui.containers.VBox.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void VBox_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_11f720eb43d1a658_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  12)		this->set_layout( ::haxe::ui::layouts::VerticalLayout_obj::__alloc( HX_CTX ));
            	}

Dynamic VBox_obj::__CreateEmpty() { return new VBox_obj; }

void *VBox_obj::_hx_vtable = 0;

Dynamic VBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VBox_obj > _hx_result = new VBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241810fb) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241810fb;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x2eb1d3e1) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x2eb1d3e1;
				} else {
					return inClassId==(int)0x4ba87886;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void VBox_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_cb2c8d9afeed5cd2_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer VBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_a736ef818f07bee5_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::VBox c = ( ( ::haxe::ui::containers::VBox)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer VBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_cb2c8d9afeed5cd2_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< VBox_obj > VBox_obj::__new() {
	::hx::ObjectPtr< VBox_obj > __this = new VBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VBox_obj > VBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VBox_obj *__this = (VBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VBox_obj), true, "haxe.ui.containers.VBox"));
	*(void **)__this = VBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VBox_obj::VBox_obj()
{
}

::hx::Val VBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *VBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VBox_obj_sStaticStorageInfo = 0;
#endif

static ::String VBox_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class VBox_obj::__mClass;

void VBox_obj::__register()
{
	VBox_obj _hx_dummy;
	VBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.VBox",5f,6a,77,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
