#ifndef INCLUDED_haxe_ui_backend_hxwidgets_EventTypeParser
#define INCLUDED_haxe_ui_backend_hxwidgets_EventTypeParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,EventTypeParser)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES EventTypeParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EventTypeParser_obj OBJ_;
		EventTypeParser_obj();

	public:
		enum { _hx_ClassId = 0x72511fee };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.EventTypeParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.EventTypeParser"); }

		inline static ::hx::ObjectPtr< EventTypeParser_obj > __new() {
			::hx::ObjectPtr< EventTypeParser_obj > __this = new EventTypeParser_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EventTypeParser_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EventTypeParser_obj *__this = (EventTypeParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventTypeParser_obj), false, "haxe.ui.backend.hxwidgets.EventTypeParser"));
			*(void **)__this = EventTypeParser_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventTypeParser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventTypeParser",d3,83,62,6a); }

		static int fromString(::String event);
		static ::Dynamic fromString_dyn();

		static ::String toString(int eventType);
		static ::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_EventTypeParser */ 
