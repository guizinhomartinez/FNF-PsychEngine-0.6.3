#ifndef INCLUDED_wx_widgets_styles_LexicalStates
#define INCLUDED_wx_widgets_styles_LexicalStates

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,LexicalStates)


#include <wx/stc/stc.h>
#undef RegisterClass

namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES LexicalStates_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LexicalStates_obj OBJ_;
		LexicalStates_obj();

	public:
		enum { _hx_ClassId = 0x2d1d7b3a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.LexicalStates")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.LexicalStates"); }

		inline static ::hx::ObjectPtr< LexicalStates_obj > __new() {
			::hx::ObjectPtr< LexicalStates_obj > __this = new LexicalStates_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LexicalStates_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LexicalStates_obj *__this = (LexicalStates_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LexicalStates_obj), false, "wx.widgets.styles.LexicalStates"));
			*(void **)__this = LexicalStates_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LexicalStates_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LexicalStates",e6,32,90,f1); }

};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_LexicalStates */ 
