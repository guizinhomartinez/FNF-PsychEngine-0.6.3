#ifndef INCLUDED_wx_widgets_ProcessFlag
#define INCLUDED_wx_widgets_ProcessFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,ProcessFlag)

#include <wx/process.h>
namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ProcessFlag_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ProcessFlag_obj OBJ_;
		ProcessFlag_obj();

	public:
		enum { _hx_ClassId = 0x1f4b9bad };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.ProcessFlag")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.ProcessFlag"); }

		inline static ::hx::ObjectPtr< ProcessFlag_obj > __new() {
			::hx::ObjectPtr< ProcessFlag_obj > __this = new ProcessFlag_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ProcessFlag_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ProcessFlag_obj *__this = (ProcessFlag_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProcessFlag_obj), false, "wx.widgets.ProcessFlag"));
			*(void **)__this = ProcessFlag_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProcessFlag_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProcessFlag",9b,d5,87,44); }

		static void __boot();
		static int PROCESS_DEFAULT;
		static int PROCESS_REDIRECT;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_ProcessFlag */ 
