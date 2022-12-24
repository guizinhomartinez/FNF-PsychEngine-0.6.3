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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_CalendarView
#include <haxe/ui/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <haxe/ui/containers/Grid.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__CalendarView_Builder
#include <haxe/ui/containers/_CalendarView/Builder.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e41ec47be41286a4_114_new,"haxe.ui.containers._CalendarView.Builder","new",0xf0a10af7,"haxe.ui.containers._CalendarView.Builder.new","haxe/ui/containers/CalendarView.hx",114,0x20b6d730)
HX_LOCAL_STACK_FRAME(_hx_pos_e41ec47be41286a4_119_create,"haxe.ui.containers._CalendarView.Builder","create",0xb411a4c5,"haxe.ui.containers._CalendarView.Builder.create","haxe/ui/containers/CalendarView.hx",119,0x20b6d730)
namespace haxe{
namespace ui{
namespace containers{
namespace _CalendarView{

void Builder_obj::__construct( ::haxe::ui::containers::CalendarView calendarView){
            	HX_STACKFRAME(&_hx_pos_e41ec47be41286a4_114_new)
HXLINE( 115)		super::__construct(calendarView);
HXLINE( 116)		this->_calendarView = calendarView;
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
		return inClassId==(int)0x7c4bc939;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_e41ec47be41286a4_119_create)
HXLINE( 120)		 ::haxe::ui::containers::Box box =  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
HXLINE( 121)		box->set_percentWidth(100);
HXLINE( 122)		 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 123)		button->set_id(HX_("prev-month",26,fb,4f,d6));
HXLINE( 124)		box->addComponent(button);
HXLINE( 126)		 ::haxe::ui::containers::HBox hbox =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE( 127)		hbox->set_horizontalAlign(HX_("center",d5,25,db,05));
HXLINE( 128)		hbox->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE( 129)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 130)		label->set_id(HX_("current-month",ec,10,37,b9));
HXLINE( 131)		 ::Date now = ::Date_obj::now();
HXLINE( 132)		::String _hx_tmp = (::haxe::ui::containers::CalendarView_obj::MONTH_NAMES->__get(now->getMonth()) + HX_("  ",00,1c,00,00));
HXDLIN( 132)		label->set_text((_hx_tmp + now->getFullYear()));
HXLINE( 133)		hbox->addComponent(label);
HXLINE( 135)		 ::haxe::ui::components::Stepper stepper =  ::haxe::ui::components::Stepper_obj::__alloc( HX_CTX );
HXLINE( 136)		stepper->set_id(HX_("current-year",91,59,2e,ed));
HXLINE( 137)		stepper->set_min(0);
HXLINE( 138)		stepper->set_max((now->getFullYear() + 1000));
HXLINE( 139)		stepper->set_pos(( (Float)(now->getFullYear()) ));
HXLINE( 140)		stepper->set_repeater(false);
HXLINE( 141)		hbox->addComponent(stepper);
HXLINE( 143)		box->addComponent(hbox);
HXLINE( 145)		 ::haxe::ui::components::Button button1 =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 146)		button1->set_id(HX_("next-month",26,41,0c,8b));
HXLINE( 147)		button1->set_horizontalAlign(HX_("right",dc,0b,64,e9));
HXLINE( 148)		box->addComponent(button1);
HXLINE( 150)		this->_calendarView->addComponent(box);
HXLINE( 152)		 ::haxe::ui::components::Calendar calendar =  ::haxe::ui::components::Calendar_obj::__alloc( HX_CTX );
HXLINE( 153)		calendar->set_horizontalAlign(HX_("center",d5,25,db,05));
HXLINE( 154)		this->_calendarView->addComponent(calendar);
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::CalendarView calendarView) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(calendarView);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::CalendarView calendarView) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers._CalendarView.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(calendarView);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_calendarView,"_calendarView");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_calendarView,"_calendarView");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_calendarView") ) { return ::hx::Val( _calendarView ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_calendarView") ) { _calendarView=inValue.Cast<  ::haxe::ui::containers::CalendarView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_calendarView",22,87,e9,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::CalendarView */ ,(int)offsetof(Builder_obj,_calendarView),HX_("_calendarView",22,87,e9,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_calendarView",22,87,e9,f3),
	HX_("create",fc,66,0f,7c),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._CalendarView.Builder",85,c3,7c,2c);
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
} // end namespace _CalendarView
