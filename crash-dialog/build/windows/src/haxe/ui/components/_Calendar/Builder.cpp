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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Calendar
#include <haxe/ui/components/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_Builder
#include <haxe/ui/components/_Calendar/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_088fcfdce9e87021_305_new,"haxe.ui.components._Calendar.Builder","new",0x1973b776,"haxe.ui.components._Calendar.Builder.new","haxe/ui/components/Calendar.hx",305,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_088fcfdce9e87021_310_create,"haxe.ui.components._Calendar.Builder","create",0x5f2491a6,"haxe.ui.components._Calendar.Builder.create","haxe/ui/components/Calendar.hx",310,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{

void Builder_obj::__construct( ::haxe::ui::components::Calendar calendar){
            	HX_STACKFRAME(&_hx_pos_088fcfdce9e87021_305_new)
HXLINE( 306)		super::__construct(calendar);
HXLINE( 307)		this->_calendar = calendar;
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
		return inClassId==(int)0x0e31e852;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_088fcfdce9e87021_310_create)
HXLINE( 311)		this->_calendar->set_columns(7);
HXLINE( 313)		{
HXLINE( 314)			{
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item1 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item1->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item1);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item2 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item2->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item2);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item3 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item3->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item3);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item4 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item4->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item4);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item5 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item5->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item5);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item6 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item6->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item6);
            				}
            			}
HXLINE( 314)			{
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item7 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item7->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item7);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item8 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item8->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item8);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item9 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item9->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item9);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item10 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item10->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item10);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item11 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item11->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item11);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item12 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item12->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item12);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item13 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item13->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item13);
            				}
            			}
HXLINE( 314)			{
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item14 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item14->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item14);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item15 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item15->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item15);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item16 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item16->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item16);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item17 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item17->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item17);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item18 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item18->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item18);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item19 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item19->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item19);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item20 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item20->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item20);
            				}
            			}
HXLINE( 314)			{
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item21 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item21->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item21);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item22 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item22->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item22);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item23 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item23->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item23);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item24 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item24->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item24);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item25 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item25->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item25);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item26 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item26->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item26);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item27 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item27->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item27);
            				}
            			}
HXLINE( 314)			{
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item28 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item28->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item28);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item29 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item29->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item29);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item30 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item30->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item30);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item31 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item31->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item31);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item32 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item32->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item32);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item33 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item33->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item33);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item34 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item34->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item34);
            				}
            			}
HXLINE( 314)			{
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item35 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item35->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item35);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item36 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item36->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item36);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item37 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item37->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item37);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item38 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item38->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item38);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item39 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item39->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item39);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item40 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item40->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item40);
            				}
HXLINE( 314)				{
HXLINE( 315)					 ::haxe::ui::components::Button item41 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 316)					item41->set_scriptAccess(false);
HXLINE( 317)					this->_calendar->addComponent(item41);
            				}
            			}
            		}
HXLINE( 322)		 ::haxe::ui::components::Calendar _hx_tmp = this->_calendar;
HXDLIN( 322)		_hx_tmp->set_date(::Date_obj::now());
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::components::Calendar calendar) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(calendar);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Calendar calendar) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.components._Calendar.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(calendar);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_calendar,"_calendar");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_calendar,"_calendar");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_calendar") ) { return ::hx::Val( _calendar ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_calendar") ) { _calendar=inValue.Cast<  ::haxe::ui::components::Calendar >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_calendar",1d,56,bf,c6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Calendar */ ,(int)offsetof(Builder_obj,_calendar),HX_("_calendar",1d,56,bf,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_calendar",1d,56,bf,c6),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Calendar.Builder",84,84,c1,20);
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
} // end namespace components
} // end namespace _Calendar
