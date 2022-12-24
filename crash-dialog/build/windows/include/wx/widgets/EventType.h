#ifndef INCLUDED_wx_widgets_EventType
#define INCLUDED_wx_widgets_EventType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,EventType)


#include <wx/event.h>
#include <wx/textctrl.h>
#include <wx/hyperlink.h>
#include <wx/timer.h>
#include <wx/notebook.h>
#include <wx/listctrl.h>
#include <wx/tglbtn.h>
#include <wx/process.h>
#include <wx/propgrid/propgrid.h>
#include <wx/spinctrl.h>
#include <wx/calctrl.h>
#include <wx/dataview.h>
#include <wx/treebase.h>

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES EventType_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EventType_obj OBJ_;
		EventType_obj();

	public:
		enum { _hx_ClassId = 0x4ee7a5ca };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.EventType")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.EventType"); }

		inline static ::hx::ObjectPtr< EventType_obj > __new() {
			::hx::ObjectPtr< EventType_obj > __this = new EventType_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EventType_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EventType_obj *__this = (EventType_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventType_obj), false, "wx.widgets.EventType"));
			*(void **)__this = EventType_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventType_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventType",d4,db,e8,9d); }

		static void __boot();
		static int BUTTON;
		static int TOGGLEBUTTON;
		static int CHECKBOX;
		static int RADIOBUTTON;
		static int SLIDER;
		static int TEXT;
		static int TEXT_ENTER;
		static int TEXT_URL;
		static int TEXT_MAXLEN;
		static int SCROLL_THUMBTRACK;
		static int SCROLL_THUMBRELEASE;
		static int CLOSE_WINDOW;
		static int MENU;
		static int IDLE;
		static int TIMER;
		static int NOTEBOOK_PAGE_CHANGED;
		static int SIZE;
		static int CHOICE;
		static int LIST_ITEM_SELECTED;
		static int ICONIZE;
		static int PG_CHANGED;
		static int SPINCTRL;
		static int CALENDAR_SEL_CHANGED;
		static int TREE_SEL_CHANGED;
		static int DATAVIEW_ITEM_VALUE_CHANGED;
		static int DATAVIEW_SELECTION_CHANGED;
		static int PAINT;
		static int ERASE_BACKGROUND;
		static int SET_FOCUS;
		static int KILL_FOCUS;
		static int CONTEXT_MENU;
		static int DROP_FILES;
		static int LEFT_DOWN;
		static int LEFT_UP;
		static int LEFT_DCLICK;
		static int MIDDLE_DOWN;
		static int MIDDLE_UP;
		static int MIDDLE_DCLICK;
		static int RIGHT_DOWN;
		static int RIGHT_UP;
		static int RIGHT_DCLICK;
		static int MOTION;
		static int ENTER_WINDOW;
		static int LEAVE_WINDOW;
		static int MOUSEWHEEL;
		static int MOUSE_CAPTURE_LOST;
		static int THREAD;
		static int END_PROCESS;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_EventType */ 
