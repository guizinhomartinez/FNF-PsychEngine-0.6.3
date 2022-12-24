#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TreeViewIcons
#define INCLUDED_haxe_ui_backend_hxwidgets_TreeViewIcons

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,IconMap)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,TreeViewIcons)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,TreeView)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES TreeViewIcons_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TreeViewIcons_obj OBJ_;
		TreeViewIcons_obj();

	public:
		enum { _hx_ClassId = 0x3fa05c32 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.TreeViewIcons")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.TreeViewIcons"); }

		inline static ::hx::ObjectPtr< TreeViewIcons_obj > __new() {
			::hx::ObjectPtr< TreeViewIcons_obj > __this = new TreeViewIcons_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TreeViewIcons_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TreeViewIcons_obj *__this = (TreeViewIcons_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewIcons_obj), false, "haxe.ui.backend.hxwidgets.TreeViewIcons"));
			*(void **)__this = TreeViewIcons_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeViewIcons_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeViewIcons",d7,8c,c8,78); }

		static void __boot();
		static  ::haxe::ui::backend::hxwidgets::IconMap _map;
		static int get( ::haxe::ui::containers::TreeView treeView,::String icon);
		static ::Dynamic get_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_TreeViewIcons */ 
