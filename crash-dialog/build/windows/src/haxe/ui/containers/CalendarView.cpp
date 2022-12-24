#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_CalendarView
#include <haxe/ui/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__CalendarView_Builder
#include <haxe/ui/containers/_CalendarView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__CalendarView_Events
#include <haxe/ui/containers/_CalendarView/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__CalendarView_SelectedDateBehaviour
#include <haxe/ui/containers/_CalendarView/SelectedDateBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1c969e78c5d09d9f_16_new,"haxe.ui.containers.CalendarView","new",0x428250df,"haxe.ui.containers.CalendarView.new","haxe/ui/containers/CalendarView.hx",16,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_38114a4bcde44c07_441_registerBehaviours,"haxe.ui.containers.CalendarView","registerBehaviours",0x7b6d8e3a,"haxe.ui.containers.CalendarView.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_38114a4bcde44c07_475_get_selectedDate,"haxe.ui.containers.CalendarView","get_selectedDate",0x8e5a3ed3,"haxe.ui.containers.CalendarView.get_selectedDate","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_38114a4bcde44c07_520_set_selectedDate,"haxe.ui.containers.CalendarView","set_selectedDate",0xe49c2c47,"haxe.ui.containers.CalendarView.set_selectedDate","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a802d8e4d93101c0_565_cloneComponent,"haxe.ui.containers.CalendarView","cloneComponent",0x2bafcb81,"haxe.ui.containers.CalendarView.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_38114a4bcde44c07_423_self,"haxe.ui.containers.CalendarView","self",0xf2d27a2d,"haxe.ui.containers.CalendarView.self","haxe/ui/macros/Macros.hx",423,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_38114a4bcde44c07_138_registerComposite,"haxe.ui.containers.CalendarView","registerComposite",0x2de2a5e3,"haxe.ui.containers.CalendarView.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1c969e78c5d09d9f_17_boot,"haxe.ui.containers.CalendarView","boot",0xe79d72d3,"haxe.ui.containers.CalendarView.boot","haxe/ui/containers/CalendarView.hx",17,0x20b6d730)
static const ::String _hx_array_data_affaf56d_9[] = {
	HX_("January",4a,18,86,71),HX_("Febuary",b6,b8,ce,7b),HX_("March",a3,34,4f,96),HX_("April",26,77,6a,b7),HX_("May",85,c2,3a,00),HX_("June",e2,f1,42,31),HX_("July",38,f0,42,31),HX_("August",63,79,82,9f),HX_("September",f1,6e,c5,f7),HX_("October",00,0d,99,7e),HX_("November",d2,64,19,13),HX_("December",05,71,82,9e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1c969e78c5d09d9f_19_boot,"haxe.ui.containers.CalendarView","boot",0xe79d72d3,"haxe.ui.containers.CalendarView.boot","haxe/ui/containers/CalendarView.hx",19,0x20b6d730)
namespace haxe{
namespace ui{
namespace containers{

void CalendarView_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1c969e78c5d09d9f_16_new)
HXDLIN(  16)		super::__construct();
            	}

Dynamic CalendarView_obj::__CreateEmpty() { return new CalendarView_obj; }

void *CalendarView_obj::_hx_vtable = 0;

Dynamic CalendarView_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CalendarView_obj > _hx_result = new CalendarView_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CalendarView_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x6fddb0ef) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x6fddb0ef;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void CalendarView_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_38114a4bcde44c07_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("selectedDate",29,76,fd,d2),::hx::ClassOf< ::haxe::ui::containers::_CalendarView::SelectedDateBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDate(::Date_obj::now()));
            	}


 ::Date CalendarView_obj::get_selectedDate(){
            	HX_STACKFRAME(&_hx_pos_38114a4bcde44c07_475_get_selectedDate)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDate(this->behaviours->get(HX_("selectedDate",29,76,fd,d2)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CalendarView_obj,get_selectedDate,return )

 ::Date CalendarView_obj::set_selectedDate( ::Date value){
            	HX_GC_STACKFRAME(&_hx_pos_38114a4bcde44c07_520_set_selectedDate)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedDate",29,76,fd,d2),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDate(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedDate",29,76,fd,d2)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,set_selectedDate,return )

 ::haxe::ui::core::ComponentContainer CalendarView_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_a802d8e4d93101c0_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::containers::CalendarView c = ( ( ::haxe::ui::containers::CalendarView)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer CalendarView_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_38114a4bcde44c07_423_self)
HXDLIN( 423)		return  ::haxe::ui::containers::CalendarView_obj::__alloc( HX_CTX );
            	}


void CalendarView_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_38114a4bcde44c07_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::_CalendarView::Events >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::layouts::VerticalLayout >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::_CalendarView::Builder >();
            	}


::Array< ::String > CalendarView_obj::MONTH_NAMES;

::String CalendarView_obj::DATE_FORMAT;


::hx::ObjectPtr< CalendarView_obj > CalendarView_obj::__new() {
	::hx::ObjectPtr< CalendarView_obj > __this = new CalendarView_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CalendarView_obj > CalendarView_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CalendarView_obj *__this = (CalendarView_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CalendarView_obj), true, "haxe.ui.containers.CalendarView"));
	*(void **)__this = CalendarView_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CalendarView_obj::CalendarView_obj()
{
}

::hx::Val CalendarView_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedDate() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedDate") ) { return ::hx::Val( get_selectedDate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedDate") ) { return ::hx::Val( set_selectedDate_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CalendarView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"MONTH_NAMES") ) { outValue = ( MONTH_NAMES ); return true; }
		if (HX_FIELD_EQ(inName,"DATE_FORMAT") ) { outValue = ( DATE_FORMAT ); return true; }
	}
	return false;
}

::hx::Val CalendarView_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedDate(inValue.Cast<  ::Date >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CalendarView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"MONTH_NAMES") ) { MONTH_NAMES=ioValue.Cast< ::Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"DATE_FORMAT") ) { DATE_FORMAT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void CalendarView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selectedDate",29,76,fd,d2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CalendarView_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CalendarView_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CalendarView_obj::MONTH_NAMES,HX_("MONTH_NAMES",09,26,60,e6)},
	{::hx::fsString,(void *) &CalendarView_obj::DATE_FORMAT,HX_("DATE_FORMAT",68,70,54,ce)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CalendarView_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_selectedDate",b2,62,9c,d7),
	HX_("set_selectedDate",26,50,de,2d),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

static void CalendarView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CalendarView_obj::MONTH_NAMES,"MONTH_NAMES");
	HX_MARK_MEMBER_NAME(CalendarView_obj::DATE_FORMAT,"DATE_FORMAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CalendarView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarView_obj::MONTH_NAMES,"MONTH_NAMES");
	HX_VISIT_MEMBER_NAME(CalendarView_obj::DATE_FORMAT,"DATE_FORMAT");
};

#endif

::hx::Class CalendarView_obj::__mClass;

static ::String CalendarView_obj_sStaticFields[] = {
	HX_("MONTH_NAMES",09,26,60,e6),
	HX_("DATE_FORMAT",68,70,54,ce),
	::String(null())
};

void CalendarView_obj::__register()
{
	CalendarView_obj _hx_dummy;
	CalendarView_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.CalendarView",6d,f5,fa,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CalendarView_obj::__GetStatic;
	__mClass->mSetStaticField = &CalendarView_obj::__SetStatic;
	__mClass->mMarkFunc = CalendarView_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CalendarView_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CalendarView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CalendarView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CalendarView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CalendarView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CalendarView_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CalendarView_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1c969e78c5d09d9f_17_boot)
HXDLIN(  17)		MONTH_NAMES = ::Array_obj< ::String >::fromData( _hx_array_data_affaf56d_9,12);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1c969e78c5d09d9f_19_boot)
HXDLIN(  19)		DATE_FORMAT = HX_("%Y-%m-%d",ab,02,52,4d);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
