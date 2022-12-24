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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Calendar
#include <haxe/ui/components/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_Builder
#include <haxe/ui/components/_Calendar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_DateBehaviour
#include <haxe/ui/components/_Calendar/DateBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_Events
#include <haxe/ui/components/_Calendar/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_Layout
#include <haxe/ui/components/_Calendar/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_NextMonthBehaviour
#include <haxe/ui/components/_Calendar/NextMonthBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_NextYearBehaviour
#include <haxe/ui/components/_Calendar/NextYearBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_PreviousMonthBehaviour
#include <haxe/ui/components/_Calendar/PreviousMonthBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_PreviousYearBehaviour
#include <haxe/ui/components/_Calendar/PreviousYearBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_SelectedDateBehaviour
#include <haxe/ui/components/_Calendar/SelectedDateBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#include <haxe/ui/layouts/VerticalGridLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8f3cb5b6292d2937_33_new,"haxe.ui.components.Calendar","new",0xfd115456,"haxe.ui.components.Calendar.new","haxe/ui/components/Calendar.hx",33,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_568_previousMonth,"haxe.ui.components.Calendar","previousMonth",0x04ee26ff,"haxe.ui.components.Calendar.previousMonth","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_568_nextMonth,"haxe.ui.components.Calendar","nextMonth",0xcd86c1c3,"haxe.ui.components.Calendar.nextMonth","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_568_previousYear,"haxe.ui.components.Calendar","previousYear",0xdd72e6de,"haxe.ui.components.Calendar.previousYear","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_568_nextYear,"haxe.ui.components.Calendar","nextYear",0xce46d09a,"haxe.ui.components.Calendar.nextYear","haxe/ui/macros/Macros.hx",568,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8f3cb5b6292d2937_74_createDefaults,"haxe.ui.components.Calendar","createDefaults",0x97430378,"haxe.ui.components.Calendar.createDefaults","haxe/ui/components/Calendar.hx",74,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_138_registerComposite,"haxe.ui.components.Calendar","registerComposite",0xd8882b9a,"haxe.ui.components.Calendar.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_441_registerBehaviours,"haxe.ui.components.Calendar","registerBehaviours",0x219d08a3,"haxe.ui.components.Calendar.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_475_get_date,"haxe.ui.components.Calendar","get_date",0x94507201,"haxe.ui.components.Calendar.get_date","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_520_set_date,"haxe.ui.components.Calendar","set_date",0x42adcb75,"haxe.ui.components.Calendar.set_date","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_475_get_selectedDate,"haxe.ui.components.Calendar","get_selectedDate",0xacf71cfc,"haxe.ui.components.Calendar.get_selectedDate","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_520_set_selectedDate,"haxe.ui.components.Calendar","set_selectedDate",0x03390a70,"haxe.ui.components.Calendar.set_selectedDate","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4be73b40ccdc64_565_cloneComponent,"haxe.ui.components.Calendar","cloneComponent",0xbbc59d6a,"haxe.ui.components.Calendar.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_63f1e320bfcbb468_423_self,"haxe.ui.components.Calendar","self",0x75667ed6,"haxe.ui.components.Calendar.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Calendar_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8f3cb5b6292d2937_33_new)
HXDLIN(  33)		super::__construct();
            	}

Dynamic Calendar_obj::__CreateEmpty() { return new Calendar_obj; }

void *Calendar_obj::_hx_vtable = 0;

Dynamic Calendar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Calendar_obj > _hx_result = new Calendar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Calendar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x24ec0772) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x24ec0772;
			}
		}
	} else {
		if (inClassId<=(int)0x72c347e4) {
			if (inClassId<=(int)0x715d6dae) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x715d6dae;
				}
			} else {
				return inClassId==(int)0x72c347e4;
			}
		} else {
			return inClassId==(int)0x7bfde3d2 || inClassId==(int)0x7ec24579;
		}
	}
}

 ::haxe::ui::util::VariantType Calendar_obj::previousMonth(){
            	HX_STACKFRAME(&_hx_pos_63f1e320bfcbb468_568_previousMonth)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("previousMonth",89,d3,53,33),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,previousMonth,return )

 ::haxe::ui::util::VariantType Calendar_obj::nextMonth(){
            	HX_STACKFRAME(&_hx_pos_63f1e320bfcbb468_568_nextMonth)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("nextMonth",4d,e1,a4,b3),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,nextMonth,return )

 ::haxe::ui::util::VariantType Calendar_obj::previousYear(){
            	HX_STACKFRAME(&_hx_pos_63f1e320bfcbb468_568_previousYear)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("previousYear",94,99,e9,f6),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,previousYear,return )

 ::haxe::ui::util::VariantType Calendar_obj::nextYear(){
            	HX_STACKFRAME(&_hx_pos_63f1e320bfcbb468_568_nextYear)
HXLINE( 569)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 570)			return null();
            		}
HXLINE( 572)		return this->behaviours->call(HX_("nextYear",50,70,14,fc),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,nextYear,return )

void Calendar_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_8f3cb5b6292d2937_74_createDefaults)
HXLINE(  75)		this->super::createDefaults();
HXLINE(  76)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_Calendar::Layout >();
            	}


void Calendar_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_63f1e320bfcbb468_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 147)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::components::_Calendar::Events >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_Calendar::Builder >();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_Calendar::Layout >();
            	}


void Calendar_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_63f1e320bfcbb468_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("date",2e,56,63,42),::hx::ClassOf< ::haxe::ui::components::_Calendar::DateBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("selectedDate",29,76,fd,d2),::hx::ClassOf< ::haxe::ui::components::_Calendar::SelectedDateBehaviour >(),null());
HXLINE( 578)		this->behaviours->_hx_register(HX_("previousMonth",89,d3,53,33),::hx::ClassOf< ::haxe::ui::components::_Calendar::PreviousMonthBehaviour >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("nextMonth",4d,e1,a4,b3),::hx::ClassOf< ::haxe::ui::components::_Calendar::NextMonthBehaviour >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("previousYear",94,99,e9,f6),::hx::ClassOf< ::haxe::ui::components::_Calendar::PreviousYearBehaviour >(),null());
HXDLIN( 578)		this->behaviours->_hx_register(HX_("nextYear",50,70,14,fc),::hx::ClassOf< ::haxe::ui::components::_Calendar::NextYearBehaviour >(),null());
            	}


 ::Date Calendar_obj::get_date(){
            	HX_STACKFRAME(&_hx_pos_63f1e320bfcbb468_475_get_date)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDate(this->behaviours->get(HX_("date",2e,56,63,42)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,get_date,return )

 ::Date Calendar_obj::set_date( ::Date value){
            	HX_GC_STACKFRAME(&_hx_pos_63f1e320bfcbb468_520_set_date)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("date",2e,56,63,42),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDate(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("date",2e,56,63,42)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,set_date,return )

 ::Date Calendar_obj::get_selectedDate(){
            	HX_STACKFRAME(&_hx_pos_63f1e320bfcbb468_475_get_selectedDate)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDate(this->behaviours->get(HX_("selectedDate",29,76,fd,d2)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,get_selectedDate,return )

 ::Date Calendar_obj::set_selectedDate( ::Date value){
            	HX_GC_STACKFRAME(&_hx_pos_63f1e320bfcbb468_520_set_selectedDate)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("selectedDate",29,76,fd,d2),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDate(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("selectedDate",29,76,fd,d2)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,set_selectedDate,return )

 ::haxe::ui::core::ComponentContainer Calendar_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8c4be73b40ccdc64_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Calendar c = ( ( ::haxe::ui::components::Calendar)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_date() )) {
HXLINE( 380)			c->set_date(this->get_date());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_selectedDate() )) {
HXLINE( 380)			c->set_selectedDate(this->get_selectedDate());
            		}
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


 ::haxe::ui::core::ComponentContainer Calendar_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_63f1e320bfcbb468_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Calendar_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Calendar_obj > Calendar_obj::__new() {
	::hx::ObjectPtr< Calendar_obj > __this = new Calendar_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Calendar_obj > Calendar_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Calendar_obj *__this = (Calendar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Calendar_obj), true, "haxe.ui.components.Calendar"));
	*(void **)__this = Calendar_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Calendar_obj::Calendar_obj()
{
}

::hx::Val Calendar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_date() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nextYear") ) { return ::hx::Val( nextYear_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_date") ) { return ::hx::Val( get_date_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_date") ) { return ::hx::Val( set_date_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextMonth") ) { return ::hx::Val( nextMonth_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousYear") ) { return ::hx::Val( previousYear_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedDate() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"previousMonth") ) { return ::hx::Val( previousMonth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
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

::hx::Val Calendar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_date(inValue.Cast<  ::Date >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedDate(inValue.Cast<  ::Date >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Calendar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("date",2e,56,63,42));
	outFields->push(HX_("selectedDate",29,76,fd,d2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Calendar_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Calendar_obj_sStaticStorageInfo = 0;
#endif

static ::String Calendar_obj_sMemberFields[] = {
	HX_("previousMonth",89,d3,53,33),
	HX_("nextMonth",4d,e1,a4,b3),
	HX_("previousYear",94,99,e9,f6),
	HX_("nextYear",50,70,14,fc),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_date",b7,11,1e,c2),
	HX_("set_date",2b,6b,7b,70),
	HX_("get_selectedDate",b2,62,9c,d7),
	HX_("set_selectedDate",26,50,de,2d),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Calendar_obj::__mClass;

void Calendar_obj::__register()
{
	Calendar_obj _hx_dummy;
	Calendar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Calendar",64,31,57,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Calendar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Calendar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Calendar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Calendar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
