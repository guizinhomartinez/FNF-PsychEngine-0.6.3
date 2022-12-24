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
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#include <haxe/ui/layouts/VerticalGridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9cb89ff9781b4555_8_new,"haxe.ui.containers.Grid","new",0xb62af6e2,"haxe.ui.containers.Grid.new","haxe/ui/containers/Grid.hx",8,0xfac2cb8d)
HX_LOCAL_STACK_FRAME(_hx_pos_9cb89ff9781b4555_22_get_columns,"haxe.ui.containers.Grid","get_columns",0x52588576,"haxe.ui.containers.Grid.get_columns","haxe/ui/containers/Grid.hx",22,0xfac2cb8d)
HX_LOCAL_STACK_FRAME(_hx_pos_9cb89ff9781b4555_24_set_columns,"haxe.ui.containers.Grid","set_columns",0x5cc58c82,"haxe.ui.containers.Grid.set_columns","haxe/ui/containers/Grid.hx",24,0xfac2cb8d)
HX_LOCAL_STACK_FRAME(_hx_pos_9cb89ff9781b4555_36_createDefaults,"haxe.ui.containers.Grid","createDefaults",0x4ad8946c,"haxe.ui.containers.Grid.createDefaults","haxe/ui/containers/Grid.hx",36,0xfac2cb8d)
HX_LOCAL_STACK_FRAME(_hx_pos_107ba3536cf6d5b6_442_registerBehaviours,"haxe.ui.containers.Grid","registerBehaviours",0xf5002397,"haxe.ui.containers.Grid.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_4e3f01045388a5f3_565_cloneComponent,"haxe.ui.containers.Grid","cloneComponent",0x6f5b2e5e,"haxe.ui.containers.Grid.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_107ba3536cf6d5b6_423_self,"haxe.ui.containers.Grid","self",0xb2bb16ca,"haxe.ui.containers.Grid.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void Grid_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9cb89ff9781b4555_8_new)
HXLINE(  19)		this->_columns = -1;
HXLINE(  10)		super::__construct();
HXLINE(  11)		if ((this->_columns == -1)) {
HXLINE(  12)			this->set_columns(2);
            		}
            	}

Dynamic Grid_obj::__CreateEmpty() { return new Grid_obj; }

void *Grid_obj::_hx_vtable = 0;

Dynamic Grid_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Grid_obj > _hx_result = new Grid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Grid_obj::_hx_isInstanceOf(int inClassId) {
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
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x24ec0772 || inClassId==(int)0x2ccba775;
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

int Grid_obj::get_columns(){
            	HX_STACKFRAME(&_hx_pos_9cb89ff9781b4555_22_get_columns)
HXDLIN(  22)		return ::hx::TCast<  ::haxe::ui::layouts::VerticalGridLayout >::cast(this->_layout)->get_columns();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_columns,return )

int Grid_obj::set_columns(int value){
            	HX_STACKFRAME(&_hx_pos_9cb89ff9781b4555_24_set_columns)
HXLINE(  25)		if (::hx::IsNull( this->_layout )) {
HXLINE(  26)			this->set_layout(this->createLayout());
            		}
HXLINE(  28)		::hx::TCast<  ::haxe::ui::layouts::VerticalGridLayout >::cast(this->_layout)->set_columns(value);
HXLINE(  29)		this->_columns = value;
HXLINE(  30)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_columns,return )

void Grid_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_9cb89ff9781b4555_36_createDefaults)
HXLINE(  37)		this->super::createDefaults();
HXLINE(  38)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::VerticalGridLayout >();
            	}


void Grid_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_107ba3536cf6d5b6_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Grid_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_4e3f01045388a5f3_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::Grid c = ( ( ::haxe::ui::containers::Grid)(this->super::cloneComponent()) );
HXLINE( 382)		c->set_columns(this->get_columns());
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


 ::haxe::ui::core::ComponentContainer Grid_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_107ba3536cf6d5b6_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::Grid_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Grid_obj > Grid_obj::__new() {
	::hx::ObjectPtr< Grid_obj > __this = new Grid_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Grid_obj > Grid_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Grid_obj *__this = (Grid_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grid_obj), true, "haxe.ui.containers.Grid"));
	*(void **)__this = Grid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Grid_obj::Grid_obj()
{
}

::hx::Val Grid_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_columns() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return ::hx::Val( _columns ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return ::hx::Val( get_columns_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return ::hx::Val( set_columns_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Grid_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_columns(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_columns",5e,06,12,2d));
	outFields->push(HX_("columns",dd,ac,59,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Grid_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Grid_obj,_columns),HX_("_columns",5e,06,12,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Grid_obj_sStaticStorageInfo = 0;
#endif

static ::String Grid_obj_sMemberFields[] = {
	HX_("_columns",5e,06,12,2d),
	HX_("get_columns",f4,0c,54,79),
	HX_("set_columns",00,14,c1,83),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	Grid_obj _hx_dummy;
	Grid_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.Grid",f0,9d,b1,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Grid_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Grid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grid_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
