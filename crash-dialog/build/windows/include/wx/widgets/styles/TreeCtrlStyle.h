#ifndef INCLUDED_wx_widgets_styles_TreeCtrlStyle
#define INCLUDED_wx_widgets_styles_TreeCtrlStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,TreeCtrlStyle)

#include <wx/treectrl.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES TreeCtrlStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TreeCtrlStyle_obj OBJ_;
		TreeCtrlStyle_obj();

	public:
		enum { _hx_ClassId = 0x0586037c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.TreeCtrlStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.TreeCtrlStyle"); }

		inline static ::hx::ObjectPtr< TreeCtrlStyle_obj > __new() {
			::hx::ObjectPtr< TreeCtrlStyle_obj > __this = new TreeCtrlStyle_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TreeCtrlStyle_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TreeCtrlStyle_obj *__this = (TreeCtrlStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeCtrlStyle_obj), false, "wx.widgets.styles.TreeCtrlStyle"));
			*(void **)__this = TreeCtrlStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeCtrlStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeCtrlStyle",28,bb,f8,c9); }

		static void __boot();
		static int EDIT_LABELS;
		static int NO_BUTTONS;
		static int HAS_BUTTONS;
		static int TWIST_BUTTONS;
		static int NO_LINES;
		static int FULL_ROW_HIGHLIGHT;
		static int LINES_AT_ROOT;
		static int HIDE_ROOT;
		static int ROW_LINES;
		static int HAS_VARIABLE_ROW_HEIGHT;
		static int SINGLE;
		static int MULTIPLE;
		static int DEFAULT_STYLE;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_TreeCtrlStyle */ 
