#ifndef INCLUDED_wx_widgets_ExecFlags
#define INCLUDED_wx_widgets_ExecFlags

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,ExecFlags)


#include <wx/utils.h>
#undef RegisterClass

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ExecFlags_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ExecFlags_obj OBJ_;
		ExecFlags_obj();

	public:
		enum { _hx_ClassId = 0x67e8b768 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.ExecFlags")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.ExecFlags"); }

		inline static ::hx::ObjectPtr< ExecFlags_obj > __new() {
			::hx::ObjectPtr< ExecFlags_obj > __this = new ExecFlags_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ExecFlags_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ExecFlags_obj *__this = (ExecFlags_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExecFlags_obj), false, "wx.widgets.ExecFlags"));
			*(void **)__this = ExecFlags_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ExecFlags_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ExecFlags",d6,f9,bc,3d); }

		static void __boot();
		static int ASYNC;
		static int SYNC;
		static int SHOW_CONSOLE;
		static int MAKE_GROUP_LEADER;
		static int NODISABLE;
		static int NOEVENTS;
		static int HIDE_CONSOLE;
		static int BLOCK;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_ExecFlags */ 
