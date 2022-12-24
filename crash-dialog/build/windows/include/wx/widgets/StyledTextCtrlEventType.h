#ifndef INCLUDED_wx_widgets_StyledTextCtrlEventType
#define INCLUDED_wx_widgets_StyledTextCtrlEventType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,StyledTextCtrlEventType)

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StyledTextCtrlEventType_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StyledTextCtrlEventType_obj OBJ_;
		StyledTextCtrlEventType_obj();

	public:
		enum { _hx_ClassId = 0x6075163b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.StyledTextCtrlEventType")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.StyledTextCtrlEventType"); }

		inline static ::hx::ObjectPtr< StyledTextCtrlEventType_obj > __new() {
			::hx::ObjectPtr< StyledTextCtrlEventType_obj > __this = new StyledTextCtrlEventType_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StyledTextCtrlEventType_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StyledTextCtrlEventType_obj *__this = (StyledTextCtrlEventType_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyledTextCtrlEventType_obj), false, "wx.widgets.StyledTextCtrlEventType"));
			*(void **)__this = StyledTextCtrlEventType_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyledTextCtrlEventType_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyledTextCtrlEventType",29,7d,97,24); }

};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_StyledTextCtrlEventType */ 
