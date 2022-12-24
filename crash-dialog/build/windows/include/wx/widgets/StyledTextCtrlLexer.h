#ifndef INCLUDED_wx_widgets_StyledTextCtrlLexer
#define INCLUDED_wx_widgets_StyledTextCtrlLexer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,StyledTextCtrlLexer)


#include <wx/stc/stc.h>
#undef RegisterClass

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StyledTextCtrlLexer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StyledTextCtrlLexer_obj OBJ_;
		StyledTextCtrlLexer_obj();

	public:
		enum { _hx_ClassId = 0x516944d3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.StyledTextCtrlLexer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.StyledTextCtrlLexer"); }

		inline static ::hx::ObjectPtr< StyledTextCtrlLexer_obj > __new() {
			::hx::ObjectPtr< StyledTextCtrlLexer_obj > __this = new StyledTextCtrlLexer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< StyledTextCtrlLexer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			StyledTextCtrlLexer_obj *__this = (StyledTextCtrlLexer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyledTextCtrlLexer_obj), false, "wx.widgets.StyledTextCtrlLexer"));
			*(void **)__this = StyledTextCtrlLexer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyledTextCtrlLexer_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyledTextCtrlLexer",c1,1c,76,ef); }

};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_StyledTextCtrlLexer */ 
