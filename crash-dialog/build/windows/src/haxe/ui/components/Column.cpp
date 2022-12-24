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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Column
#include <haxe/ui/components/Column.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Column_Events
#include <haxe/ui/components/_Column/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a1c63a8a58322222_11_new,"haxe.ui.components.Column","new",0xb60a5aee,"haxe.ui.components.Column.new","haxe/ui/components/Column.hx",11,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1c63a8a58322222_22_get_sortable,"haxe.ui.components.Column","get_sortable",0xbf9b03b3,"haxe.ui.components.Column.get_sortable","haxe/ui/components/Column.hx",22,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1c63a8a58322222_24_set_sortable,"haxe.ui.components.Column","set_sortable",0xd4942727,"haxe.ui.components.Column.set_sortable","haxe/ui/components/Column.hx",24,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1c63a8a58322222_44_get_sortDirection,"haxe.ui.components.Column","get_sortDirection",0x64acf166,"haxe.ui.components.Column.get_sortDirection","haxe/ui/components/Column.hx",44,0xb3ad9ac1)
HX_LOCAL_STACK_FRAME(_hx_pos_a1c63a8a58322222_46_set_sortDirection,"haxe.ui.components.Column","set_sortDirection",0x881ac972,"haxe.ui.components.Column.set_sortDirection","haxe/ui/components/Column.hx",46,0xb3ad9ac1)
static const ::String _hx_array_data_60730bfc_5[] = {
	HX_("sort-asc",82,c7,aa,36),HX_("sort-desc",e0,dc,b4,a0),
};
HX_LOCAL_STACK_FRAME(_hx_pos_8b4a53d6261f9d71_138_registerComposite,"haxe.ui.components.Column","registerComposite",0x4e668c32,"haxe.ui.components.Column.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8b4a53d6261f9d71_442_registerBehaviours,"haxe.ui.components.Column","registerBehaviours",0xce532d0b,"haxe.ui.components.Column.registerBehaviours","haxe/ui/macros/Macros.hx",442,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8e96c8c9b50ac217_565_cloneComponent,"haxe.ui.components.Column","cloneComponent",0x29a76dd2,"haxe.ui.components.Column.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_8b4a53d6261f9d71_423_self,"haxe.ui.components.Column","self",0x96533d3e,"haxe.ui.components.Column.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Column_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_11_new)
HXLINE(  33)		this->_sortDirection = null();
HXLINE(  11)		super::__construct();
            	}

Dynamic Column_obj::__CreateEmpty() { return new Column_obj; }

void *Column_obj::_hx_vtable = 0;

Dynamic Column_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Column_obj > _hx_result = new Column_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Column_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x01557b4b) {
				if (inClassId<=(int)0x00d785b2) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x00d785b2;
				} else {
					return inClassId==(int)0x01557b4b;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x142c98ce) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x142c98ce;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				if (inClassId<=(int)0x395782b4) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x395782b4;
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

bool Column_obj::get_sortable(){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_22_get_sortable)
HXDLIN(  22)		return (this->classes->indexOf(HX_("sortable",f8,9b,0a,59),null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Column_obj,get_sortable,return )

bool Column_obj::set_sortable(bool value){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_24_set_sortable)
HXLINE(  25)		if ((value == true)) {
HXLINE(  26)			this->addClass(HX_("sortable",f8,9b,0a,59),null(),null());
            		}
            		else {
HXLINE(  28)			this->removeClass(HX_("sortable",f8,9b,0a,59),null(),null());
            		}
HXLINE(  30)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Column_obj,set_sortable,return )

::String Column_obj::get_sortDirection(){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_44_get_sortDirection)
HXDLIN(  44)		return this->_sortDirection;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Column_obj,get_sortDirection,return )

::String Column_obj::set_sortDirection(::String value){
            	HX_STACKFRAME(&_hx_pos_a1c63a8a58322222_46_set_sortDirection)
HXLINE(  47)		if ((value == this->_sortDirection)) {
HXLINE(  48)			return value;
            		}
HXLINE(  51)		this->_sortDirection = value;
HXLINE(  52)		this->set_sortable(true);
HXLINE(  53)		if ((this->_sortDirection == HX_("asc",31,ff,49,00))) {
HXLINE(  54)			this->swapClass(HX_("sort-asc",82,c7,aa,36),HX_("sort-desc",e0,dc,b4,a0),null(),null());
            		}
            		else {
HXLINE(  55)			if ((this->_sortDirection == HX_("desc",51,5e,66,42))) {
HXLINE(  56)				this->swapClass(HX_("sort-desc",e0,dc,b4,a0),HX_("sort-asc",82,c7,aa,36),null(),null());
            			}
            			else {
HXLINE(  57)				if (::hx::IsNull( this->get_sortDirection() )) {
HXLINE(  58)					this->removeClasses(::Array_obj< ::String >::fromData( _hx_array_data_60730bfc_5,2),null(),null());
            				}
            			}
            		}
HXLINE(  61)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Column_obj,set_sortDirection,return )

void Column_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_8b4a53d6261f9d71_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::_Column::Events >();
            	}


void Column_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_8b4a53d6261f9d71_442_registerBehaviours)
HXDLIN( 442)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Column_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8e96c8c9b50ac217_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Column c = ( ( ::haxe::ui::components::Column)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer Column_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8b4a53d6261f9d71_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Column_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Column_obj > Column_obj::__new() {
	::hx::ObjectPtr< Column_obj > __this = new Column_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Column_obj > Column_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Column_obj *__this = (Column_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Column_obj), true, "haxe.ui.components.Column"));
	*(void **)__this = Column_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Column_obj::Column_obj()
{
}

void Column_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Column);
	HX_MARK_MEMBER_NAME(sortField,"sortField");
	HX_MARK_MEMBER_NAME(_sortDirection,"_sortDirection");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Column_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sortField,"sortField");
	HX_VISIT_MEMBER_NAME(_sortDirection,"_sortDirection");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Column_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sortable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sortable() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortField") ) { return ::hx::Val( sortField ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_sortable") ) { return ::hx::Val( get_sortable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_sortable") ) { return ::hx::Val( set_sortable_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sortDirection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_sortDirection() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_sortDirection") ) { return ::hx::Val( _sortDirection ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_sortDirection") ) { return ::hx::Val( get_sortDirection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_sortDirection") ) { return ::hx::Val( set_sortDirection_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Column_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sortable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_sortable(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortField") ) { sortField=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sortDirection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_sortDirection(inValue.Cast< ::String >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_sortDirection") ) { _sortDirection=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Column_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sortField",7c,68,07,09));
	outFields->push(HX_("sortable",f8,9b,0a,59));
	outFields->push(HX_("_sortDirection",42,2f,a8,4c));
	outFields->push(HX_("sortDirection",01,3f,56,0e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Column_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Column_obj,sortField),HX_("sortField",7c,68,07,09)},
	{::hx::fsString,(int)offsetof(Column_obj,_sortDirection),HX_("_sortDirection",42,2f,a8,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Column_obj_sStaticStorageInfo = 0;
#endif

static ::String Column_obj_sMemberFields[] = {
	HX_("sortField",7c,68,07,09),
	HX_("get_sortable",01,50,24,0e),
	HX_("set_sortable",75,73,1d,23),
	HX_("_sortDirection",42,2f,a8,4c),
	HX_("get_sortDirection",58,4a,c6,14),
	HX_("set_sortDirection",64,22,34,38),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Column_obj::__mClass;

void Column_obj::__register()
{
	Column_obj _hx_dummy;
	Column_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Column",fc,0b,73,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Column_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Column_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Column_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Column_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
