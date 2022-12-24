#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_EventTypeParser
#include <haxe/ui/backend/hxwidgets/EventTypeParser.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b2a1c764ea1119f7_5_fromString,"haxe.ui.backend.hxwidgets.EventTypeParser","fromString",0xe97ac231,"haxe.ui.backend.hxwidgets.EventTypeParser.fromString","haxe/ui/backend/hxwidgets/EventTypeParser.hx",5,0xa9db93c8)
HX_LOCAL_STACK_FRAME(_hx_pos_b2a1c764ea1119f7_31_toString,"haxe.ui.backend.hxwidgets.EventTypeParser","toString",0x3b028382,"haxe.ui.backend.hxwidgets.EventTypeParser.toString","haxe/ui/backend/hxwidgets/EventTypeParser.hx",31,0xa9db93c8)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{

void EventTypeParser_obj::__construct() { }

Dynamic EventTypeParser_obj::__CreateEmpty() { return new EventTypeParser_obj; }

void *EventTypeParser_obj::_hx_vtable = 0;

Dynamic EventTypeParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventTypeParser_obj > _hx_result = new EventTypeParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventTypeParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72511fee;
}

int EventTypeParser_obj::fromString(::String event){
            	HX_STACKFRAME(&_hx_pos_b2a1c764ea1119f7_5_fromString)
HXLINE(   6)		bool _hx_tmp;
HXDLIN(   6)		if (::hx::IsNotNull( event )) {
HXLINE(   6)			_hx_tmp = (event.length == 0);
            		}
            		else {
HXLINE(   6)			_hx_tmp = true;
            		}
HXDLIN(   6)		if (_hx_tmp) {
HXLINE(   7)			return 0;
            		}
HXLINE(  10)		::String _hx_switch_0 = event;
            		if (  (_hx_switch_0==HX_("EventType.BUTTON",4c,6b,bd,f9)) ){
HXLINE(  12)			return ::wx::widgets::EventType_obj::BUTTON;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.CALENDAR_SEL_CHANGED",68,28,cf,27)) ){
HXLINE(  22)			return ::wx::widgets::EventType_obj::CALENDAR_SEL_CHANGED;
HXDLIN(  22)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.CHECKBOX",1d,4a,2b,45)) ){
HXLINE(  16)			return ::wx::widgets::EventType_obj::CHECKBOX;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.CHOICE",bb,c8,8c,e0)) ){
HXLINE(  17)			return ::wx::widgets::EventType_obj::CHOICE;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.DATAVIEW_SELECTION_CHANGED",eb,e2,9f,a3)) ){
HXLINE(  23)			return ::wx::widgets::EventType_obj::DATAVIEW_SELECTION_CHANGED;
HXDLIN(  23)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.LIST_ITEM_SELECTED",c0,e3,e4,5d)) ){
HXLINE(  18)			return ::wx::widgets::EventType_obj::LIST_ITEM_SELECTED;
HXDLIN(  18)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.MENU",79,80,4e,94)) ){
HXLINE(  20)			return ::wx::widgets::EventType_obj::MENU;
HXDLIN(  20)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.NOTEBOOK_PAGE_CHANGED",6e,d0,38,a0)) ){
HXLINE(  14)			return ::wx::widgets::EventType_obj::NOTEBOOK_PAGE_CHANGED;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.RADIOBUTTON",73,e9,3e,ec)) ){
HXLINE(  15)			return ::wx::widgets::EventType_obj::RADIOBUTTON;
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.SLIDER",7b,cf,e1,8f)) ){
HXLINE(  11)			return ::wx::widgets::EventType_obj::SLIDER;
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.SPINCTRL",47,eb,97,0e)) ){
HXLINE(  21)			return ::wx::widgets::EventType_obj::SPINCTRL;
HXDLIN(  21)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.TEXT",87,07,ef,98)) ){
HXLINE(  19)			return ::wx::widgets::EventType_obj::TEXT;
HXDLIN(  19)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("EventType.TOGGLEBUTTON",60,3d,3e,c1)) ){
HXLINE(  13)			return ::wx::widgets::EventType_obj::TOGGLEBUTTON;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  25)			::haxe::Log_obj::trace(((HX_("WARNING: hxWidgets event \"",59,fe,fa,d6) + event) + HX_("\" not recognised",fa,2a,a2,aa)),::hx::SourceInfo(HX_("haxe/ui/backend/hxwidgets/EventTypeParser.hx",c8,93,db,a9),25,HX_("haxe.ui.backend.hxwidgets.EventTypeParser",58,60,1a,18),HX_("fromString",db,2d,74,54)));
            		}
            		_hx_goto_0:;
HXLINE(  28)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventTypeParser_obj,fromString,return )

::String EventTypeParser_obj::toString(int eventType){
            	HX_STACKFRAME(&_hx_pos_b2a1c764ea1119f7_31_toString)
HXLINE(  32)		if ((eventType == ::wx::widgets::EventType_obj::SLIDER)) {
HXLINE(  33)			return HX_("EventType.SLIDER",7b,cf,e1,8f);
            		}
            		else {
HXLINE(  34)			if ((eventType == ::wx::widgets::EventType_obj::BUTTON)) {
HXLINE(  35)				return HX_("EventType.BUTTON",4c,6b,bd,f9);
            			}
            			else {
HXLINE(  36)				if ((eventType == ::wx::widgets::EventType_obj::TOGGLEBUTTON)) {
HXLINE(  37)					return HX_("EventType.TOGGLEBUTTON",60,3d,3e,c1);
            				}
            				else {
HXLINE(  38)					if ((eventType == ::wx::widgets::EventType_obj::NOTEBOOK_PAGE_CHANGED)) {
HXLINE(  39)						return HX_("EventType.NOTEBOOK_PAGE_CHANGED",6e,d0,38,a0);
            					}
            					else {
HXLINE(  40)						if ((eventType == ::wx::widgets::EventType_obj::RADIOBUTTON)) {
HXLINE(  41)							return HX_("EventType.RADIOBUTTON",73,e9,3e,ec);
            						}
            						else {
HXLINE(  42)							if ((eventType == ::wx::widgets::EventType_obj::CHECKBOX)) {
HXLINE(  43)								return HX_("EventType.CHECKBOX",1d,4a,2b,45);
            							}
            							else {
HXLINE(  44)								if ((eventType == ::wx::widgets::EventType_obj::CHOICE)) {
HXLINE(  45)									return HX_("EventType.CHOICE",bb,c8,8c,e0);
            								}
            								else {
HXLINE(  46)									if ((eventType == ::wx::widgets::EventType_obj::LIST_ITEM_SELECTED)) {
HXLINE(  47)										return HX_("EventType.LIST_ITEM_SELECTED",c0,e3,e4,5d);
            									}
            									else {
HXLINE(  48)										if ((eventType == ::wx::widgets::EventType_obj::TEXT)) {
HXLINE(  49)											return HX_("EventType.TEXT",87,07,ef,98);
            										}
            										else {
HXLINE(  50)											if ((eventType == ::wx::widgets::EventType_obj::MENU)) {
HXLINE(  51)												return HX_("EventType.MENU",79,80,4e,94);
            											}
            											else {
HXLINE(  52)												if ((eventType == ::wx::widgets::EventType_obj::SPINCTRL)) {
HXLINE(  53)													return HX_("EventType.SPINCTRL",47,eb,97,0e);
            												}
            												else {
HXLINE(  54)													if ((eventType == ::wx::widgets::EventType_obj::CALENDAR_SEL_CHANGED)) {
HXLINE(  55)														return HX_("EventType.CALENDAR_SEL_CHANGED",68,28,cf,27);
            													}
            													else {
HXLINE(  56)														if ((eventType == ::wx::widgets::EventType_obj::DATAVIEW_SELECTION_CHANGED)) {
HXLINE(  57)															return HX_("EventType.DATAVIEW_SELECTION_CHANGED",eb,e2,9f,a3);
            														}
            														else {
HXLINE(  59)															::haxe::Log_obj::trace(((HX_("WARNING: hxWidgets event \"",59,fe,fa,d6) + eventType) + HX_("\" not recognised",fa,2a,a2,aa)),::hx::SourceInfo(HX_("haxe/ui/backend/hxwidgets/EventTypeParser.hx",c8,93,db,a9),59,HX_("haxe.ui.backend.hxwidgets.EventTypeParser",58,60,1a,18),HX_("toString",ac,d0,6e,38)));
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  62)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EventTypeParser_obj,toString,return )


EventTypeParser_obj::EventTypeParser_obj()
{
}

bool EventTypeParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EventTypeParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EventTypeParser_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EventTypeParser_obj::__mClass;

static ::String EventTypeParser_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void EventTypeParser_obj::__register()
{
	EventTypeParser_obj _hx_dummy;
	EventTypeParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.EventTypeParser",58,60,1a,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventTypeParser_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EventTypeParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EventTypeParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventTypeParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventTypeParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
